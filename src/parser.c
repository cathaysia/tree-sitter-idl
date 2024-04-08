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
#define STATE_COUNT 385
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 3
#define TOKEN_COUNT 123
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
    anon_sym_bitmask = 34,
    anon_sym_typedef = 35,
    anon_sym_POUNDdefine = 36,
    aux_sym_predefine_token1 = 37,
    anon_sym_interface = 38,
    anon_sym_local = 39,
    anon_sym_void = 40,
    anon_sym_in = 41,
    anon_sym_out = 42,
    anon_sym_inout = 43,
    anon_sym_raises = 44,
    anon_sym_readonly = 45,
    anon_sym_attribute = 46,
    anon_sym_getraises = 47,
    anon_sym_setraises = 48,
    sym_dds_service = 49,
    anon_sym_ATDDSRequestTopic = 50,
    anon_sym_name = 51,
    anon_sym_EQ = 52,
    anon_sym_ATDDSReplyTopic = 53,
    anon_sym_const = 54,
    sym_number_literal = 55,
    sym_optional = 56,
    sym_key = 57,
    sym_must_understand = 58,
    sym_non_serialized = 59,
    sym_id = 60,
    sym_external = 61,
    anon_sym_AThashid = 62,
    anon_sym_LPAREN_DQUOTE = 63,
    anon_sym_DQUOTE = 64,
    anon_sym_ATtry_construct = 65,
    anon_sym_ATbit_bound = 66,
    aux_sym_bit_bound_token1 = 67,
    sym_extensibility = 68,
    sym_mutable = 69,
    sym_appendable = 70,
    sym_final = 71,
    sym_nested = 72,
    sym_value = 73,
    anon_sym_ATposition = 74,
    sym_autoid = 75,
    sym_verbatim = 76,
    anon_sym_ATdata_representation = 77,
    anon_sym_XCDR = 78,
    anon_sym_XCDR2 = 79,
    anon_sym_true = 80,
    anon_sym_false = 81,
    anon_sym_float = 82,
    anon_sym_double = 83,
    anon_sym_short = 84,
    anon_sym_long = 85,
    anon_sym_longdouble = 86,
    anon_sym_unsignedshort = 87,
    anon_sym_char = 88,
    anon_sym_wchar = 89,
    anon_sym_longlong = 90,
    anon_sym_octet = 91,
    anon_sym_unsignedlong = 92,
    anon_sym_unsignedlonglong = 93,
    anon_sym_int = 94,
    anon_sym_int8 = 95,
    anon_sym_int16 = 96,
    anon_sym_int32 = 97,
    anon_sym_int64 = 98,
    anon_sym_uint8 = 99,
    anon_sym_uint16 = 100,
    anon_sym_uint32 = 101,
    anon_sym_uint64 = 102,
    anon_sym_float32 = 103,
    anon_sym_float64 = 104,
    anon_sym_float128 = 105,
    anon_sym_byte = 106,
    anon_sym_boolean = 107,
    anon_sym_char8 = 108,
    anon_sym_char16 = 109,
    anon_sym_COLON_COLON = 110,
    sym_identifier = 111,
    anon_sym_LBRACK = 112,
    anon_sym_RBRACK = 113,
    anon_sym_sequence = 114,
    anon_sym_LT = 115,
    anon_sym_GT = 116,
    anon_sym_string = 117,
    anon_sym_wstring = 118,
    anon_sym_fixed = 119,
    anon_sym_SLASH_SLASH = 120,
    aux_sym_comment_token1 = 121,
    sym__eof = 122,
    sym_specification = 123,
    sym__definition = 124,
    sym_except_dcl = 125,
    sym_native_dcl = 126,
    sym_module_dcl = 127,
    sym_struct_forward_dcl = 128,
    sym_struct_def = 129,
    sym_member = 130,
    sym_or_expr = 131,
    sym_xor_expr = 132,
    sym_and_expr = 133,
    sym_shift_expr = 134,
    sym_add_expr = 135,
    sym_mult_expr = 136,
    sym_unary_expr = 137,
    sym_unary_operator = 138,
    sym_char_literal = 139,
    sym_wchar_literal = 140,
    sym_literal = 141,
    sym_default = 142,
    sym_enum_dcl = 143,
    sym_enumerator = 144,
    sym_enum_modifier = 145,
    sym_enum_anno = 146,
    sym_annotation = 147,
    sym_annotation_field = 148,
    sym_union_forward_dcl = 149,
    sym_union_def = 150,
    sym_case = 151,
    sym_case_label = 152,
    sym_element_spec = 153,
    sym_switch_type_spec = 154,
    sym_bitmask = 155,
    sym_bitmask_field = 156,
    sym_typedef_dcl = 157,
    sym_predefine = 158,
    sym_interface_dcl = 159,
    sym_interface_forward_dcl = 160,
    sym_interface_def = 161,
    sym_interface_header = 162,
    sym_interface_inheritance_spec = 163,
    sym_interface_name = 164,
    sym_interface_body = 165,
    sym_export = 166,
    sym_op_dcl = 167,
    sym_op_type_spec = 168,
    sym_parameter_dcls = 169,
    sym_param_dcl = 170,
    sym_param_attribute = 171,
    sym_raises_expr = 172,
    sym_attr_dcl = 173,
    sym_readonly_attr_spec = 174,
    sym_readonly_attr_declarator = 175,
    sym_attr_spec = 176,
    sym_attr_declarator = 177,
    sym_attr_raises_expr = 178,
    sym_get_excep_expr = 179,
    sym_set_excep_expr = 180,
    sym_exception_list = 181,
    sym_dds_request_topic = 182,
    sym_dds_reply_topic = 183,
    sym_interface_anno = 184,
    sym_const_dcl = 185,
    sym_const_type = 186,
    sym_const_expr = 187,
    sym_hashid = 188,
    sym_try_construct = 189,
    sym_bit_bound = 190,
    sym_position = 191,
    sym_data_representation = 192,
    sym_struct_modifier = 193,
    sym_primitive_type = 194,
    sym_scoped_name = 195,
    sym_simple_type_spec = 196,
    sym_type_spec = 197,
    sym_simple_declarator = 198,
    sym_declarator = 199,
    sym_declarators = 200,
    sym_array_declarator = 201,
    sym_positive_int_const = 202,
    sym_fixed_array_size = 203,
    sym_sequence_type = 204,
    sym_string_type = 205,
    sym_fixed_pt_type = 206,
    sym_template_type_spec = 207,
    sym_type_declarator = 208,
    sym_any_declarators = 209,
    sym_any_declarator = 210,
    sym_comment = 211,
    aux_sym_specification_repeat1 = 212,
    aux_sym_except_dcl_repeat1 = 213,
    aux_sym_struct_def_repeat1 = 214,
    aux_sym_member_repeat1 = 215,
    aux_sym_enum_dcl_repeat1 = 216,
    aux_sym_enumerator_repeat1 = 217,
    aux_sym_annotation_repeat1 = 218,
    aux_sym_union_def_repeat1 = 219,
    aux_sym_bitmask_repeat1 = 220,
    aux_sym_interface_def_repeat1 = 221,
    aux_sym_interface_inheritance_spec_repeat1 = 222,
    aux_sym_interface_body_repeat1 = 223,
    aux_sym_parameter_dcls_repeat1 = 224,
    aux_sym_raises_expr_repeat1 = 225,
    aux_sym_readonly_attr_declarator_repeat1 = 226,
    aux_sym_attr_raises_expr_repeat1 = 227,
    aux_sym_data_representation_repeat1 = 228,
    aux_sym_declarators_repeat1 = 229,
    aux_sym_array_declarator_repeat1 = 230,
    aux_sym_any_declarators_repeat1 = 231,
    alias_sym_data_rep = 232,
    alias_sym_hashid_value = 233,
    alias_sym_try_construct_value = 234,
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
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_short] = "short",
    [anon_sym_long] = "long",
    [anon_sym_longdouble] = "long double",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_longlong] = "long long",
    [anon_sym_octet] = "octet",
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
    [anon_sym_byte] = "byte",
    [anon_sym_boolean] = "boolean",
    [anon_sym_char8] = "char8",
    [anon_sym_char16] = "char16",
    [anon_sym_COLON_COLON] = "::",
    [sym_identifier] = "identifier",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_sequence] = "sequence",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_fixed] = "fixed",
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
    [sym_bitmask] = "bitmask",
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
    [aux_sym_bitmask_repeat1] = "bitmask_repeat1",
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
    [anon_sym_true] = anon_sym_true,
    [anon_sym_false] = anon_sym_false,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_octet] = anon_sym_octet,
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
    [anon_sym_byte] = anon_sym_byte,
    [anon_sym_boolean] = anon_sym_boolean,
    [anon_sym_char8] = anon_sym_char8,
    [anon_sym_char16] = anon_sym_char16,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [sym_identifier] = sym_identifier,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_fixed] = anon_sym_fixed,
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
    [sym_bitmask] = sym_bitmask,
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
    [aux_sym_bitmask_repeat1] = aux_sym_bitmask_repeat1,
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
    [anon_sym_true] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_false] = {
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
    [anon_sym_char] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wchar] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_octet] = {
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
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_boolean] = {
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
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
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
    [sym_bitmask] = {
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
    [aux_sym_bitmask_repeat1] = {
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
    [119] = 66,
    [120] = 120,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 62,
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
    [288] = 207,
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
    [316] = 257,
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
                ADVANCE(494);
            if(lookahead == '"')
                ADVANCE(602);
            if(lookahead == '#')
                ADVANCE(139);
            if(lookahead == '$')
                ADVANCE(506);
            if(lookahead == '%')
                ADVANCE(515);
            if(lookahead == '\'')
                ADVANCE(520);
            if(lookahead == '(')
                ADVANCE(518);
            if(lookahead == ')')
                ADVANCE(519);
            if(lookahead == '*')
                ADVANCE(513);
            if(lookahead == '+')
                ADVANCE(509);
            if(lookahead == ',')
                ADVANCE(528);
            if(lookahead == '-')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(514);
            if(lookahead == ':')
                ADVANCE(503);
            if(lookahead == ';')
                ADVANCE(495);
            if(lookahead == '<')
                ADVANCE(805);
            if(lookahead == '=')
                ADVANCE(561);
            if(lookahead == '>')
                ADVANCE(807);
            if(lookahead == '@')
                ADVANCE(54);
            if(lookahead == 'L')
                ADVANCE(522);
            if(lookahead == 'X')
                ADVANCE(53);
            if(lookahead == '[')
                ADVANCE(800);
            if(lookahead == '\\')
                SKIP(490)
            if(lookahead == ']')
                ADVANCE(801);
            if(lookahead == '^')
                ADVANCE(505);
            if(lookahead == 'a')
                ADVANCE(420);
            if(lookahead == 'b')
                ADVANCE(223);
            if(lookahead == 'c')
                ADVANCE(71);
            if(lookahead == 'd')
                ADVANCE(148);
            if(lookahead == 'e')
                ADVANCE(294);
            if(lookahead == 'f')
                ADVANCE(72);
            if(lookahead == 'g')
                ADVANCE(191);
            if(lookahead == 'i')
                ADVANCE(286);
            if(lookahead == 'l')
                ADVANCE(323);
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(73);
            if(lookahead == 'o')
                ADVANCE(118);
            if(lookahead == 'r')
                ADVANCE(77);
            if(lookahead == 's')
                ADVANCE(149);
            if(lookahead == 't')
                ADVANCE(367);
            if(lookahead == 'u')
                ADVANCE(224);
            if(lookahead == 'v')
                ADVANCE(327);
            if(lookahead == 'w')
                ADVANCE(114);
            if(lookahead == '{')
                ADVANCE(497);
            if(lookahead == '|')
                ADVANCE(504);
            if(lookahead == '}')
                ADVANCE(498);
            if(lookahead == '~')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(605);
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
                SKIP(30)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(30)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(28)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(28)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(29)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(29)
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
                ADVANCE(818);
            if(lookahead == '\r')
                ADVANCE(817);
            if(lookahead == '\\')
                ADVANCE(821);
            if(lookahead != 0)
                ADVANCE(820);
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
                ADVANCE(278);
            END_STATE();
        case 27:
            if(lookahead == '"')
                ADVANCE(601);
            END_STATE();
        case 28:
            if(lookahead == '$')
                ADVANCE(506);
            if(lookahead == '%')
                ADVANCE(515);
            if(lookahead == ')')
                ADVANCE(519);
            if(lookahead == '*')
                ADVANCE(513);
            if(lookahead == '+')
                ADVANCE(509);
            if(lookahead == ',')
                ADVANCE(528);
            if(lookahead == '-')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(514);
            if(lookahead == ':')
                ADVANCE(503);
            if(lookahead == ';')
                ADVANCE(495);
            if(lookahead == '<')
                ADVANCE(52);
            if(lookahead == '>')
                ADVANCE(807);
            if(lookahead == '@')
                ADVANCE(144);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == ']')
                ADVANCE(801);
            if(lookahead == '^')
                ADVANCE(505);
            if(lookahead == '{')
                ADVANCE(497);
            if(lookahead == '|')
                ADVANCE(504);
            if(lookahead == '}')
                ADVANCE(498);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(28)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 29:
            if(lookahead == '$')
                ADVANCE(506);
            if(lookahead == ')')
                ADVANCE(519);
            if(lookahead == ',')
                ADVANCE(528);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(503);
            if(lookahead == ';')
                ADVANCE(495);
            if(lookahead == '<')
                ADVANCE(804);
            if(lookahead == '>')
                ADVANCE(806);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(801);
            if(lookahead == '^')
                ADVANCE(505);
            if(lookahead == '{')
                ADVANCE(497);
            if(lookahead == '|')
                ADVANCE(504);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(29)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 30:
            if(lookahead == '\'')
                ADVANCE(520);
            if(lookahead == '(')
                ADVANCE(517);
            if(lookahead == '+')
                ADVANCE(510);
            if(lookahead == '-')
                ADVANCE(512);
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == '0')
                ADVANCE(571);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == 'L')
                ADVANCE(523);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == '~')
                ADVANCE(516);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(30)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 31:
            if(lookahead == '(')
                ADVANCE(27);
            if(lookahead == ',')
                ADVANCE(528);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '<')
                ADVANCE(804);
            if(lookahead == '>')
                ADVANCE(806);
            if(lookahead == '@')
                ADVANCE(199);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(801);
            if(lookahead == 'b')
                ADVANCE(760);
            if(lookahead == 'c')
                ADVANCE(724);
            if(lookahead == 'd')
                ADVANCE(755);
            if(lookahead == 'f')
                ADVANCE(683);
            if(lookahead == 'i')
                ADVANCE(748);
            if(lookahead == 'l')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(696);
            if(lookahead == 's')
                ADVANCE(703);
            if(lookahead == 't')
                ADVANCE(768);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(756);
            if(lookahead == 'w')
                ADVANCE(697);
            if(lookahead == '}')
                ADVANCE(498);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 32:
            if(lookahead == ')')
                ADVANCE(519);
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == '}')
                ADVANCE(498);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(32)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 33:
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '0')
                ADVANCE(568);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            END_STATE();
        case 34:
            if(lookahead == '/')
                ADVANCE(814);
            END_STATE();
        case 35:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '@')
                ADVANCE(146);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(760);
            if(lookahead == 'c')
                ADVANCE(724);
            if(lookahead == 'd')
                ADVANCE(755);
            if(lookahead == 'e')
                ADVANCE(749);
            if(lookahead == 'f')
                ADVANCE(683);
            if(lookahead == 'i')
                ADVANCE(748);
            if(lookahead == 'l')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(696);
            if(lookahead == 's')
                ADVANCE(704);
            if(lookahead == 't')
                ADVANCE(768);
            if(lookahead == 'u')
                ADVANCE(735);
            if(lookahead == 'v')
                ADVANCE(756);
            if(lookahead == 'w')
                ADVANCE(697);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(35)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 36:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(787);
            if(lookahead == 'b')
                ADVANCE(760);
            if(lookahead == 'c')
                ADVANCE(724);
            if(lookahead == 'd')
                ADVANCE(755);
            if(lookahead == 'f')
                ADVANCE(683);
            if(lookahead == 'i')
                ADVANCE(748);
            if(lookahead == 'l')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(696);
            if(lookahead == 'r')
                ADVANCE(717);
            if(lookahead == 's')
                ADVANCE(703);
            if(lookahead == 't')
                ADVANCE(768);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(756);
            if(lookahead == 'w')
                ADVANCE(697);
            if(lookahead == '}')
                ADVANCE(498);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(36)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'b')
                ADVANCE(760);
            if(lookahead == 'c')
                ADVANCE(724);
            if(lookahead == 'd')
                ADVANCE(755);
            if(lookahead == 'f')
                ADVANCE(684);
            if(lookahead == 'i')
                ADVANCE(748);
            if(lookahead == 'l')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(696);
            if(lookahead == 's')
                ADVANCE(705);
            if(lookahead == 't')
                ADVANCE(768);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(756);
            if(lookahead == 'w')
                ADVANCE(698);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 38:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(25)
            if(lookahead == 'b')
                ADVANCE(760);
            if(lookahead == 'c')
                ADVANCE(724);
            if(lookahead == 'd')
                ADVANCE(755);
            if(lookahead == 'f')
                ADVANCE(684);
            if(lookahead == 'i')
                ADVANCE(748);
            if(lookahead == 'l')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(696);
            if(lookahead == 's')
                ADVANCE(726);
            if(lookahead == 't')
                ADVANCE(768);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(756);
            if(lookahead == 'w')
                ADVANCE(698);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(38)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ';')
                ADVANCE(495);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'd')
                ADVANCE(712);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(34);
            if(lookahead == ';')
                ADVANCE(495);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 's')
                ADVANCE(795);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
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
                ADVANCE(521);
            END_STATE();
        case 42:
            if(lookahead == '1')
                ADVANCE(49);
            if(lookahead == '3')
                ADVANCE(43);
            if(lookahead == '6')
                ADVANCE(46);
            if(lookahead == '8')
                ADVANCE(646);
            END_STATE();
        case 43:
            if(lookahead == '2')
                ADVANCE(650);
            END_STATE();
        case 44:
            if(lookahead == '2')
                ADVANCE(50);
            END_STATE();
        case 45:
            if(lookahead == '2')
                ADVANCE(654);
            END_STATE();
        case 46:
            if(lookahead == '4')
                ADVANCE(652);
            END_STATE();
        case 47:
            if(lookahead == '4')
                ADVANCE(656);
            END_STATE();
        case 48:
            if(lookahead == '6')
                ADVANCE(666);
            END_STATE();
        case 49:
            if(lookahead == '6')
                ADVANCE(648);
            END_STATE();
        case 50:
            if(lookahead == '8')
                ADVANCE(658);
            END_STATE();
        case 51:
            if(lookahead == ':')
                ADVANCE(668);
            END_STATE();
        case 52:
            if(lookahead == '<')
                ADVANCE(508);
            END_STATE();
        case 53:
            if(lookahead == 'C')
                ADVANCE(57);
            END_STATE();
        case 54:
            if(lookahead == 'D')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(297);
            if(lookahead == 'b')
                ADVANCE(235);
            if(lookahead == 'd')
                ADVANCE(86);
            if(lookahead == 'e')
                ADVANCE(473);
            if(lookahead == 'f')
                ADVANCE(228);
            if(lookahead == 'h')
                ADVANCE(74);
            if(lookahead == 'i')
                ADVANCE(129);
            if(lookahead == 'k')
                ADVANCE(150);
            if(lookahead == 'm')
                ADVANCE(452);
            if(lookahead == 'n')
                ADVANCE(172);
            if(lookahead == 'o')
                ADVANCE(353);
            if(lookahead == 'p')
                ADVANCE(329);
            if(lookahead == 't')
                ADVANCE(364);
            if(lookahead == 'v')
                ADVANCE(75);
            END_STATE();
        case 55:
            if(lookahead == 'D')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(296);
            if(lookahead == 'b')
                ADVANCE(235);
            if(lookahead == 'd')
                ADVANCE(85);
            if(lookahead == 'f')
                ADVANCE(228);
            if(lookahead == 'i')
                ADVANCE(213);
            END_STATE();
        case 56:
            if(lookahead == 'D')
                ADVANCE(60);
            END_STATE();
        case 57:
            if(lookahead == 'D')
                ADVANCE(58);
            END_STATE();
        case 58:
            if(lookahead == 'R')
                ADVANCE(616);
            END_STATE();
        case 59:
            if(lookahead == 'R')
                ADVANCE(157);
            if(lookahead == 'S')
                ADVANCE(182);
            END_STATE();
        case 60:
            if(lookahead == 'S')
                ADVANCE(59);
            END_STATE();
        case 61:
            if(lookahead == 'T')
                ADVANCE(328);
            END_STATE();
        case 62:
            if(lookahead == 'T')
                ADVANCE(347);
            END_STATE();
        case 63:
            if(lookahead == '_')
                ADVANCE(107);
            END_STATE();
        case 64:
            if(lookahead == '_')
                ADVANCE(122);
            END_STATE();
        case 65:
            if(lookahead == '_')
                ADVANCE(458);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(276);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(377);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(400);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(313);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(280);
            END_STATE();
        case 71:
            if(lookahead == 'a')
                ADVANCE(391);
            if(lookahead == 'h')
                ADVANCE(81);
            if(lookahead == 'o')
                ADVANCE(318);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(274);
            if(lookahead == 'i')
                ADVANCE(472);
            if(lookahead == 'l')
                ADVANCE(331);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(283);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(275);
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(141);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(245);
            if(lookahead == 'e')
                ADVANCE(76);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(257);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(284);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(67);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(362);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(385);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(258);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(456);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(429);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(429);
            if(lookahead == 'e')
                ADVANCE(206);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(363);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(259);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(260);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(266);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(412);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(432);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(310);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(424);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(465);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(127);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(111);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(249);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(112);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(252);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(448);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(449);
            END_STATE();
        case 106:
            if(lookahead == 'b')
                ADVANCE(467);
            END_STATE();
        case 107:
            if(lookahead == 'b')
                ADVANCE(349);
            END_STATE();
        case 108:
            if(lookahead == 'b')
                ADVANCE(254);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(267);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(95);
            END_STATE();
        case 111:
            if(lookahead == 'b')
                ADVANCE(271);
            END_STATE();
        case 112:
            if(lookahead == 'b')
                ADVANCE(272);
            END_STATE();
        case 113:
            if(lookahead == 'b')
                ADVANCE(273);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(217);
            if(lookahead == 's')
                ADVANCE(430);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(562);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(559);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(215);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(439);
            if(lookahead == 'u')
                ADVANCE(408);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(200);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(78);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(78);
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(346);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(416);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(418);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(164);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(166);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(169);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(598);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(598);
            if(lookahead == 'g')
                ADVANCE(319);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(546);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(812);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(613);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(600);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(610);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(26);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(604);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(597);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(596);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(170);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(466);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(337);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(351);
            if(lookahead == 'l')
                ADVANCE(338);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(187);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(201);
            if(lookahead == 'p')
                ADVANCE(329);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(173);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(85);
            if(lookahead == 'f')
                ADVANCE(228);
            if(lookahead == 'i')
                ADVANCE(213);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(102);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(203);
            if(lookahead == 'o')
                ADVANCE(453);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(360);
            if(lookahead == 'h')
                ADVANCE(332);
            if(lookahead == 't')
                ADVANCE(361);
            if(lookahead == 'w')
                ADVANCE(239);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(475);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(660);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(536);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(560);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(618);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(302);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(620);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(611);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(624);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(500);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(499);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(539);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(607);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(802);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(554);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(558);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(608);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(630);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(544);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(205);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(358);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(405);
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(202);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(131);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(386);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(66);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(134);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(387);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(135);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(300);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(389);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(137);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(317);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(92);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(383);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(380);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(414);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(427);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(372);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(398);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(373);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(403);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(145);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(474);
            if(lookahead == 'h')
                ADVANCE(74);
            if(lookahead == 'i')
                ADVANCE(128);
            if(lookahead == 'k')
                ADVANCE(150);
            if(lookahead == 'm')
                ADVANCE(468);
            if(lookahead == 'n')
                ADVANCE(330);
            if(lookahead == 'o')
                ADVANCE(353);
            if(lookahead == 't')
                ADVANCE(364);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(206);
            END_STATE();
        case 202:
            if(lookahead == 'f')
                ADVANCE(538);
            END_STATE();
        case 203:
            if(lookahead == 'f')
                ADVANCE(84);
            END_STATE();
        case 204:
            if(lookahead == 'f')
                ADVANCE(99);
            END_STATE();
        case 205:
            if(lookahead == 'f')
                ADVANCE(238);
            END_STATE();
        case 206:
            if(lookahead == 'f')
                ADVANCE(98);
            END_STATE();
        case 207:
            if(lookahead == 'g')
                ADVANCE(628);
            END_STATE();
        case 208:
            if(lookahead == 'g')
                ADVANCE(808);
            END_STATE();
        case 209:
            if(lookahead == 'g')
                ADVANCE(810);
            END_STATE();
        case 210:
            if(lookahead == 'g')
                ADVANCE(636);
            END_STATE();
        case 211:
            if(lookahead == 'g')
                ADVANCE(639);
            END_STATE();
        case 212:
            if(lookahead == 'g')
                ADVANCE(640);
            END_STATE();
        case 213:
            if(lookahead == 'g')
                ADVANCE(319);
            END_STATE();
        case 214:
            if(lookahead == 'g')
                ADVANCE(315);
            END_STATE();
        case 215:
            if(lookahead == 'h')
                ADVANCE(534);
            END_STATE();
        case 216:
            if(lookahead == 'h')
                ADVANCE(234);
            END_STATE();
        case 217:
            if(lookahead == 'h')
                ADVANCE(87);
            END_STATE();
        case 218:
            if(lookahead == 'h')
                ADVANCE(348);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(471);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(481);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(214);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(407);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(407);
            if(lookahead == 'o')
                ADVANCE(326);
            if(lookahead == 'y')
                ADVANCE(422);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(309);
            if(lookahead == 'n')
                ADVANCE(237);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(282);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(130);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(106);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(307);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(108);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(132);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(295);
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(133);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(409);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(334);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(334);
            if(lookahead == 's')
                ADVANCE(221);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(314);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(421);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(350);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(298);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(90);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(425);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(441);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(397);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(126);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(339);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(341);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(401);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(436);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(342);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(402);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(345);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(277);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(446);
            END_STATE();
        case 256:
            if(lookahead == 'k')
                ADVANCE(537);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(545);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(609);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(599);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(594);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(529);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(476);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(477);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(69);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(186);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(220);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(159);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(417);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(160);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(451);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(163);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(167);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(168);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(396);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(462);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(250);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(243);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(343);
            if(lookahead == 's')
                ADVANCE(218);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(344);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(255);
            END_STATE();
        case 281:
            if(lookahead == 'm')
                ADVANCE(526);
            END_STATE();
        case 282:
            if(lookahead == 'm')
                ADVANCE(614);
            END_STATE();
        case 283:
            if(lookahead == 'm')
                ADVANCE(153);
            if(lookahead == 't')
                ADVANCE(219);
            END_STATE();
        case 284:
            if(lookahead == 'm')
                ADVANCE(183);
            END_STATE();
        case 285:
            if(lookahead == 'm')
                ADVANCE(82);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(548);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(532);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(662);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(612);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(496);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(531);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(615);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(68);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(455);
            if(lookahead == 'x')
                ADVANCE(119);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(208);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(306);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(306);
            if(lookahead == 'p')
                ADVANCE(355);
            if(lookahead == 'u')
                ADVANCE(440);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(209);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(210);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(147);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(211);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(392);
            if(lookahead == 'r')
                ADVANCE(311);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(262);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(212);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(406);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(340);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(83);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(136);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(410);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(138);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(89);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(79);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(162);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(179);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(143);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(125);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(395);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(336);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(236);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(437);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(450);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(121);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(140);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(318);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(265);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(226);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(356);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(404);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(93);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(374);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(120);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(287);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(232);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(375);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(303);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(299);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(289);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(444);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(290);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(291);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(292);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(305);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(357);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(376);
            END_STATE();
        case 349:
            if(lookahead == 'o')
                ADVANCE(461);
            END_STATE();
        case 350:
            if(lookahead == 'o')
                ADVANCE(312);
            END_STATE();
        case 351:
            if(lookahead == 'o')
                ADVANCE(469);
            END_STATE();
        case 352:
            if(lookahead == 'p')
                ADVANCE(263);
            if(lookahead == 'q')
                ADVANCE(463);
            END_STATE();
        case 353:
            if(lookahead == 'p')
                ADVANCE(428);
            END_STATE();
        case 354:
            if(lookahead == 'p')
                ADVANCE(198);
            END_STATE();
        case 355:
            if(lookahead == 'p')
                ADVANCE(180);
            END_STATE();
        case 356:
            if(lookahead == 'p')
                ADVANCE(229);
            END_STATE();
        case 357:
            if(lookahead == 'p')
                ADVANCE(231);
            END_STATE();
        case 358:
            if(lookahead == 'p')
                ADVANCE(378);
            END_STATE();
        case 359:
            if(lookahead == 'p')
                ADVANCE(447);
            END_STATE();
        case 360:
            if(lookahead == 'q')
                ADVANCE(460);
            if(lookahead == 't')
                ADVANCE(384);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(233);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(632);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(634);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(480);
            END_STATE();
        case 365:
            if(lookahead == 'r')
                ADVANCE(110);
            END_STATE();
        case 366:
            if(lookahead == 'r')
                ADVANCE(470);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(457);
            if(lookahead == 'y')
                ADVANCE(354);
            END_STATE();
        case 368:
            if(lookahead == 'r')
                ADVANCE(227);
            END_STATE();
        case 369:
            if(lookahead == 'r')
                ADVANCE(464);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(101);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(242);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(91);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(94);
            END_STATE();
        case 374:
            if(lookahead == 'r')
                ADVANCE(415);
            END_STATE();
        case 375:
            if(lookahead == 'r')
                ADVANCE(176);
            END_STATE();
        case 376:
            if(lookahead == 'r')
                ADVANCE(419);
            END_STATE();
        case 377:
            if(lookahead == 'r')
                ADVANCE(171);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(197);
            END_STATE();
        case 379:
            if(lookahead == 'r')
                ADVANCE(204);
            END_STATE();
        case 380:
            if(lookahead == 'r')
                ADVANCE(311);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(454);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(241);
            END_STATE();
        case 383:
            if(lookahead == 'r')
                ADVANCE(399);
            END_STATE();
        case 384:
            if(lookahead == 'r')
                ADVANCE(103);
            END_STATE();
        case 385:
            if(lookahead == 's')
                ADVANCE(256);
            END_STATE();
        case 386:
            if(lookahead == 's')
                ADVANCE(551);
            END_STATE();
        case 387:
            if(lookahead == 's')
                ADVANCE(556);
            END_STATE();
        case 388:
            if(lookahead == 's')
                ADVANCE(557);
            END_STATE();
        case 389:
            if(lookahead == 's')
                ADVANCE(530);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(216);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(152);
            END_STATE();
        case 392:
            if(lookahead == 's')
                ADVANCE(230);
            END_STATE();
        case 393:
            if(lookahead == 's')
                ADVANCE(426);
            END_STATE();
        case 394:
            if(lookahead == 's')
                ADVANCE(426);
            if(lookahead == 't')
                ADVANCE(100);
            END_STATE();
        case 395:
            if(lookahead == 's')
                ADVANCE(411);
            END_STATE();
        case 396:
            if(lookahead == 's')
                ADVANCE(156);
            END_STATE();
        case 397:
            if(lookahead == 's')
                ADVANCE(175);
            END_STATE();
        case 398:
            if(lookahead == 's')
                ADVANCE(445);
            END_STATE();
        case 399:
            if(lookahead == 's')
                ADVANCE(442);
            END_STATE();
        case 400:
            if(lookahead == 's')
                ADVANCE(193);
            END_STATE();
        case 401:
            if(lookahead == 's')
                ADVANCE(178);
            END_STATE();
        case 402:
            if(lookahead == 's')
                ADVANCE(181);
            END_STATE();
        case 403:
            if(lookahead == 's')
                ADVANCE(192);
            END_STATE();
        case 404:
            if(lookahead == 's')
                ADVANCE(244);
            END_STATE();
        case 405:
            if(lookahead == 's')
                ADVANCE(434);
            END_STATE();
        case 406:
            if(lookahead == 's')
                ADVANCE(433);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(285);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(549);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(63);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(42);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(563);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(622);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(550);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(637);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(626);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(501);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(524);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(603);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(631);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(423);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(117);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(151);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(368);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(219);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(478);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(65);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(370);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(240);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(80);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(155);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(225);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(369);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(177);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(165);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(194);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(188);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(189);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(335);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(247);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(96);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(381);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(62);
            END_STATE();
        case 446:
            if(lookahead == 't')
                ADVANCE(196);
            END_STATE();
        case 447:
            if(lookahead == 't')
                ADVANCE(248);
            END_STATE();
        case 448:
            if(lookahead == 't')
                ADVANCE(251);
            END_STATE();
        case 449:
            if(lookahead == 't')
                ADVANCE(253);
            END_STATE();
        case 450:
            if(lookahead == 't')
                ADVANCE(105);
            END_STATE();
        case 451:
            if(lookahead == 't')
                ADVANCE(70);
            END_STATE();
        case 452:
            if(lookahead == 'u')
                ADVANCE(394);
            END_STATE();
        case 453:
            if(lookahead == 'u')
                ADVANCE(109);
            END_STATE();
        case 454:
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 455:
            if(lookahead == 'u')
                ADVANCE(281);
            END_STATE();
        case 456:
            if(lookahead == 'u')
                ADVANCE(268);
            END_STATE();
        case 457:
            if(lookahead == 'u')
                ADVANCE(154);
            END_STATE();
        case 458:
            if(lookahead == 'u')
                ADVANCE(316);
            END_STATE();
        case 459:
            if(lookahead == 'u')
                ADVANCE(413);
            END_STATE();
        case 460:
            if(lookahead == 'u')
                ADVANCE(185);
            END_STATE();
        case 461:
            if(lookahead == 'u')
                ADVANCE(308);
            END_STATE();
        case 462:
            if(lookahead == 'u')
                ADVANCE(158);
            END_STATE();
        case 463:
            if(lookahead == 'u')
                ADVANCE(195);
            END_STATE();
        case 464:
            if(lookahead == 'u')
                ADVANCE(124);
            END_STATE();
        case 465:
            if(lookahead == 'u')
                ADVANCE(270);
            END_STATE();
        case 466:
            if(lookahead == 'u')
                ADVANCE(269);
            END_STATE();
        case 467:
            if(lookahead == 'u')
                ADVANCE(435);
            END_STATE();
        case 468:
            if(lookahead == 'u')
                ADVANCE(393);
            END_STATE();
        case 469:
            if(lookahead == 'u')
                ADVANCE(113);
            END_STATE();
        case 470:
            if(lookahead == 'v')
                ADVANCE(246);
            END_STATE();
        case 471:
            if(lookahead == 'v')
                ADVANCE(161);
            END_STATE();
        case 472:
            if(lookahead == 'x')
                ADVANCE(174);
            END_STATE();
        case 473:
            if(lookahead == 'x')
                ADVANCE(431);
            END_STATE();
        case 474:
            if(lookahead == 'x')
                ADVANCE(438);
            END_STATE();
        case 475:
            if(lookahead == 'y')
                ADVANCE(595);
            END_STATE();
        case 476:
            if(lookahead == 'y')
                ADVANCE(552);
            END_STATE();
        case 477:
            if(lookahead == 'y')
                ADVANCE(61);
            END_STATE();
        case 478:
            if(lookahead == 'y')
                ADVANCE(606);
            END_STATE();
        case 479:
            if(lookahead == 'y')
                ADVANCE(354);
            END_STATE();
        case 480:
            if(lookahead == 'y')
                ADVANCE(64);
            END_STATE();
        case 481:
            if(lookahead == 'z')
                ADVANCE(184);
            END_STATE();
        case 482:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            END_STATE();
        case 483:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(564);
            END_STATE();
        case 484:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            END_STATE();
        case 485:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(578);
            END_STATE();
        case 486:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            END_STATE();
        case 487:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(566);
            END_STATE();
        case 488:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(820);
            if(lookahead == '\r')
                ADVANCE(822);
            if(lookahead == '\\')
                ADVANCE(821);
            END_STATE();
        case 489:
            if(eof)
                ADVANCE(494);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 490:
            if(eof)
                ADVANCE(494);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(489)
            END_STATE();
        case 491:
            if(eof)
                ADVANCE(494);
            if(lookahead == '\n')
                SKIP(493)
            END_STATE();
        case 492:
            if(eof)
                ADVANCE(494);
            if(lookahead == '\n')
                SKIP(493)
            if(lookahead == '\r')
                SKIP(491)
            END_STATE();
        case 493:
            if(eof)
                ADVANCE(494);
            if(lookahead == '#')
                ADVANCE(139);
            if(lookahead == '$')
                ADVANCE(506);
            if(lookahead == '%')
                ADVANCE(515);
            if(lookahead == '(')
                ADVANCE(517);
            if(lookahead == ')')
                ADVANCE(519);
            if(lookahead == '*')
                ADVANCE(513);
            if(lookahead == '+')
                ADVANCE(509);
            if(lookahead == ',')
                ADVANCE(528);
            if(lookahead == '-')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(514);
            if(lookahead == ':')
                ADVANCE(503);
            if(lookahead == ';')
                ADVANCE(495);
            if(lookahead == '<')
                ADVANCE(52);
            if(lookahead == '>')
                ADVANCE(807);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(492)
            if(lookahead == ']')
                ADVANCE(801);
            if(lookahead == '^')
                ADVANCE(505);
            if(lookahead == 'b')
                ADVANCE(222);
            if(lookahead == 'c')
                ADVANCE(325);
            if(lookahead == 'e')
                ADVANCE(294);
            if(lookahead == 'i')
                ADVANCE(321);
            if(lookahead == 'l')
                ADVANCE(333);
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(97);
            if(lookahead == 's')
                ADVANCE(443);
            if(lookahead == 't')
                ADVANCE(479);
            if(lookahead == 'u')
                ADVANCE(320);
            if(lookahead == '|')
                ADVANCE(504);
            if(lookahead == '}')
                ADVANCE(498);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(493)
            END_STATE();
        case 494:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '0')
                ADVANCE(572);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '0')
                ADVANCE(572);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(814);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '"')
                ADVANCE(601);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(521);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(543);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(543);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(542);
            if(lookahead == '\\')
                ADVANCE(540);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(541);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(543);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(816);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(543);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(543);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(459);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(483);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(564);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(593);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(487);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(565);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(565);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(487);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(566);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(566);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(581);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(579);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(587);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(798);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(582);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(569);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(583);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(486);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(584);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(579);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(587);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(582);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(569);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(584);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(585);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(670);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(587);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(586);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(33);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(590);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(798);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(587);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(591);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(486);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(587);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(592);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(593);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(487);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(577);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(578);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(578);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(577);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(578);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(578);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(487);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(579);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(587);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(487);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(584);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(579);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(587);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(582);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(569);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(579);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(587);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(584);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(570);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(486);
            if(lookahead == '.')
                ADVANCE(589);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(580);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(584);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(584);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '0')
                ADVANCE(573);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(592);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '0')
                ADVANCE(574);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(593);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(487);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(565);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(565);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(487);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(566);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(566);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(577);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(588);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(578);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(578);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(592);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(576);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(593);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(593);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_ATbit_bound);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(aux_sym_bit_bound_token1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(605);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_extensibility);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_mutable);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_appendable);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_nested);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_value);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_ATposition);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_autoid);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_verbatim);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(617);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_true);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_true);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_false);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_false);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(44);
            if(lookahead == '3')
                ADVANCE(45);
            if(lookahead == '6')
                ADVANCE(47);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(674);
            if(lookahead == '3')
                ADVANCE(675);
            if(lookahead == '6')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(142);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(142);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(48);
            if(lookahead == '8')
                ADVANCE(664);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(680);
            if(lookahead == '8')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_octet);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_octet);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(279);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(679);
            if(lookahead == '3')
                ADVANCE(672);
            if(lookahead == '6')
                ADVANCE(676);
            if(lookahead == '8')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_int8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_uint8);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_uint8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_float32);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_float32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_float64);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_float64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_float128);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_float128);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_byte);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_byte);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_boolean);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_boolean);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_char8);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_char8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_char16);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_char16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(278);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(483);
            if(lookahead == '0')
                ADVANCE(567);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(681);
            if(lookahead == '3')
                ADVANCE(673);
            if(lookahead == '6')
                ADVANCE(677);
            if(lookahead == '8')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '8')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(739);
            if(lookahead == 'i')
                ADVANCE(796);
            if(lookahead == 'l')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(739);
            if(lookahead == 'l')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(727);
            if(lookahead == 's')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(547);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(764);
            if(lookahead == 'h')
                ADVANCE(761);
            if(lookahead == 't')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(764);
            if(lookahead == 'h')
                ADVANCE(761);
            if(lookahead == 't')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(764);
            if(lookahead == 'h')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(555);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(751);
            if(lookahead == 'u')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(lookahead == 'n')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(lookahead == 'n')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(762);
            if(lookahead == 's')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(533);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(759);
            if(lookahead == 'y')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(638);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(553);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(508);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(507);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(799);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(488);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(820);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(543);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(818);
            if(lookahead == '\\')
                ADVANCE(488);
            if(lookahead != 0)
                ADVANCE(820);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(819);
            if(lookahead == '\\')
                ADVANCE(21);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(818);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(820);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(815);
            if(lookahead == '\\')
                ADVANCE(488);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(820);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(488);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(820);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(820);
            if(lookahead == '\r')
                ADVANCE(822);
            if(lookahead == '\\')
                ADVANCE(821);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(820);
            if(lookahead == '\\')
                ADVANCE(488);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 493 },
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
    [19] = { .lex_state = 31 },
    [20] = { .lex_state = 493 },
    [21] = { .lex_state = 493 },
    [22] = { .lex_state = 493 },
    [23] = { .lex_state = 493 },
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
    [38] = { .lex_state = 37 },
    [39] = { .lex_state = 31 },
    [40] = { .lex_state = 31 },
    [41] = { .lex_state = 31 },
    [42] = { .lex_state = 38 },
    [43] = { .lex_state = 30 },
    [44] = { .lex_state = 30 },
    [45] = { .lex_state = 30 },
    [46] = { .lex_state = 30 },
    [47] = { .lex_state = 30 },
    [48] = { .lex_state = 30 },
    [49] = { .lex_state = 30 },
    [50] = { .lex_state = 493 },
    [51] = { .lex_state = 30 },
    [52] = { .lex_state = 493 },
    [53] = { .lex_state = 30 },
    [54] = { .lex_state = 493 },
    [55] = { .lex_state = 30 },
    [56] = { .lex_state = 493 },
    [57] = { .lex_state = 493 },
    [58] = { .lex_state = 493 },
    [59] = { .lex_state = 30 },
    [60] = { .lex_state = 30 },
    [61] = { .lex_state = 30 },
    [62] = { .lex_state = 28 },
    [63] = { .lex_state = 30 },
    [64] = { .lex_state = 28 },
    [65] = { .lex_state = 28 },
    [66] = { .lex_state = 28 },
    [67] = { .lex_state = 493 },
    [68] = { .lex_state = 493 },
    [69] = { .lex_state = 493 },
    [70] = { .lex_state = 30 },
    [71] = { .lex_state = 493 },
    [72] = { .lex_state = 493 },
    [73] = { .lex_state = 493 },
    [74] = { .lex_state = 493 },
    [75] = { .lex_state = 493 },
    [76] = { .lex_state = 493 },
    [77] = { .lex_state = 493 },
    [78] = { .lex_state = 493 },
    [79] = { .lex_state = 30 },
    [80] = { .lex_state = 493 },
    [81] = { .lex_state = 493 },
    [82] = { .lex_state = 493 },
    [83] = { .lex_state = 493 },
    [84] = { .lex_state = 493 },
    [85] = { .lex_state = 30 },
    [86] = { .lex_state = 29 },
    [87] = { .lex_state = 29 },
    [88] = { .lex_state = 493 },
    [89] = { .lex_state = 0 },
    [90] = { .lex_state = 29 },
    [91] = { .lex_state = 29 },
    [92] = { .lex_state = 29 },
    [93] = { .lex_state = 0 },
    [94] = { .lex_state = 32 },
    [95] = { .lex_state = 0 },
    [96] = { .lex_state = 32 },
    [97] = { .lex_state = 28 },
    [98] = { .lex_state = 0 },
    [99] = { .lex_state = 0 },
    [100] = { .lex_state = 0 },
    [101] = { .lex_state = 30 },
    [102] = { .lex_state = 28 },
    [103] = { .lex_state = 32 },
    [104] = { .lex_state = 28 },
    [105] = { .lex_state = 0 },
    [106] = { .lex_state = 28 },
    [107] = { .lex_state = 28 },
    [108] = { .lex_state = 0 },
    [109] = { .lex_state = 28 },
    [110] = { .lex_state = 28 },
    [111] = { .lex_state = 0 },
    [112] = { .lex_state = 493 },
    [113] = { .lex_state = 28 },
    [114] = { .lex_state = 493 },
    [115] = { .lex_state = 0 },
    [116] = { .lex_state = 493 },
    [117] = { .lex_state = 0 },
    [118] = { .lex_state = 0 },
    [119] = { .lex_state = 29 },
    [120] = { .lex_state = 28 },
    [121] = { .lex_state = 0 },
    [122] = { .lex_state = 493 },
    [123] = { .lex_state = 28 },
    [124] = { .lex_state = 29 },
    [125] = { .lex_state = 28 },
    [126] = { .lex_state = 28 },
    [127] = { .lex_state = 28 },
    [128] = { .lex_state = 0 },
    [129] = { .lex_state = 28 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 0 },
    [132] = { .lex_state = 28 },
    [133] = { .lex_state = 28 },
    [134] = { .lex_state = 32 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 28 },
    [137] = { .lex_state = 0 },
    [138] = { .lex_state = 0 },
    [139] = { .lex_state = 0 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 28 },
    [142] = { .lex_state = 39 },
    [143] = { .lex_state = 32 },
    [144] = { .lex_state = 0 },
    [145] = { .lex_state = 28 },
    [146] = { .lex_state = 28 },
    [147] = { .lex_state = 0 },
    [148] = { .lex_state = 32 },
    [149] = { .lex_state = 28 },
    [150] = { .lex_state = 32 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 0 },
    [154] = { .lex_state = 0 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 28 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 32 },
    [161] = { .lex_state = 32 },
    [162] = { .lex_state = 0 },
    [163] = { .lex_state = 0 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 28 },
    [167] = { .lex_state = 0 },
    [168] = { .lex_state = 0 },
    [169] = { .lex_state = 31 },
    [170] = { .lex_state = 0 },
    [171] = { .lex_state = 32 },
    [172] = { .lex_state = 0 },
    [173] = { .lex_state = 0 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 0 },
    [176] = { .lex_state = 40 },
    [177] = { .lex_state = 0 },
    [178] = { .lex_state = 0 },
    [179] = { .lex_state = 28 },
    [180] = { .lex_state = 0 },
    [181] = { .lex_state = 29 },
    [182] = { .lex_state = 0 },
    [183] = { .lex_state = 29 },
    [184] = { .lex_state = 32 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 0 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 0 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 28 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 32 },
    [195] = { .lex_state = 0 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 32 },
    [198] = { .lex_state = 28 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 28 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 28 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 28 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 29 },
    [208] = { .lex_state = 29 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 28 },
    [211] = { .lex_state = 28 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 28 },
    [214] = { .lex_state = 0 },
    [215] = { .lex_state = 28 },
    [216] = { .lex_state = 28 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 0 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 493 },
    [221] = { .lex_state = 28 },
    [222] = { .lex_state = 28 },
    [223] = { .lex_state = 28 },
    [224] = { .lex_state = 28 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 28 },
    [227] = { .lex_state = 28 },
    [228] = { .lex_state = 28 },
    [229] = { .lex_state = 28 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 28 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 29 },
    [236] = { .lex_state = 28 },
    [237] = { .lex_state = 29 },
    [238] = { .lex_state = 28 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 28 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 493 },
    [243] = { .lex_state = 493 },
    [244] = { .lex_state = 28 },
    [245] = { .lex_state = 29 },
    [246] = { .lex_state = 29 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 493 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 28 },
    [251] = { .lex_state = 29 },
    [252] = { .lex_state = 29 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 28 },
    [256] = { .lex_state = 29 },
    [257] = { .lex_state = 28 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 0 },
    [260] = { .lex_state = 28 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 818 },
    [268] = { .lex_state = 0 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 28 },
    [273] = { .lex_state = 28 },
    [274] = { .lex_state = 28 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 31 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 0 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 28 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 28 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 28 },
    [289] = { .lex_state = 31 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 31 },
    [293] = { .lex_state = 31 },
    [294] = { .lex_state = 41 },
    [295] = { .lex_state = 41 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 28 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 493 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 31 },
    [306] = { .lex_state = 28 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 28 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 28 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 28 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 493 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 41 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 493 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 31 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 31 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 493 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 493 },
    [345] = { .lex_state = 493 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 493 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 28 },
    [352] = { .lex_state = 541 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 28 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 28 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 28 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 28 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 28 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 28 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 28 },
    [373] = { .lex_state = 28 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 41 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 28 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 493 },
    [383] = { .lex_state = 28 },
    [384] = { (TSStateId)(-1) },
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
        [anon_sym_true] = ACTIONS(1),
        [anon_sym_false] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [anon_sym_octet] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint8] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float32] = ACTIONS(1),
        [anon_sym_float64] = ACTIONS(1),
        [anon_sym_float128] = ACTIONS(1),
        [anon_sym_byte] = ACTIONS(1),
        [anon_sym_boolean] = ACTIONS(1),
        [anon_sym_char8] = ACTIONS(1),
        [anon_sym_char16] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(332),
        [sym__definition] = STATE(52),
        [sym_except_dcl] = STATE(57),
        [sym_native_dcl] = STATE(325),
        [sym_module_dcl] = STATE(325),
        [sym_struct_forward_dcl] = STATE(325),
        [sym_struct_def] = STATE(325),
        [sym_enum_dcl] = STATE(325),
        [sym_enum_anno] = STATE(324),
        [sym_annotation] = STATE(325),
        [sym_union_forward_dcl] = STATE(325),
        [sym_union_def] = STATE(325),
        [sym_bitmask] = STATE(325),
        [sym_typedef_dcl] = STATE(325),
        [sym_predefine] = STATE(57),
        [sym_interface_dcl] = STATE(325),
        [sym_interface_forward_dcl] = STATE(323),
        [sym_interface_def] = STATE(323),
        [sym_interface_header] = STATE(319),
        [sym_dds_request_topic] = STATE(116),
        [sym_dds_reply_topic] = STATE(116),
        [sym_interface_anno] = STATE(114),
        [sym_const_dcl] = STATE(325),
        [sym_bit_bound] = STATE(318),
        [sym_data_representation] = STATE(165),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(22),
        [aux_sym_struct_def_repeat1] = STATE(115),
        [aux_sym_interface_def_repeat1] = STATE(84),
        [ts_builtin_sym_end] = ACTIONS(5),
        [anon_sym_exception] = ACTIONS(7),
        [anon_sym_native] = ACTIONS(9),
        [anon_sym_module] = ACTIONS(11),
        [anon_sym_struct] = ACTIONS(13),
        [anon_sym_enum] = ACTIONS(15),
        [anon_sym_ATignore_literal_names] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_union] = ACTIONS(21),
        [anon_sym_bitmask] = ACTIONS(23),
        [anon_sym_typedef] = ACTIONS(25),
        [anon_sym_POUNDdefine] = ACTIONS(27),
        [anon_sym_interface] = ACTIONS(29),
        [anon_sym_local] = ACTIONS(31),
        [sym_dds_service] = ACTIONS(33),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(35),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_ATbit_bound] = ACTIONS(41),
        [sym_final] = ACTIONS(43),
        [anon_sym_ATdata_representation] = ACTIONS(45),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_RBRACE,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(2),
    1,
    sym_comment,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [109] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(69),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [218] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(71),
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
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [327] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_RBRACE,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(84),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(90),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(93),
    1,
    sym_identifier,
    ACTIONS(96),
    1,
    anon_sym_sequence,
    ACTIONS(102),
    1,
    anon_sym_fixed,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(5),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(87),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(78),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(75),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [434] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(105),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [543] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(71),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(7),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [652] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(107),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(8),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [761] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(109),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [870] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(111),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [979] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(113),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1088] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(115),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_member,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(125),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1197] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(117),
    1,
    anon_sym_struct,
    ACTIONS(119),
    1,
    anon_sym_enum,
    ACTIONS(121),
    1,
    anon_sym_union,
    STATE(13),
    1,
    sym_comment,
    STATE(115),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_data_representation,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(287),
    1,
    sym_type_declarator,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(324),
    1,
    sym_enum_anno,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(113),
    7,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1305] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(14),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_member_repeat1,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(123),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1405] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(123),
    1,
    anon_sym_RBRACE,
    ACTIONS(125),
    1,
    anon_sym_void,
    ACTIONS(127),
    1,
    anon_sym_readonly,
    ACTIONS(129),
    1,
    anon_sym_attribute,
    STATE(15),
    1,
    sym_comment,
    STATE(199),
    1,
    sym_export,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(269),
    1,
    sym_interface_body,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_type_spec,
    STATE(379),
    1,
    sym_op_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(381),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    26,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1509] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(125),
    1,
    anon_sym_void,
    ACTIONS(127),
    1,
    anon_sym_readonly,
    ACTIONS(129),
    1,
    anon_sym_attribute,
    ACTIONS(131),
    1,
    anon_sym_RBRACE,
    STATE(16),
    1,
    sym_comment,
    STATE(199),
    1,
    sym_export,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(296),
    1,
    sym_interface_body,
    STATE(299),
    1,
    sym_type_spec,
    STATE(379),
    1,
    sym_op_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(381),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    26,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1613] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(125),
    1,
    anon_sym_void,
    ACTIONS(127),
    1,
    anon_sym_readonly,
    ACTIONS(129),
    1,
    anon_sym_attribute,
    ACTIONS(133),
    1,
    anon_sym_RBRACE,
    STATE(17),
    1,
    sym_comment,
    STATE(199),
    1,
    sym_export,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_type_spec,
    STATE(369),
    1,
    sym_interface_body,
    STATE(379),
    1,
    sym_op_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(381),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    26,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1717] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(125),
    1,
    anon_sym_void,
    ACTIONS(127),
    1,
    anon_sym_readonly,
    ACTIONS(129),
    1,
    anon_sym_attribute,
    STATE(18),
    1,
    sym_comment,
    STATE(206),
    1,
    sym_export,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_type_spec,
    STATE(379),
    1,
    sym_op_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(381),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    26,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1815] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(140),
    1,
    anon_sym_AThashid,
    ACTIONS(143),
    1,
    anon_sym_ATtry_construct,
    STATE(37),
    1,
    sym_struct_modifier,
    STATE(19),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(33),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(146),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(137),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(135),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [1885] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(150),
    1,
    anon_sym_exception,
    ACTIONS(153),
    1,
    anon_sym_native,
    ACTIONS(156),
    1,
    anon_sym_module,
    ACTIONS(159),
    1,
    anon_sym_struct,
    ACTIONS(162),
    1,
    anon_sym_enum,
    ACTIONS(165),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(168),
    1,
    anon_sym_ATannotation,
    ACTIONS(171),
    1,
    anon_sym_union,
    ACTIONS(174),
    1,
    anon_sym_bitmask,
    ACTIONS(177),
    1,
    anon_sym_typedef,
    ACTIONS(180),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(183),
    1,
    anon_sym_interface,
    ACTIONS(186),
    1,
    anon_sym_local,
    ACTIONS(189),
    1,
    sym_dds_service,
    ACTIONS(192),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(195),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(198),
    1,
    anon_sym_const,
    ACTIONS(201),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(204),
    1,
    sym_final,
    ACTIONS(207),
    1,
    anon_sym_ATdata_representation,
    STATE(52),
    1,
    sym__definition,
    STATE(84),
    1,
    aux_sym_interface_def_repeat1,
    STATE(114),
    1,
    sym_interface_anno,
    STATE(115),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_data_representation,
    STATE(318),
    1,
    sym_bit_bound,
    STATE(319),
    1,
    sym_interface_header,
    STATE(324),
    1,
    sym_enum_anno,
    ACTIONS(148),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(20),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(57),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(116),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(323),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(325),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2007] = 36,
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
    anon_sym_bitmask,
    ACTIONS(25),
    1,
    anon_sym_typedef,
    ACTIONS(27),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    anon_sym_local,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(39),
    1,
    anon_sym_const,
    ACTIONS(41),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(210),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_specification_repeat1,
    STATE(52),
    1,
    sym__definition,
    STATE(84),
    1,
    aux_sym_interface_def_repeat1,
    STATE(114),
    1,
    sym_interface_anno,
    STATE(115),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_data_representation,
    STATE(318),
    1,
    sym_bit_bound,
    STATE(319),
    1,
    sym_interface_header,
    STATE(324),
    1,
    sym_enum_anno,
    STATE(57),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(116),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(323),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(325),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2130] = 36,
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
    anon_sym_bitmask,
    ACTIONS(25),
    1,
    anon_sym_typedef,
    ACTIONS(27),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    anon_sym_local,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(39),
    1,
    anon_sym_const,
    ACTIONS(41),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(212),
    1,
    ts_builtin_sym_end,
    STATE(20),
    1,
    aux_sym_specification_repeat1,
    STATE(22),
    1,
    sym_comment,
    STATE(52),
    1,
    sym__definition,
    STATE(84),
    1,
    aux_sym_interface_def_repeat1,
    STATE(114),
    1,
    sym_interface_anno,
    STATE(115),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_data_representation,
    STATE(318),
    1,
    sym_bit_bound,
    STATE(319),
    1,
    sym_interface_header,
    STATE(324),
    1,
    sym_enum_anno,
    STATE(57),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(116),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(323),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(325),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2253] = 36,
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
    anon_sym_bitmask,
    ACTIONS(25),
    1,
    anon_sym_typedef,
    ACTIONS(27),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    anon_sym_local,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(39),
    1,
    anon_sym_const,
    ACTIONS(41),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(214),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    aux_sym_specification_repeat1,
    STATE(23),
    1,
    sym_comment,
    STATE(52),
    1,
    sym__definition,
    STATE(84),
    1,
    aux_sym_interface_def_repeat1,
    STATE(114),
    1,
    sym_interface_anno,
    STATE(115),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_data_representation,
    STATE(318),
    1,
    sym_bit_bound,
    STATE(319),
    1,
    sym_interface_header,
    STATE(324),
    1,
    sym_enum_anno,
    STATE(57),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(116),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(323),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(325),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2376] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(216),
    1,
    anon_sym_COMMA,
    ACTIONS(218),
    1,
    anon_sym_GT,
    STATE(24),
    1,
    sym_comment,
    STATE(207),
    1,
    sym_scoped_name,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(277),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2458] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(25),
    1,
    sym_comment,
    ACTIONS(220),
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
    ACTIONS(222),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(26),
    1,
    sym_comment,
    ACTIONS(224),
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
    ACTIONS(226),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(27),
    1,
    sym_comment,
    ACTIONS(228),
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
    ACTIONS(230),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2629] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(28),
    1,
    sym_comment,
    STATE(145),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    STATE(363),
    1,
    sym_element_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2708] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(29),
    1,
    sym_comment,
    ACTIONS(232),
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
    ACTIONS(234),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2765] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(30),
    1,
    sym_comment,
    ACTIONS(236),
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
    ACTIONS(238),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2822] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(31),
    1,
    sym_comment,
    ACTIONS(242),
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
    ACTIONS(240),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2878] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(32),
    1,
    sym_comment,
    ACTIONS(246),
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
    ACTIONS(244),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2934] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(33),
    1,
    sym_comment,
    ACTIONS(250),
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
    ACTIONS(248),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2990] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(34),
    1,
    sym_comment,
    STATE(227),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [3066] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(35),
    1,
    sym_comment,
    STATE(201),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [3142] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(36),
    1,
    sym_comment,
    STATE(190),
    1,
    sym_type_spec,
    STATE(251),
    1,
    sym_primitive_type,
    STATE(288),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(208),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(245),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [3218] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(254),
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
    ACTIONS(252),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [3274] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    STATE(38),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(274),
    1,
    sym_const_type,
    STATE(273),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [3335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(258),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(256),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [3383] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(262),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(260),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [3431] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(266),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(264),
    32,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [3479] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(232),
    1,
    sym_scoped_name,
    STATE(335),
    1,
    sym_primitive_type,
    STATE(337),
    1,
    sym_switch_type_spec,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    27,
    anon_sym_void,
    anon_sym_true,
    anon_sym_false,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
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
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [3536] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(43),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(169),
    1,
    sym_const_expr,
    STATE(322),
    1,
    sym_positive_int_const,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3608] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(44),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(169),
    1,
    sym_const_expr,
    STATE(259),
    1,
    sym_positive_int_const,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3680] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(45),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(169),
    1,
    sym_const_expr,
    STATE(292),
    1,
    sym_positive_int_const,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3752] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(46),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(169),
    1,
    sym_const_expr,
    STATE(333),
    1,
    sym_positive_int_const,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3824] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(169),
    1,
    sym_const_expr,
    STATE(330),
    1,
    sym_positive_int_const,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3896] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(48),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(331),
    1,
    sym_const_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3965] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(317),
    1,
    sym_const_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4034] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(284),
    22,
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
    [4065] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(291),
    1,
    sym_const_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4134] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(286),
    22,
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
    [4165] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(362),
    1,
    sym_const_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4234] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(288),
    22,
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
    [4265] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(92),
    1,
    sym_or_expr,
    STATE(264),
    1,
    sym_const_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4334] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(290),
    22,
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
    [4365] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(292),
    22,
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
    [4396] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(294),
    22,
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
    [4427] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(87),
    1,
    sym_and_expr,
    STATE(90),
    1,
    sym_xor_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4490] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(82),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    STATE(86),
    1,
    sym_and_expr,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4550] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(80),
    1,
    sym_add_expr,
    STATE(83),
    1,
    sym_shift_expr,
    STATE(85),
    1,
    sym_unary_operator,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4607] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(298),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(296),
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
    [4635] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(72),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(81),
    1,
    sym_add_expr,
    STATE(85),
    1,
    sym_unary_operator,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4689] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(304),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(302),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(300),
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
    [4719] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(304),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(308),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(306),
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
    [4749] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(312),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(310),
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
    [4777] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(316),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(314),
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
    [4804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(320),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(318),
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
    [4831] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(324),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(322),
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
    [4858] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(70),
    1,
    sym_comment,
    STATE(71),
    1,
    sym_mult_expr,
    STATE(73),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_unary_operator,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4909] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(330),
    1,
    anon_sym_SLASH,
    ACTIONS(332),
    1,
    anon_sym_GT,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(328),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(326),
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
    [4940] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(330),
    1,
    anon_sym_SLASH,
    ACTIONS(336),
    1,
    anon_sym_GT,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(328),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(334),
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
    [4971] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(340),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(338),
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
    [4998] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(344),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(342),
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
    [5025] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(348),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(346),
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
    [5052] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(302),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(300),
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
    [5079] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(308),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(306),
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
    [5106] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(352),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(350),
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
    [5133] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(270),
    1,
    anon_sym_TILDE,
    ACTIONS(272),
    1,
    anon_sym_LPAREN,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_scoped_name,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(77),
    1,
    sym_literal,
    STATE(79),
    1,
    sym_comment,
    STATE(85),
    1,
    sym_unary_operator,
    ACTIONS(268),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5181] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(358),
    1,
    anon_sym_GT,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(356),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(354),
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
    [5207] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(362),
    1,
    anon_sym_GT,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(356),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(360),
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
    [5233] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(368),
    1,
    anon_sym_GT,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(366),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(364),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5257] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(372),
    1,
    anon_sym_GT,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(366),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(370),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [5281] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(374),
    1,
    anon_sym_interface,
    ACTIONS(376),
    1,
    anon_sym_local,
    STATE(84),
    1,
    sym_comment,
    STATE(88),
    1,
    aux_sym_interface_def_repeat1,
    STATE(114),
    1,
    sym_interface_anno,
    STATE(284),
    1,
    sym_interface_header,
    STATE(116),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5316] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(274),
    1,
    anon_sym_SQUOTE,
    ACTIONS(276),
    1,
    anon_sym_L,
    ACTIONS(278),
    1,
    sym_number_literal,
    ACTIONS(280),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(282),
    1,
    sym_identifier,
    ACTIONS(378),
    1,
    anon_sym_LPAREN,
    STATE(64),
    1,
    sym_scoped_name,
    STATE(76),
    1,
    sym_literal,
    STATE(85),
    1,
    sym_comment,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [5351] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(382),
    1,
    anon_sym_DOLLAR,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(380),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5371] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(382),
    1,
    anon_sym_DOLLAR,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(384),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5391] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(388),
    1,
    sym_dds_service,
    ACTIONS(391),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(394),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(114),
    1,
    sym_interface_anno,
    ACTIONS(386),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(88),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(116),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5419] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(397),
    1,
    anon_sym_SEMI,
    ACTIONS(399),
    1,
    anon_sym_COMMA,
    ACTIONS(401),
    1,
    anon_sym_getraises,
    ACTIONS(403),
    1,
    anon_sym_setraises,
    STATE(89),
    1,
    sym_comment,
    STATE(140),
    1,
    sym_get_excep_expr,
    STATE(175),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(302),
    1,
    sym_attr_raises_expr,
    STATE(304),
    1,
    sym_set_excep_expr,
    [5450] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(407),
    1,
    anon_sym_CARET,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(405),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5469] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(407),
    1,
    anon_sym_CARET,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(409),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5488] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(413),
    1,
    anon_sym_PIPE,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(411),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5506] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(415),
    1,
    anon_sym_RPAREN,
    ACTIONS(417),
    1,
    anon_sym_in,
    STATE(34),
    1,
    sym_param_attribute,
    STATE(93),
    1,
    sym_comment,
    STATE(173),
    1,
    sym_param_dcl,
    STATE(308),
    1,
    sym_parameter_dcls,
    ACTIONS(419),
    2,
    anon_sym_out,
    anon_sym_inout,
    [5532] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(421),
    1,
    anon_sym_RBRACE,
    ACTIONS(423),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(426),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_annotation_field,
    STATE(370),
    1,
    sym_scoped_name,
    STATE(94),
    2,
    sym_comment,
    aux_sym_annotation_repeat1,
    [5555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(429),
    6,
    anon_sym_SEMI,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [5570] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(431),
    1,
    anon_sym_RBRACE,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(103),
    1,
    aux_sym_annotation_repeat1,
    STATE(161),
    1,
    sym_annotation_field,
    STATE(370),
    1,
    sym_scoped_name,
    [5595] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(435),
    1,
    anon_sym_RBRACE,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_comment,
    STATE(133),
    1,
    aux_sym_enumerator_repeat1,
    STATE(155),
    1,
    sym_enumerator,
    STATE(211),
    1,
    sym_enum_modifier,
    [5620] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_LBRACK,
    STATE(98),
    1,
    sym_comment,
    STATE(105),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(128),
    1,
    sym_fixed_array_size,
    ACTIONS(429),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5641] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(445),
    1,
    anon_sym_LBRACK,
    STATE(128),
    1,
    sym_fixed_array_size,
    STATE(99),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(443),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5660] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(448),
    1,
    anon_sym_RBRACE,
    ACTIONS(450),
    1,
    anon_sym_default,
    ACTIONS(452),
    1,
    anon_sym_case,
    STATE(28),
    1,
    sym_case_label,
    STATE(100),
    1,
    sym_comment,
    STATE(108),
    1,
    aux_sym_union_def_repeat1,
    STATE(163),
    1,
    sym_case,
    [5685] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(454),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(456),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [5702] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(458),
    1,
    anon_sym_RBRACE,
    ACTIONS(460),
    1,
    anon_sym_ATposition,
    ACTIONS(463),
    1,
    sym_identifier,
    STATE(203),
    1,
    sym_bitmask_field,
    STATE(311),
    1,
    sym_position,
    STATE(102),
    2,
    sym_comment,
    aux_sym_bitmask_repeat1,
    [5725] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_RBRACE,
    STATE(94),
    1,
    aux_sym_annotation_repeat1,
    STATE(103),
    1,
    sym_comment,
    STATE(161),
    1,
    sym_annotation_field,
    STATE(370),
    1,
    sym_scoped_name,
    [5750] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(468),
    1,
    anon_sym_RBRACE,
    ACTIONS(470),
    1,
    anon_sym_ATposition,
    ACTIONS(472),
    1,
    sym_identifier,
    STATE(104),
    1,
    sym_comment,
    STATE(106),
    1,
    aux_sym_bitmask_repeat1,
    STATE(203),
    1,
    sym_bitmask_field,
    STATE(311),
    1,
    sym_position,
    [5775] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_LBRACK,
    STATE(99),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(105),
    1,
    sym_comment,
    STATE(128),
    1,
    sym_fixed_array_size,
    ACTIONS(474),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5796] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(470),
    1,
    anon_sym_ATposition,
    ACTIONS(472),
    1,
    sym_identifier,
    ACTIONS(476),
    1,
    anon_sym_RBRACE,
    STATE(102),
    1,
    aux_sym_bitmask_repeat1,
    STATE(106),
    1,
    sym_comment,
    STATE(203),
    1,
    sym_bitmask_field,
    STATE(311),
    1,
    sym_position,
    [5821] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(470),
    1,
    anon_sym_ATposition,
    ACTIONS(472),
    1,
    sym_identifier,
    ACTIONS(476),
    1,
    anon_sym_RBRACE,
    STATE(107),
    1,
    sym_comment,
    STATE(110),
    1,
    aux_sym_bitmask_repeat1,
    STATE(203),
    1,
    sym_bitmask_field,
    STATE(311),
    1,
    sym_position,
    [5846] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(478),
    1,
    anon_sym_RBRACE,
    ACTIONS(480),
    1,
    anon_sym_default,
    ACTIONS(483),
    1,
    anon_sym_case,
    STATE(28),
    1,
    sym_case_label,
    STATE(163),
    1,
    sym_case,
    STATE(108),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [5869] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    ACTIONS(486),
    1,
    anon_sym_RBRACE,
    STATE(109),
    1,
    sym_comment,
    STATE(133),
    1,
    aux_sym_enumerator_repeat1,
    STATE(196),
    1,
    sym_enumerator,
    STATE(211),
    1,
    sym_enum_modifier,
    [5894] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(470),
    1,
    anon_sym_ATposition,
    ACTIONS(472),
    1,
    sym_identifier,
    ACTIONS(488),
    1,
    anon_sym_RBRACE,
    STATE(102),
    1,
    aux_sym_bitmask_repeat1,
    STATE(110),
    1,
    sym_comment,
    STATE(203),
    1,
    sym_bitmask_field,
    STATE(311),
    1,
    sym_position,
    [5919] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(450),
    1,
    anon_sym_default,
    ACTIONS(452),
    1,
    anon_sym_case,
    ACTIONS(490),
    1,
    anon_sym_RBRACE,
    STATE(28),
    1,
    sym_case_label,
    STATE(100),
    1,
    aux_sym_union_def_repeat1,
    STATE(111),
    1,
    sym_comment,
    STATE(163),
    1,
    sym_case,
    [5944] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(492),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5958] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(113),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_any_declarator,
    STATE(315),
    1,
    sym_any_declarators,
    STATE(241),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [5978] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(496),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5992] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(498),
    1,
    anon_sym_struct,
    STATE(115),
    1,
    sym_comment,
    STATE(117),
    1,
    aux_sym_struct_def_repeat1,
    STATE(165),
    1,
    sym_data_representation,
    [6014] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(500),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6028] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(502),
    1,
    anon_sym_struct,
    ACTIONS(504),
    1,
    sym_final,
    ACTIONS(507),
    1,
    anon_sym_ATdata_representation,
    STATE(165),
    1,
    sym_data_representation,
    STATE(117),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [6048] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(399),
    1,
    anon_sym_COMMA,
    ACTIONS(510),
    1,
    anon_sym_SEMI,
    ACTIONS(512),
    1,
    anon_sym_raises,
    STATE(118),
    1,
    sym_comment,
    STATE(170),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(329),
    1,
    sym_raises_expr,
    [6070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(310),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    sym_identifier,
    anon_sym_GT,
    [6084] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(120),
    1,
    sym_comment,
    STATE(133),
    1,
    aux_sym_enumerator_repeat1,
    STATE(211),
    1,
    sym_enum_modifier,
    STATE(254),
    1,
    sym_enumerator,
    [6106] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(417),
    1,
    anon_sym_in,
    STATE(34),
    1,
    sym_param_attribute,
    STATE(121),
    1,
    sym_comment,
    STATE(218),
    1,
    sym_param_dcl,
    ACTIONS(419),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6126] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(514),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6140] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(123),
    1,
    sym_comment,
    STATE(131),
    1,
    sym_declarator,
    STATE(187),
    1,
    sym_declarators,
    STATE(202),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6160] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(296),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    sym_identifier,
    anon_sym_GT,
    [6174] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(125),
    1,
    sym_comment,
    STATE(131),
    1,
    sym_declarator,
    STATE(204),
    1,
    sym_declarators,
    STATE(202),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6194] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(126),
    1,
    sym_comment,
    STATE(249),
    1,
    sym_any_declarator,
    STATE(241),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6211] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(516),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(519),
    1,
    sym_identifier,
    STATE(211),
    1,
    sym_enum_modifier,
    STATE(127),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [6228] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(521),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6241] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(523),
    1,
    anon_sym_RPAREN,
    ACTIONS(525),
    1,
    anon_sym_COMMA,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(129),
    1,
    sym_comment,
    STATE(157),
    1,
    aux_sym_raises_expr_repeat1,
    [6260] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(529),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6273] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    anon_sym_COMMA,
    STATE(131),
    1,
    sym_comment,
    STATE(144),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(531),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6290] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    anon_sym_COMMA,
    ACTIONS(527),
    1,
    sym_identifier,
    ACTIONS(535),
    1,
    anon_sym_RPAREN,
    STATE(132),
    1,
    sym_comment,
    STATE(159),
    1,
    aux_sym_raises_expr_repeat1,
    [6309] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(437),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(537),
    1,
    sym_identifier,
    STATE(127),
    1,
    aux_sym_enumerator_repeat1,
    STATE(133),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_enum_modifier,
    [6328] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    ACTIONS(539),
    1,
    anon_sym_RPAREN,
    STATE(129),
    1,
    sym_scoped_name,
    STATE(134),
    1,
    sym_comment,
    [6347] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(541),
    1,
    anon_sym_SEMI,
    ACTIONS(543),
    1,
    anon_sym_setraises,
    STATE(230),
    1,
    sym_set_excep_expr,
    STATE(135),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [6364] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(548),
    1,
    anon_sym_COMMA,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(546),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6379] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(550),
    1,
    anon_sym_SEMI,
    ACTIONS(552),
    1,
    anon_sym_LBRACE,
    ACTIONS(554),
    1,
    anon_sym_COLON,
    STATE(137),
    1,
    sym_comment,
    STATE(321),
    1,
    sym_interface_inheritance_spec,
    [6398] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(556),
    1,
    anon_sym_RPAREN,
    ACTIONS(558),
    1,
    anon_sym_XCDR,
    ACTIONS(561),
    1,
    anon_sym_XCDR2,
    STATE(138),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [6415] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(564),
    1,
    anon_sym_RPAREN,
    ACTIONS(566),
    1,
    anon_sym_XCDR,
    ACTIONS(568),
    1,
    anon_sym_XCDR2,
    STATE(138),
    1,
    aux_sym_data_representation_repeat1,
    STATE(139),
    1,
    sym_comment,
    [6434] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(403),
    1,
    anon_sym_setraises,
    ACTIONS(570),
    1,
    anon_sym_SEMI,
    STATE(140),
    1,
    sym_comment,
    STATE(151),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(230),
    1,
    sym_set_excep_expr,
    [6453] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(574),
    1,
    anon_sym_LBRACE,
    ACTIONS(576),
    1,
    anon_sym_COLON,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(572),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6470] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(312),
    1,
    sym_identifier,
    ACTIONS(578),
    1,
    anon_sym_SEMI,
    ACTIONS(580),
    1,
    anon_sym_default,
    STATE(142),
    1,
    sym_comment,
    STATE(281),
    1,
    sym_default,
    [6489] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(143),
    1,
    sym_comment,
    STATE(178),
    1,
    sym_interface_name,
    STATE(179),
    1,
    sym_scoped_name,
    [6508] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(533),
    1,
    anon_sym_COMMA,
    STATE(144),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(582),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6525] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(145),
    1,
    sym_comment,
    STATE(374),
    1,
    sym_declarator,
    STATE(202),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6542] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    sym_identifier,
    STATE(146),
    1,
    sym_comment,
    STATE(172),
    1,
    sym_declarator,
    STATE(202),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6559] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(586),
    1,
    anon_sym_COMMA,
    ACTIONS(584),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(147),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [6574] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_scoped_name,
    STATE(247),
    1,
    sym_interface_name,
    [6593] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(591),
    1,
    anon_sym_COMMA,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(589),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6608] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    ACTIONS(593),
    1,
    anon_sym_RPAREN,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_comment,
    [6627] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(403),
    1,
    anon_sym_setraises,
    ACTIONS(595),
    1,
    anon_sym_SEMI,
    STATE(135),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(151),
    1,
    sym_comment,
    STATE(230),
    1,
    sym_set_excep_expr,
    [6646] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(597),
    1,
    anon_sym_SEMI,
    ACTIONS(599),
    1,
    anon_sym_COMMA,
    STATE(152),
    1,
    sym_comment,
    STATE(177),
    1,
    aux_sym_any_declarators_repeat1,
    [6662] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(566),
    1,
    anon_sym_XCDR,
    ACTIONS(568),
    1,
    anon_sym_XCDR2,
    STATE(139),
    1,
    aux_sym_data_representation_repeat1,
    STATE(153),
    1,
    sym_comment,
    [6678] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(601),
    1,
    anon_sym_RPAREN,
    ACTIONS(603),
    1,
    anon_sym_COMMA,
    STATE(154),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [6692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(486),
    1,
    anon_sym_RBRACE,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    STATE(155),
    1,
    sym_comment,
    STATE(200),
    1,
    aux_sym_enum_dcl_repeat1,
    [6708] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(601),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [6722] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    anon_sym_COMMA,
    ACTIONS(608),
    1,
    anon_sym_RPAREN,
    STATE(154),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(157),
    1,
    sym_comment,
    [6738] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(610),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6750] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    anon_sym_COMMA,
    ACTIONS(612),
    1,
    anon_sym_RPAREN,
    STATE(154),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(159),
    1,
    sym_comment,
    [6766] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_scoped_name,
    STATE(160),
    1,
    sym_comment,
    [6782] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(614),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6794] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(616),
    1,
    anon_sym_RPAREN,
    ACTIONS(618),
    1,
    anon_sym_COMMA,
    STATE(162),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [6808] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(621),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6820] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(623),
    1,
    anon_sym_RPAREN,
    ACTIONS(625),
    1,
    anon_sym_COMMA,
    STATE(162),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(164),
    1,
    sym_comment,
    [6836] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(627),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6848] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(546),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6860] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(512),
    1,
    anon_sym_raises,
    ACTIONS(629),
    1,
    anon_sym_SEMI,
    STATE(167),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_raises_expr,
    [6876] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(631),
    1,
    anon_sym_SEMI,
    ACTIONS(633),
    1,
    anon_sym_COMMA,
    STATE(168),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [6890] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(636),
    3,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [6902] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(399),
    1,
    anon_sym_COMMA,
    ACTIONS(638),
    1,
    anon_sym_SEMI,
    STATE(168),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(170),
    1,
    sym_comment,
    [6918] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(640),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6930] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(584),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6942] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(625),
    1,
    anon_sym_COMMA,
    ACTIONS(642),
    1,
    anon_sym_RPAREN,
    STATE(164),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(173),
    1,
    sym_comment,
    [6958] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(512),
    1,
    anon_sym_raises,
    ACTIONS(644),
    1,
    anon_sym_SEMI,
    STATE(174),
    1,
    sym_comment,
    STATE(338),
    1,
    sym_raises_expr,
    [6974] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(399),
    1,
    anon_sym_COMMA,
    ACTIONS(646),
    1,
    anon_sym_SEMI,
    STATE(168),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(175),
    1,
    sym_comment,
    [6990] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(648),
    1,
    anon_sym_SEMI,
    ACTIONS(650),
    1,
    anon_sym_switch,
    ACTIONS(652),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_comment,
    [7006] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(599),
    1,
    anon_sym_COMMA,
    ACTIONS(654),
    1,
    anon_sym_SEMI,
    STATE(177),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_any_declarators_repeat1,
    [7022] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(656),
    1,
    anon_sym_LBRACE,
    ACTIONS(658),
    1,
    anon_sym_COMMA,
    STATE(178),
    1,
    sym_comment,
    STATE(193),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [7038] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(660),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [7052] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    ACTIONS(662),
    1,
    anon_sym_RBRACE,
    STATE(180),
    1,
    sym_comment,
    STATE(185),
    1,
    aux_sym_enum_dcl_repeat1,
    [7068] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(664),
    3,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [7080] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(666),
    1,
    anon_sym_LBRACE,
    ACTIONS(668),
    1,
    anon_sym_COMMA,
    STATE(182),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [7094] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    anon_sym_LT,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(671),
    2,
    sym_identifier,
    anon_sym_GT,
    [7108] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(675),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7120] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(677),
    1,
    anon_sym_RBRACE,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    STATE(185),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [7134] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(682),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7146] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(684),
    1,
    anon_sym_SEMI,
    ACTIONS(686),
    1,
    anon_sym_default,
    STATE(187),
    1,
    sym_comment,
    STATE(258),
    1,
    sym_default,
    [7162] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(688),
    1,
    anon_sym_SEMI,
    ACTIONS(690),
    1,
    anon_sym_COMMA,
    STATE(188),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [7176] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(693),
    1,
    anon_sym_RBRACE,
    ACTIONS(695),
    1,
    anon_sym_COMMA,
    STATE(189),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [7190] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_simple_declarator,
    STATE(190),
    1,
    sym_comment,
    STATE(265),
    1,
    sym_attr_declarator,
    [7206] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(552),
    1,
    anon_sym_LBRACE,
    ACTIONS(554),
    1,
    anon_sym_COLON,
    STATE(191),
    1,
    sym_comment,
    STATE(321),
    1,
    sym_interface_inheritance_spec,
    [7222] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(700),
    1,
    anon_sym_RBRACE,
    ACTIONS(702),
    1,
    anon_sym_COMMA,
    STATE(189),
    1,
    aux_sym_interface_body_repeat1,
    STATE(192),
    1,
    sym_comment,
    [7238] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(658),
    1,
    anon_sym_COMMA,
    ACTIONS(704),
    1,
    anon_sym_LBRACE,
    STATE(182),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(193),
    1,
    sym_comment,
    [7254] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(194),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_scoped_name,
    [7270] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(708),
    1,
    anon_sym_XCDR,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(706),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [7284] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    ACTIONS(710),
    1,
    anon_sym_RBRACE,
    STATE(180),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(196),
    1,
    sym_comment,
    [7300] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(433),
    1,
    sym_identifier,
    STATE(197),
    1,
    sym_comment,
    STATE(250),
    1,
    sym_scoped_name,
    [7316] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(712),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [7328] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    anon_sym_COMMA,
    ACTIONS(714),
    1,
    anon_sym_RBRACE,
    STATE(192),
    1,
    aux_sym_interface_body_repeat1,
    STATE(199),
    1,
    sym_comment,
    [7344] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    ACTIONS(710),
    1,
    anon_sym_RBRACE,
    STATE(185),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(200),
    1,
    sym_comment,
    [7360] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_simple_declarator,
    STATE(201),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_readonly_attr_declarator,
    [7376] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(716),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7388] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(718),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [7400] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    anon_sym_default,
    ACTIONS(720),
    1,
    anon_sym_SEMI,
    STATE(204),
    1,
    sym_comment,
    STATE(275),
    1,
    sym_default,
    [7416] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(722),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7427] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(693),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7438] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    ACTIONS(724),
    1,
    anon_sym_GT,
    STATE(207),
    1,
    sym_comment,
    [7451] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(726),
    2,
    sym_identifier,
    anon_sym_GT,
    [7462] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(728),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7473] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    STATE(312),
    1,
    sym_simple_declarator,
    [7486] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(730),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7497] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(732),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [7508] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(734),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7519] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(736),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [7530] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(738),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7541] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(740),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7552] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(742),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [7563] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(616),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [7574] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(744),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [7585] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(374),
    1,
    anon_sym_interface,
    STATE(220),
    1,
    sym_comment,
    STATE(284),
    1,
    sym_interface_header,
    [7598] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    ACTIONS(746),
    1,
    anon_sym_LBRACE,
    STATE(221),
    1,
    sym_comment,
    [7611] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(748),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7622] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(750),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7633] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(752),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7644] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(754),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(756),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7666] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_simple_declarator,
    STATE(227),
    1,
    sym_comment,
    [7679] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(758),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7690] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(760),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7701] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(762),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [7712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(764),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [7723] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    ACTIONS(766),
    1,
    anon_sym_RPAREN,
    STATE(232),
    1,
    sym_comment,
    [7736] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(768),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [7747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(631),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7758] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(770),
    2,
    sym_identifier,
    anon_sym_GT,
    [7769] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(772),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7780] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(774),
    2,
    sym_identifier,
    anon_sym_GT,
    [7791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(776),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(778),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7813] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(780),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7824] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(782),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7835] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(784),
    1,
    anon_sym_LPAREN,
    STATE(231),
    1,
    sym_exception_list,
    STATE(242),
    1,
    sym_comment,
    [7848] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(784),
    1,
    anon_sym_LPAREN,
    STATE(233),
    1,
    sym_exception_list,
    STATE(243),
    1,
    sym_comment,
    [7861] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(698),
    1,
    sym_identifier,
    STATE(234),
    1,
    sym_simple_declarator,
    STATE(244),
    1,
    sym_comment,
    [7874] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(786),
    2,
    sym_identifier,
    anon_sym_GT,
    [7885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(788),
    2,
    sym_identifier,
    anon_sym_GT,
    [7896] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(666),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [7907] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(374),
    1,
    anon_sym_interface,
    STATE(248),
    1,
    sym_comment,
    STATE(279),
    1,
    sym_interface_header,
    [7920] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(688),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7931] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    ACTIONS(790),
    1,
    anon_sym_LBRACE,
    STATE(250),
    1,
    sym_comment,
    [7944] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(724),
    2,
    sym_identifier,
    anon_sym_GT,
    [7955] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(792),
    2,
    sym_identifier,
    anon_sym_GT,
    [7966] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(794),
    1,
    anon_sym_LBRACE,
    ACTIONS(796),
    1,
    anon_sym_COLON,
    STATE(253),
    1,
    sym_comment,
    [7979] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7990] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(255),
    1,
    sym_comment,
    ACTIONS(798),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8001] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(800),
    2,
    sym_identifier,
    anon_sym_GT,
    [8012] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(257),
    1,
    sym_comment,
    [8022] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(802),
    1,
    anon_sym_SEMI,
    STATE(258),
    1,
    sym_comment,
    [8032] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    anon_sym_RBRACK,
    STATE(259),
    1,
    sym_comment,
    [8042] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(806),
    1,
    sym_identifier,
    STATE(260),
    1,
    sym_comment,
    [8052] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(808),
    1,
    anon_sym_SEMI,
    STATE(261),
    1,
    sym_comment,
    [8062] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(810),
    1,
    anon_sym_RPAREN,
    STATE(262),
    1,
    sym_comment,
    [8072] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(812),
    1,
    anon_sym_RPAREN,
    STATE(263),
    1,
    sym_comment,
    [8082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(814),
    1,
    anon_sym_SEMI,
    STATE(264),
    1,
    sym_comment,
    [8092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(816),
    1,
    anon_sym_SEMI,
    STATE(265),
    1,
    sym_comment,
    [8102] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(818),
    1,
    anon_sym_LBRACE,
    STATE(266),
    1,
    sym_comment,
    [8112] = 3,
    ACTIONS(820),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(822),
    1,
    aux_sym_comment_token1,
    STATE(267),
    1,
    sym_comment,
    [8122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(824),
    1,
    anon_sym_SEMI,
    STATE(268),
    1,
    sym_comment,
    [8132] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(826),
    1,
    anon_sym_RBRACE,
    STATE(269),
    1,
    sym_comment,
    [8142] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(828),
    1,
    anon_sym_DQUOTE,
    STATE(270),
    1,
    sym_comment,
    [8152] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(830),
    1,
    aux_sym_bit_bound_token1,
    STATE(271),
    1,
    sym_comment,
    [8162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(832),
    1,
    sym_identifier,
    STATE(272),
    1,
    sym_comment,
    [8172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(832),
    1,
    sym_identifier,
    STATE(273),
    1,
    sym_comment,
    [8182] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(834),
    1,
    sym_identifier,
    STATE(274),
    1,
    sym_comment,
    [8192] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(836),
    1,
    anon_sym_SEMI,
    STATE(275),
    1,
    sym_comment,
    [8202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_name,
    STATE(276),
    1,
    sym_comment,
    [8212] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    anon_sym_GT,
    STATE(277),
    1,
    sym_comment,
    [8222] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    anon_sym_name,
    STATE(278),
    1,
    sym_comment,
    [8232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(844),
    1,
    anon_sym_LBRACE,
    STATE(279),
    1,
    sym_comment,
    [8242] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(846),
    1,
    anon_sym_bitmask,
    STATE(280),
    1,
    sym_comment,
    [8252] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(848),
    1,
    anon_sym_SEMI,
    STATE(281),
    1,
    sym_comment,
    [8262] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(850),
    1,
    anon_sym_LBRACE,
    STATE(282),
    1,
    sym_comment,
    [8272] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(852),
    1,
    sym_identifier,
    STATE(283),
    1,
    sym_comment,
    [8282] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(854),
    1,
    anon_sym_LBRACE,
    STATE(284),
    1,
    sym_comment,
    [8292] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(856),
    1,
    sym_identifier,
    STATE(285),
    1,
    sym_comment,
    [8302] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(858),
    1,
    anon_sym_SQUOTE,
    STATE(286),
    1,
    sym_comment,
    [8312] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_SEMI,
    STATE(287),
    1,
    sym_comment,
    [8322] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(724),
    1,
    sym_identifier,
    STATE(288),
    1,
    sym_comment,
    [8332] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(862),
    1,
    anon_sym_LT,
    STATE(289),
    1,
    sym_comment,
    [8342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(864),
    1,
    anon_sym_SEMI,
    STATE(290),
    1,
    sym_comment,
    [8352] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_RPAREN,
    STATE(291),
    1,
    sym_comment,
    [8362] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    anon_sym_GT,
    STATE(292),
    1,
    sym_comment,
    [8372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_LT,
    STATE(293),
    1,
    sym_comment,
    [8382] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(872),
    1,
    aux_sym_char_literal_token1,
    STATE(294),
    1,
    sym_comment,
    [8392] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(874),
    1,
    aux_sym_char_literal_token1,
    STATE(295),
    1,
    sym_comment,
    [8402] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(123),
    1,
    anon_sym_RBRACE,
    STATE(296),
    1,
    sym_comment,
    [8412] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    sym_comment,
    [8422] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(878),
    1,
    anon_sym_SEMI,
    STATE(298),
    1,
    sym_comment,
    [8432] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(880),
    1,
    sym_identifier,
    STATE(299),
    1,
    sym_comment,
    [8442] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(882),
    1,
    anon_sym_SEMI,
    STATE(300),
    1,
    sym_comment,
    [8452] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(884),
    1,
    anon_sym_LPAREN,
    STATE(301),
    1,
    sym_comment,
    [8462] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(646),
    1,
    anon_sym_SEMI,
    STATE(302),
    1,
    sym_comment,
    [8472] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(886),
    1,
    anon_sym_LBRACE,
    STATE(303),
    1,
    sym_comment,
    [8482] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(570),
    1,
    anon_sym_SEMI,
    STATE(304),
    1,
    sym_comment,
    [8492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(888),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(305),
    1,
    sym_comment,
    [8502] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(890),
    1,
    sym_identifier,
    STATE(306),
    1,
    sym_comment,
    [8512] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_LBRACE,
    STATE(307),
    1,
    sym_comment,
    [8522] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(894),
    1,
    anon_sym_RPAREN,
    STATE(308),
    1,
    sym_comment,
    [8532] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(896),
    1,
    sym_identifier,
    STATE(309),
    1,
    sym_comment,
    [8542] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    anon_sym_LBRACE,
    STATE(310),
    1,
    sym_comment,
    [8552] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(900),
    1,
    sym_identifier,
    STATE(311),
    1,
    sym_comment,
    [8562] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_SEMI,
    STATE(312),
    1,
    sym_comment,
    [8572] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(904),
    1,
    anon_sym_SEMI,
    STATE(313),
    1,
    sym_comment,
    [8582] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(906),
    1,
    anon_sym_LBRACE,
    STATE(314),
    1,
    sym_comment,
    [8592] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_SEMI,
    STATE(315),
    1,
    sym_comment,
    [8602] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(304),
    1,
    sym_identifier,
    STATE(316),
    1,
    sym_comment,
    [8612] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_SEMI,
    STATE(317),
    1,
    sym_comment,
    [8622] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(912),
    1,
    anon_sym_bitmask,
    STATE(318),
    1,
    sym_comment,
    [8632] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(914),
    1,
    anon_sym_LBRACE,
    STATE(319),
    1,
    sym_comment,
    [8642] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(916),
    1,
    anon_sym_LPAREN,
    STATE(320),
    1,
    sym_comment,
    [8652] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(918),
    1,
    anon_sym_LBRACE,
    STATE(321),
    1,
    sym_comment,
    [8662] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(920),
    1,
    anon_sym_COMMA,
    STATE(322),
    1,
    sym_comment,
    [8672] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(922),
    1,
    anon_sym_SEMI,
    STATE(323),
    1,
    sym_comment,
    [8682] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(924),
    1,
    anon_sym_enum,
    STATE(324),
    1,
    sym_comment,
    [8692] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(926),
    1,
    anon_sym_SEMI,
    STATE(325),
    1,
    sym_comment,
    [8702] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(928),
    1,
    aux_sym_char_literal_token1,
    STATE(326),
    1,
    sym_comment,
    [8712] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(930),
    1,
    anon_sym_SQUOTE,
    STATE(327),
    1,
    sym_comment,
    [8722] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(932),
    1,
    anon_sym_LPAREN,
    STATE(328),
    1,
    sym_comment,
    [8732] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(638),
    1,
    anon_sym_SEMI,
    STATE(329),
    1,
    sym_comment,
    [8742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(934),
    1,
    anon_sym_GT,
    STATE(330),
    1,
    sym_comment,
    [8752] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(936),
    1,
    anon_sym_RPAREN,
    STATE(331),
    1,
    sym_comment,
    [8762] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(938),
    1,
    ts_builtin_sym_end,
    STATE(332),
    1,
    sym_comment,
    [8772] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(940),
    1,
    anon_sym_GT,
    STATE(333),
    1,
    sym_comment,
    [8782] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(942),
    1,
    anon_sym_RPAREN,
    STATE(334),
    1,
    sym_comment,
    [8792] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(766),
    1,
    anon_sym_RPAREN,
    STATE(335),
    1,
    sym_comment,
    [8802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(944),
    1,
    anon_sym_LPAREN,
    STATE(336),
    1,
    sym_comment,
    [8812] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(946),
    1,
    anon_sym_RPAREN,
    STATE(337),
    1,
    sym_comment,
    [8822] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(629),
    1,
    anon_sym_SEMI,
    STATE(338),
    1,
    sym_comment,
    [8832] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(948),
    1,
    anon_sym_SEMI,
    STATE(339),
    1,
    sym_comment,
    [8842] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(950),
    1,
    anon_sym_EQ,
    STATE(340),
    1,
    sym_comment,
    [8852] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(952),
    1,
    aux_sym_bit_bound_token1,
    STATE(341),
    1,
    sym_comment,
    [8862] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(954),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [8872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(956),
    1,
    anon_sym_EQ,
    STATE(343),
    1,
    sym_comment,
    [8882] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(958),
    1,
    anon_sym_LPAREN,
    STATE(344),
    1,
    sym_comment,
    [8892] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(960),
    1,
    anon_sym_LPAREN,
    STATE(345),
    1,
    sym_comment,
    [8902] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(962),
    1,
    anon_sym_EQ,
    STATE(346),
    1,
    sym_comment,
    [8912] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(964),
    1,
    anon_sym_COLON,
    STATE(347),
    1,
    sym_comment,
    [8922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_LPAREN,
    STATE(348),
    1,
    sym_comment,
    [8932] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(968),
    1,
    anon_sym_RPAREN,
    STATE(349),
    1,
    sym_comment,
    [8942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    [8952] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(972),
    1,
    sym_identifier,
    STATE(351),
    1,
    sym_comment,
    [8962] = 3,
    ACTIONS(820),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    aux_sym_predefine_token1,
    STATE(352),
    1,
    sym_comment,
    [8972] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(976),
    1,
    anon_sym_LBRACE,
    STATE(353),
    1,
    sym_comment,
    [8982] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(978),
    1,
    anon_sym_LBRACE,
    STATE(354),
    1,
    sym_comment,
    [8992] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(980),
    1,
    sym_identifier,
    STATE(355),
    1,
    sym_comment,
    [9002] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_SEMI,
    STATE(356),
    1,
    sym_comment,
    [9012] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [9022] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [9032] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(664),
    1,
    sym_identifier,
    STATE(359),
    1,
    sym_comment,
    [9042] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(988),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [9052] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(990),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    [9062] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(992),
    1,
    anon_sym_COLON,
    STATE(362),
    1,
    sym_comment,
    [9072] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(994),
    1,
    anon_sym_SEMI,
    STATE(363),
    1,
    sym_comment,
    [9082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(996),
    1,
    anon_sym_enum,
    STATE(364),
    1,
    sym_comment,
    [9092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    anon_sym_attribute,
    STATE(365),
    1,
    sym_comment,
    [9102] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1000),
    1,
    sym_identifier,
    STATE(366),
    1,
    sym_comment,
    [9112] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1002),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [9122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1004),
    1,
    sym_identifier,
    STATE(368),
    1,
    sym_comment,
    [9132] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(131),
    1,
    anon_sym_RBRACE,
    STATE(369),
    1,
    sym_comment,
    [9142] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    sym_identifier,
    STATE(370),
    1,
    sym_comment,
    [9152] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [9162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1010),
    1,
    sym_identifier,
    STATE(372),
    1,
    sym_comment,
    [9172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1012),
    1,
    sym_identifier,
    STATE(373),
    1,
    sym_comment,
    [9182] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1014),
    1,
    anon_sym_SEMI,
    STATE(374),
    1,
    sym_comment,
    [9192] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1016),
    1,
    anon_sym_SEMI,
    STATE(375),
    1,
    sym_comment,
    [9202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1018),
    1,
    anon_sym_SQUOTE,
    STATE(376),
    1,
    sym_comment,
    [9212] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1020),
    1,
    aux_sym_char_literal_token1,
    STATE(377),
    1,
    sym_comment,
    [9222] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_SEMI,
    STATE(378),
    1,
    sym_comment,
    [9232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    sym_identifier,
    STATE(379),
    1,
    sym_comment,
    [9242] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [9252] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1028),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [9262] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1030),
    1,
    anon_sym_LPAREN,
    STATE(382),
    1,
    sym_comment,
    [9272] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    sym_identifier,
    STATE(383),
    1,
    sym_comment,
    [9282] = 1,
    ACTIONS(1034),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 109,
    [SMALL_STATE(4)] = 218,
    [SMALL_STATE(5)] = 327,
    [SMALL_STATE(6)] = 434,
    [SMALL_STATE(7)] = 543,
    [SMALL_STATE(8)] = 652,
    [SMALL_STATE(9)] = 761,
    [SMALL_STATE(10)] = 870,
    [SMALL_STATE(11)] = 979,
    [SMALL_STATE(12)] = 1088,
    [SMALL_STATE(13)] = 1197,
    [SMALL_STATE(14)] = 1305,
    [SMALL_STATE(15)] = 1405,
    [SMALL_STATE(16)] = 1509,
    [SMALL_STATE(17)] = 1613,
    [SMALL_STATE(18)] = 1717,
    [SMALL_STATE(19)] = 1815,
    [SMALL_STATE(20)] = 1885,
    [SMALL_STATE(21)] = 2007,
    [SMALL_STATE(22)] = 2130,
    [SMALL_STATE(23)] = 2253,
    [SMALL_STATE(24)] = 2376,
    [SMALL_STATE(25)] = 2458,
    [SMALL_STATE(26)] = 2515,
    [SMALL_STATE(27)] = 2572,
    [SMALL_STATE(28)] = 2629,
    [SMALL_STATE(29)] = 2708,
    [SMALL_STATE(30)] = 2765,
    [SMALL_STATE(31)] = 2822,
    [SMALL_STATE(32)] = 2878,
    [SMALL_STATE(33)] = 2934,
    [SMALL_STATE(34)] = 2990,
    [SMALL_STATE(35)] = 3066,
    [SMALL_STATE(36)] = 3142,
    [SMALL_STATE(37)] = 3218,
    [SMALL_STATE(38)] = 3274,
    [SMALL_STATE(39)] = 3335,
    [SMALL_STATE(40)] = 3383,
    [SMALL_STATE(41)] = 3431,
    [SMALL_STATE(42)] = 3479,
    [SMALL_STATE(43)] = 3536,
    [SMALL_STATE(44)] = 3608,
    [SMALL_STATE(45)] = 3680,
    [SMALL_STATE(46)] = 3752,
    [SMALL_STATE(47)] = 3824,
    [SMALL_STATE(48)] = 3896,
    [SMALL_STATE(49)] = 3965,
    [SMALL_STATE(50)] = 4034,
    [SMALL_STATE(51)] = 4065,
    [SMALL_STATE(52)] = 4134,
    [SMALL_STATE(53)] = 4165,
    [SMALL_STATE(54)] = 4234,
    [SMALL_STATE(55)] = 4265,
    [SMALL_STATE(56)] = 4334,
    [SMALL_STATE(57)] = 4365,
    [SMALL_STATE(58)] = 4396,
    [SMALL_STATE(59)] = 4427,
    [SMALL_STATE(60)] = 4490,
    [SMALL_STATE(61)] = 4550,
    [SMALL_STATE(62)] = 4607,
    [SMALL_STATE(63)] = 4635,
    [SMALL_STATE(64)] = 4689,
    [SMALL_STATE(65)] = 4719,
    [SMALL_STATE(66)] = 4749,
    [SMALL_STATE(67)] = 4777,
    [SMALL_STATE(68)] = 4804,
    [SMALL_STATE(69)] = 4831,
    [SMALL_STATE(70)] = 4858,
    [SMALL_STATE(71)] = 4909,
    [SMALL_STATE(72)] = 4940,
    [SMALL_STATE(73)] = 4971,
    [SMALL_STATE(74)] = 4998,
    [SMALL_STATE(75)] = 5025,
    [SMALL_STATE(76)] = 5052,
    [SMALL_STATE(77)] = 5079,
    [SMALL_STATE(78)] = 5106,
    [SMALL_STATE(79)] = 5133,
    [SMALL_STATE(80)] = 5181,
    [SMALL_STATE(81)] = 5207,
    [SMALL_STATE(82)] = 5233,
    [SMALL_STATE(83)] = 5257,
    [SMALL_STATE(84)] = 5281,
    [SMALL_STATE(85)] = 5316,
    [SMALL_STATE(86)] = 5351,
    [SMALL_STATE(87)] = 5371,
    [SMALL_STATE(88)] = 5391,
    [SMALL_STATE(89)] = 5419,
    [SMALL_STATE(90)] = 5450,
    [SMALL_STATE(91)] = 5469,
    [SMALL_STATE(92)] = 5488,
    [SMALL_STATE(93)] = 5506,
    [SMALL_STATE(94)] = 5532,
    [SMALL_STATE(95)] = 5555,
    [SMALL_STATE(96)] = 5570,
    [SMALL_STATE(97)] = 5595,
    [SMALL_STATE(98)] = 5620,
    [SMALL_STATE(99)] = 5641,
    [SMALL_STATE(100)] = 5660,
    [SMALL_STATE(101)] = 5685,
    [SMALL_STATE(102)] = 5702,
    [SMALL_STATE(103)] = 5725,
    [SMALL_STATE(104)] = 5750,
    [SMALL_STATE(105)] = 5775,
    [SMALL_STATE(106)] = 5796,
    [SMALL_STATE(107)] = 5821,
    [SMALL_STATE(108)] = 5846,
    [SMALL_STATE(109)] = 5869,
    [SMALL_STATE(110)] = 5894,
    [SMALL_STATE(111)] = 5919,
    [SMALL_STATE(112)] = 5944,
    [SMALL_STATE(113)] = 5958,
    [SMALL_STATE(114)] = 5978,
    [SMALL_STATE(115)] = 5992,
    [SMALL_STATE(116)] = 6014,
    [SMALL_STATE(117)] = 6028,
    [SMALL_STATE(118)] = 6048,
    [SMALL_STATE(119)] = 6070,
    [SMALL_STATE(120)] = 6084,
    [SMALL_STATE(121)] = 6106,
    [SMALL_STATE(122)] = 6126,
    [SMALL_STATE(123)] = 6140,
    [SMALL_STATE(124)] = 6160,
    [SMALL_STATE(125)] = 6174,
    [SMALL_STATE(126)] = 6194,
    [SMALL_STATE(127)] = 6211,
    [SMALL_STATE(128)] = 6228,
    [SMALL_STATE(129)] = 6241,
    [SMALL_STATE(130)] = 6260,
    [SMALL_STATE(131)] = 6273,
    [SMALL_STATE(132)] = 6290,
    [SMALL_STATE(133)] = 6309,
    [SMALL_STATE(134)] = 6328,
    [SMALL_STATE(135)] = 6347,
    [SMALL_STATE(136)] = 6364,
    [SMALL_STATE(137)] = 6379,
    [SMALL_STATE(138)] = 6398,
    [SMALL_STATE(139)] = 6415,
    [SMALL_STATE(140)] = 6434,
    [SMALL_STATE(141)] = 6453,
    [SMALL_STATE(142)] = 6470,
    [SMALL_STATE(143)] = 6489,
    [SMALL_STATE(144)] = 6508,
    [SMALL_STATE(145)] = 6525,
    [SMALL_STATE(146)] = 6542,
    [SMALL_STATE(147)] = 6559,
    [SMALL_STATE(148)] = 6574,
    [SMALL_STATE(149)] = 6593,
    [SMALL_STATE(150)] = 6608,
    [SMALL_STATE(151)] = 6627,
    [SMALL_STATE(152)] = 6646,
    [SMALL_STATE(153)] = 6662,
    [SMALL_STATE(154)] = 6678,
    [SMALL_STATE(155)] = 6692,
    [SMALL_STATE(156)] = 6708,
    [SMALL_STATE(157)] = 6722,
    [SMALL_STATE(158)] = 6738,
    [SMALL_STATE(159)] = 6750,
    [SMALL_STATE(160)] = 6766,
    [SMALL_STATE(161)] = 6782,
    [SMALL_STATE(162)] = 6794,
    [SMALL_STATE(163)] = 6808,
    [SMALL_STATE(164)] = 6820,
    [SMALL_STATE(165)] = 6836,
    [SMALL_STATE(166)] = 6848,
    [SMALL_STATE(167)] = 6860,
    [SMALL_STATE(168)] = 6876,
    [SMALL_STATE(169)] = 6890,
    [SMALL_STATE(170)] = 6902,
    [SMALL_STATE(171)] = 6918,
    [SMALL_STATE(172)] = 6930,
    [SMALL_STATE(173)] = 6942,
    [SMALL_STATE(174)] = 6958,
    [SMALL_STATE(175)] = 6974,
    [SMALL_STATE(176)] = 6990,
    [SMALL_STATE(177)] = 7006,
    [SMALL_STATE(178)] = 7022,
    [SMALL_STATE(179)] = 7038,
    [SMALL_STATE(180)] = 7052,
    [SMALL_STATE(181)] = 7068,
    [SMALL_STATE(182)] = 7080,
    [SMALL_STATE(183)] = 7094,
    [SMALL_STATE(184)] = 7108,
    [SMALL_STATE(185)] = 7120,
    [SMALL_STATE(186)] = 7134,
    [SMALL_STATE(187)] = 7146,
    [SMALL_STATE(188)] = 7162,
    [SMALL_STATE(189)] = 7176,
    [SMALL_STATE(190)] = 7190,
    [SMALL_STATE(191)] = 7206,
    [SMALL_STATE(192)] = 7222,
    [SMALL_STATE(193)] = 7238,
    [SMALL_STATE(194)] = 7254,
    [SMALL_STATE(195)] = 7270,
    [SMALL_STATE(196)] = 7284,
    [SMALL_STATE(197)] = 7300,
    [SMALL_STATE(198)] = 7316,
    [SMALL_STATE(199)] = 7328,
    [SMALL_STATE(200)] = 7344,
    [SMALL_STATE(201)] = 7360,
    [SMALL_STATE(202)] = 7376,
    [SMALL_STATE(203)] = 7388,
    [SMALL_STATE(204)] = 7400,
    [SMALL_STATE(205)] = 7416,
    [SMALL_STATE(206)] = 7427,
    [SMALL_STATE(207)] = 7438,
    [SMALL_STATE(208)] = 7451,
    [SMALL_STATE(209)] = 7462,
    [SMALL_STATE(210)] = 7473,
    [SMALL_STATE(211)] = 7486,
    [SMALL_STATE(212)] = 7497,
    [SMALL_STATE(213)] = 7508,
    [SMALL_STATE(214)] = 7519,
    [SMALL_STATE(215)] = 7530,
    [SMALL_STATE(216)] = 7541,
    [SMALL_STATE(217)] = 7552,
    [SMALL_STATE(218)] = 7563,
    [SMALL_STATE(219)] = 7574,
    [SMALL_STATE(220)] = 7585,
    [SMALL_STATE(221)] = 7598,
    [SMALL_STATE(222)] = 7611,
    [SMALL_STATE(223)] = 7622,
    [SMALL_STATE(224)] = 7633,
    [SMALL_STATE(225)] = 7644,
    [SMALL_STATE(226)] = 7655,
    [SMALL_STATE(227)] = 7666,
    [SMALL_STATE(228)] = 7679,
    [SMALL_STATE(229)] = 7690,
    [SMALL_STATE(230)] = 7701,
    [SMALL_STATE(231)] = 7712,
    [SMALL_STATE(232)] = 7723,
    [SMALL_STATE(233)] = 7736,
    [SMALL_STATE(234)] = 7747,
    [SMALL_STATE(235)] = 7758,
    [SMALL_STATE(236)] = 7769,
    [SMALL_STATE(237)] = 7780,
    [SMALL_STATE(238)] = 7791,
    [SMALL_STATE(239)] = 7802,
    [SMALL_STATE(240)] = 7813,
    [SMALL_STATE(241)] = 7824,
    [SMALL_STATE(242)] = 7835,
    [SMALL_STATE(243)] = 7848,
    [SMALL_STATE(244)] = 7861,
    [SMALL_STATE(245)] = 7874,
    [SMALL_STATE(246)] = 7885,
    [SMALL_STATE(247)] = 7896,
    [SMALL_STATE(248)] = 7907,
    [SMALL_STATE(249)] = 7920,
    [SMALL_STATE(250)] = 7931,
    [SMALL_STATE(251)] = 7944,
    [SMALL_STATE(252)] = 7955,
    [SMALL_STATE(253)] = 7966,
    [SMALL_STATE(254)] = 7979,
    [SMALL_STATE(255)] = 7990,
    [SMALL_STATE(256)] = 8001,
    [SMALL_STATE(257)] = 8012,
    [SMALL_STATE(258)] = 8022,
    [SMALL_STATE(259)] = 8032,
    [SMALL_STATE(260)] = 8042,
    [SMALL_STATE(261)] = 8052,
    [SMALL_STATE(262)] = 8062,
    [SMALL_STATE(263)] = 8072,
    [SMALL_STATE(264)] = 8082,
    [SMALL_STATE(265)] = 8092,
    [SMALL_STATE(266)] = 8102,
    [SMALL_STATE(267)] = 8112,
    [SMALL_STATE(268)] = 8122,
    [SMALL_STATE(269)] = 8132,
    [SMALL_STATE(270)] = 8142,
    [SMALL_STATE(271)] = 8152,
    [SMALL_STATE(272)] = 8162,
    [SMALL_STATE(273)] = 8172,
    [SMALL_STATE(274)] = 8182,
    [SMALL_STATE(275)] = 8192,
    [SMALL_STATE(276)] = 8202,
    [SMALL_STATE(277)] = 8212,
    [SMALL_STATE(278)] = 8222,
    [SMALL_STATE(279)] = 8232,
    [SMALL_STATE(280)] = 8242,
    [SMALL_STATE(281)] = 8252,
    [SMALL_STATE(282)] = 8262,
    [SMALL_STATE(283)] = 8272,
    [SMALL_STATE(284)] = 8282,
    [SMALL_STATE(285)] = 8292,
    [SMALL_STATE(286)] = 8302,
    [SMALL_STATE(287)] = 8312,
    [SMALL_STATE(288)] = 8322,
    [SMALL_STATE(289)] = 8332,
    [SMALL_STATE(290)] = 8342,
    [SMALL_STATE(291)] = 8352,
    [SMALL_STATE(292)] = 8362,
    [SMALL_STATE(293)] = 8372,
    [SMALL_STATE(294)] = 8382,
    [SMALL_STATE(295)] = 8392,
    [SMALL_STATE(296)] = 8402,
    [SMALL_STATE(297)] = 8412,
    [SMALL_STATE(298)] = 8422,
    [SMALL_STATE(299)] = 8432,
    [SMALL_STATE(300)] = 8442,
    [SMALL_STATE(301)] = 8452,
    [SMALL_STATE(302)] = 8462,
    [SMALL_STATE(303)] = 8472,
    [SMALL_STATE(304)] = 8482,
    [SMALL_STATE(305)] = 8492,
    [SMALL_STATE(306)] = 8502,
    [SMALL_STATE(307)] = 8512,
    [SMALL_STATE(308)] = 8522,
    [SMALL_STATE(309)] = 8532,
    [SMALL_STATE(310)] = 8542,
    [SMALL_STATE(311)] = 8552,
    [SMALL_STATE(312)] = 8562,
    [SMALL_STATE(313)] = 8572,
    [SMALL_STATE(314)] = 8582,
    [SMALL_STATE(315)] = 8592,
    [SMALL_STATE(316)] = 8602,
    [SMALL_STATE(317)] = 8612,
    [SMALL_STATE(318)] = 8622,
    [SMALL_STATE(319)] = 8632,
    [SMALL_STATE(320)] = 8642,
    [SMALL_STATE(321)] = 8652,
    [SMALL_STATE(322)] = 8662,
    [SMALL_STATE(323)] = 8672,
    [SMALL_STATE(324)] = 8682,
    [SMALL_STATE(325)] = 8692,
    [SMALL_STATE(326)] = 8702,
    [SMALL_STATE(327)] = 8712,
    [SMALL_STATE(328)] = 8722,
    [SMALL_STATE(329)] = 8732,
    [SMALL_STATE(330)] = 8742,
    [SMALL_STATE(331)] = 8752,
    [SMALL_STATE(332)] = 8762,
    [SMALL_STATE(333)] = 8772,
    [SMALL_STATE(334)] = 8782,
    [SMALL_STATE(335)] = 8792,
    [SMALL_STATE(336)] = 8802,
    [SMALL_STATE(337)] = 8812,
    [SMALL_STATE(338)] = 8822,
    [SMALL_STATE(339)] = 8832,
    [SMALL_STATE(340)] = 8842,
    [SMALL_STATE(341)] = 8852,
    [SMALL_STATE(342)] = 8862,
    [SMALL_STATE(343)] = 8872,
    [SMALL_STATE(344)] = 8882,
    [SMALL_STATE(345)] = 8892,
    [SMALL_STATE(346)] = 8902,
    [SMALL_STATE(347)] = 8912,
    [SMALL_STATE(348)] = 8922,
    [SMALL_STATE(349)] = 8932,
    [SMALL_STATE(350)] = 8942,
    [SMALL_STATE(351)] = 8952,
    [SMALL_STATE(352)] = 8962,
    [SMALL_STATE(353)] = 8972,
    [SMALL_STATE(354)] = 8982,
    [SMALL_STATE(355)] = 8992,
    [SMALL_STATE(356)] = 9002,
    [SMALL_STATE(357)] = 9012,
    [SMALL_STATE(358)] = 9022,
    [SMALL_STATE(359)] = 9032,
    [SMALL_STATE(360)] = 9042,
    [SMALL_STATE(361)] = 9052,
    [SMALL_STATE(362)] = 9062,
    [SMALL_STATE(363)] = 9072,
    [SMALL_STATE(364)] = 9082,
    [SMALL_STATE(365)] = 9092,
    [SMALL_STATE(366)] = 9102,
    [SMALL_STATE(367)] = 9112,
    [SMALL_STATE(368)] = 9122,
    [SMALL_STATE(369)] = 9132,
    [SMALL_STATE(370)] = 9142,
    [SMALL_STATE(371)] = 9152,
    [SMALL_STATE(372)] = 9162,
    [SMALL_STATE(373)] = 9172,
    [SMALL_STATE(374)] = 9182,
    [SMALL_STATE(375)] = 9192,
    [SMALL_STATE(376)] = 9202,
    [SMALL_STATE(377)] = 9212,
    [SMALL_STATE(378)] = 9222,
    [SMALL_STATE(379)] = 9232,
    [SMALL_STATE(380)] = 9242,
    [SMALL_STATE(381)] = 9252,
    [SMALL_STATE(382)] = 9262,
    [SMALL_STATE(383)] = 9272,
    [SMALL_STATE(384)] = 9282,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(181),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(293),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(183),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(289),
    [69] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [73] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(181),
    [78] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(33),
    [81] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(305),
    [84] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(306),
    [87] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(181),
    [90] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(257),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(124),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(293),
    [99] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(183),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(289),
    [105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(368),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(366),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(355),
    [123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(359),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(365),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(36),
    [131] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [135] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [137] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(33),
    [140] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(305),
    [143] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(306),
    [146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(383),
    [153] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(210),
    [156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(372),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(368),
    [162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(366),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(364),
    [168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(361),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(355),
    [174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(354),
    [177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(13),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(352),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(351),
    [186] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(220),
    [189] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(116),
    [192] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(348),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(345),
    [198] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(38),
    [201] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(344),
    [204] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(165),
    [207] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(336),
    [210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [212] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [222] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 8),
    [226] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 8),
    [228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [230] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [234] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 8),
    [238] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 8),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 7),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 7),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [252] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [256] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [258] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [260] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [262] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [264] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [268] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(101),
    [270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [276] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(376),
    [278] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [282] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [286] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [290] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [294] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [298] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [302] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [308] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [310] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [312] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 9),
    [316] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 9),
    [318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [320] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [324] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [326] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [328] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [330] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [332] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [336] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [338] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [340] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [342] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [344] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [346] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [348] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [352] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [354] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [356] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [358] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [360] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [362] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [364] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [368] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [370] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [372] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [374] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [376] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [380] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [382] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [384] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [386] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [388] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(116),
    [391] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(348),
    [394] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(345),
    [397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [401] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [407] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [417] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(40),
    [419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    [423] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(257),
    [426] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(124),
    [429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [435] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [437] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [439] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [445] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(44),
    [448] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [454] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [456] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [458] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    [460] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(301),
    [463] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(149),
    [466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [470] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [474] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [478] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [480] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(347),
    [483] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(53),
    [486] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [488] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [490] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [492] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [494] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [498] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [500] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [502] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [504] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(165),
    [507] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(336),
    [510] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [514] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [516] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(229),
    [519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [521] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [543] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(242),
    [546] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 2),
    [548] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [550] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [552] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [556] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [558] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(195),
    [561] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(195),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [566] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [570] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [572] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [576] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [580] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [582] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [584] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [586] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(146),
    [589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 1),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [601] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [603] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(160),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [610] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [614] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 1),
    [616] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [618] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(121),
    [621] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [623] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [633] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(244),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [638] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 4),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [648] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [650] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(320),
    [652] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [662] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [664] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [666] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [668] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(148),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 3),
    [677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [679] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(120),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [684] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [686] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [688] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [690] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(126),
    [693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [695] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(18),
    [698] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [704] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [708] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [710] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 3),
    [714] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [718] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 1),
    [720] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [722] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [726] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [728] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [730] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [734] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 10),
    [742] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [750] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [754] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [756] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 10),
    [758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [762] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [764] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [766] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [770] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [778] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [782] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [784] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [786] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [790] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [794] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [796] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [798] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [800] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [802] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [804] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [806] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [808] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [810] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [812] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [814] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [816] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [818] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [820] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(267),
    [822] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(384),
    [824] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 5),
    [826] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [828] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [830] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [832] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [834] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [836] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [838] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [840] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [842] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [844] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [846] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_bound, 4),
    [848] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [850] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [852] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_position, 4, .production_id = 5),
    [854] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [856] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [858] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [860] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [864] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [868] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [870] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [872] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [874] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [876] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [878] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [880] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [882] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 3),
    [884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [888] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [890] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [892] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [894] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [908] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [912] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [914] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [916] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [920] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [924] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [928] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [932] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [934] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [936] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [938] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [940] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [946] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 4),
    [950] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [952] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 5),
    [956] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [958] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [964] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [970] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [972] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [974] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [980] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [988] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [990] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [994] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 4),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [1034] = { .entry = { .count = 1, .reusable = true } },
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
