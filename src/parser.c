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
#define STATE_COUNT 422
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 241
#define ALIAS_COUNT 3
#define TOKEN_COUNT 124
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
    anon_sym_SEMI = 1,
    anon_sym_exception = 2,
    anon_sym_LBRACE = 3,
    anon_sym_RBRACE = 4,
    anon_sym_native = 5,
    anon_sym_module = 6,
    anon_sym_struct = 7,
    anon_sym_COLON = 8,
    anon_sym_PIPE = 9,
    anon_sym_CARET = 10,
    anon_sym_DOLLAR = 11,
    anon_sym_GT_GT = 12,
    anon_sym_LT_LT = 13,
    anon_sym_PLUS = 14,
    anon_sym_DASH = 15,
    anon_sym_STAR = 16,
    anon_sym_SLASH = 17,
    anon_sym_PERCENT = 18,
    anon_sym_TILDE = 19,
    anon_sym_LPAREN = 20,
    anon_sym_RPAREN = 21,
    anon_sym_SQUOTE = 22,
    aux_sym_char_literal_token1 = 23,
    anon_sym_L = 24,
    anon_sym_default = 25,
    anon_sym_enum = 26,
    anon_sym_COMMA = 27,
    anon_sym_ATdefault_literal = 28,
    anon_sym_ATignore_literal_names = 29,
    anon_sym_ATannotation = 30,
    anon_sym_union = 31,
    anon_sym_switch = 32,
    anon_sym_case = 33,
    anon_sym_bitset = 34,
    anon_sym_bitfield = 35,
    anon_sym_LT = 36,
    anon_sym_GT = 37,
    anon_sym_bitmask = 38,
    anon_sym_typedef = 39,
    anon_sym_POUNDdefine = 40,
    aux_sym_predefine_token1 = 41,
    anon_sym_interface = 42,
    anon_sym_local = 43,
    anon_sym_void = 44,
    anon_sym_in = 45,
    anon_sym_out = 46,
    anon_sym_inout = 47,
    anon_sym_raises = 48,
    anon_sym_readonly = 49,
    anon_sym_attribute = 50,
    anon_sym_getraises = 51,
    anon_sym_setraises = 52,
    sym_dds_service = 53,
    anon_sym_ATDDSRequestTopic = 54,
    anon_sym_name = 55,
    anon_sym_EQ = 56,
    anon_sym_ATDDSReplyTopic = 57,
    anon_sym_const = 58,
    sym_number_literal = 59,
    sym_optional = 60,
    sym_key = 61,
    sym_must_understand = 62,
    sym_non_serialized = 63,
    sym_id = 64,
    sym_external = 65,
    anon_sym_AThashid = 66,
    anon_sym_LPAREN_DQUOTE = 67,
    anon_sym_DQUOTE = 68,
    anon_sym_ATtry_construct = 69,
    anon_sym_ATbit_bound = 70,
    aux_sym_bit_bound_token1 = 71,
    sym_extensibility = 72,
    sym_mutable = 73,
    sym_appendable = 74,
    sym_final = 75,
    sym_nested = 76,
    sym_value = 77,
    anon_sym_ATposition = 78,
    sym_autoid = 79,
    sym_verbatim = 80,
    anon_sym_ATdata_representation = 81,
    anon_sym_XCDR = 82,
    anon_sym_XCDR2 = 83,
    sym_boolean_type = 84,
    sym_octet_type = 85,
    anon_sym_float = 86,
    anon_sym_double = 87,
    anon_sym_short = 88,
    anon_sym_long = 89,
    anon_sym_longdouble = 90,
    anon_sym_unsignedshort = 91,
    anon_sym_longlong = 92,
    anon_sym_unsignedlong = 93,
    anon_sym_unsignedlonglong = 94,
    anon_sym_int = 95,
    anon_sym_int8 = 96,
    anon_sym_int16 = 97,
    anon_sym_int32 = 98,
    anon_sym_int64 = 99,
    anon_sym_uint8 = 100,
    anon_sym_uint16 = 101,
    anon_sym_uint32 = 102,
    anon_sym_uint64 = 103,
    anon_sym_float32 = 104,
    anon_sym_float64 = 105,
    anon_sym_float128 = 106,
    anon_sym_char = 107,
    anon_sym_wchar = 108,
    anon_sym_byte = 109,
    anon_sym_char8 = 110,
    anon_sym_char16 = 111,
    anon_sym_COLON_COLON = 112,
    sym_identifier = 113,
    anon_sym_LBRACK = 114,
    anon_sym_RBRACK = 115,
    anon_sym_sequence = 116,
    anon_sym_string = 117,
    anon_sym_wstring = 118,
    anon_sym_fixed = 119,
    anon_sym_map = 120,
    anon_sym_SLASH_SLASH = 121,
    aux_sym_comment_token1 = 122,
    sym__eof = 123,
    sym_specification = 124,
    sym__definition = 125,
    sym_except_dcl = 126,
    sym_native_dcl = 127,
    sym_module_dcl = 128,
    sym_struct_forward_dcl = 129,
    sym_struct_def = 130,
    sym_member = 131,
    sym_or_expr = 132,
    sym_xor_expr = 133,
    sym_and_expr = 134,
    sym_shift_expr = 135,
    sym_add_expr = 136,
    sym_mult_expr = 137,
    sym_unary_expr = 138,
    sym_unary_operator = 139,
    sym_char_literal = 140,
    sym_wchar_literal = 141,
    sym_literal = 142,
    sym_default = 143,
    sym_enum_dcl = 144,
    sym_enumerator = 145,
    sym_enum_modifier = 146,
    sym_enum_anno = 147,
    sym_annotation = 148,
    sym_annotation_field = 149,
    sym_union_forward_dcl = 150,
    sym_union_def = 151,
    sym_case = 152,
    sym_case_label = 153,
    sym_element_spec = 154,
    sym_switch_type_spec = 155,
    sym_bitset_dcl = 156,
    sym_bitfield = 157,
    sym_bitfield_spec = 158,
    sym_destination_type = 159,
    sym_bitmask_dcl = 160,
    sym_bitmask_field = 161,
    sym_typedef_dcl = 162,
    sym_predefine = 163,
    sym_interface_dcl = 164,
    sym_interface_forward_dcl = 165,
    sym_interface_def = 166,
    sym_interface_header = 167,
    sym_interface_inheritance_spec = 168,
    sym_interface_name = 169,
    sym_interface_body = 170,
    sym_export = 171,
    sym_op_dcl = 172,
    sym_op_type_spec = 173,
    sym_parameter_dcls = 174,
    sym_param_dcl = 175,
    sym_param_attribute = 176,
    sym_raises_expr = 177,
    sym_attr_dcl = 178,
    sym_readonly_attr_spec = 179,
    sym_readonly_attr_declarator = 180,
    sym_attr_spec = 181,
    sym_attr_declarator = 182,
    sym_attr_raises_expr = 183,
    sym_get_excep_expr = 184,
    sym_set_excep_expr = 185,
    sym_exception_list = 186,
    sym_dds_request_topic = 187,
    sym_dds_reply_topic = 188,
    sym_interface_anno = 189,
    sym_const_dcl = 190,
    sym_const_type = 191,
    sym_const_expr = 192,
    sym_hashid = 193,
    sym_try_construct = 194,
    sym_bit_bound = 195,
    sym_position = 196,
    sym_data_representation = 197,
    sym_struct_modifier = 198,
    sym_integer_type = 199,
    sym_primitive_type = 200,
    sym_scoped_name = 201,
    sym_simple_type_spec = 202,
    sym_type_spec = 203,
    sym_simple_declarator = 204,
    sym_declarator = 205,
    sym_declarators = 206,
    sym_array_declarator = 207,
    sym_positive_int_const = 208,
    sym_fixed_array_size = 209,
    sym_sequence_type = 210,
    sym_string_type = 211,
    sym_fixed_pt_type = 212,
    sym_template_type_spec = 213,
    sym_map_type = 214,
    sym_type_declarator = 215,
    sym_any_declarators = 216,
    sym_any_declarator = 217,
    sym_comment = 218,
    aux_sym_specification_repeat1 = 219,
    aux_sym_except_dcl_repeat1 = 220,
    aux_sym_struct_def_repeat1 = 221,
    aux_sym_member_repeat1 = 222,
    aux_sym_enum_dcl_repeat1 = 223,
    aux_sym_enumerator_repeat1 = 224,
    aux_sym_annotation_repeat1 = 225,
    aux_sym_union_def_repeat1 = 226,
    aux_sym_bitset_dcl_repeat1 = 227,
    aux_sym_bitfield_repeat1 = 228,
    aux_sym_bitmask_dcl_repeat1 = 229,
    aux_sym_interface_def_repeat1 = 230,
    aux_sym_interface_inheritance_spec_repeat1 = 231,
    aux_sym_interface_body_repeat1 = 232,
    aux_sym_parameter_dcls_repeat1 = 233,
    aux_sym_raises_expr_repeat1 = 234,
    aux_sym_readonly_attr_declarator_repeat1 = 235,
    aux_sym_attr_raises_expr_repeat1 = 236,
    aux_sym_data_representation_repeat1 = 237,
    aux_sym_declarators_repeat1 = 238,
    aux_sym_array_declarator_repeat1 = 239,
    aux_sym_any_declarators_repeat1 = 240,
    alias_sym_data_rep = 241,
    alias_sym_hashid_value = 242,
    alias_sym_try_construct_value = 243,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_SEMI] = ";",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_COLON] = ":",
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
    [anon_sym_TILDE] = "~",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_L] = "L",
    [anon_sym_default] = "default",
    [anon_sym_enum] = "enum",
    [anon_sym_COMMA] = ",",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_ATannotation] = "@annotation",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_EQ] = "=",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [anon_sym_const] = "const",
    [sym_number_literal] = "number_literal",
    [sym_optional] = "optional",
    [sym_key] = "key",
    [sym_must_understand] = "must_understand",
    [sym_non_serialized] = "non_serialized",
    [sym_id] = "id",
    [sym_external] = "external",
    [anon_sym_AThashid] = "@hashid",
    [anon_sym_LPAREN_DQUOTE] = "(\"",
    [anon_sym_DQUOTE] = "\"",
    [anon_sym_ATtry_construct] = "@try_construct",
    [anon_sym_ATbit_bound] = "@bit_bound",
    [aux_sym_bit_bound_token1] = "bistmask_bound",
    [sym_extensibility] = "extensibility",
    [sym_mutable] = "mutable",
    [sym_appendable] = "appendable",
    [sym_final] = "final",
    [sym_nested] = "nested",
    [sym_value] = "value",
    [anon_sym_ATposition] = "@position",
    [sym_autoid] = "autoid",
    [sym_verbatim] = "verbatim",
    [anon_sym_ATdata_representation] = "@data_representation",
    [anon_sym_XCDR] = "XCDR",
    [anon_sym_XCDR2] = "XCDR2",
    [sym_boolean_type] = "boolean_type",
    [sym_octet_type] = "octet_type",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_short] = "short",
    [anon_sym_long] = "long",
    [anon_sym_longdouble] = "long double",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_longlong] = "long long",
    [anon_sym_unsignedlong] = "unsigned long",
    [anon_sym_unsignedlonglong] = "unsigned long long",
    [anon_sym_int] = "int",
    [anon_sym_int8] = "int8",
    [anon_sym_int16] = "int16",
    [anon_sym_int32] = "int32",
    [anon_sym_int64] = "int64",
    [anon_sym_uint8] = "uint8",
    [anon_sym_uint16] = "uint16",
    [anon_sym_uint32] = "uint32",
    [anon_sym_uint64] = "uint64",
    [anon_sym_float32] = "float32",
    [anon_sym_float64] = "float64",
    [anon_sym_float128] = "float128",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_byte] = "byte",
    [anon_sym_char8] = "char8",
    [anon_sym_char16] = "char16",
    [anon_sym_COLON_COLON] = "::",
    [sym_identifier] = "identifier",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_sequence] = "sequence",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_fixed] = "fixed",
    [anon_sym_map] = "map",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
    [sym_specification] = "specification",
    [sym__definition] = "_definition",
    [sym_except_dcl] = "except_dcl",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_or_expr] = "or_expr",
    [sym_xor_expr] = "xor_expr",
    [sym_and_expr] = "and_expr",
    [sym_shift_expr] = "shift_expr",
    [sym_add_expr] = "add_expr",
    [sym_mult_expr] = "mult_expr",
    [sym_unary_expr] = "unary_expr",
    [sym_unary_operator] = "unary_operator",
    [sym_char_literal] = "char_literal",
    [sym_wchar_literal] = "wchar_literal",
    [sym_literal] = "literal",
    [sym_default] = "default",
    [sym_enum_dcl] = "enum_dcl",
    [sym_enumerator] = "enumerator",
    [sym_enum_modifier] = "enum_modifier",
    [sym_enum_anno] = "enum_anno",
    [sym_annotation] = "annotation",
    [sym_annotation_field] = "annotation_field",
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_bitset_dcl] = "bitset_dcl",
    [sym_bitfield] = "bitfield",
    [sym_bitfield_spec] = "bitfield_spec",
    [sym_destination_type] = "destination_type",
    [sym_bitmask_dcl] = "bitmask_dcl",
    [sym_bitmask_field] = "bitmask_field",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
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
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_interface_anno] = "interface_anno",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_const_expr] = "const_expr",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_bit_bound] = "bit_bound",
    [sym_position] = "position",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_integer_type] = "integer_type",
    [sym_primitive_type] = "primitive_type",
    [sym_scoped_name] = "scoped_name",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_type_spec] = "type_spec",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_positive_int_const] = "positive_int_const",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_sequence_type] = "sequence_type",
    [sym_string_type] = "string_type",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_map_type] = "map_type",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_comment] = "comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
    [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_annotation_repeat1] = "annotation_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_attr_raises_expr_repeat1] = "attr_raises_expr_repeat1",
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
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_COLON] = anon_sym_COLON,
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
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [anon_sym_const] = anon_sym_const,
    [sym_number_literal] = sym_number_literal,
    [sym_optional] = sym_optional,
    [sym_key] = sym_key,
    [sym_must_understand] = sym_must_understand,
    [sym_non_serialized] = sym_non_serialized,
    [sym_id] = sym_id,
    [sym_external] = sym_external,
    [anon_sym_AThashid] = anon_sym_AThashid,
    [anon_sym_LPAREN_DQUOTE] = anon_sym_LPAREN_DQUOTE,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [anon_sym_ATtry_construct] = anon_sym_ATtry_construct,
    [anon_sym_ATbit_bound] = anon_sym_ATbit_bound,
    [aux_sym_bit_bound_token1] = aux_sym_bit_bound_token1,
    [sym_extensibility] = sym_extensibility,
    [sym_mutable] = sym_mutable,
    [sym_appendable] = sym_appendable,
    [sym_final] = sym_final,
    [sym_nested] = sym_nested,
    [sym_value] = sym_value,
    [anon_sym_ATposition] = anon_sym_ATposition,
    [sym_autoid] = sym_autoid,
    [sym_verbatim] = sym_verbatim,
    [anon_sym_ATdata_representation] = anon_sym_ATdata_representation,
    [anon_sym_XCDR] = anon_sym_XCDR,
    [anon_sym_XCDR2] = anon_sym_XCDR2,
    [sym_boolean_type] = sym_boolean_type,
    [sym_octet_type] = sym_octet_type,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_unsignedlong] = anon_sym_unsignedlong,
    [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
    [anon_sym_int] = anon_sym_int,
    [anon_sym_int8] = anon_sym_int8,
    [anon_sym_int16] = anon_sym_int16,
    [anon_sym_int32] = anon_sym_int32,
    [anon_sym_int64] = anon_sym_int64,
    [anon_sym_uint8] = anon_sym_uint8,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_uint64] = anon_sym_uint64,
    [anon_sym_float32] = anon_sym_float32,
    [anon_sym_float64] = anon_sym_float64,
    [anon_sym_float128] = anon_sym_float128,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_byte] = anon_sym_byte,
    [anon_sym_char8] = anon_sym_char8,
    [anon_sym_char16] = anon_sym_char16,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [sym_identifier] = sym_identifier,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_fixed] = anon_sym_fixed,
    [anon_sym_map] = anon_sym_map,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
    [sym_specification] = sym_specification,
    [sym__definition] = sym__definition,
    [sym_except_dcl] = sym_except_dcl,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_or_expr] = sym_or_expr,
    [sym_xor_expr] = sym_xor_expr,
    [sym_and_expr] = sym_and_expr,
    [sym_shift_expr] = sym_shift_expr,
    [sym_add_expr] = sym_add_expr,
    [sym_mult_expr] = sym_mult_expr,
    [sym_unary_expr] = sym_unary_expr,
    [sym_unary_operator] = sym_unary_operator,
    [sym_char_literal] = sym_char_literal,
    [sym_wchar_literal] = sym_wchar_literal,
    [sym_literal] = sym_literal,
    [sym_default] = sym_default,
    [sym_enum_dcl] = sym_enum_dcl,
    [sym_enumerator] = sym_enumerator,
    [sym_enum_modifier] = sym_enum_modifier,
    [sym_enum_anno] = sym_enum_anno,
    [sym_annotation] = sym_annotation,
    [sym_annotation_field] = sym_annotation_field,
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_bitset_dcl] = sym_bitset_dcl,
    [sym_bitfield] = sym_bitfield,
    [sym_bitfield_spec] = sym_bitfield_spec,
    [sym_destination_type] = sym_destination_type,
    [sym_bitmask_dcl] = sym_bitmask_dcl,
    [sym_bitmask_field] = sym_bitmask_field,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
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
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_interface_anno] = sym_interface_anno,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_const_expr] = sym_const_expr,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_bit_bound] = sym_bit_bound,
    [sym_position] = sym_position,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_integer_type] = sym_integer_type,
    [sym_primitive_type] = sym_primitive_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_sequence_type] = sym_sequence_type,
    [sym_string_type] = sym_string_type,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_map_type] = sym_map_type,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_comment] = sym_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
    [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_attr_raises_expr_repeat1] = aux_sym_attr_raises_expr_repeat1,
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
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
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
    [anon_sym_COLON] = {
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
    [anon_sym_TILDE] = {
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
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_char_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_L] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
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
    [anon_sym_ATannotation] = {
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
    [anon_sym_bitset] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitfield] = {
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
    [anon_sym_bitmask] = {
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
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
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
    [anon_sym_EQ] = {
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
    [sym_number_literal] = {
        .visible = true,
        .named = true,
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
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATtry_construct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATbit_bound] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_bit_bound_token1] = {
        .visible = true,
        .named = true,
    },
    [sym_extensibility] = {
        .visible = true,
        .named = true,
    },
    [sym_mutable] = {
        .visible = true,
        .named = true,
    },
    [sym_appendable] = {
        .visible = true,
        .named = true,
    },
    [sym_final] = {
        .visible = true,
        .named = true,
    },
    [sym_nested] = {
        .visible = true,
        .named = true,
    },
    [sym_value] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATposition] = {
        .visible = true,
        .named = false,
    },
    [sym_autoid] = {
        .visible = true,
        .named = true,
    },
    [sym_verbatim] = {
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
    [sym_boolean_type] = {
        .visible = true,
        .named = true,
    },
    [sym_octet_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longdouble] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedshort] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlonglong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float128] = {
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
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON_COLON] = {
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
    [anon_sym_sequence] = {
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
    [anon_sym_fixed] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_map] = {
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
    [sym__definition] = {
        .visible = false,
        .named = true,
    },
    [sym_except_dcl] = {
        .visible = true,
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
    [sym_char_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_wchar_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
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
    [sym_annotation] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_field] = {
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
    [sym_bitmask_field] = {
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
    [sym_dds_request_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_dds_reply_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_anno] = {
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
    [sym_const_expr] = {
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
    [sym_bit_bound] = {
        .visible = true,
        .named = true,
    },
    [sym_position] = {
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
    [sym_integer_type] = {
        .visible = true,
        .named = true,
    },
    [sym_primitive_type] = {
        .visible = true,
        .named = true,
    },
    [sym_scoped_name] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_type_spec] = {
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
    [sym_sequence_type] = {
        .visible = true,
        .named = true,
    },
    [sym_string_type] = {
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
    [sym_map_type] = {
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
    [aux_sym_except_dcl_repeat1] = {
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
    [aux_sym_annotation_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_union_def_repeat1] = {
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
    [aux_sym_attr_raises_expr_repeat1] = {
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
    field_identifier = 1,
    field_parent = 2,
    field_type = 3,
    field_value = 4,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_identifier] = "identifier",
    [field_parent] = "parent",
    [field_type] = "type",
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [3] = { .index = 0, .length = 2 },
    [4] = { .index = 2, .length = 1 },
    [6] = { .index = 3, .length = 1 },
    [8] = { .index = 4, .length = 2 },
    [9] = { .index = 6, .length = 1 },
    [10] = { .index = 7, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_identifier, 1 },
    { field_type, 0 },
    [2] = { field_parent, 3 },
    [3] = { field_value, 1 },
    [4] = { field_identifier, 2 },
    { field_type, 1 },
    [6] = { field_value, 2 },
    [7] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [2] = alias_sym_data_rep,
    },
    [2] = {
        [1] = alias_sym_try_construct_value,
    },
    [5] = {
        [2] = sym_position,
    },
    [7] = {
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
    [124] = 70,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 68,
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
    [312] = 168,
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
    [345] = 322,
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
                ADVANCE(512);
            if(lookahead == '"')
                ADVANCE(626);
            if(lookahead == '#')
                ADVANCE(144);
            if(lookahead == '$')
                ADVANCE(524);
            if(lookahead == '%')
                ADVANCE(533);
            if(lookahead == '\'')
                ADVANCE(538);
            if(lookahead == '(')
                ADVANCE(536);
            if(lookahead == ')')
                ADVANCE(537);
            if(lookahead == '*')
                ADVANCE(531);
            if(lookahead == '+')
                ADVANCE(527);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(529);
            if(lookahead == '/')
                ADVANCE(532);
            if(lookahead == ':')
                ADVANCE(521);
            if(lookahead == ';')
                ADVANCE(513);
            if(lookahead == '<')
                ADVANCE(558);
            if(lookahead == '=')
                ADVANCE(585);
            if(lookahead == '>')
                ADVANCE(560);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'L')
                ADVANCE(540);
            if(lookahead == 'X')
                ADVANCE(56);
            if(lookahead == '[')
                ADVANCE(821);
            if(lookahead == '\\')
                SKIP(508)
            if(lookahead == ']')
                ADVANCE(822);
            if(lookahead == '^')
                ADVANCE(523);
            if(lookahead == 'a')
                ADVANCE(439);
            if(lookahead == 'b')
                ADVANCE(231);
            if(lookahead == 'c')
                ADVANCE(74);
            if(lookahead == 'd')
                ADVANCE(153);
            if(lookahead == 'e')
                ADVANCE(306);
            if(lookahead == 'f')
                ADVANCE(228);
            if(lookahead == 'g')
                ADVANCE(197);
            if(lookahead == 'i')
                ADVANCE(297);
            if(lookahead == 'l')
                ADVANCE(336);
            if(lookahead == 'm')
                ADVANCE(77);
            if(lookahead == 'n')
                ADVANCE(75);
            if(lookahead == 'o')
                ADVANCE(122);
            if(lookahead == 'r')
                ADVANCE(80);
            if(lookahead == 's')
                ADVANCE(154);
            if(lookahead == 't')
                ADVANCE(497);
            if(lookahead == 'u')
                ADVANCE(232);
            if(lookahead == 'v')
                ADVANCE(342);
            if(lookahead == 'w')
                ADVANCE(117);
            if(lookahead == '{')
                ADVANCE(515);
            if(lookahead == '|')
                ADVANCE(522);
            if(lookahead == '}')
                ADVANCE(516);
            if(lookahead == '~')
                ADVANCE(534);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(629);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(31)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(31)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(35)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(35)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(36)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(36)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(29)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(29)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(30)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(30)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(28)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(28)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(32)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(32)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(39)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                ADVANCE(837);
            if(lookahead == '\r')
                ADVANCE(836);
            if(lookahead == '\\')
                ADVANCE(840);
            if(lookahead != 0)
                ADVANCE(839);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(22)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(38)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(38)
            if(lookahead == '\r')
                SKIP(24)
            END_STATE();
        case 26:
            if(lookahead == ' ')
                ADVANCE(289);
            END_STATE();
        case 27:
            if(lookahead == '"')
                ADVANCE(625);
            END_STATE();
        case 28:
            if(lookahead == '$')
                ADVANCE(524);
            if(lookahead == '%')
                ADVANCE(533);
            if(lookahead == ')')
                ADVANCE(537);
            if(lookahead == '*')
                ADVANCE(531);
            if(lookahead == '+')
                ADVANCE(527);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(529);
            if(lookahead == '/')
                ADVANCE(532);
            if(lookahead == ':')
                ADVANCE(521);
            if(lookahead == ';')
                ADVANCE(513);
            if(lookahead == '<')
                ADVANCE(55);
            if(lookahead == '>')
                ADVANCE(560);
            if(lookahead == '@')
                ADVANCE(148);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(822);
            if(lookahead == '^')
                ADVANCE(523);
            if(lookahead == '{')
                ADVANCE(515);
            if(lookahead == '|')
                ADVANCE(522);
            if(lookahead == '}')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(28)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 29:
            if(lookahead == '$')
                ADVANCE(524);
            if(lookahead == ')')
                ADVANCE(537);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(521);
            if(lookahead == ';')
                ADVANCE(513);
            if(lookahead == '>')
                ADVANCE(559);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == ']')
                ADVANCE(822);
            if(lookahead == '^')
                ADVANCE(523);
            if(lookahead == 'b')
                ADVANCE(341);
            if(lookahead == 'd')
                ADVANCE(339);
            if(lookahead == 'f')
                ADVANCE(273);
            if(lookahead == 'i')
                ADVANCE(328);
            if(lookahead == 'l')
                ADVANCE(361);
            if(lookahead == 'o')
                ADVANCE(121);
            if(lookahead == 's')
                ADVANCE(222);
            if(lookahead == 'u')
                ADVANCE(233);
            if(lookahead == '|')
                ADVANCE(522);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(29)
            END_STATE();
        case 30:
            if(lookahead == '\'')
                ADVANCE(538);
            if(lookahead == '(')
                ADVANCE(535);
            if(lookahead == '+')
                ADVANCE(528);
            if(lookahead == '-')
                ADVANCE(530);
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == '0')
                ADVANCE(595);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == 'L')
                ADVANCE(541);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == '~')
                ADVANCE(534);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(30)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(599);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 31:
            if(lookahead == '(')
                ADVANCE(27);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '<')
                ADVANCE(557);
            if(lookahead == '>')
                ADVANCE(559);
            if(lookahead == '@')
                ADVANCE(205);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(822);
            if(lookahead == 'b')
                ADVANCE(781);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(778);
            if(lookahead == 'f')
                ADVANCE(750);
            if(lookahead == 'i')
                ADVANCE(771);
            if(lookahead == 'l')
                ADVANCE(780);
            if(lookahead == 'm')
                ADVANCE(708);
            if(lookahead == 'o')
                ADVANCE(720);
            if(lookahead == 's')
                ADVANCE(727);
            if(lookahead == 'u')
                ADVANCE(757);
            if(lookahead == 'w')
                ADVANCE(721);
            if(lookahead == '}')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 32:
            if(lookahead == ')')
                ADVANCE(537);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '<')
                ADVANCE(557);
            if(lookahead == '>')
                ADVANCE(559);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == '{')
                ADVANCE(515);
            if(lookahead == '}')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(32)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '0')
                ADVANCE(592);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(594);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            END_STATE();
        case 34:
            if(lookahead == '/')
                ADVANCE(833);
            END_STATE();
        case 35:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '@')
                ADVANCE(151);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(781);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(778);
            if(lookahead == 'e')
                ADVANCE(773);
            if(lookahead == 'f')
                ADVANCE(750);
            if(lookahead == 'i')
                ADVANCE(771);
            if(lookahead == 'l')
                ADVANCE(780);
            if(lookahead == 'm')
                ADVANCE(708);
            if(lookahead == 'o')
                ADVANCE(720);
            if(lookahead == 's')
                ADVANCE(728);
            if(lookahead == 'u')
                ADVANCE(758);
            if(lookahead == 'w')
                ADVANCE(721);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(35)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 36:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(809);
            if(lookahead == 'b')
                ADVANCE(781);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(778);
            if(lookahead == 'f')
                ADVANCE(750);
            if(lookahead == 'i')
                ADVANCE(771);
            if(lookahead == 'l')
                ADVANCE(780);
            if(lookahead == 'm')
                ADVANCE(708);
            if(lookahead == 'o')
                ADVANCE(720);
            if(lookahead == 'r')
                ADVANCE(739);
            if(lookahead == 's')
                ADVANCE(727);
            if(lookahead == 'u')
                ADVANCE(757);
            if(lookahead == 'v')
                ADVANCE(784);
            if(lookahead == 'w')
                ADVANCE(721);
            if(lookahead == '}')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(36)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'b')
                ADVANCE(781);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(778);
            if(lookahead == 'f')
                ADVANCE(762);
            if(lookahead == 'i')
                ADVANCE(771);
            if(lookahead == 'l')
                ADVANCE(780);
            if(lookahead == 'o')
                ADVANCE(720);
            if(lookahead == 's')
                ADVANCE(729);
            if(lookahead == 'u')
                ADVANCE(757);
            if(lookahead == 'w')
                ADVANCE(722);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 38:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(25)
            if(lookahead == 'b')
                ADVANCE(781);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(778);
            if(lookahead == 'f')
                ADVANCE(762);
            if(lookahead == 'i')
                ADVANCE(771);
            if(lookahead == 'l')
                ADVANCE(780);
            if(lookahead == 'o')
                ADVANCE(720);
            if(lookahead == 's')
                ADVANCE(748);
            if(lookahead == 'u')
                ADVANCE(757);
            if(lookahead == 'w')
                ADVANCE(722);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(38)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ';')
                ADVANCE(513);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'd')
                ADVANCE(735);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ';')
                ADVANCE(513);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 's')
                ADVANCE(816);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == '\\')
                SKIP(23)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(539);
            END_STATE();
        case 42:
            if(lookahead == '1')
                ADVANCE(51);
            if(lookahead == '3')
                ADVANCE(43);
            if(lookahead == '6')
                ADVANCE(47);
            if(lookahead == '8')
                ADVANCE(669);
            END_STATE();
        case 43:
            if(lookahead == '2')
                ADVANCE(673);
            END_STATE();
        case 44:
            if(lookahead == '2')
                ADVANCE(53);
            END_STATE();
        case 45:
            if(lookahead == '2')
                ADVANCE(677);
            END_STATE();
        case 46:
            if(lookahead == '2')
                ADVANCE(665);
            END_STATE();
        case 47:
            if(lookahead == '4')
                ADVANCE(675);
            END_STATE();
        case 48:
            if(lookahead == '4')
                ADVANCE(679);
            END_STATE();
        case 49:
            if(lookahead == '4')
                ADVANCE(667);
            END_STATE();
        case 50:
            if(lookahead == '6')
                ADVANCE(691);
            END_STATE();
        case 51:
            if(lookahead == '6')
                ADVANCE(671);
            END_STATE();
        case 52:
            if(lookahead == '6')
                ADVANCE(663);
            END_STATE();
        case 53:
            if(lookahead == '8')
                ADVANCE(681);
            END_STATE();
        case 54:
            if(lookahead == ':')
                ADVANCE(693);
            END_STATE();
        case 55:
            if(lookahead == '<')
                ADVANCE(526);
            END_STATE();
        case 56:
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 57:
            if(lookahead == 'D')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(309);
            if(lookahead == 'b')
                ADVANCE(245);
            if(lookahead == 'd')
                ADVANCE(89);
            if(lookahead == 'e')
                ADVANCE(491);
            if(lookahead == 'f')
                ADVANCE(236);
            if(lookahead == 'h')
                ADVANCE(78);
            if(lookahead == 'i')
                ADVANCE(133);
            if(lookahead == 'k')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(471);
            if(lookahead == 'n')
                ADVANCE(174);
            if(lookahead == 'o')
                ADVANCE(371);
            if(lookahead == 'p')
                ADVANCE(343);
            if(lookahead == 't')
                ADVANCE(383);
            if(lookahead == 'v')
                ADVANCE(76);
            END_STATE();
        case 58:
            if(lookahead == 'D')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(308);
            if(lookahead == 'b')
                ADVANCE(245);
            if(lookahead == 'd')
                ADVANCE(88);
            if(lookahead == 'f')
                ADVANCE(236);
            if(lookahead == 'i')
                ADVANCE(219);
            END_STATE();
        case 59:
            if(lookahead == 'D')
                ADVANCE(63);
            END_STATE();
        case 60:
            if(lookahead == 'D')
                ADVANCE(61);
            END_STATE();
        case 61:
            if(lookahead == 'R')
                ADVANCE(640);
            END_STATE();
        case 62:
            if(lookahead == 'R')
                ADVANCE(159);
            if(lookahead == 'S')
                ADVANCE(186);
            END_STATE();
        case 63:
            if(lookahead == 'S')
                ADVANCE(62);
            END_STATE();
        case 64:
            if(lookahead == 'T')
                ADVANCE(344);
            END_STATE();
        case 65:
            if(lookahead == 'T')
                ADVANCE(363);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(110);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(126);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(476);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(287);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(392);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(414);
            END_STATE();
        case 72:
            if(lookahead == '_')
                ADVANCE(325);
            END_STATE();
        case 73:
            if(lookahead == '_')
                ADVANCE(291);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(407);
            if(lookahead == 'h')
                ADVANCE(85);
            if(lookahead == 'o')
                ADVANCE(331);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(294);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(286);
            if(lookahead == 'e')
                ADVANCE(381);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(368);
            if(lookahead == 'o')
                ADVANCE(145);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(406);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(150);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(255);
            if(lookahead == 'e')
                ADVANCE(79);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(295);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(70);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(379);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(401);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(475);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(448);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(448);
            if(lookahead == 'e')
                ADVANCE(212);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(380);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(278);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(275);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(300);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(428);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(271);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(323);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(453);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(443);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(482);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(131);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(114);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(257);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(115);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(259);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(467);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(468);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(485);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(365);
            END_STATE();
        case 111:
            if(lookahead == 'b')
                ADVANCE(264);
            END_STATE();
        case 112:
            if(lookahead == 'b')
                ADVANCE(279);
            END_STATE();
        case 113:
            if(lookahead == 'b')
                ADVANCE(99);
            END_STATE();
        case 114:
            if(lookahead == 'b')
                ADVANCE(283);
            END_STATE();
        case 115:
            if(lookahead == 'b')
                ADVANCE(284);
            END_STATE();
        case 116:
            if(lookahead == 'b')
                ADVANCE(285);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(224);
            if(lookahead == 's')
                ADVANCE(449);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(586);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(583);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(221);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(459);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(459);
            if(lookahead == 'u')
                ADVANCE(424);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(196);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(81);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(81);
            if(lookahead == 'n')
                ADVANCE(213);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(362);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(433);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(435);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(166);
            END_STATE();
        case 130:
            if(lookahead == 'c')
                ADVANCE(168);
            END_STATE();
        case 131:
            if(lookahead == 'c')
                ADVANCE(171);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(622);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(622);
            if(lookahead == 'g')
                ADVANCE(332);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(570);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(829);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(637);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(624);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(634);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(556);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(26);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(628);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(621);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(620);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(173);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(484);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(367);
            if(lookahead == 'l')
                ADVANCE(353);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(190);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(206);
            if(lookahead == 'p')
                ADVANCE(343);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(175);
            END_STATE();
        case 150:
            if(lookahead == 'd')
                ADVANCE(352);
            END_STATE();
        case 151:
            if(lookahead == 'd')
                ADVANCE(88);
            if(lookahead == 'f')
                ADVANCE(236);
            if(lookahead == 'i')
                ADVANCE(219);
            END_STATE();
        case 152:
            if(lookahead == 'd')
                ADVANCE(105);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(208);
            if(lookahead == 'o')
                ADVANCE(472);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(377);
            if(lookahead == 'h')
                ADVANCE(347);
            if(lookahead == 't')
                ADVANCE(378);
            if(lookahead == 'w')
                ADVANCE(248);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(687);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(554);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(584);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(314);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(369);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(635);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(648);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(518);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(517);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(563);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(631);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(823);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(578);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(582);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(632);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(654);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(568);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(493);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(211);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(421);
            if(lookahead == 'o')
                ADVANCE(305);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(207);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(375);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(135);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(402);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(276);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(69);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(138);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(403);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(312);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(404);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(140);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(382);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(405);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(330);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(399);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(142);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(395);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(396);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(430);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(432);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(446);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(387);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(415);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(389);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(419);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(149);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(492);
            if(lookahead == 'h')
                ADVANCE(78);
            if(lookahead == 'i')
                ADVANCE(132);
            if(lookahead == 'k')
                ADVANCE(172);
            if(lookahead == 'm')
                ADVANCE(486);
            if(lookahead == 'n')
                ADVANCE(345);
            if(lookahead == 'o')
                ADVANCE(371);
            if(lookahead == 't')
                ADVANCE(383);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(212);
            END_STATE();
        case 207:
            if(lookahead == 'f')
                ADVANCE(562);
            END_STATE();
        case 208:
            if(lookahead == 'f')
                ADVANCE(87);
            END_STATE();
        case 209:
            if(lookahead == 'f')
                ADVANCE(251);
            if(lookahead == 'm')
                ADVANCE(86);
            if(lookahead == 's')
                ADVANCE(195);
            END_STATE();
        case 210:
            if(lookahead == 'f')
                ADVANCE(102);
            END_STATE();
        case 211:
            if(lookahead == 'f')
                ADVANCE(246);
            END_STATE();
        case 212:
            if(lookahead == 'f')
                ADVANCE(101);
            END_STATE();
        case 213:
            if(lookahead == 'g')
                ADVANCE(652);
            END_STATE();
        case 214:
            if(lookahead == 'g')
                ADVANCE(825);
            END_STATE();
        case 215:
            if(lookahead == 'g')
                ADVANCE(827);
            END_STATE();
        case 216:
            if(lookahead == 'g')
                ADVANCE(656);
            END_STATE();
        case 217:
            if(lookahead == 'g')
                ADVANCE(657);
            END_STATE();
        case 218:
            if(lookahead == 'g')
                ADVANCE(658);
            END_STATE();
        case 219:
            if(lookahead == 'g')
                ADVANCE(332);
            END_STATE();
        case 220:
            if(lookahead == 'g')
                ADVANCE(327);
            END_STATE();
        case 221:
            if(lookahead == 'h')
                ADVANCE(552);
            END_STATE();
        case 222:
            if(lookahead == 'h')
                ADVANCE(347);
            END_STATE();
        case 223:
            if(lookahead == 'h')
                ADVANCE(244);
            END_STATE();
        case 224:
            if(lookahead == 'h')
                ADVANCE(90);
            END_STATE();
        case 225:
            if(lookahead == 'h')
                ADVANCE(364);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(489);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(499);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(490);
            if(lookahead == 'l')
                ADVANCE(346);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(293);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(220);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(423);
            if(lookahead == 'o')
                ADVANCE(340);
            if(lookahead == 'y')
                ADVANCE(441);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(321);
            if(lookahead == 'n')
                ADVANCE(243);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(321);
            if(lookahead == 'n')
                ADVANCE(408);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(134);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(109);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(319);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(118);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(111);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(119);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(136);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(307);
            if(lookahead == 'u')
                ADVANCE(127);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(349);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(349);
            if(lookahead == 's')
                ADVANCE(230);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(137);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(425);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(326);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(366);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(440);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(310);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(93);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(179);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(451);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(445);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(437);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(411);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(130);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(417);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(354);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(418);
            END_STATE();
        case 260:
            if(lookahead == 'i')
                ADVANCE(456);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(356);
            END_STATE();
        case 262:
            if(lookahead == 'i')
                ADVANCE(357);
            END_STATE();
        case 263:
            if(lookahead == 'i')
                ADVANCE(360);
            END_STATE();
        case 264:
            if(lookahead == 'i')
                ADVANCE(288);
            END_STATE();
        case 265:
            if(lookahead == 'i')
                ADVANCE(466);
            END_STATE();
        case 266:
            if(lookahead == 'k')
                ADVANCE(561);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(569);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(633);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(623);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(618);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(547);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(494);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(346);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(495);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(72);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(139);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(189);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(227);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(161);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(162);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(434);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(470);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(165);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(169);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(170);
            END_STATE();
        case 286:
            if(lookahead == 'l')
                ADVANCE(478);
            END_STATE();
        case 287:
            if(lookahead == 'l')
                ADVANCE(260);
            END_STATE();
        case 288:
            if(lookahead == 'l')
                ADVANCE(253);
            END_STATE();
        case 289:
            if(lookahead == 'l')
                ADVANCE(358);
            if(lookahead == 's')
                ADVANCE(225);
            END_STATE();
        case 290:
            if(lookahead == 'l')
                ADVANCE(359);
            END_STATE();
        case 291:
            if(lookahead == 'l')
                ADVANCE(265);
            END_STATE();
        case 292:
            if(lookahead == 'm')
                ADVANCE(544);
            END_STATE();
        case 293:
            if(lookahead == 'm')
                ADVANCE(638);
            END_STATE();
        case 294:
            if(lookahead == 'm')
                ADVANCE(157);
            if(lookahead == 't')
                ADVANCE(226);
            END_STATE();
        case 295:
            if(lookahead == 'm')
                ADVANCE(187);
            END_STATE();
        case 296:
            if(lookahead == 'm')
                ADVANCE(86);
            if(lookahead == 's')
                ADVANCE(195);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(572);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(213);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(550);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(642);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(636);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(514);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(549);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(639);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(71);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(473);
            if(lookahead == 'x')
                ADVANCE(123);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(214);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(317);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(317);
            if(lookahead == 'p')
                ADVANCE(372);
            if(lookahead == 'u')
                ADVANCE(460);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(215);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(216);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(152);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(217);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(412);
            if(lookahead == 'r')
                ADVANCE(322);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(272);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(218);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(355);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(422);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(83);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(141);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(426);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(91);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(143);
            END_STATE();
        case 324:
            if(lookahead == 'n')
                ADVANCE(92);
            END_STATE();
        case 325:
            if(lookahead == 'n')
                ADVANCE(82);
            END_STATE();
        case 326:
            if(lookahead == 'n')
                ADVANCE(164);
            END_STATE();
        case 327:
            if(lookahead == 'n')
                ADVANCE(185);
            END_STATE();
        case 328:
            if(lookahead == 'n')
                ADVANCE(438);
            END_STATE();
        case 329:
            if(lookahead == 'n')
                ADVANCE(147);
            END_STATE();
        case 330:
            if(lookahead == 'n')
                ADVANCE(129);
            END_STATE();
        case 331:
            if(lookahead == 'n')
                ADVANCE(413);
            END_STATE();
        case 332:
            if(lookahead == 'n')
                ADVANCE(351);
            END_STATE();
        case 333:
            if(lookahead == 'n')
                ADVANCE(242);
            END_STATE();
        case 334:
            if(lookahead == 'n')
                ADVANCE(457);
            END_STATE();
        case 335:
            if(lookahead == 'n')
                ADVANCE(469);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(145);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(331);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(472);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(340);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(234);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(420);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(373);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(305);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(96);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(390);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(124);
            END_STATE();
        case 349:
            if(lookahead == 'o')
                ADVANCE(299);
            END_STATE();
        case 350:
            if(lookahead == 'o')
                ADVANCE(240);
            END_STATE();
        case 351:
            if(lookahead == 'o')
                ADVANCE(391);
            END_STATE();
        case 352:
            if(lookahead == 'o')
                ADVANCE(315);
            END_STATE();
        case 353:
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 354:
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 355:
            if(lookahead == 'o')
                ADVANCE(463);
            END_STATE();
        case 356:
            if(lookahead == 'o')
                ADVANCE(302);
            END_STATE();
        case 357:
            if(lookahead == 'o')
                ADVANCE(303);
            END_STATE();
        case 358:
            if(lookahead == 'o')
                ADVANCE(313);
            END_STATE();
        case 359:
            if(lookahead == 'o')
                ADVANCE(316);
            END_STATE();
        case 360:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 361:
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 362:
            if(lookahead == 'o')
                ADVANCE(318);
            END_STATE();
        case 363:
            if(lookahead == 'o')
                ADVANCE(374);
            END_STATE();
        case 364:
            if(lookahead == 'o')
                ADVANCE(393);
            END_STATE();
        case 365:
            if(lookahead == 'o')
                ADVANCE(479);
            END_STATE();
        case 366:
            if(lookahead == 'o')
                ADVANCE(324);
            END_STATE();
        case 367:
            if(lookahead == 'o')
                ADVANCE(487);
            END_STATE();
        case 368:
            if(lookahead == 'p')
                ADVANCE(831);
            END_STATE();
        case 369:
            if(lookahead == 'p')
                ADVANCE(274);
            if(lookahead == 'q')
                ADVANCE(480);
            END_STATE();
        case 370:
            if(lookahead == 'p')
                ADVANCE(204);
            END_STATE();
        case 371:
            if(lookahead == 'p')
                ADVANCE(447);
            END_STATE();
        case 372:
            if(lookahead == 'p')
                ADVANCE(183);
            END_STATE();
        case 373:
            if(lookahead == 'p')
                ADVANCE(237);
            END_STATE();
        case 374:
            if(lookahead == 'p')
                ADVANCE(239);
            END_STATE();
        case 375:
            if(lookahead == 'p')
                ADVANCE(394);
            END_STATE();
        case 376:
            if(lookahead == 'p')
                ADVANCE(465);
            END_STATE();
        case 377:
            if(lookahead == 'q')
                ADVANCE(483);
            if(lookahead == 't')
                ADVANCE(400);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(241);
            END_STATE();
        case 379:
            if(lookahead == 'r')
                ADVANCE(683);
            END_STATE();
        case 380:
            if(lookahead == 'r')
                ADVANCE(685);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(113);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(488);
            END_STATE();
        case 383:
            if(lookahead == 'r')
                ADVANCE(498);
            END_STATE();
        case 384:
            if(lookahead == 'r')
                ADVANCE(235);
            END_STATE();
        case 385:
            if(lookahead == 'r')
                ADVANCE(481);
            END_STATE();
        case 386:
            if(lookahead == 'r')
                ADVANCE(104);
            END_STATE();
        case 387:
            if(lookahead == 'r')
                ADVANCE(94);
            END_STATE();
        case 388:
            if(lookahead == 'r')
                ADVANCE(250);
            END_STATE();
        case 389:
            if(lookahead == 'r')
                ADVANCE(97);
            END_STATE();
        case 390:
            if(lookahead == 'r')
                ADVANCE(431);
            END_STATE();
        case 391:
            if(lookahead == 'r')
                ADVANCE(180);
            END_STATE();
        case 392:
            if(lookahead == 'r')
                ADVANCE(176);
            END_STATE();
        case 393:
            if(lookahead == 'r')
                ADVANCE(436);
            END_STATE();
        case 394:
            if(lookahead == 'r')
                ADVANCE(203);
            END_STATE();
        case 395:
            if(lookahead == 'r')
                ADVANCE(210);
            END_STATE();
        case 396:
            if(lookahead == 'r')
                ADVANCE(322);
            END_STATE();
        case 397:
            if(lookahead == 'r')
                ADVANCE(474);
            END_STATE();
        case 398:
            if(lookahead == 'r')
                ADVANCE(249);
            END_STATE();
        case 399:
            if(lookahead == 'r')
                ADVANCE(416);
            END_STATE();
        case 400:
            if(lookahead == 'r')
                ADVANCE(106);
            END_STATE();
        case 401:
            if(lookahead == 's')
                ADVANCE(266);
            END_STATE();
        case 402:
            if(lookahead == 's')
                ADVANCE(575);
            END_STATE();
        case 403:
            if(lookahead == 's')
                ADVANCE(580);
            END_STATE();
        case 404:
            if(lookahead == 's')
                ADVANCE(581);
            END_STATE();
        case 405:
            if(lookahead == 's')
                ADVANCE(548);
            END_STATE();
        case 406:
            if(lookahead == 's')
                ADVANCE(223);
            END_STATE();
        case 407:
            if(lookahead == 's')
                ADVANCE(156);
            END_STATE();
        case 408:
            if(lookahead == 's')
                ADVANCE(230);
            END_STATE();
        case 409:
            if(lookahead == 's')
                ADVANCE(444);
            END_STATE();
        case 410:
            if(lookahead == 's')
                ADVANCE(444);
            if(lookahead == 't')
                ADVANCE(103);
            END_STATE();
        case 411:
            if(lookahead == 's')
                ADVANCE(178);
            END_STATE();
        case 412:
            if(lookahead == 's')
                ADVANCE(238);
            END_STATE();
        case 413:
            if(lookahead == 's')
                ADVANCE(427);
            END_STATE();
        case 414:
            if(lookahead == 's')
                ADVANCE(199);
            END_STATE();
        case 415:
            if(lookahead == 's')
                ADVANCE(464);
            END_STATE();
        case 416:
            if(lookahead == 's')
                ADVANCE(461);
            END_STATE();
        case 417:
            if(lookahead == 's')
                ADVANCE(182);
            END_STATE();
        case 418:
            if(lookahead == 's')
                ADVANCE(184);
            END_STATE();
        case 419:
            if(lookahead == 's')
                ADVANCE(198);
            END_STATE();
        case 420:
            if(lookahead == 's')
                ADVANCE(252);
            END_STATE();
        case 421:
            if(lookahead == 's')
                ADVANCE(454);
            END_STATE();
        case 422:
            if(lookahead == 's')
                ADVANCE(452);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(209);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(573);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(66);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(42);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(587);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(646);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(574);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(644);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(650);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(555);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(519);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(542);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(627);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(655);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(296);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(660);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(442);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(120);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(155);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(384);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(226);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(68);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(496);
            END_STATE();
        case 446:
            if(lookahead == 't')
                ADVANCE(386);
            END_STATE();
        case 447:
            if(lookahead == 't')
                ADVANCE(247);
            END_STATE();
        case 448:
            if(lookahead == 't')
                ADVANCE(84);
            END_STATE();
        case 449:
            if(lookahead == 't')
                ADVANCE(398);
            END_STATE();
        case 450:
            if(lookahead == 't')
                ADVANCE(158);
            END_STATE();
        case 451:
            if(lookahead == 't')
                ADVANCE(258);
            END_STATE();
        case 452:
            if(lookahead == 't')
                ADVANCE(385);
            END_STATE();
        case 453:
            if(lookahead == 't')
                ADVANCE(229);
            END_STATE();
        case 454:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 455:
            if(lookahead == 't')
                ADVANCE(167);
            END_STATE();
        case 456:
            if(lookahead == 't')
                ADVANCE(200);
            END_STATE();
        case 457:
            if(lookahead == 't')
                ADVANCE(192);
            END_STATE();
        case 458:
            if(lookahead == 't')
                ADVANCE(193);
            END_STATE();
        case 459:
            if(lookahead == 't')
                ADVANCE(194);
            END_STATE();
        case 460:
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 461:
            if(lookahead == 't')
                ADVANCE(98);
            END_STATE();
        case 462:
            if(lookahead == 't')
                ADVANCE(397);
            END_STATE();
        case 463:
            if(lookahead == 't')
                ADVANCE(107);
            END_STATE();
        case 464:
            if(lookahead == 't')
                ADVANCE(65);
            END_STATE();
        case 465:
            if(lookahead == 't')
                ADVANCE(261);
            END_STATE();
        case 466:
            if(lookahead == 't')
                ADVANCE(202);
            END_STATE();
        case 467:
            if(lookahead == 't')
                ADVANCE(262);
            END_STATE();
        case 468:
            if(lookahead == 't')
                ADVANCE(263);
            END_STATE();
        case 469:
            if(lookahead == 't')
                ADVANCE(108);
            END_STATE();
        case 470:
            if(lookahead == 't')
                ADVANCE(73);
            END_STATE();
        case 471:
            if(lookahead == 'u')
                ADVANCE(410);
            END_STATE();
        case 472:
            if(lookahead == 'u')
                ADVANCE(112);
            END_STATE();
        case 473:
            if(lookahead == 'u')
                ADVANCE(292);
            END_STATE();
        case 474:
            if(lookahead == 'u')
                ADVANCE(127);
            END_STATE();
        case 475:
            if(lookahead == 'u')
                ADVANCE(281);
            END_STATE();
        case 476:
            if(lookahead == 'u')
                ADVANCE(329);
            END_STATE();
        case 477:
            if(lookahead == 'u')
                ADVANCE(429);
            END_STATE();
        case 478:
            if(lookahead == 'u')
                ADVANCE(160);
            END_STATE();
        case 479:
            if(lookahead == 'u')
                ADVANCE(320);
            END_STATE();
        case 480:
            if(lookahead == 'u')
                ADVANCE(201);
            END_STATE();
        case 481:
            if(lookahead == 'u')
                ADVANCE(128);
            END_STATE();
        case 482:
            if(lookahead == 'u')
                ADVANCE(282);
            END_STATE();
        case 483:
            if(lookahead == 'u')
                ADVANCE(188);
            END_STATE();
        case 484:
            if(lookahead == 'u')
                ADVANCE(280);
            END_STATE();
        case 485:
            if(lookahead == 'u')
                ADVANCE(455);
            END_STATE();
        case 486:
            if(lookahead == 'u')
                ADVANCE(409);
            END_STATE();
        case 487:
            if(lookahead == 'u')
                ADVANCE(116);
            END_STATE();
        case 488:
            if(lookahead == 'v')
                ADVANCE(256);
            END_STATE();
        case 489:
            if(lookahead == 'v')
                ADVANCE(163);
            END_STATE();
        case 490:
            if(lookahead == 'x')
                ADVANCE(177);
            END_STATE();
        case 491:
            if(lookahead == 'x')
                ADVANCE(450);
            END_STATE();
        case 492:
            if(lookahead == 'x')
                ADVANCE(458);
            END_STATE();
        case 493:
            if(lookahead == 'y')
                ADVANCE(619);
            END_STATE();
        case 494:
            if(lookahead == 'y')
                ADVANCE(576);
            END_STATE();
        case 495:
            if(lookahead == 'y')
                ADVANCE(64);
            END_STATE();
        case 496:
            if(lookahead == 'y')
                ADVANCE(630);
            END_STATE();
        case 497:
            if(lookahead == 'y')
                ADVANCE(370);
            END_STATE();
        case 498:
            if(lookahead == 'y')
                ADVANCE(67);
            END_STATE();
        case 499:
            if(lookahead == 'z')
                ADVANCE(191);
            END_STATE();
        case 500:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            END_STATE();
        case 501:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            END_STATE();
        case 502:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(594);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            END_STATE();
        case 503:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(602);
            END_STATE();
        case 504:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            END_STATE();
        case 505:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(590);
            END_STATE();
        case 506:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(839);
            if(lookahead == '\r')
                ADVANCE(841);
            if(lookahead == '\\')
                ADVANCE(840);
            END_STATE();
        case 507:
            if(eof)
                ADVANCE(512);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 508:
            if(eof)
                ADVANCE(512);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(507)
            END_STATE();
        case 509:
            if(eof)
                ADVANCE(512);
            if(lookahead == '\n')
                SKIP(511)
            END_STATE();
        case 510:
            if(eof)
                ADVANCE(512);
            if(lookahead == '\n')
                SKIP(511)
            if(lookahead == '\r')
                SKIP(509)
            END_STATE();
        case 511:
            if(eof)
                ADVANCE(512);
            if(lookahead == '#')
                ADVANCE(144);
            if(lookahead == '$')
                ADVANCE(524);
            if(lookahead == '%')
                ADVANCE(533);
            if(lookahead == '(')
                ADVANCE(535);
            if(lookahead == ')')
                ADVANCE(537);
            if(lookahead == '*')
                ADVANCE(531);
            if(lookahead == '+')
                ADVANCE(527);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(529);
            if(lookahead == '/')
                ADVANCE(532);
            if(lookahead == ':')
                ADVANCE(521);
            if(lookahead == ';')
                ADVANCE(513);
            if(lookahead == '<')
                ADVANCE(55);
            if(lookahead == '>')
                ADVANCE(560);
            if(lookahead == '@')
                ADVANCE(58);
            if(lookahead == '\\')
                SKIP(510)
            if(lookahead == ']')
                ADVANCE(822);
            if(lookahead == '^')
                ADVANCE(523);
            if(lookahead == 'b')
                ADVANCE(254);
            if(lookahead == 'c')
                ADVANCE(338);
            if(lookahead == 'e')
                ADVANCE(306);
            if(lookahead == 'i')
                ADVANCE(334);
            if(lookahead == 'l')
                ADVANCE(348);
            if(lookahead == 'm')
                ADVANCE(337);
            if(lookahead == 'n')
                ADVANCE(100);
            if(lookahead == 's')
                ADVANCE(462);
            if(lookahead == 't')
                ADVANCE(497);
            if(lookahead == 'u')
                ADVANCE(333);
            if(lookahead == '|')
                ADVANCE(522);
            if(lookahead == '}')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(511)
            END_STATE();
        case 512:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '0')
                ADVANCE(596);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '0')
                ADVANCE(596);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(833);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '"')
                ADVANCE(625);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(539);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(526);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(525);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(567);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(567);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(566);
            if(lookahead == '\\')
                ADVANCE(564);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(565);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(567);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(835);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(567);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(567);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_local);
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
                ADVANCE(820);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(477);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(501);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(617);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(505);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(589);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(505);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(590);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(590);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(502);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(605);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(603);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(611);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(819);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(606);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(502);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(607);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(604);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(504);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(608);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(594);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(502);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(603);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(611);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(606);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(502);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(604);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(608);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(594);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(609);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(695);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(611);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(599);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(610);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(33);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(612);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(614);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(819);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(611);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(599);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(615);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(504);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(612);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(599);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(500);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(617);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(503);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(505);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(601);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(602);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(602);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(503);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(601);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(602);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(602);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(505);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(603);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(611);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(606);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(505);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(604);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(608);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(603);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(611);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(606);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(603);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(611);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(606);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(604);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(608);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(594);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(504);
            if(lookahead == '.')
                ADVANCE(613);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(604);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(608);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(608);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '0')
                ADVANCE(597);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(599);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '0')
                ADVANCE(598);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(617);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(505);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(589);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(505);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(590);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(590);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(601);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(612);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(602);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(602);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(599);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(617);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(617);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_ATbit_bound);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(aux_sym_bit_bound_token1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(629);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_extensibility);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_mutable);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_appendable);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_nested);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_value);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_ATposition);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_autoid);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_verbatim);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(641);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(44);
            if(lookahead == '3')
                ADVANCE(45);
            if(lookahead == '6')
                ADVANCE(48);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(699);
            if(lookahead == '3')
                ADVANCE(700);
            if(lookahead == '6')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(146);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(146);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(290);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(704);
            if(lookahead == '3')
                ADVANCE(697);
            if(lookahead == '6')
                ADVANCE(701);
            if(lookahead == '8')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(52);
            if(lookahead == '3')
                ADVANCE(46);
            if(lookahead == '6')
                ADVANCE(49);
            if(lookahead == '8')
                ADVANCE(661);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_int8);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_int8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_uint8);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_uint8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_float32);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_float32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_float64);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_float64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_float128);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_float128);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(50);
            if(lookahead == '8')
                ADVANCE(689);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(705);
            if(lookahead == '8')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_byte);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_byte);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_char8);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_char8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_char16);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_char16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(289);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(501);
            if(lookahead == '0')
                ADVANCE(591);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(593);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(706);
            if(lookahead == '3')
                ADVANCE(698);
            if(lookahead == '6')
                ADVANCE(702);
            if(lookahead == '8')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '8')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(lookahead == 'h')
                ADVANCE(783);
            if(lookahead == 't')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(lookahead == 'h')
                ADVANCE(783);
            if(lookahead == 't')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(lookahead == 'h')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(553);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(774);
            if(lookahead == 'u')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(775);
            if(lookahead == 'n')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(775);
            if(lookahead == 'n')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(785);
            if(lookahead == 's')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(551);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(779);
            if(lookahead == 'y')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(577);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(820);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(506);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(839);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(567);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(837);
            if(lookahead == '\\')
                ADVANCE(506);
            if(lookahead != 0)
                ADVANCE(839);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(838);
            if(lookahead == '\\')
                ADVANCE(21);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(837);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(839);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(834);
            if(lookahead == '\\')
                ADVANCE(506);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(839);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(506);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(839);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(839);
            if(lookahead == '\r')
                ADVANCE(841);
            if(lookahead == '\\')
                ADVANCE(840);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(839);
            if(lookahead == '\\')
                ADVANCE(506);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 511 },
    [2] = { .lex_state = 31 },
    [3] = { .lex_state = 31 },
    [4] = { .lex_state = 31 },
    [5] = { .lex_state = 31 },
    [6] = { .lex_state = 31 },
    [7] = { .lex_state = 31 },
    [8] = { .lex_state = 31 },
    [9] = { .lex_state = 31 },
    [10] = { .lex_state = 31 },
    [11] = { .lex_state = 31 },
    [12] = { .lex_state = 31 },
    [13] = { .lex_state = 35 },
    [14] = { .lex_state = 31 },
    [15] = { .lex_state = 36 },
    [16] = { .lex_state = 36 },
    [17] = { .lex_state = 36 },
    [18] = { .lex_state = 36 },
    [19] = { .lex_state = 511 },
    [20] = { .lex_state = 511 },
    [21] = { .lex_state = 511 },
    [22] = { .lex_state = 511 },
    [23] = { .lex_state = 31 },
    [24] = { .lex_state = 31 },
    [25] = { .lex_state = 31 },
    [26] = { .lex_state = 31 },
    [27] = { .lex_state = 31 },
    [28] = { .lex_state = 31 },
    [29] = { .lex_state = 31 },
    [30] = { .lex_state = 31 },
    [31] = { .lex_state = 31 },
    [32] = { .lex_state = 31 },
    [33] = { .lex_state = 31 },
    [34] = { .lex_state = 31 },
    [35] = { .lex_state = 31 },
    [36] = { .lex_state = 31 },
    [37] = { .lex_state = 31 },
    [38] = { .lex_state = 31 },
    [39] = { .lex_state = 31 },
    [40] = { .lex_state = 37 },
    [41] = { .lex_state = 31 },
    [42] = { .lex_state = 31 },
    [43] = { .lex_state = 31 },
    [44] = { .lex_state = 38 },
    [45] = { .lex_state = 29 },
    [46] = { .lex_state = 511 },
    [47] = { .lex_state = 30 },
    [48] = { .lex_state = 511 },
    [49] = { .lex_state = 30 },
    [50] = { .lex_state = 30 },
    [51] = { .lex_state = 511 },
    [52] = { .lex_state = 511 },
    [53] = { .lex_state = 30 },
    [54] = { .lex_state = 511 },
    [55] = { .lex_state = 30 },
    [56] = { .lex_state = 30 },
    [57] = { .lex_state = 30 },
    [58] = { .lex_state = 511 },
    [59] = { .lex_state = 30 },
    [60] = { .lex_state = 30 },
    [61] = { .lex_state = 30 },
    [62] = { .lex_state = 30 },
    [63] = { .lex_state = 30 },
    [64] = { .lex_state = 30 },
    [65] = { .lex_state = 30 },
    [66] = { .lex_state = 30 },
    [67] = { .lex_state = 30 },
    [68] = { .lex_state = 28 },
    [69] = { .lex_state = 28 },
    [70] = { .lex_state = 28 },
    [71] = { .lex_state = 28 },
    [72] = { .lex_state = 511 },
    [73] = { .lex_state = 511 },
    [74] = { .lex_state = 511 },
    [75] = { .lex_state = 511 },
    [76] = { .lex_state = 511 },
    [77] = { .lex_state = 511 },
    [78] = { .lex_state = 30 },
    [79] = { .lex_state = 511 },
    [80] = { .lex_state = 511 },
    [81] = { .lex_state = 511 },
    [82] = { .lex_state = 511 },
    [83] = { .lex_state = 511 },
    [84] = { .lex_state = 30 },
    [85] = { .lex_state = 511 },
    [86] = { .lex_state = 511 },
    [87] = { .lex_state = 511 },
    [88] = { .lex_state = 511 },
    [89] = { .lex_state = 511 },
    [90] = { .lex_state = 30 },
    [91] = { .lex_state = 29 },
    [92] = { .lex_state = 29 },
    [93] = { .lex_state = 511 },
    [94] = { .lex_state = 0 },
    [95] = { .lex_state = 29 },
    [96] = { .lex_state = 29 },
    [97] = { .lex_state = 29 },
    [98] = { .lex_state = 0 },
    [99] = { .lex_state = 28 },
    [100] = { .lex_state = 0 },
    [101] = { .lex_state = 28 },
    [102] = { .lex_state = 30 },
    [103] = { .lex_state = 28 },
    [104] = { .lex_state = 0 },
    [105] = { .lex_state = 0 },
    [106] = { .lex_state = 0 },
    [107] = { .lex_state = 28 },
    [108] = { .lex_state = 0 },
    [109] = { .lex_state = 28 },
    [110] = { .lex_state = 0 },
    [111] = { .lex_state = 28 },
    [112] = { .lex_state = 32 },
    [113] = { .lex_state = 28 },
    [114] = { .lex_state = 0 },
    [115] = { .lex_state = 32 },
    [116] = { .lex_state = 32 },
    [117] = { .lex_state = 0 },
    [118] = { .lex_state = 28 },
    [119] = { .lex_state = 511 },
    [120] = { .lex_state = 28 },
    [121] = { .lex_state = 0 },
    [122] = { .lex_state = 0 },
    [123] = { .lex_state = 511 },
    [124] = { .lex_state = 32 },
    [125] = { .lex_state = 0 },
    [126] = { .lex_state = 511 },
    [127] = { .lex_state = 28 },
    [128] = { .lex_state = 0 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 511 },
    [132] = { .lex_state = 0 },
    [133] = { .lex_state = 28 },
    [134] = { .lex_state = 32 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 28 },
    [137] = { .lex_state = 28 },
    [138] = { .lex_state = 32 },
    [139] = { .lex_state = 0 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 28 },
    [142] = { .lex_state = 28 },
    [143] = { .lex_state = 28 },
    [144] = { .lex_state = 0 },
    [145] = { .lex_state = 32 },
    [146] = { .lex_state = 0 },
    [147] = { .lex_state = 28 },
    [148] = { .lex_state = 28 },
    [149] = { .lex_state = 32 },
    [150] = { .lex_state = 0 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 32 },
    [153] = { .lex_state = 0 },
    [154] = { .lex_state = 32 },
    [155] = { .lex_state = 39 },
    [156] = { .lex_state = 0 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 28 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 32 },
    [161] = { .lex_state = 28 },
    [162] = { .lex_state = 0 },
    [163] = { .lex_state = 28 },
    [164] = { .lex_state = 32 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 32 },
    [167] = { .lex_state = 32 },
    [168] = { .lex_state = 32 },
    [169] = { .lex_state = 0 },
    [170] = { .lex_state = 28 },
    [171] = { .lex_state = 0 },
    [172] = { .lex_state = 28 },
    [173] = { .lex_state = 0 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 28 },
    [176] = { .lex_state = 32 },
    [177] = { .lex_state = 32 },
    [178] = { .lex_state = 0 },
    [179] = { .lex_state = 0 },
    [180] = { .lex_state = 32 },
    [181] = { .lex_state = 31 },
    [182] = { .lex_state = 0 },
    [183] = { .lex_state = 0 },
    [184] = { .lex_state = 0 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 0 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 32 },
    [189] = { .lex_state = 32 },
    [190] = { .lex_state = 0 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 28 },
    [193] = { .lex_state = 32 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 0 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 0 },
    [198] = { .lex_state = 40 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 0 },
    [202] = { .lex_state = 32 },
    [203] = { .lex_state = 28 },
    [204] = { .lex_state = 32 },
    [205] = { .lex_state = 0 },
    [206] = { .lex_state = 32 },
    [207] = { .lex_state = 28 },
    [208] = { .lex_state = 32 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 32 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 32 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 32 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 0 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 28 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 32 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 28 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 28 },
    [229] = { .lex_state = 28 },
    [230] = { .lex_state = 32 },
    [231] = { .lex_state = 28 },
    [232] = { .lex_state = 28 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 28 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 28 },
    [237] = { .lex_state = 0 },
    [238] = { .lex_state = 0 },
    [239] = { .lex_state = 28 },
    [240] = { .lex_state = 28 },
    [241] = { .lex_state = 28 },
    [242] = { .lex_state = 28 },
    [243] = { .lex_state = 28 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 511 },
    [249] = { .lex_state = 28 },
    [250] = { .lex_state = 28 },
    [251] = { .lex_state = 28 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 28 },
    [254] = { .lex_state = 28 },
    [255] = { .lex_state = 28 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 0 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 28 },
    [262] = { .lex_state = 28 },
    [263] = { .lex_state = 28 },
    [264] = { .lex_state = 28 },
    [265] = { .lex_state = 28 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 28 },
    [268] = { .lex_state = 511 },
    [269] = { .lex_state = 511 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 28 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 31 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 31 },
    [278] = { .lex_state = 511 },
    [279] = { .lex_state = 0 },
    [280] = { .lex_state = 28 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 28 },
    [283] = { .lex_state = 28 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 28 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 28 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 28 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 28 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 28 },
    [295] = { .lex_state = 31 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 837 },
    [304] = { .lex_state = 28 },
    [305] = { .lex_state = 511 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 28 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 28 },
    [313] = { .lex_state = 28 },
    [314] = { .lex_state = 31 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 31 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 31 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 31 },
    [322] = { .lex_state = 28 },
    [323] = { .lex_state = 511 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 511 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 28 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 41 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 41 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 28 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 41 },
    [359] = { .lex_state = 31 },
    [360] = { .lex_state = 511 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 511 },
    [365] = { .lex_state = 31 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 511 },
    [373] = { .lex_state = 31 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 511 },
    [377] = { .lex_state = 511 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 28 },
    [383] = { .lex_state = 565 },
    [384] = { .lex_state = 31 },
    [385] = { .lex_state = 31 },
    [386] = { .lex_state = 31 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 28 },
    [390] = { .lex_state = 28 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 28 },
    [394] = { .lex_state = 28 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 28 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 28 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 28 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 31 },
    [408] = { .lex_state = 28 },
    [409] = { .lex_state = 28 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 28 },
    [419] = { .lex_state = 41 },
    [420] = { .lex_state = 28 },
    [421] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
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
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_ATdefault_literal] = ACTIONS(1),
        [anon_sym_ATignore_literal_names] = ACTIONS(1),
        [anon_sym_ATannotation] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_bitset] = ACTIONS(1),
        [anon_sym_bitfield] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_readonly] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_getraises] = ACTIONS(1),
        [anon_sym_setraises] = ACTIONS(1),
        [sym_dds_service] = ACTIONS(1),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [sym_optional] = ACTIONS(1),
        [sym_key] = ACTIONS(1),
        [sym_must_understand] = ACTIONS(1),
        [sym_non_serialized] = ACTIONS(1),
        [sym_id] = ACTIONS(1),
        [sym_external] = ACTIONS(1),
        [anon_sym_AThashid] = ACTIONS(1),
        [anon_sym_LPAREN_DQUOTE] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_ATtry_construct] = ACTIONS(1),
        [anon_sym_ATbit_bound] = ACTIONS(1),
        [aux_sym_bit_bound_token1] = ACTIONS(1),
        [sym_extensibility] = ACTIONS(1),
        [sym_mutable] = ACTIONS(1),
        [sym_appendable] = ACTIONS(1),
        [sym_final] = ACTIONS(1),
        [sym_nested] = ACTIONS(1),
        [sym_value] = ACTIONS(1),
        [anon_sym_ATposition] = ACTIONS(1),
        [sym_autoid] = ACTIONS(1),
        [sym_verbatim] = ACTIONS(1),
        [anon_sym_ATdata_representation] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint8] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float32] = ACTIONS(1),
        [anon_sym_float64] = ACTIONS(1),
        [anon_sym_float128] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_byte] = ACTIONS(1),
        [anon_sym_char8] = ACTIONS(1),
        [anon_sym_char16] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(357),
        [sym__definition] = STATE(51),
        [sym_except_dcl] = STATE(58),
        [sym_native_dcl] = STATE(355),
        [sym_module_dcl] = STATE(355),
        [sym_struct_forward_dcl] = STATE(355),
        [sym_struct_def] = STATE(355),
        [sym_enum_dcl] = STATE(355),
        [sym_enum_anno] = STATE(380),
        [sym_annotation] = STATE(355),
        [sym_union_forward_dcl] = STATE(355),
        [sym_union_def] = STATE(355),
        [sym_bitset_dcl] = STATE(355),
        [sym_bitmask_dcl] = STATE(355),
        [sym_typedef_dcl] = STATE(355),
        [sym_predefine] = STATE(58),
        [sym_interface_dcl] = STATE(355),
        [sym_interface_forward_dcl] = STATE(351),
        [sym_interface_def] = STATE(351),
        [sym_interface_header] = STATE(350),
        [sym_dds_request_topic] = STATE(123),
        [sym_dds_reply_topic] = STATE(123),
        [sym_interface_anno] = STATE(119),
        [sym_const_dcl] = STATE(355),
        [sym_bit_bound] = STATE(346),
        [sym_data_representation] = STATE(185),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(22),
        [aux_sym_struct_def_repeat1] = STATE(122),
        [aux_sym_interface_def_repeat1] = STATE(89),
        [ts_builtin_sym_end] = ACTIONS(5),
        [anon_sym_exception] = ACTIONS(7),
        [anon_sym_native] = ACTIONS(9),
        [anon_sym_module] = ACTIONS(11),
        [anon_sym_struct] = ACTIONS(13),
        [anon_sym_enum] = ACTIONS(15),
        [anon_sym_ATignore_literal_names] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_union] = ACTIONS(21),
        [anon_sym_bitset] = ACTIONS(23),
        [anon_sym_bitmask] = ACTIONS(25),
        [anon_sym_typedef] = ACTIONS(27),
        [anon_sym_POUNDdefine] = ACTIONS(29),
        [anon_sym_interface] = ACTIONS(31),
        [anon_sym_local] = ACTIONS(33),
        [sym_dds_service] = ACTIONS(35),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(37),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(39),
        [anon_sym_const] = ACTIONS(41),
        [anon_sym_ATbit_bound] = ACTIONS(43),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_RBRACE,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(2),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [115] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(75),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [230] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [345] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(79),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(5),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [460] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(6),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [575] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(83),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [690] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [805] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(75),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [920] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(87),
    1,
    anon_sym_RBRACE,
    STATE(2),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1035] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(89),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1150] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(91),
    1,
    anon_sym_RBRACE,
    ACTIONS(96),
    1,
    anon_sym_AThashid,
    ACTIONS(99),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(111),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(114),
    1,
    sym_identifier,
    ACTIONS(117),
    1,
    anon_sym_sequence,
    ACTIONS(123),
    1,
    anon_sym_fixed,
    ACTIONS(126),
    1,
    anon_sym_map,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(133),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(120),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(12),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(108),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(93),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(102),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(105),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1263] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(129),
    1,
    anon_sym_struct,
    ACTIONS(131),
    1,
    anon_sym_enum,
    ACTIONS(133),
    1,
    anon_sym_union,
    STATE(13),
    1,
    sym_comment,
    STATE(122),
    1,
    aux_sym_struct_def_repeat1,
    STATE(138),
    1,
    sym_integer_type,
    STATE(185),
    1,
    sym_data_representation,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(310),
    1,
    sym_type_declarator,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(380),
    1,
    sym_enum_anno,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    STATE(127),
    7,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1377] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(14),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_member_repeat1,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(120),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1483] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(135),
    1,
    anon_sym_RBRACE,
    ACTIONS(137),
    1,
    anon_sym_void,
    ACTIONS(139),
    1,
    anon_sym_readonly,
    ACTIONS(141),
    1,
    anon_sym_attribute,
    STATE(15),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(221),
    1,
    sym_export,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_type_spec,
    STATE(400),
    1,
    sym_interface_body,
    STATE(408),
    1,
    sym_op_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(406),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(415),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1594] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(137),
    1,
    anon_sym_void,
    ACTIONS(139),
    1,
    anon_sym_readonly,
    ACTIONS(141),
    1,
    anon_sym_attribute,
    ACTIONS(143),
    1,
    anon_sym_RBRACE,
    STATE(16),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(221),
    1,
    sym_export,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(348),
    1,
    sym_interface_body,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(406),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(415),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1705] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(137),
    1,
    anon_sym_void,
    ACTIONS(139),
    1,
    anon_sym_readonly,
    ACTIONS(141),
    1,
    anon_sym_attribute,
    ACTIONS(145),
    1,
    anon_sym_RBRACE,
    STATE(17),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(221),
    1,
    sym_export,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(349),
    1,
    sym_interface_body,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(406),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(415),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1816] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(137),
    1,
    anon_sym_void,
    ACTIONS(139),
    1,
    anon_sym_readonly,
    ACTIONS(141),
    1,
    anon_sym_attribute,
    STATE(18),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(279),
    1,
    sym_export,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(394),
    1,
    sym_type_spec,
    STATE(408),
    1,
    sym_op_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(406),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(415),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [1921] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(149),
    1,
    anon_sym_exception,
    ACTIONS(152),
    1,
    anon_sym_native,
    ACTIONS(155),
    1,
    anon_sym_module,
    ACTIONS(158),
    1,
    anon_sym_struct,
    ACTIONS(161),
    1,
    anon_sym_enum,
    ACTIONS(164),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(167),
    1,
    anon_sym_ATannotation,
    ACTIONS(170),
    1,
    anon_sym_union,
    ACTIONS(173),
    1,
    anon_sym_bitset,
    ACTIONS(176),
    1,
    anon_sym_bitmask,
    ACTIONS(179),
    1,
    anon_sym_typedef,
    ACTIONS(182),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(185),
    1,
    anon_sym_interface,
    ACTIONS(188),
    1,
    anon_sym_local,
    ACTIONS(191),
    1,
    sym_dds_service,
    ACTIONS(194),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(197),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(200),
    1,
    anon_sym_const,
    ACTIONS(203),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(206),
    1,
    sym_final,
    ACTIONS(209),
    1,
    anon_sym_ATdata_representation,
    STATE(51),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_def_repeat1,
    STATE(119),
    1,
    sym_interface_anno,
    STATE(122),
    1,
    aux_sym_struct_def_repeat1,
    STATE(185),
    1,
    sym_data_representation,
    STATE(346),
    1,
    sym_bit_bound,
    STATE(350),
    1,
    sym_interface_header,
    STATE(380),
    1,
    sym_enum_anno,
    ACTIONS(147),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(19),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(58),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(123),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(351),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(355),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2047] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(212),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(20),
    1,
    sym_comment,
    STATE(51),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_def_repeat1,
    STATE(119),
    1,
    sym_interface_anno,
    STATE(122),
    1,
    aux_sym_struct_def_repeat1,
    STATE(185),
    1,
    sym_data_representation,
    STATE(346),
    1,
    sym_bit_bound,
    STATE(350),
    1,
    sym_interface_header,
    STATE(380),
    1,
    sym_enum_anno,
    STATE(58),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(123),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(351),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(355),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2174] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(214),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    aux_sym_specification_repeat1,
    STATE(21),
    1,
    sym_comment,
    STATE(51),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_def_repeat1,
    STATE(119),
    1,
    sym_interface_anno,
    STATE(122),
    1,
    aux_sym_struct_def_repeat1,
    STATE(185),
    1,
    sym_data_representation,
    STATE(346),
    1,
    sym_bit_bound,
    STATE(350),
    1,
    sym_interface_header,
    STATE(380),
    1,
    sym_enum_anno,
    STATE(58),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(123),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(351),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(355),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2301] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(216),
    1,
    ts_builtin_sym_end,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(22),
    1,
    sym_comment,
    STATE(51),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_def_repeat1,
    STATE(119),
    1,
    sym_interface_anno,
    STATE(122),
    1,
    aux_sym_struct_def_repeat1,
    STATE(185),
    1,
    sym_data_representation,
    STATE(346),
    1,
    sym_bit_bound,
    STATE(350),
    1,
    sym_interface_header,
    STATE(380),
    1,
    sym_enum_anno,
    STATE(58),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(123),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(351),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(355),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2428] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(221),
    1,
    anon_sym_AThashid,
    ACTIONS(224),
    1,
    anon_sym_ATtry_construct,
    STATE(38),
    1,
    sym_struct_modifier,
    STATE(23),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(36),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(229),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(218),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(227),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [2496] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    ACTIONS(231),
    1,
    anon_sym_COMMA,
    ACTIONS(233),
    1,
    anon_sym_GT,
    STATE(24),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(168),
    1,
    sym_scoped_name,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(359),
    1,
    sym_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2584] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(25),
    1,
    sym_comment,
    STATE(137),
    1,
    sym_type_spec,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(398),
    1,
    sym_element_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2669] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(26),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(203),
    1,
    sym_type_spec,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2751] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(27),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(168),
    1,
    sym_scoped_name,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(369),
    1,
    sym_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2833] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(28),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(168),
    1,
    sym_scoped_name,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(274),
    1,
    sym_type_spec,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2915] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(29),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(229),
    1,
    sym_type_spec,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [2997] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    anon_sym_map,
    STATE(30),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(202),
    1,
    sym_primitive_type,
    STATE(254),
    1,
    sym_type_spec,
    STATE(312),
    1,
    sym_scoped_name,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(214),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(204),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3079] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(31),
    1,
    sym_comment,
    ACTIONS(235),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(237),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3134] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(32),
    1,
    sym_comment,
    ACTIONS(239),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(241),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3189] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(33),
    1,
    sym_comment,
    ACTIONS(243),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(245),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3244] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(34),
    1,
    sym_comment,
    ACTIONS(247),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(249),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3299] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(35),
    1,
    sym_comment,
    ACTIONS(251),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(253),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3354] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(255),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3408] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(259),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(261),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3462] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(263),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(265),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3516] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(267),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(269),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3570] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    ACTIONS(67),
    1,
    anon_sym_sequence,
    STATE(40),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(292),
    1,
    sym_const_type,
    STATE(290),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3633] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(273),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(271),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3679] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(277),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(275),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3725] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(281),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(279),
    30,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    anon_sym_map,
    [3771] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(65),
    1,
    sym_identifier,
    STATE(44),
    1,
    sym_comment,
    STATE(138),
    1,
    sym_integer_type,
    STATE(251),
    1,
    sym_scoped_name,
    STATE(375),
    1,
    sym_primitive_type,
    STATE(378),
    1,
    sym_switch_type_spec,
    ACTIONS(61),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(57),
    7,
    sym_boolean_type,
    sym_octet_type,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_byte,
    anon_sym_char8,
    anon_sym_char16,
    ACTIONS(59),
    17,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3830] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    STATE(384),
    1,
    sym_integer_type,
    STATE(385),
    1,
    sym_destination_type,
    ACTIONS(283),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    4,
    anon_sym_float,
    anon_sym_long,
    anon_sym_unsignedlong,
    anon_sym_int,
    ACTIONS(61),
    17,
    anon_sym_double,
    anon_sym_short,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    [3872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(285),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3904] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(325),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3976] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(303),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [4008] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(386),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4080] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(277),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4152] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(305),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [4184] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(307),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [4216] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(365),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4288] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(309),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [4320] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(373),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4392] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(316),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4464] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(181),
    1,
    sym_const_expr,
    STATE(371),
    1,
    sym_positive_int_const,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4536] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(311),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [4568] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(363),
    1,
    sym_const_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4637] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(300),
    1,
    sym_const_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4706] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(397),
    1,
    sym_const_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4775] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(344),
    1,
    sym_const_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4844] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(96),
    1,
    sym_xor_expr,
    STATE(97),
    1,
    sym_or_expr,
    STATE(315),
    1,
    sym_const_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4913] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(91),
    1,
    sym_and_expr,
    STATE(95),
    1,
    sym_xor_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4976] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(87),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    STATE(92),
    1,
    sym_and_expr,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5036] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(85),
    1,
    sym_add_expr,
    STATE(88),
    1,
    sym_shift_expr,
    STATE(90),
    1,
    sym_unary_operator,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5093] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_mult_expr,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(86),
    1,
    sym_add_expr,
    STATE(90),
    1,
    sym_unary_operator,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5147] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(315),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(313),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    sym_identifier,
    anon_sym_RBRACK,
    [5175] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(321),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(319),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(317),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5205] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(325),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(323),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    sym_identifier,
    anon_sym_RBRACK,
    [5233] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(321),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(329),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(327),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5263] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(329),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(327),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5290] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(333),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(331),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5317] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(337),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(335),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5344] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(341),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(339),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5371] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(345),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(343),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5398] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(351),
    1,
    anon_sym_SLASH,
    ACTIONS(353),
    1,
    anon_sym_GT,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(349),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(347),
    12,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5429] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(77),
    1,
    sym_mult_expr,
    STATE(78),
    1,
    sym_comment,
    STATE(82),
    1,
    sym_unary_expr,
    STATE(90),
    1,
    sym_unary_operator,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5480] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(319),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(317),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5507] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(351),
    1,
    anon_sym_SLASH,
    ACTIONS(357),
    1,
    anon_sym_GT,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(349),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(355),
    12,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5538] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(361),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(359),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5565] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(365),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(363),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5592] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(369),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(367),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5619] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(289),
    1,
    anon_sym_TILDE,
    ACTIONS(291),
    1,
    anon_sym_LPAREN,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_literal,
    STATE(81),
    1,
    sym_unary_expr,
    STATE(84),
    1,
    sym_comment,
    STATE(90),
    1,
    sym_unary_operator,
    ACTIONS(287),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5667] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(375),
    1,
    anon_sym_GT,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(373),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(371),
    10,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5693] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(379),
    1,
    anon_sym_GT,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(373),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(377),
    10,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5719] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(385),
    1,
    anon_sym_GT,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(383),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(381),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5743] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(389),
    1,
    anon_sym_GT,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(383),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(387),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5767] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(391),
    1,
    anon_sym_interface,
    ACTIONS(393),
    1,
    anon_sym_local,
    STATE(89),
    1,
    sym_comment,
    STATE(93),
    1,
    aux_sym_interface_def_repeat1,
    STATE(119),
    1,
    sym_interface_anno,
    STATE(307),
    1,
    sym_interface_header,
    STATE(123),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5802] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(293),
    1,
    anon_sym_SQUOTE,
    ACTIONS(295),
    1,
    anon_sym_L,
    ACTIONS(297),
    1,
    sym_number_literal,
    ACTIONS(299),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(301),
    1,
    sym_identifier,
    ACTIONS(395),
    1,
    anon_sym_LPAREN,
    STATE(69),
    1,
    sym_scoped_name,
    STATE(79),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_comment,
    STATE(74),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5837] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(399),
    1,
    anon_sym_DOLLAR,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(397),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5857] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(399),
    1,
    anon_sym_DOLLAR,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(401),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5877] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(405),
    1,
    sym_dds_service,
    ACTIONS(408),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(411),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(119),
    1,
    sym_interface_anno,
    ACTIONS(403),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(93),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(123),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5905] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(414),
    1,
    anon_sym_SEMI,
    ACTIONS(416),
    1,
    anon_sym_COMMA,
    ACTIONS(418),
    1,
    anon_sym_getraises,
    ACTIONS(420),
    1,
    anon_sym_setraises,
    STATE(94),
    1,
    sym_comment,
    STATE(162),
    1,
    sym_get_excep_expr,
    STATE(197),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(329),
    1,
    sym_attr_raises_expr,
    STATE(331),
    1,
    sym_set_excep_expr,
    [5936] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(424),
    1,
    anon_sym_CARET,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(422),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5955] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(424),
    1,
    anon_sym_CARET,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(426),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5974] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(430),
    1,
    anon_sym_PIPE,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(428),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [5992] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_RPAREN,
    ACTIONS(434),
    1,
    anon_sym_in,
    STATE(30),
    1,
    sym_param_attribute,
    STATE(98),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_param_dcl,
    STATE(335),
    1,
    sym_parameter_dcls,
    ACTIONS(436),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6018] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(438),
    1,
    anon_sym_RBRACE,
    ACTIONS(440),
    1,
    anon_sym_ATposition,
    ACTIONS(442),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(103),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(226),
    1,
    sym_bitmask_field,
    STATE(330),
    1,
    sym_position,
    [6043] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(444),
    1,
    anon_sym_RBRACE,
    ACTIONS(446),
    1,
    anon_sym_default,
    ACTIONS(448),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(100),
    1,
    sym_comment,
    STATE(104),
    1,
    aux_sym_union_def_repeat1,
    STATE(179),
    1,
    sym_case,
    [6068] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(450),
    1,
    anon_sym_RBRACE,
    ACTIONS(452),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(454),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_enumerator_repeat1,
    STATE(219),
    1,
    sym_enumerator,
    STATE(255),
    1,
    sym_enum_modifier,
    [6093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(456),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [6110] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(440),
    1,
    anon_sym_ATposition,
    ACTIONS(442),
    1,
    sym_identifier,
    ACTIONS(460),
    1,
    anon_sym_RBRACE,
    STATE(103),
    1,
    sym_comment,
    STATE(107),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(226),
    1,
    sym_bitmask_field,
    STATE(330),
    1,
    sym_position,
    [6135] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(462),
    1,
    anon_sym_RBRACE,
    ACTIONS(464),
    1,
    anon_sym_default,
    ACTIONS(467),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(179),
    1,
    sym_case,
    STATE(104),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [6158] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(472),
    1,
    anon_sym_LBRACK,
    STATE(105),
    1,
    sym_comment,
    STATE(108),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(144),
    1,
    sym_fixed_array_size,
    ACTIONS(470),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6179] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(470),
    6,
    anon_sym_SEMI,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [6194] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(474),
    1,
    anon_sym_RBRACE,
    ACTIONS(476),
    1,
    anon_sym_ATposition,
    ACTIONS(479),
    1,
    sym_identifier,
    STATE(226),
    1,
    sym_bitmask_field,
    STATE(330),
    1,
    sym_position,
    STATE(107),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [6217] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(472),
    1,
    anon_sym_LBRACK,
    STATE(108),
    1,
    sym_comment,
    STATE(110),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(144),
    1,
    sym_fixed_array_size,
    ACTIONS(482),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6238] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(452),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(454),
    1,
    sym_identifier,
    ACTIONS(484),
    1,
    anon_sym_RBRACE,
    STATE(109),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_enumerator_repeat1,
    STATE(187),
    1,
    sym_enumerator,
    STATE(255),
    1,
    sym_enum_modifier,
    [6263] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(488),
    1,
    anon_sym_LBRACK,
    STATE(144),
    1,
    sym_fixed_array_size,
    STATE(110),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(486),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6282] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(440),
    1,
    anon_sym_ATposition,
    ACTIONS(442),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_RBRACE,
    STATE(107),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(111),
    1,
    sym_comment,
    STATE(226),
    1,
    sym_bitmask_field,
    STATE(330),
    1,
    sym_position,
    [6307] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(493),
    1,
    anon_sym_RBRACE,
    ACTIONS(495),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(498),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_annotation_field,
    STATE(393),
    1,
    sym_scoped_name,
    STATE(112),
    2,
    sym_comment,
    aux_sym_annotation_repeat1,
    [6330] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(440),
    1,
    anon_sym_ATposition,
    ACTIONS(442),
    1,
    sym_identifier,
    ACTIONS(460),
    1,
    anon_sym_RBRACE,
    STATE(111),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(113),
    1,
    sym_comment,
    STATE(226),
    1,
    sym_bitmask_field,
    STATE(330),
    1,
    sym_position,
    [6355] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(446),
    1,
    anon_sym_default,
    ACTIONS(448),
    1,
    anon_sym_case,
    ACTIONS(501),
    1,
    anon_sym_RBRACE,
    STATE(25),
    1,
    sym_case_label,
    STATE(100),
    1,
    aux_sym_union_def_repeat1,
    STATE(114),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_case,
    [6380] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(503),
    1,
    anon_sym_RBRACE,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    STATE(116),
    1,
    aux_sym_annotation_repeat1,
    STATE(180),
    1,
    sym_annotation_field,
    STATE(393),
    1,
    sym_scoped_name,
    [6405] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    ACTIONS(507),
    1,
    anon_sym_RBRACE,
    STATE(112),
    1,
    aux_sym_annotation_repeat1,
    STATE(116),
    1,
    sym_comment,
    STATE(180),
    1,
    sym_annotation_field,
    STATE(393),
    1,
    sym_scoped_name,
    [6430] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(416),
    1,
    anon_sym_COMMA,
    ACTIONS(509),
    1,
    anon_sym_SEMI,
    ACTIONS(511),
    1,
    anon_sym_raises,
    STATE(117),
    1,
    sym_comment,
    STATE(186),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(361),
    1,
    sym_raises_expr,
    [6452] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(452),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(454),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_enumerator_repeat1,
    STATE(255),
    1,
    sym_enum_modifier,
    STATE(281),
    1,
    sym_enumerator,
    [6474] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(513),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6488] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_identifier,
    STATE(120),
    1,
    sym_comment,
    STATE(150),
    1,
    sym_declarator,
    STATE(213),
    1,
    sym_declarators,
    STATE(215),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6508] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(434),
    1,
    anon_sym_in,
    STATE(30),
    1,
    sym_param_attribute,
    STATE(121),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_param_dcl,
    ACTIONS(436),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6528] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(517),
    1,
    anon_sym_struct,
    STATE(122),
    1,
    sym_comment,
    STATE(125),
    1,
    aux_sym_struct_def_repeat1,
    STATE(185),
    1,
    sym_data_representation,
    [6550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(519),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6564] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(323),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6578] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(521),
    1,
    anon_sym_struct,
    ACTIONS(523),
    1,
    sym_final,
    ACTIONS(526),
    1,
    anon_sym_ATdata_representation,
    STATE(185),
    1,
    sym_data_representation,
    STATE(125),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [6598] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(529),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6612] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_any_declarator,
    STATE(333),
    1,
    sym_any_declarators,
    STATE(266),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6632] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(531),
    1,
    anon_sym_RBRACE,
    ACTIONS(533),
    1,
    anon_sym_bitfield,
    STATE(128),
    1,
    sym_comment,
    STATE(129),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(175),
    1,
    sym_bitfield_spec,
    STATE(237),
    1,
    sym_bitfield,
    [6654] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(535),
    1,
    anon_sym_RBRACE,
    ACTIONS(537),
    1,
    anon_sym_bitfield,
    STATE(175),
    1,
    sym_bitfield_spec,
    STATE(237),
    1,
    sym_bitfield,
    STATE(129),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [6674] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    anon_sym_bitfield,
    ACTIONS(540),
    1,
    anon_sym_RBRACE,
    STATE(130),
    1,
    sym_comment,
    STATE(132),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(175),
    1,
    sym_bitfield_spec,
    STATE(237),
    1,
    sym_bitfield,
    [6696] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(542),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6710] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    anon_sym_bitfield,
    ACTIONS(544),
    1,
    anon_sym_RBRACE,
    STATE(129),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(132),
    1,
    sym_comment,
    STATE(175),
    1,
    sym_bitfield_spec,
    STATE(237),
    1,
    sym_bitfield,
    [6732] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_identifier,
    STATE(133),
    1,
    sym_comment,
    STATE(150),
    1,
    sym_declarator,
    STATE(217),
    1,
    sym_declarators,
    STATE(215),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6752] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(313),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6766] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    anon_sym_bitfield,
    ACTIONS(546),
    1,
    anon_sym_RBRACE,
    STATE(128),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(135),
    1,
    sym_comment,
    STATE(175),
    1,
    sym_bitfield_spec,
    STATE(237),
    1,
    sym_bitfield,
    [6788] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(548),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(551),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_enum_modifier,
    STATE(136),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [6805] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_identifier,
    STATE(137),
    1,
    sym_comment,
    STATE(411),
    1,
    sym_declarator,
    STATE(215),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(553),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6835] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(555),
    1,
    anon_sym_RPAREN,
    ACTIONS(557),
    1,
    anon_sym_XCDR,
    ACTIONS(560),
    1,
    anon_sym_XCDR2,
    STATE(139),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [6852] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(563),
    1,
    anon_sym_SEMI,
    ACTIONS(565),
    1,
    anon_sym_LBRACE,
    ACTIONS(567),
    1,
    anon_sym_COLON,
    STATE(140),
    1,
    sym_comment,
    STATE(338),
    1,
    sym_interface_inheritance_spec,
    [6871] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(569),
    1,
    anon_sym_RPAREN,
    ACTIONS(571),
    1,
    anon_sym_COMMA,
    ACTIONS(573),
    1,
    sym_identifier,
    STATE(141),
    1,
    sym_comment,
    STATE(171),
    1,
    aux_sym_raises_expr_repeat1,
    [6890] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_any_declarator,
    STATE(266),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6907] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(577),
    1,
    anon_sym_COMMA,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(575),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(579),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(581),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [6948] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(583),
    1,
    anon_sym_SEMI,
    ACTIONS(585),
    1,
    anon_sym_setraises,
    STATE(256),
    1,
    sym_set_excep_expr,
    STATE(146),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [6965] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(452),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(588),
    1,
    sym_identifier,
    STATE(136),
    1,
    aux_sym_enumerator_repeat1,
    STATE(147),
    1,
    sym_comment,
    STATE(255),
    1,
    sym_enum_modifier,
    [6984] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(571),
    1,
    anon_sym_COMMA,
    ACTIONS(573),
    1,
    sym_identifier,
    ACTIONS(590),
    1,
    anon_sym_RPAREN,
    STATE(148),
    1,
    sym_comment,
    STATE(174),
    1,
    aux_sym_raises_expr_repeat1,
    [7003] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    ACTIONS(592),
    1,
    anon_sym_RPAREN,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(149),
    1,
    sym_comment,
    [7022] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(596),
    1,
    anon_sym_COMMA,
    STATE(150),
    1,
    sym_comment,
    STATE(159),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(594),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7039] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(420),
    1,
    anon_sym_setraises,
    ACTIONS(598),
    1,
    anon_sym_SEMI,
    STATE(146),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(151),
    1,
    sym_comment,
    STATE(256),
    1,
    sym_set_excep_expr,
    [7058] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    ACTIONS(600),
    1,
    anon_sym_RPAREN,
    STATE(148),
    1,
    sym_scoped_name,
    STATE(152),
    1,
    sym_comment,
    [7077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(602),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [7090] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_comment,
    STATE(192),
    1,
    sym_scoped_name,
    STATE(273),
    1,
    sym_interface_name,
    [7109] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(315),
    1,
    sym_identifier,
    ACTIONS(604),
    1,
    anon_sym_SEMI,
    ACTIONS(606),
    1,
    anon_sym_default,
    STATE(155),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_default,
    [7128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(610),
    1,
    anon_sym_COMMA,
    ACTIONS(608),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(156),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [7143] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(613),
    1,
    anon_sym_RPAREN,
    ACTIONS(615),
    1,
    anon_sym_XCDR,
    ACTIONS(617),
    1,
    anon_sym_XCDR2,
    STATE(139),
    1,
    aux_sym_data_representation_repeat1,
    STATE(157),
    1,
    sym_comment,
    [7162] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_identifier,
    STATE(158),
    1,
    sym_comment,
    STATE(194),
    1,
    sym_declarator,
    STATE(215),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7179] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(596),
    1,
    anon_sym_COMMA,
    STATE(156),
    1,
    aux_sym_declarators_repeat1,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(619),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7196] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(623),
    1,
    anon_sym_LT,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(621),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7211] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(627),
    1,
    anon_sym_COMMA,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(625),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [7226] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(420),
    1,
    anon_sym_setraises,
    ACTIONS(629),
    1,
    anon_sym_SEMI,
    STATE(151),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(162),
    1,
    sym_comment,
    STATE(256),
    1,
    sym_set_excep_expr,
    [7245] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_LBRACE,
    ACTIONS(635),
    1,
    anon_sym_COLON,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(631),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7262] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_comment,
    STATE(191),
    1,
    sym_interface_name,
    STATE(192),
    1,
    sym_scoped_name,
    [7281] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(565),
    1,
    anon_sym_LBRACE,
    ACTIONS(567),
    1,
    anon_sym_COLON,
    STATE(165),
    1,
    sym_comment,
    STATE(338),
    1,
    sym_interface_inheritance_spec,
    [7297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(637),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7309] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(639),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7321] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(641),
    2,
    anon_sym_COMMA,
    anon_sym_GT,
    [7335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_RPAREN,
    ACTIONS(645),
    1,
    anon_sym_COMMA,
    STATE(169),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [7349] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(643),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [7363] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(571),
    1,
    anon_sym_COMMA,
    ACTIONS(648),
    1,
    anon_sym_RPAREN,
    STATE(169),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(171),
    1,
    sym_comment,
    [7379] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(625),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [7391] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(650),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [7403] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(571),
    1,
    anon_sym_COMMA,
    ACTIONS(652),
    1,
    anon_sym_RPAREN,
    STATE(169),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(174),
    1,
    sym_comment,
    [7419] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(654),
    1,
    anon_sym_SEMI,
    ACTIONS(656),
    1,
    sym_identifier,
    STATE(175),
    1,
    sym_comment,
    STATE(222),
    1,
    aux_sym_bitfield_repeat1,
    [7435] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_scoped_name,
    STATE(176),
    1,
    sym_comment,
    [7451] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(658),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7463] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(660),
    1,
    anon_sym_RPAREN,
    ACTIONS(662),
    1,
    anon_sym_COMMA,
    STATE(178),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [7477] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(665),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [7489] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(667),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7501] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(669),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    anon_sym_RBRACK,
    [7513] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(671),
    1,
    anon_sym_RPAREN,
    ACTIONS(673),
    1,
    anon_sym_COMMA,
    STATE(178),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(182),
    1,
    sym_comment,
    [7529] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(511),
    1,
    anon_sym_raises,
    ACTIONS(675),
    1,
    anon_sym_SEMI,
    STATE(183),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_raises_expr,
    [7545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(677),
    1,
    anon_sym_SEMI,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    STATE(184),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [7559] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(682),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7571] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(416),
    1,
    anon_sym_COMMA,
    ACTIONS(684),
    1,
    anon_sym_SEMI,
    STATE(184),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(186),
    1,
    sym_comment,
    [7587] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(450),
    1,
    anon_sym_RBRACE,
    ACTIONS(686),
    1,
    anon_sym_COMMA,
    STATE(187),
    1,
    sym_comment,
    STATE(227),
    1,
    aux_sym_enum_dcl_repeat1,
    [7603] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(688),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7615] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(690),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7627] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(692),
    1,
    anon_sym_SEMI,
    ACTIONS(694),
    1,
    anon_sym_COMMA,
    STATE(190),
    1,
    sym_comment,
    STATE(223),
    1,
    aux_sym_any_declarators_repeat1,
    [7643] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(696),
    1,
    anon_sym_LBRACE,
    ACTIONS(698),
    1,
    anon_sym_COMMA,
    STATE(191),
    1,
    sym_comment,
    STATE(225),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [7659] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(700),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [7673] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(702),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7685] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(608),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7697] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    anon_sym_COMMA,
    ACTIONS(704),
    1,
    anon_sym_RPAREN,
    STATE(182),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(195),
    1,
    sym_comment,
    [7713] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(511),
    1,
    anon_sym_raises,
    ACTIONS(706),
    1,
    anon_sym_SEMI,
    STATE(196),
    1,
    sym_comment,
    STATE(370),
    1,
    sym_raises_expr,
    [7729] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(416),
    1,
    anon_sym_COMMA,
    ACTIONS(708),
    1,
    anon_sym_SEMI,
    STATE(184),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(197),
    1,
    sym_comment,
    [7745] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(710),
    1,
    anon_sym_SEMI,
    ACTIONS(712),
    1,
    anon_sym_switch,
    ACTIONS(714),
    1,
    sym_identifier,
    STATE(198),
    1,
    sym_comment,
    [7761] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(716),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7773] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    anon_sym_COMMA,
    ACTIONS(718),
    1,
    anon_sym_RBRACE,
    STATE(200),
    1,
    sym_comment,
    STATE(209),
    1,
    aux_sym_enum_dcl_repeat1,
    [7789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(720),
    1,
    anon_sym_LBRACE,
    ACTIONS(722),
    1,
    anon_sym_COMMA,
    STATE(201),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [7803] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(641),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7815] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(94),
    1,
    sym_simple_declarator,
    STATE(203),
    1,
    sym_comment,
    STATE(299),
    1,
    sym_attr_declarator,
    [7831] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(727),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7843] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(729),
    1,
    anon_sym_RBRACE,
    ACTIONS(731),
    1,
    anon_sym_COMMA,
    STATE(205),
    1,
    sym_comment,
    STATE(211),
    1,
    aux_sym_interface_body_repeat1,
    [7859] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(733),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(735),
    1,
    anon_sym_SEMI,
    ACTIONS(737),
    1,
    sym_identifier,
    STATE(207),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [7885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(740),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7897] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(742),
    1,
    anon_sym_RBRACE,
    ACTIONS(744),
    1,
    anon_sym_COMMA,
    STATE(209),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [7911] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_scoped_name,
    [7927] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_RBRACE,
    ACTIONS(749),
    1,
    anon_sym_COMMA,
    STATE(211),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [7941] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(212),
    1,
    sym_comment,
    STATE(236),
    1,
    sym_scoped_name,
    [7957] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(752),
    1,
    anon_sym_SEMI,
    ACTIONS(754),
    1,
    anon_sym_default,
    STATE(213),
    1,
    sym_comment,
    STATE(347),
    1,
    sym_default,
    [7973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(756),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(758),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7997] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    anon_sym_XCDR,
    ACTIONS(617),
    1,
    anon_sym_XCDR2,
    STATE(157),
    1,
    aux_sym_data_representation_repeat1,
    STATE(216),
    1,
    sym_comment,
    [8013] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(754),
    1,
    anon_sym_default,
    ACTIONS(760),
    1,
    anon_sym_SEMI,
    STATE(217),
    1,
    sym_comment,
    STATE(289),
    1,
    sym_default,
    [8029] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(764),
    1,
    anon_sym_XCDR,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(762),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [8043] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    anon_sym_COMMA,
    ACTIONS(766),
    1,
    anon_sym_RBRACE,
    STATE(200),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(219),
    1,
    sym_comment,
    [8059] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(694),
    1,
    anon_sym_COMMA,
    ACTIONS(768),
    1,
    anon_sym_SEMI,
    STATE(190),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(220),
    1,
    sym_comment,
    [8075] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(731),
    1,
    anon_sym_COMMA,
    ACTIONS(770),
    1,
    anon_sym_RBRACE,
    STATE(205),
    1,
    aux_sym_interface_body_repeat1,
    STATE(221),
    1,
    sym_comment,
    [8091] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(656),
    1,
    sym_identifier,
    ACTIONS(772),
    1,
    anon_sym_SEMI,
    STATE(207),
    1,
    aux_sym_bitfield_repeat1,
    STATE(222),
    1,
    sym_comment,
    [8107] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    anon_sym_SEMI,
    ACTIONS(776),
    1,
    anon_sym_COMMA,
    STATE(223),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [8121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(63),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(224),
    1,
    sym_comment,
    STATE(267),
    1,
    sym_scoped_name,
    [8137] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    anon_sym_COMMA,
    ACTIONS(779),
    1,
    anon_sym_LBRACE,
    STATE(201),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(225),
    1,
    sym_comment,
    [8153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(781),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [8165] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    anon_sym_COMMA,
    ACTIONS(766),
    1,
    anon_sym_RBRACE,
    STATE(209),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(227),
    1,
    sym_comment,
    [8181] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(783),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [8193] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_simple_declarator,
    STATE(229),
    1,
    sym_comment,
    STATE(324),
    1,
    sym_readonly_attr_declarator,
    [8209] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(785),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8221] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(787),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8232] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_comment,
    STATE(259),
    1,
    sym_simple_declarator,
    [8245] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(789),
    1,
    anon_sym_LBRACE,
    ACTIONS(791),
    1,
    anon_sym_COLON,
    STATE(233),
    1,
    sym_comment,
    [8258] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(234),
    1,
    sym_comment,
    STATE(341),
    1,
    sym_simple_declarator,
    [8271] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(793),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8282] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    ACTIONS(795),
    1,
    anon_sym_LBRACE,
    STATE(236),
    1,
    sym_comment,
    [8295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(797),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8306] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(799),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(801),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8328] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(803),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8339] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(805),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(807),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8361] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(809),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(811),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8383] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(813),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [8394] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(660),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [8405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8416] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(391),
    1,
    anon_sym_interface,
    STATE(248),
    1,
    sym_comment,
    STATE(307),
    1,
    sym_interface_header,
    [8429] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(817),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8440] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(819),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8451] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    ACTIONS(821),
    1,
    anon_sym_RPAREN,
    STATE(251),
    1,
    sym_comment,
    [8464] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(823),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(253),
    1,
    sym_comment,
    ACTIONS(825),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8486] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(245),
    1,
    sym_simple_declarator,
    STATE(254),
    1,
    sym_comment,
    [8499] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(255),
    1,
    sym_comment,
    ACTIONS(827),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8510] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(829),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8521] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(831),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8532] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(833),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8543] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [8554] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(835),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(837),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8576] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(839),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(841),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8598] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(843),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8609] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(845),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8620] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(847),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [8631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    ACTIONS(849),
    1,
    anon_sym_LBRACE,
    STATE(267),
    1,
    sym_comment,
    [8644] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_LPAREN,
    STATE(257),
    1,
    sym_exception_list,
    STATE(268),
    1,
    sym_comment,
    [8657] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_LPAREN,
    STATE(258),
    1,
    sym_exception_list,
    STATE(269),
    1,
    sym_comment,
    [8670] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(853),
    1,
    anon_sym_LBRACE,
    ACTIONS(855),
    1,
    anon_sym_COLON,
    STATE(270),
    1,
    sym_comment,
    [8683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(857),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8694] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(774),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [8705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(720),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [8716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(859),
    1,
    anon_sym_COMMA,
    ACTIONS(861),
    1,
    anon_sym_GT,
    STATE(274),
    1,
    sym_comment,
    [8729] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(863),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8740] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(865),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(869),
    1,
    anon_sym_GT,
    STATE(277),
    1,
    sym_comment,
    [8764] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(391),
    1,
    anon_sym_interface,
    STATE(278),
    1,
    sym_comment,
    STATE(326),
    1,
    sym_interface_header,
    [8777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8788] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(871),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8799] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(742),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [8810] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(873),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8821] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    ACTIONS(875),
    1,
    anon_sym_LBRACE,
    STATE(283),
    1,
    sym_comment,
    [8834] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    anon_sym_EQ,
    STATE(284),
    1,
    sym_comment,
    [8844] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(879),
    1,
    anon_sym_SEMI,
    STATE(285),
    1,
    sym_comment,
    [8854] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(286),
    1,
    sym_comment,
    [8864] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(883),
    1,
    aux_sym_bit_bound_token1,
    STATE(287),
    1,
    sym_comment,
    [8874] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(885),
    1,
    sym_identifier,
    STATE(288),
    1,
    sym_comment,
    [8884] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(887),
    1,
    anon_sym_SEMI,
    STATE(289),
    1,
    sym_comment,
    [8894] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(885),
    1,
    sym_identifier,
    STATE(290),
    1,
    sym_comment,
    [8904] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(889),
    1,
    anon_sym_LBRACE,
    STATE(291),
    1,
    sym_comment,
    [8914] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(891),
    1,
    sym_identifier,
    STATE(292),
    1,
    sym_comment,
    [8924] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(893),
    1,
    anon_sym_SEMI,
    STATE(293),
    1,
    sym_comment,
    [8934] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(895),
    1,
    sym_identifier,
    STATE(294),
    1,
    sym_comment,
    [8944] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(897),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(295),
    1,
    sym_comment,
    [8954] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(899),
    1,
    anon_sym_SEMI,
    STATE(296),
    1,
    sym_comment,
    [8964] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(901),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    sym_comment,
    [8974] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(903),
    1,
    anon_sym_LBRACE,
    STATE(298),
    1,
    sym_comment,
    [8984] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(905),
    1,
    anon_sym_SEMI,
    STATE(299),
    1,
    sym_comment,
    [8994] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(907),
    1,
    anon_sym_SEMI,
    STATE(300),
    1,
    sym_comment,
    [9004] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(909),
    1,
    anon_sym_name,
    STATE(301),
    1,
    sym_comment,
    [9014] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(911),
    1,
    anon_sym_SEMI,
    STATE(302),
    1,
    sym_comment,
    [9024] = 3,
    ACTIONS(913),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(915),
    1,
    aux_sym_comment_token1,
    STATE(303),
    1,
    sym_comment,
    [9034] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    sym_identifier,
    STATE(304),
    1,
    sym_comment,
    [9044] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(919),
    1,
    anon_sym_LPAREN,
    STATE(305),
    1,
    sym_comment,
    [9054] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(921),
    1,
    anon_sym_name,
    STATE(306),
    1,
    sym_comment,
    [9064] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_LBRACE,
    STATE(307),
    1,
    sym_comment,
    [9074] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    anon_sym_SQUOTE,
    STATE(308),
    1,
    sym_comment,
    [9084] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(309),
    1,
    sym_comment,
    [9094] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_SEMI,
    STATE(310),
    1,
    sym_comment,
    [9104] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(931),
    1,
    anon_sym_RPAREN,
    STATE(311),
    1,
    sym_comment,
    [9114] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(641),
    1,
    sym_identifier,
    STATE(312),
    1,
    sym_comment,
    [9124] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(933),
    1,
    sym_identifier,
    STATE(313),
    1,
    sym_comment,
    [9134] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    anon_sym_LT,
    STATE(314),
    1,
    sym_comment,
    [9144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(937),
    1,
    anon_sym_RPAREN,
    STATE(315),
    1,
    sym_comment,
    [9154] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_GT,
    STATE(316),
    1,
    sym_comment,
    [9164] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(941),
    1,
    anon_sym_RPAREN,
    STATE(317),
    1,
    sym_comment,
    [9174] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(943),
    1,
    anon_sym_LT,
    STATE(318),
    1,
    sym_comment,
    [9184] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_SEMI,
    STATE(319),
    1,
    sym_comment,
    [9194] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(947),
    1,
    anon_sym_SEMI,
    STATE(320),
    1,
    sym_comment,
    [9204] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(949),
    1,
    anon_sym_LT,
    STATE(321),
    1,
    sym_comment,
    [9214] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    sym_identifier,
    STATE(322),
    1,
    sym_comment,
    [9224] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(951),
    1,
    anon_sym_LPAREN,
    STATE(323),
    1,
    sym_comment,
    [9234] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(953),
    1,
    anon_sym_SEMI,
    STATE(324),
    1,
    sym_comment,
    [9244] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(955),
    1,
    anon_sym_RBRACK,
    STATE(325),
    1,
    sym_comment,
    [9254] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(957),
    1,
    anon_sym_LBRACE,
    STATE(326),
    1,
    sym_comment,
    [9264] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(959),
    1,
    anon_sym_SEMI,
    STATE(327),
    1,
    sym_comment,
    [9274] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(961),
    1,
    anon_sym_LPAREN,
    STATE(328),
    1,
    sym_comment,
    [9284] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(708),
    1,
    anon_sym_SEMI,
    STATE(329),
    1,
    sym_comment,
    [9294] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(963),
    1,
    sym_identifier,
    STATE(330),
    1,
    sym_comment,
    [9304] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(629),
    1,
    anon_sym_SEMI,
    STATE(331),
    1,
    sym_comment,
    [9314] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(965),
    1,
    anon_sym_bitmask,
    STATE(332),
    1,
    sym_comment,
    [9324] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    anon_sym_SEMI,
    STATE(333),
    1,
    sym_comment,
    [9334] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(969),
    1,
    anon_sym_LBRACE,
    STATE(334),
    1,
    sym_comment,
    [9344] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(971),
    1,
    anon_sym_RPAREN,
    STATE(335),
    1,
    sym_comment,
    [9354] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(973),
    1,
    aux_sym_char_literal_token1,
    STATE(336),
    1,
    sym_comment,
    [9364] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(975),
    1,
    anon_sym_LBRACE,
    STATE(337),
    1,
    sym_comment,
    [9374] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(977),
    1,
    anon_sym_LBRACE,
    STATE(338),
    1,
    sym_comment,
    [9384] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_LBRACE,
    STATE(339),
    1,
    sym_comment,
    [9394] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(981),
    1,
    anon_sym_SEMI,
    STATE(340),
    1,
    sym_comment,
    [9404] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(983),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    [9414] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(985),
    1,
    aux_sym_char_literal_token1,
    STATE(342),
    1,
    sym_comment,
    [9424] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(987),
    1,
    anon_sym_LBRACE,
    STATE(343),
    1,
    sym_comment,
    [9434] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(989),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [9444] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(321),
    1,
    sym_identifier,
    STATE(345),
    1,
    sym_comment,
    [9454] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    anon_sym_bitmask,
    STATE(346),
    1,
    sym_comment,
    [9464] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(993),
    1,
    anon_sym_SEMI,
    STATE(347),
    1,
    sym_comment,
    [9474] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(995),
    1,
    anon_sym_RBRACE,
    STATE(348),
    1,
    sym_comment,
    [9484] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(143),
    1,
    anon_sym_RBRACE,
    STATE(349),
    1,
    sym_comment,
    [9494] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(997),
    1,
    anon_sym_LBRACE,
    STATE(350),
    1,
    sym_comment,
    [9504] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(999),
    1,
    anon_sym_SEMI,
    STATE(351),
    1,
    sym_comment,
    [9514] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1001),
    1,
    anon_sym_EQ,
    STATE(352),
    1,
    sym_comment,
    [9524] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    anon_sym_DQUOTE,
    STATE(353),
    1,
    sym_comment,
    [9534] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1005),
    1,
    anon_sym_LBRACE,
    STATE(354),
    1,
    sym_comment,
    [9544] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1007),
    1,
    anon_sym_SEMI,
    STATE(355),
    1,
    sym_comment,
    [9554] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    anon_sym_SEMI,
    STATE(356),
    1,
    sym_comment,
    [9564] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1011),
    1,
    ts_builtin_sym_end,
    STATE(357),
    1,
    sym_comment,
    [9574] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1013),
    1,
    aux_sym_char_literal_token1,
    STATE(358),
    1,
    sym_comment,
    [9584] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1015),
    1,
    anon_sym_GT,
    STATE(359),
    1,
    sym_comment,
    [9594] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1017),
    1,
    anon_sym_LPAREN,
    STATE(360),
    1,
    sym_comment,
    [9604] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(684),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [9614] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1019),
    1,
    anon_sym_SQUOTE,
    STATE(362),
    1,
    sym_comment,
    [9624] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1021),
    1,
    anon_sym_RPAREN,
    STATE(363),
    1,
    sym_comment,
    [9634] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1023),
    1,
    anon_sym_LPAREN,
    STATE(364),
    1,
    sym_comment,
    [9644] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1025),
    1,
    anon_sym_GT,
    STATE(365),
    1,
    sym_comment,
    [9654] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1027),
    1,
    anon_sym_RPAREN,
    STATE(366),
    1,
    sym_comment,
    [9664] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_EQ,
    STATE(367),
    1,
    sym_comment,
    [9674] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1031),
    1,
    anon_sym_RPAREN,
    STATE(368),
    1,
    sym_comment,
    [9684] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1033),
    1,
    anon_sym_COMMA,
    STATE(369),
    1,
    sym_comment,
    [9694] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(675),
    1,
    anon_sym_SEMI,
    STATE(370),
    1,
    sym_comment,
    [9704] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1035),
    1,
    anon_sym_COMMA,
    STATE(371),
    1,
    sym_comment,
    [9714] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1037),
    1,
    anon_sym_LPAREN,
    STATE(372),
    1,
    sym_comment,
    [9724] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1039),
    1,
    anon_sym_GT,
    STATE(373),
    1,
    sym_comment,
    [9734] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1041),
    1,
    anon_sym_SEMI,
    STATE(374),
    1,
    sym_comment,
    [9744] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_RPAREN,
    STATE(375),
    1,
    sym_comment,
    [9754] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1043),
    1,
    anon_sym_LPAREN,
    STATE(376),
    1,
    sym_comment,
    [9764] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1045),
    1,
    anon_sym_LPAREN,
    STATE(377),
    1,
    sym_comment,
    [9774] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_RPAREN,
    STATE(378),
    1,
    sym_comment,
    [9784] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1049),
    1,
    anon_sym_COLON,
    STATE(379),
    1,
    sym_comment,
    [9794] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    anon_sym_enum,
    STATE(380),
    1,
    sym_comment,
    [9804] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [9814] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1055),
    1,
    sym_identifier,
    STATE(382),
    1,
    sym_comment,
    [9824] = 3,
    ACTIONS(913),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1057),
    1,
    aux_sym_predefine_token1,
    STATE(383),
    1,
    sym_comment,
    [9834] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1059),
    1,
    anon_sym_GT,
    STATE(384),
    1,
    sym_comment,
    [9844] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1061),
    1,
    anon_sym_GT,
    STATE(385),
    1,
    sym_comment,
    [9854] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1063),
    1,
    anon_sym_GT,
    STATE(386),
    1,
    sym_comment,
    [9864] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1065),
    1,
    anon_sym_LBRACE,
    STATE(387),
    1,
    sym_comment,
    [9874] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1067),
    1,
    anon_sym_SEMI,
    STATE(388),
    1,
    sym_comment,
    [9884] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1069),
    1,
    sym_identifier,
    STATE(389),
    1,
    sym_comment,
    [9894] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1071),
    1,
    sym_identifier,
    STATE(390),
    1,
    sym_comment,
    [9904] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1073),
    1,
    anon_sym_SEMI,
    STATE(391),
    1,
    sym_comment,
    [9914] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_SEMI,
    STATE(392),
    1,
    sym_comment,
    [9924] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(393),
    1,
    sym_comment,
    [9934] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    sym_identifier,
    STATE(394),
    1,
    sym_comment,
    [9944] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    anon_sym_attribute,
    STATE(395),
    1,
    sym_comment,
    [9954] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(396),
    1,
    sym_comment,
    [9964] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1085),
    1,
    anon_sym_COLON,
    STATE(397),
    1,
    sym_comment,
    [9974] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1087),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    [9984] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    anon_sym_enum,
    STATE(399),
    1,
    sym_comment,
    [9994] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(145),
    1,
    anon_sym_RBRACE,
    STATE(400),
    1,
    sym_comment,
    [10004] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1091),
    1,
    sym_identifier,
    STATE(401),
    1,
    sym_comment,
    [10014] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1093),
    1,
    anon_sym_SEMI,
    STATE(402),
    1,
    sym_comment,
    [10024] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1095),
    1,
    anon_sym_SEMI,
    STATE(403),
    1,
    sym_comment,
    [10034] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1097),
    1,
    anon_sym_SEMI,
    STATE(404),
    1,
    sym_comment,
    [10044] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1099),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    [10054] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1101),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [10064] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1103),
    1,
    anon_sym_LT,
    STATE(407),
    1,
    sym_comment,
    [10074] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1105),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [10084] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1107),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_comment,
    [10094] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1109),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [10104] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1111),
    1,
    anon_sym_SEMI,
    STATE(411),
    1,
    sym_comment,
    [10114] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1113),
    1,
    anon_sym_SEMI,
    STATE(412),
    1,
    sym_comment,
    [10124] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1115),
    1,
    aux_sym_bit_bound_token1,
    STATE(413),
    1,
    sym_comment,
    [10134] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1117),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [10144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1119),
    1,
    anon_sym_SEMI,
    STATE(415),
    1,
    sym_comment,
    [10154] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1121),
    1,
    anon_sym_SQUOTE,
    STATE(416),
    1,
    sym_comment,
    [10164] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1123),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [10174] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1125),
    1,
    sym_identifier,
    STATE(418),
    1,
    sym_comment,
    [10184] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1127),
    1,
    aux_sym_char_literal_token1,
    STATE(419),
    1,
    sym_comment,
    [10194] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1129),
    1,
    sym_identifier,
    STATE(420),
    1,
    sym_comment,
    [10204] = 1,
    ACTIONS(1131),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 115,
    [SMALL_STATE(4)] = 230,
    [SMALL_STATE(5)] = 345,
    [SMALL_STATE(6)] = 460,
    [SMALL_STATE(7)] = 575,
    [SMALL_STATE(8)] = 690,
    [SMALL_STATE(9)] = 805,
    [SMALL_STATE(10)] = 920,
    [SMALL_STATE(11)] = 1035,
    [SMALL_STATE(12)] = 1150,
    [SMALL_STATE(13)] = 1263,
    [SMALL_STATE(14)] = 1377,
    [SMALL_STATE(15)] = 1483,
    [SMALL_STATE(16)] = 1594,
    [SMALL_STATE(17)] = 1705,
    [SMALL_STATE(18)] = 1816,
    [SMALL_STATE(19)] = 1921,
    [SMALL_STATE(20)] = 2047,
    [SMALL_STATE(21)] = 2174,
    [SMALL_STATE(22)] = 2301,
    [SMALL_STATE(23)] = 2428,
    [SMALL_STATE(24)] = 2496,
    [SMALL_STATE(25)] = 2584,
    [SMALL_STATE(26)] = 2669,
    [SMALL_STATE(27)] = 2751,
    [SMALL_STATE(28)] = 2833,
    [SMALL_STATE(29)] = 2915,
    [SMALL_STATE(30)] = 2997,
    [SMALL_STATE(31)] = 3079,
    [SMALL_STATE(32)] = 3134,
    [SMALL_STATE(33)] = 3189,
    [SMALL_STATE(34)] = 3244,
    [SMALL_STATE(35)] = 3299,
    [SMALL_STATE(36)] = 3354,
    [SMALL_STATE(37)] = 3408,
    [SMALL_STATE(38)] = 3462,
    [SMALL_STATE(39)] = 3516,
    [SMALL_STATE(40)] = 3570,
    [SMALL_STATE(41)] = 3633,
    [SMALL_STATE(42)] = 3679,
    [SMALL_STATE(43)] = 3725,
    [SMALL_STATE(44)] = 3771,
    [SMALL_STATE(45)] = 3830,
    [SMALL_STATE(46)] = 3872,
    [SMALL_STATE(47)] = 3904,
    [SMALL_STATE(48)] = 3976,
    [SMALL_STATE(49)] = 4008,
    [SMALL_STATE(50)] = 4080,
    [SMALL_STATE(51)] = 4152,
    [SMALL_STATE(52)] = 4184,
    [SMALL_STATE(53)] = 4216,
    [SMALL_STATE(54)] = 4288,
    [SMALL_STATE(55)] = 4320,
    [SMALL_STATE(56)] = 4392,
    [SMALL_STATE(57)] = 4464,
    [SMALL_STATE(58)] = 4536,
    [SMALL_STATE(59)] = 4568,
    [SMALL_STATE(60)] = 4637,
    [SMALL_STATE(61)] = 4706,
    [SMALL_STATE(62)] = 4775,
    [SMALL_STATE(63)] = 4844,
    [SMALL_STATE(64)] = 4913,
    [SMALL_STATE(65)] = 4976,
    [SMALL_STATE(66)] = 5036,
    [SMALL_STATE(67)] = 5093,
    [SMALL_STATE(68)] = 5147,
    [SMALL_STATE(69)] = 5175,
    [SMALL_STATE(70)] = 5205,
    [SMALL_STATE(71)] = 5233,
    [SMALL_STATE(72)] = 5263,
    [SMALL_STATE(73)] = 5290,
    [SMALL_STATE(74)] = 5317,
    [SMALL_STATE(75)] = 5344,
    [SMALL_STATE(76)] = 5371,
    [SMALL_STATE(77)] = 5398,
    [SMALL_STATE(78)] = 5429,
    [SMALL_STATE(79)] = 5480,
    [SMALL_STATE(80)] = 5507,
    [SMALL_STATE(81)] = 5538,
    [SMALL_STATE(82)] = 5565,
    [SMALL_STATE(83)] = 5592,
    [SMALL_STATE(84)] = 5619,
    [SMALL_STATE(85)] = 5667,
    [SMALL_STATE(86)] = 5693,
    [SMALL_STATE(87)] = 5719,
    [SMALL_STATE(88)] = 5743,
    [SMALL_STATE(89)] = 5767,
    [SMALL_STATE(90)] = 5802,
    [SMALL_STATE(91)] = 5837,
    [SMALL_STATE(92)] = 5857,
    [SMALL_STATE(93)] = 5877,
    [SMALL_STATE(94)] = 5905,
    [SMALL_STATE(95)] = 5936,
    [SMALL_STATE(96)] = 5955,
    [SMALL_STATE(97)] = 5974,
    [SMALL_STATE(98)] = 5992,
    [SMALL_STATE(99)] = 6018,
    [SMALL_STATE(100)] = 6043,
    [SMALL_STATE(101)] = 6068,
    [SMALL_STATE(102)] = 6093,
    [SMALL_STATE(103)] = 6110,
    [SMALL_STATE(104)] = 6135,
    [SMALL_STATE(105)] = 6158,
    [SMALL_STATE(106)] = 6179,
    [SMALL_STATE(107)] = 6194,
    [SMALL_STATE(108)] = 6217,
    [SMALL_STATE(109)] = 6238,
    [SMALL_STATE(110)] = 6263,
    [SMALL_STATE(111)] = 6282,
    [SMALL_STATE(112)] = 6307,
    [SMALL_STATE(113)] = 6330,
    [SMALL_STATE(114)] = 6355,
    [SMALL_STATE(115)] = 6380,
    [SMALL_STATE(116)] = 6405,
    [SMALL_STATE(117)] = 6430,
    [SMALL_STATE(118)] = 6452,
    [SMALL_STATE(119)] = 6474,
    [SMALL_STATE(120)] = 6488,
    [SMALL_STATE(121)] = 6508,
    [SMALL_STATE(122)] = 6528,
    [SMALL_STATE(123)] = 6550,
    [SMALL_STATE(124)] = 6564,
    [SMALL_STATE(125)] = 6578,
    [SMALL_STATE(126)] = 6598,
    [SMALL_STATE(127)] = 6612,
    [SMALL_STATE(128)] = 6632,
    [SMALL_STATE(129)] = 6654,
    [SMALL_STATE(130)] = 6674,
    [SMALL_STATE(131)] = 6696,
    [SMALL_STATE(132)] = 6710,
    [SMALL_STATE(133)] = 6732,
    [SMALL_STATE(134)] = 6752,
    [SMALL_STATE(135)] = 6766,
    [SMALL_STATE(136)] = 6788,
    [SMALL_STATE(137)] = 6805,
    [SMALL_STATE(138)] = 6822,
    [SMALL_STATE(139)] = 6835,
    [SMALL_STATE(140)] = 6852,
    [SMALL_STATE(141)] = 6871,
    [SMALL_STATE(142)] = 6890,
    [SMALL_STATE(143)] = 6907,
    [SMALL_STATE(144)] = 6922,
    [SMALL_STATE(145)] = 6935,
    [SMALL_STATE(146)] = 6948,
    [SMALL_STATE(147)] = 6965,
    [SMALL_STATE(148)] = 6984,
    [SMALL_STATE(149)] = 7003,
    [SMALL_STATE(150)] = 7022,
    [SMALL_STATE(151)] = 7039,
    [SMALL_STATE(152)] = 7058,
    [SMALL_STATE(153)] = 7077,
    [SMALL_STATE(154)] = 7090,
    [SMALL_STATE(155)] = 7109,
    [SMALL_STATE(156)] = 7128,
    [SMALL_STATE(157)] = 7143,
    [SMALL_STATE(158)] = 7162,
    [SMALL_STATE(159)] = 7179,
    [SMALL_STATE(160)] = 7196,
    [SMALL_STATE(161)] = 7211,
    [SMALL_STATE(162)] = 7226,
    [SMALL_STATE(163)] = 7245,
    [SMALL_STATE(164)] = 7262,
    [SMALL_STATE(165)] = 7281,
    [SMALL_STATE(166)] = 7297,
    [SMALL_STATE(167)] = 7309,
    [SMALL_STATE(168)] = 7321,
    [SMALL_STATE(169)] = 7335,
    [SMALL_STATE(170)] = 7349,
    [SMALL_STATE(171)] = 7363,
    [SMALL_STATE(172)] = 7379,
    [SMALL_STATE(173)] = 7391,
    [SMALL_STATE(174)] = 7403,
    [SMALL_STATE(175)] = 7419,
    [SMALL_STATE(176)] = 7435,
    [SMALL_STATE(177)] = 7451,
    [SMALL_STATE(178)] = 7463,
    [SMALL_STATE(179)] = 7477,
    [SMALL_STATE(180)] = 7489,
    [SMALL_STATE(181)] = 7501,
    [SMALL_STATE(182)] = 7513,
    [SMALL_STATE(183)] = 7529,
    [SMALL_STATE(184)] = 7545,
    [SMALL_STATE(185)] = 7559,
    [SMALL_STATE(186)] = 7571,
    [SMALL_STATE(187)] = 7587,
    [SMALL_STATE(188)] = 7603,
    [SMALL_STATE(189)] = 7615,
    [SMALL_STATE(190)] = 7627,
    [SMALL_STATE(191)] = 7643,
    [SMALL_STATE(192)] = 7659,
    [SMALL_STATE(193)] = 7673,
    [SMALL_STATE(194)] = 7685,
    [SMALL_STATE(195)] = 7697,
    [SMALL_STATE(196)] = 7713,
    [SMALL_STATE(197)] = 7729,
    [SMALL_STATE(198)] = 7745,
    [SMALL_STATE(199)] = 7761,
    [SMALL_STATE(200)] = 7773,
    [SMALL_STATE(201)] = 7789,
    [SMALL_STATE(202)] = 7803,
    [SMALL_STATE(203)] = 7815,
    [SMALL_STATE(204)] = 7831,
    [SMALL_STATE(205)] = 7843,
    [SMALL_STATE(206)] = 7859,
    [SMALL_STATE(207)] = 7871,
    [SMALL_STATE(208)] = 7885,
    [SMALL_STATE(209)] = 7897,
    [SMALL_STATE(210)] = 7911,
    [SMALL_STATE(211)] = 7927,
    [SMALL_STATE(212)] = 7941,
    [SMALL_STATE(213)] = 7957,
    [SMALL_STATE(214)] = 7973,
    [SMALL_STATE(215)] = 7985,
    [SMALL_STATE(216)] = 7997,
    [SMALL_STATE(217)] = 8013,
    [SMALL_STATE(218)] = 8029,
    [SMALL_STATE(219)] = 8043,
    [SMALL_STATE(220)] = 8059,
    [SMALL_STATE(221)] = 8075,
    [SMALL_STATE(222)] = 8091,
    [SMALL_STATE(223)] = 8107,
    [SMALL_STATE(224)] = 8121,
    [SMALL_STATE(225)] = 8137,
    [SMALL_STATE(226)] = 8153,
    [SMALL_STATE(227)] = 8165,
    [SMALL_STATE(228)] = 8181,
    [SMALL_STATE(229)] = 8193,
    [SMALL_STATE(230)] = 8209,
    [SMALL_STATE(231)] = 8221,
    [SMALL_STATE(232)] = 8232,
    [SMALL_STATE(233)] = 8245,
    [SMALL_STATE(234)] = 8258,
    [SMALL_STATE(235)] = 8271,
    [SMALL_STATE(236)] = 8282,
    [SMALL_STATE(237)] = 8295,
    [SMALL_STATE(238)] = 8306,
    [SMALL_STATE(239)] = 8317,
    [SMALL_STATE(240)] = 8328,
    [SMALL_STATE(241)] = 8339,
    [SMALL_STATE(242)] = 8350,
    [SMALL_STATE(243)] = 8361,
    [SMALL_STATE(244)] = 8372,
    [SMALL_STATE(245)] = 8383,
    [SMALL_STATE(246)] = 8394,
    [SMALL_STATE(247)] = 8405,
    [SMALL_STATE(248)] = 8416,
    [SMALL_STATE(249)] = 8429,
    [SMALL_STATE(250)] = 8440,
    [SMALL_STATE(251)] = 8451,
    [SMALL_STATE(252)] = 8464,
    [SMALL_STATE(253)] = 8475,
    [SMALL_STATE(254)] = 8486,
    [SMALL_STATE(255)] = 8499,
    [SMALL_STATE(256)] = 8510,
    [SMALL_STATE(257)] = 8521,
    [SMALL_STATE(258)] = 8532,
    [SMALL_STATE(259)] = 8543,
    [SMALL_STATE(260)] = 8554,
    [SMALL_STATE(261)] = 8565,
    [SMALL_STATE(262)] = 8576,
    [SMALL_STATE(263)] = 8587,
    [SMALL_STATE(264)] = 8598,
    [SMALL_STATE(265)] = 8609,
    [SMALL_STATE(266)] = 8620,
    [SMALL_STATE(267)] = 8631,
    [SMALL_STATE(268)] = 8644,
    [SMALL_STATE(269)] = 8657,
    [SMALL_STATE(270)] = 8670,
    [SMALL_STATE(271)] = 8683,
    [SMALL_STATE(272)] = 8694,
    [SMALL_STATE(273)] = 8705,
    [SMALL_STATE(274)] = 8716,
    [SMALL_STATE(275)] = 8729,
    [SMALL_STATE(276)] = 8740,
    [SMALL_STATE(277)] = 8751,
    [SMALL_STATE(278)] = 8764,
    [SMALL_STATE(279)] = 8777,
    [SMALL_STATE(280)] = 8788,
    [SMALL_STATE(281)] = 8799,
    [SMALL_STATE(282)] = 8810,
    [SMALL_STATE(283)] = 8821,
    [SMALL_STATE(284)] = 8834,
    [SMALL_STATE(285)] = 8844,
    [SMALL_STATE(286)] = 8854,
    [SMALL_STATE(287)] = 8864,
    [SMALL_STATE(288)] = 8874,
    [SMALL_STATE(289)] = 8884,
    [SMALL_STATE(290)] = 8894,
    [SMALL_STATE(291)] = 8904,
    [SMALL_STATE(292)] = 8914,
    [SMALL_STATE(293)] = 8924,
    [SMALL_STATE(294)] = 8934,
    [SMALL_STATE(295)] = 8944,
    [SMALL_STATE(296)] = 8954,
    [SMALL_STATE(297)] = 8964,
    [SMALL_STATE(298)] = 8974,
    [SMALL_STATE(299)] = 8984,
    [SMALL_STATE(300)] = 8994,
    [SMALL_STATE(301)] = 9004,
    [SMALL_STATE(302)] = 9014,
    [SMALL_STATE(303)] = 9024,
    [SMALL_STATE(304)] = 9034,
    [SMALL_STATE(305)] = 9044,
    [SMALL_STATE(306)] = 9054,
    [SMALL_STATE(307)] = 9064,
    [SMALL_STATE(308)] = 9074,
    [SMALL_STATE(309)] = 9084,
    [SMALL_STATE(310)] = 9094,
    [SMALL_STATE(311)] = 9104,
    [SMALL_STATE(312)] = 9114,
    [SMALL_STATE(313)] = 9124,
    [SMALL_STATE(314)] = 9134,
    [SMALL_STATE(315)] = 9144,
    [SMALL_STATE(316)] = 9154,
    [SMALL_STATE(317)] = 9164,
    [SMALL_STATE(318)] = 9174,
    [SMALL_STATE(319)] = 9184,
    [SMALL_STATE(320)] = 9194,
    [SMALL_STATE(321)] = 9204,
    [SMALL_STATE(322)] = 9214,
    [SMALL_STATE(323)] = 9224,
    [SMALL_STATE(324)] = 9234,
    [SMALL_STATE(325)] = 9244,
    [SMALL_STATE(326)] = 9254,
    [SMALL_STATE(327)] = 9264,
    [SMALL_STATE(328)] = 9274,
    [SMALL_STATE(329)] = 9284,
    [SMALL_STATE(330)] = 9294,
    [SMALL_STATE(331)] = 9304,
    [SMALL_STATE(332)] = 9314,
    [SMALL_STATE(333)] = 9324,
    [SMALL_STATE(334)] = 9334,
    [SMALL_STATE(335)] = 9344,
    [SMALL_STATE(336)] = 9354,
    [SMALL_STATE(337)] = 9364,
    [SMALL_STATE(338)] = 9374,
    [SMALL_STATE(339)] = 9384,
    [SMALL_STATE(340)] = 9394,
    [SMALL_STATE(341)] = 9404,
    [SMALL_STATE(342)] = 9414,
    [SMALL_STATE(343)] = 9424,
    [SMALL_STATE(344)] = 9434,
    [SMALL_STATE(345)] = 9444,
    [SMALL_STATE(346)] = 9454,
    [SMALL_STATE(347)] = 9464,
    [SMALL_STATE(348)] = 9474,
    [SMALL_STATE(349)] = 9484,
    [SMALL_STATE(350)] = 9494,
    [SMALL_STATE(351)] = 9504,
    [SMALL_STATE(352)] = 9514,
    [SMALL_STATE(353)] = 9524,
    [SMALL_STATE(354)] = 9534,
    [SMALL_STATE(355)] = 9544,
    [SMALL_STATE(356)] = 9554,
    [SMALL_STATE(357)] = 9564,
    [SMALL_STATE(358)] = 9574,
    [SMALL_STATE(359)] = 9584,
    [SMALL_STATE(360)] = 9594,
    [SMALL_STATE(361)] = 9604,
    [SMALL_STATE(362)] = 9614,
    [SMALL_STATE(363)] = 9624,
    [SMALL_STATE(364)] = 9634,
    [SMALL_STATE(365)] = 9644,
    [SMALL_STATE(366)] = 9654,
    [SMALL_STATE(367)] = 9664,
    [SMALL_STATE(368)] = 9674,
    [SMALL_STATE(369)] = 9684,
    [SMALL_STATE(370)] = 9694,
    [SMALL_STATE(371)] = 9704,
    [SMALL_STATE(372)] = 9714,
    [SMALL_STATE(373)] = 9724,
    [SMALL_STATE(374)] = 9734,
    [SMALL_STATE(375)] = 9744,
    [SMALL_STATE(376)] = 9754,
    [SMALL_STATE(377)] = 9764,
    [SMALL_STATE(378)] = 9774,
    [SMALL_STATE(379)] = 9784,
    [SMALL_STATE(380)] = 9794,
    [SMALL_STATE(381)] = 9804,
    [SMALL_STATE(382)] = 9814,
    [SMALL_STATE(383)] = 9824,
    [SMALL_STATE(384)] = 9834,
    [SMALL_STATE(385)] = 9844,
    [SMALL_STATE(386)] = 9854,
    [SMALL_STATE(387)] = 9864,
    [SMALL_STATE(388)] = 9874,
    [SMALL_STATE(389)] = 9884,
    [SMALL_STATE(390)] = 9894,
    [SMALL_STATE(391)] = 9904,
    [SMALL_STATE(392)] = 9914,
    [SMALL_STATE(393)] = 9924,
    [SMALL_STATE(394)] = 9934,
    [SMALL_STATE(395)] = 9944,
    [SMALL_STATE(396)] = 9954,
    [SMALL_STATE(397)] = 9964,
    [SMALL_STATE(398)] = 9974,
    [SMALL_STATE(399)] = 9984,
    [SMALL_STATE(400)] = 9994,
    [SMALL_STATE(401)] = 10004,
    [SMALL_STATE(402)] = 10014,
    [SMALL_STATE(403)] = 10024,
    [SMALL_STATE(404)] = 10034,
    [SMALL_STATE(405)] = 10044,
    [SMALL_STATE(406)] = 10054,
    [SMALL_STATE(407)] = 10064,
    [SMALL_STATE(408)] = 10074,
    [SMALL_STATE(409)] = 10084,
    [SMALL_STATE(410)] = 10094,
    [SMALL_STATE(411)] = 10104,
    [SMALL_STATE(412)] = 10114,
    [SMALL_STATE(413)] = 10124,
    [SMALL_STATE(414)] = 10134,
    [SMALL_STATE(415)] = 10144,
    [SMALL_STATE(416)] = 10154,
    [SMALL_STATE(417)] = 10164,
    [SMALL_STATE(418)] = 10174,
    [SMALL_STATE(419)] = 10184,
    [SMALL_STATE(420)] = 10194,
    [SMALL_STATE(421)] = 10204,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(321),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(318),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(314),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [85] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [89] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [91] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [93] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(36),
    [96] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(295),
    [99] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(313),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(138),
    [105] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(145),
    [108] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(145),
    [111] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(322),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(124),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(321),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(318),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(314),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(405),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(401),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(390),
    [135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(394),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(395),
    [141] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(26),
    [143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [145] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(420),
    [152] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(234),
    [155] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(409),
    [158] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(405),
    [161] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(401),
    [164] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(399),
    [167] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(396),
    [170] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(390),
    [173] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(389),
    [176] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(387),
    [179] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(13),
    [182] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(383),
    [185] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(382),
    [188] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(248),
    [191] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(123),
    [194] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(377),
    [197] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(376),
    [200] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(40),
    [203] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(372),
    [206] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(185),
    [209] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(364),
    [212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [218] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(36),
    [221] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(295),
    [224] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(313),
    [227] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [229] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [235] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [237] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [239] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 8),
    [241] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 8),
    [243] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 8),
    [245] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 8),
    [247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [249] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [253] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [255] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [257] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 7),
    [261] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 7),
    [263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [265] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [269] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [271] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [275] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [279] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [281] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [285] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [287] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [289] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [295] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(416),
    [297] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [301] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [309] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [311] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [315] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [319] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [325] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [329] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 9),
    [333] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 9),
    [335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [337] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [341] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [345] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [351] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [353] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [357] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [359] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [361] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [365] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [367] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [369] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [371] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [375] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [377] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [379] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [385] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [389] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [403] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [405] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(123),
    [408] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(377),
    [411] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(376),
    [414] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [418] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [426] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [428] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [430] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [436] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [442] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [444] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [448] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [454] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [456] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [458] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [460] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [462] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [464] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(379),
    [467] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(61),
    [470] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [474] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [476] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(328),
    [479] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(143),
    [482] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [484] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [486] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [488] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(47),
    [491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    [495] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(322),
    [498] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(124),
    [501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [509] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [521] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [523] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(185),
    [526] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(364),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(407),
    [540] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [548] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(261),
    [551] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [557] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(218),
    [560] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(218),
    [563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 1),
    [577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [579] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [585] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(268),
    [588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [590] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [594] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [596] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [598] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [600] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [606] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [608] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [610] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(158),
    [613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [615] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(218),
    [617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [619] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [621] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [625] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 2),
    [627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [639] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [641] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [643] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [645] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(176),
    [648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [650] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [654] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [656] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [658] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [662] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(121),
    [665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 1),
    [669] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [679] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(232),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [684] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [686] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [688] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [692] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [696] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [698] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [702] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 4),
    [704] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [708] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [710] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [712] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(323),
    [714] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [718] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [722] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(154),
    [725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [737] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(253),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 3),
    [742] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [744] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(118),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [749] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(18),
    [752] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [754] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [756] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [760] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [762] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [764] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [770] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [776] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(142),
    [779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 1),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 3),
    [785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [797] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [801] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [805] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 10),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 10),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [835] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [861] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [871] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [873] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [883] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [887] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [893] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [895] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [897] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [899] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [901] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [903] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [909] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [913] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(303),
    [915] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(421),
    [917] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_position, 4, .production_id = 5),
    [919] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [921] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [923] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [929] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [945] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [947] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [949] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [955] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [959] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 3),
    [961] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [965] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_bound, 4),
    [967] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [969] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [971] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [975] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [981] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [983] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [993] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [995] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [997] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1011] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1013] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [1019] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1021] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [1029] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [1033] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1037] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 4),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [1057] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [1065] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 5),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [1093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1097] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [1131] = { .entry = { .count = 1, .reusable = true } },
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
