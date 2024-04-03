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
#define STATE_COUNT 352
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 3
#define TOKEN_COUNT 119
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
    anon_sym_SEMI = 1,
    anon_sym_native = 2,
    anon_sym_module = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_struct = 6,
    anon_sym_COLON = 7,
    anon_sym_PIPE = 8,
    anon_sym_CARET = 9,
    anon_sym_DOLLAR = 10,
    anon_sym_GT_GT = 11,
    anon_sym_LT_LT = 12,
    anon_sym_PLUS = 13,
    anon_sym_DASH = 14,
    anon_sym_STAR = 15,
    anon_sym_SLASH = 16,
    anon_sym_PERCENT = 17,
    anon_sym_TILDE = 18,
    anon_sym_LPAREN = 19,
    anon_sym_RPAREN = 20,
    anon_sym_SQUOTE = 21,
    aux_sym_char_literal_token1 = 22,
    anon_sym_L = 23,
    anon_sym_default = 24,
    anon_sym_enum = 25,
    anon_sym_COMMA = 26,
    anon_sym_ATdefault_literal = 27,
    anon_sym_ATignore_literal_names = 28,
    anon_sym_ATannotation = 29,
    anon_sym_union = 30,
    anon_sym_switch = 31,
    anon_sym_case = 32,
    anon_sym_bitmask = 33,
    anon_sym_typedef = 34,
    anon_sym_POUNDdefine = 35,
    aux_sym_predefine_token1 = 36,
    anon_sym_local = 37,
    anon_sym_interface = 38,
    sym_dds_service = 39,
    anon_sym_ATDDSRequestTopic = 40,
    anon_sym_name = 41,
    anon_sym_EQ = 42,
    anon_sym_ATDDSReplyTopic = 43,
    anon_sym_attribute = 44,
    anon_sym_raises = 45,
    anon_sym_in = 46,
    anon_sym_out = 47,
    anon_sym_inout = 48,
    anon_sym_const = 49,
    sym_number_literal = 50,
    sym_optional = 51,
    sym_key = 52,
    sym_must_understand = 53,
    sym_non_serialized = 54,
    sym_id = 55,
    sym_external = 56,
    anon_sym_AThashid = 57,
    anon_sym_LPAREN_DQUOTE = 58,
    anon_sym_DQUOTE = 59,
    anon_sym_ATtry_construct = 60,
    anon_sym_ATbit_bound = 61,
    aux_sym_bit_bound_token1 = 62,
    sym_extensibility = 63,
    sym_mutable = 64,
    sym_appendable = 65,
    sym_final = 66,
    sym_nested = 67,
    sym_value = 68,
    anon_sym_ATposition = 69,
    sym_autoid = 70,
    sym_verbatim = 71,
    anon_sym_ATdata_representation = 72,
    anon_sym_XCDR = 73,
    anon_sym_XCDR2 = 74,
    anon_sym_true = 75,
    anon_sym_false = 76,
    anon_sym_void = 77,
    anon_sym_float = 78,
    anon_sym_double = 79,
    anon_sym_short = 80,
    anon_sym_long = 81,
    anon_sym_longdouble = 82,
    anon_sym_unsignedshort = 83,
    anon_sym_char = 84,
    anon_sym_wchar = 85,
    anon_sym_longlong = 86,
    anon_sym_octet = 87,
    anon_sym_unsignedlong = 88,
    anon_sym_unsignedlonglong = 89,
    anon_sym_int = 90,
    anon_sym_int8 = 91,
    anon_sym_int16 = 92,
    anon_sym_int32 = 93,
    anon_sym_int64 = 94,
    anon_sym_uint8 = 95,
    anon_sym_uint16 = 96,
    anon_sym_uint32 = 97,
    anon_sym_uint64 = 98,
    anon_sym_float32 = 99,
    anon_sym_float64 = 100,
    anon_sym_float128 = 101,
    anon_sym_byte = 102,
    anon_sym_boolean = 103,
    anon_sym_char8 = 104,
    anon_sym_char16 = 105,
    anon_sym_COLON_COLON = 106,
    sym_identifier = 107,
    anon_sym_LBRACK = 108,
    anon_sym_RBRACK = 109,
    anon_sym_sequence = 110,
    anon_sym_LT = 111,
    anon_sym_GT = 112,
    anon_sym_string = 113,
    anon_sym_wstring = 114,
    anon_sym_fixed = 115,
    anon_sym_SLASH_SLASH = 116,
    aux_sym_comment_token1 = 117,
    sym__eof = 118,
    sym_specification = 119,
    sym__definition = 120,
    sym_native_dcl = 121,
    sym_module_dcl = 122,
    sym_struct_forward_dcl = 123,
    sym_struct_def = 124,
    sym_inherit = 125,
    sym_member = 126,
    sym_or_expr = 127,
    sym_xor_expr = 128,
    sym_and_expr = 129,
    sym_shift_expr = 130,
    sym_add_expr = 131,
    sym_mult_expr = 132,
    sym_unary_expr = 133,
    sym_unary_operator = 134,
    sym_char_literal = 135,
    sym_wchar_literal = 136,
    sym_literal = 137,
    sym_default = 138,
    sym_enum_dcl = 139,
    sym_enumerator = 140,
    sym_enum_modifier = 141,
    sym_enum_anno = 142,
    sym_annotation = 143,
    sym_annotation_field = 144,
    sym_union_forward_dcl = 145,
    sym_union_def = 146,
    sym_case = 147,
    sym_case_label = 148,
    sym_element_spec = 149,
    sym_switch_type_spec = 150,
    sym_bitmask = 151,
    sym_bitmask_field = 152,
    sym_typedef_dcl = 153,
    sym_predefine = 154,
    sym_interface = 155,
    sym_dds_request_topic = 156,
    sym_dds_reply_topic = 157,
    sym_interface_anno = 158,
    sym_interface_attribute = 159,
    sym_interface_function = 160,
    sym_interface_except = 161,
    sym_interface_modifier = 162,
    sym_function_arg = 163,
    sym_const_dcl = 164,
    sym_const_type = 165,
    sym_const_expr = 166,
    sym_hashid = 167,
    sym_try_construct = 168,
    sym_bit_bound = 169,
    sym_position = 170,
    sym_data_representation = 171,
    sym_struct_modifier = 172,
    sym_primitive_type = 173,
    sym_scoped_name = 174,
    sym_simple_type_spec = 175,
    sym_type_spec = 176,
    sym_simple_declarator = 177,
    sym_declarator = 178,
    sym_declarators = 179,
    sym_array_declarator = 180,
    sym_positive_int_const = 181,
    sym_fixed_array_size = 182,
    sym_sequence_type = 183,
    sym_string_type = 184,
    sym_fixed_pt_type = 185,
    sym_template_type_spec = 186,
    sym_type_declarator = 187,
    sym_any_declarators = 188,
    sym_any_declarator = 189,
    sym_comment = 190,
    aux_sym_specification_repeat1 = 191,
    aux_sym_struct_def_repeat1 = 192,
    aux_sym_struct_def_repeat2 = 193,
    aux_sym_inherit_repeat1 = 194,
    aux_sym_member_repeat1 = 195,
    aux_sym_enum_dcl_repeat1 = 196,
    aux_sym_enumerator_repeat1 = 197,
    aux_sym_annotation_repeat1 = 198,
    aux_sym_union_def_repeat1 = 199,
    aux_sym_bitmask_repeat1 = 200,
    aux_sym_interface_repeat1 = 201,
    aux_sym_interface_repeat2 = 202,
    aux_sym_interface_repeat3 = 203,
    aux_sym_interface_function_repeat1 = 204,
    aux_sym_data_representation_repeat1 = 205,
    aux_sym_declarators_repeat1 = 206,
    aux_sym_array_declarator_repeat1 = 207,
    aux_sym_any_declarators_repeat1 = 208,
    alias_sym_data_rep = 209,
    alias_sym_hashid_value = 210,
    alias_sym_try_construct_value = 211,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_SEMI] = ";",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
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
    [anon_sym_local] = "local",
    [anon_sym_interface] = "interface",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_EQ] = "=",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [anon_sym_attribute] = "attribute",
    [anon_sym_raises] = "raises",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
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
    [anon_sym_void] = "void",
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
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_inherit] = "inherit",
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
    [sym_interface] = "interface",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_interface_anno] = "interface_anno",
    [sym_interface_attribute] = "interface_attribute",
    [sym_interface_function] = "interface_function",
    [sym_interface_except] = "interface_except",
    [sym_interface_modifier] = "interface_modifier",
    [sym_function_arg] = "function_arg",
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
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_struct_def_repeat2] = "struct_def_repeat2",
    [aux_sym_inherit_repeat1] = "inherit_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_annotation_repeat1] = "annotation_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_bitmask_repeat1] = "bitmask_repeat1",
    [aux_sym_interface_repeat1] = "interface_repeat1",
    [aux_sym_interface_repeat2] = "interface_repeat2",
    [aux_sym_interface_repeat3] = "interface_repeat3",
    [aux_sym_interface_function_repeat1] = "interface_function_repeat1",
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
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
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
    [anon_sym_local] = anon_sym_local,
    [anon_sym_interface] = anon_sym_interface,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
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
    [anon_sym_void] = anon_sym_void,
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
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_inherit] = sym_inherit,
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
    [sym_interface] = sym_interface,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_interface_anno] = sym_interface_anno,
    [sym_interface_attribute] = sym_interface_attribute,
    [sym_interface_function] = sym_interface_function,
    [sym_interface_except] = sym_interface_except,
    [sym_interface_modifier] = sym_interface_modifier,
    [sym_function_arg] = sym_function_arg,
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
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_struct_def_repeat2] = aux_sym_struct_def_repeat2,
    [aux_sym_inherit_repeat1] = aux_sym_inherit_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_bitmask_repeat1] = aux_sym_bitmask_repeat1,
    [aux_sym_interface_repeat1] = aux_sym_interface_repeat1,
    [aux_sym_interface_repeat2] = aux_sym_interface_repeat2,
    [aux_sym_interface_repeat3] = aux_sym_interface_repeat3,
    [aux_sym_interface_function_repeat1] = aux_sym_interface_function_repeat1,
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
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
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
    [anon_sym_local] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_interface] = {
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
    [anon_sym_attribute] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_raises] = {
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
    [anon_sym_void] = {
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
    [sym_inherit] = {
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
    [sym_interface] = {
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
    [sym_interface_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_function] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_except] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_modifier] = {
        .visible = true,
        .named = true,
    },
    [sym_function_arg] = {
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
    [aux_sym_struct_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_struct_def_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_inherit_repeat1] = {
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
    [aux_sym_interface_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_repeat3] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_function_repeat1] = {
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
    [1] = { .index = 0, .length = 1 },
    [2] = { .index = 1, .length = 1 },
    [5] = { .index = 2, .length = 2 },
    [6] = { .index = 4, .length = 2 },
    [7] = { .index = 6, .length = 2 },
    [8] = { .index = 8, .length = 1 },
    [10] = { .index = 9, .length = 1 },
    [12] = { .index = 10, .length = 2 },
    [13] = { .index = 12, .length = 1 },
    [14] = { .index = 13, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_parent, 0 },
    [1] = { field_parent, 1 },
    [2] = { field_parent, 1, .inherited = true },
    { field_parent, 2 },
    [4] = { field_parent, 0, .inherited = true },
    { field_parent, 1, .inherited = true },
    [6] = { field_identifier, 1 },
    { field_type, 0 },
    [8] = { field_parent, 3 },
    [9] = { field_value, 1 },
    [10] = { field_identifier, 2 },
    { field_type, 1 },
    [12] = { field_value, 2 },
    [13] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [3] = {
        [2] = alias_sym_data_rep,
    },
    [4] = {
        [1] = alias_sym_try_construct_value,
    },
    [9] = {
        [2] = sym_position,
    },
    [11] = {
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
    [141] = 53,
    [142] = 142,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 54,
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
    [192] = 53,
    [193] = 193,
    [194] = 54,
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
    [267] = 245,
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
    [301] = 193,
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
    [350] = 245,
    [351] = 351,
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
                ADVANCE(467);
            if(lookahead == '"')
                ADVANCE(571);
            if(lookahead == '#')
                ADVANCE(124);
            if(lookahead == '$')
                ADVANCE(478);
            if(lookahead == '%')
                ADVANCE(487);
            if(lookahead == '\'')
                ADVANCE(492);
            if(lookahead == '(')
                ADVANCE(490);
            if(lookahead == ')')
                ADVANCE(491);
            if(lookahead == '*')
                ADVANCE(485);
            if(lookahead == '+')
                ADVANCE(481);
            if(lookahead == ',')
                ADVANCE(500);
            if(lookahead == '-')
                ADVANCE(483);
            if(lookahead == '/')
                ADVANCE(486);
            if(lookahead == ':')
                ADVANCE(475);
            if(lookahead == ';')
                ADVANCE(468);
            if(lookahead == '<')
                ADVANCE(774);
            if(lookahead == '=')
                ADVANCE(521);
            if(lookahead == '>')
                ADVANCE(776);
            if(lookahead == '@')
                ADVANCE(54);
            if(lookahead == 'L')
                ADVANCE(494);
            if(lookahead == 'X')
                ADVANCE(53);
            if(lookahead == '[')
                ADVANCE(769);
            if(lookahead == '\\')
                SKIP(463)
            if(lookahead == ']')
                ADVANCE(770);
            if(lookahead == '^')
                ADVANCE(477);
            if(lookahead == 'a')
                ADVANCE(396);
            if(lookahead == 'b')
                ADVANCE(215);
            if(lookahead == 'c')
                ADVANCE(71);
            if(lookahead == 'd')
                ADVANCE(143);
            if(lookahead == 'e')
                ADVANCE(280);
            if(lookahead == 'f')
                ADVANCE(72);
            if(lookahead == 'i')
                ADVANCE(273);
            if(lookahead == 'l')
                ADVANCE(308);
            if(lookahead == 'm')
                ADVANCE(309);
            if(lookahead == 'n')
                ADVANCE(73);
            if(lookahead == 'o')
                ADVANCE(115);
            if(lookahead == 'r')
                ADVANCE(76);
            if(lookahead == 's')
                ADVANCE(144);
            if(lookahead == 't')
                ADVANCE(349);
            if(lookahead == 'u')
                ADVANCE(217);
            if(lookahead == 'v')
                ADVANCE(312);
            if(lookahead == 'w')
                ADVANCE(111);
            if(lookahead == '{')
                ADVANCE(471);
            if(lookahead == '|')
                ADVANCE(476);
            if(lookahead == '}')
                ADVANCE(472);
            if(lookahead == '~')
                ADVANCE(488);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(574);
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
                SKIP(36)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(36)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(30)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(30)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(28)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(28)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(32)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(32)
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
                SKIP(33)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(33)
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
                SKIP(41)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                ADVANCE(787);
            if(lookahead == '\r')
                ADVANCE(786);
            if(lookahead == '\\')
                ADVANCE(790);
            if(lookahead != 0)
                ADVANCE(789);
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
                ADVANCE(265);
            END_STATE();
        case 27:
            if(lookahead == '"')
                ADVANCE(570);
            END_STATE();
        case 28:
            if(lookahead == '$')
                ADVANCE(478);
            if(lookahead == '%')
                ADVANCE(487);
            if(lookahead == '(')
                ADVANCE(489);
            if(lookahead == ')')
                ADVANCE(491);
            if(lookahead == '*')
                ADVANCE(485);
            if(lookahead == '+')
                ADVANCE(481);
            if(lookahead == ',')
                ADVANCE(500);
            if(lookahead == '-')
                ADVANCE(483);
            if(lookahead == '/')
                ADVANCE(486);
            if(lookahead == ':')
                ADVANCE(475);
            if(lookahead == ';')
                ADVANCE(468);
            if(lookahead == '<')
                ADVANCE(52);
            if(lookahead == '>')
                ADVANCE(776);
            if(lookahead == '@')
                ADVANCE(140);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == ']')
                ADVANCE(770);
            if(lookahead == '^')
                ADVANCE(477);
            if(lookahead == '{')
                ADVANCE(471);
            if(lookahead == '|')
                ADVANCE(476);
            if(lookahead == '}')
                ADVANCE(472);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(28)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 29:
            if(lookahead == '$')
                ADVANCE(478);
            if(lookahead == ')')
                ADVANCE(491);
            if(lookahead == ',')
                ADVANCE(500);
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(475);
            if(lookahead == ';')
                ADVANCE(468);
            if(lookahead == '>')
                ADVANCE(775);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(770);
            if(lookahead == '^')
                ADVANCE(477);
            if(lookahead == 'd')
                ADVANCE(680);
            if(lookahead == '|')
                ADVANCE(476);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(29)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 30:
            if(lookahead == '\'')
                ADVANCE(492);
            if(lookahead == '(')
                ADVANCE(489);
            if(lookahead == '+')
                ADVANCE(482);
            if(lookahead == '-')
                ADVANCE(484);
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == '0')
                ADVANCE(540);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == 'L')
                ADVANCE(495);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == '~')
                ADVANCE(488);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(30)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 31:
            if(lookahead == '(')
                ADVANCE(27);
            if(lookahead == ',')
                ADVANCE(500);
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '<')
                ADVANCE(773);
            if(lookahead == '>')
                ADVANCE(775);
            if(lookahead == '@')
                ADVANCE(191);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(770);
            if(lookahead == 'b')
                ADVANCE(727);
            if(lookahead == 'c')
                ADVANCE(692);
            if(lookahead == 'd')
                ADVANCE(722);
            if(lookahead == 'f')
                ADVANCE(654);
            if(lookahead == 'i')
                ADVANCE(716);
            if(lookahead == 'l')
                ADVANCE(724);
            if(lookahead == 'o')
                ADVANCE(666);
            if(lookahead == 's')
                ADVANCE(672);
            if(lookahead == 't')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(702);
            if(lookahead == 'v')
                ADVANCE(723);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '}')
                ADVANCE(472);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 32:
            if(lookahead == ')')
                ADVANCE(491);
            if(lookahead == ',')
                ADVANCE(500);
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'i')
                ADVANCE(714);
            if(lookahead == 'o')
                ADVANCE(762);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(32)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 33:
            if(lookahead == ')')
                ADVANCE(491);
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '<')
                ADVANCE(773);
            if(lookahead == '>')
                ADVANCE(775);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '{')
                ADVANCE(471);
            if(lookahead == '}')
                ADVANCE(472);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(33)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 34:
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '0')
                ADVANCE(537);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            END_STATE();
        case 35:
            if(lookahead == '/')
                ADVANCE(783);
            END_STATE();
        case 36:
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '@')
                ADVANCE(141);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(727);
            if(lookahead == 'c')
                ADVANCE(692);
            if(lookahead == 'd')
                ADVANCE(722);
            if(lookahead == 'e')
                ADVANCE(717);
            if(lookahead == 'f')
                ADVANCE(654);
            if(lookahead == 'i')
                ADVANCE(716);
            if(lookahead == 'l')
                ADVANCE(724);
            if(lookahead == 'o')
                ADVANCE(666);
            if(lookahead == 's')
                ADVANCE(673);
            if(lookahead == 't')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(703);
            if(lookahead == 'v')
                ADVANCE(723);
            if(lookahead == 'w')
                ADVANCE(667);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(36)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'b')
                ADVANCE(727);
            if(lookahead == 'c')
                ADVANCE(692);
            if(lookahead == 'd')
                ADVANCE(722);
            if(lookahead == 'f')
                ADVANCE(655);
            if(lookahead == 'i')
                ADVANCE(716);
            if(lookahead == 'l')
                ADVANCE(724);
            if(lookahead == 'o')
                ADVANCE(666);
            if(lookahead == 's')
                ADVANCE(674);
            if(lookahead == 't')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(702);
            if(lookahead == 'v')
                ADVANCE(723);
            if(lookahead == 'w')
                ADVANCE(668);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 38:
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(25)
            if(lookahead == 'b')
                ADVANCE(727);
            if(lookahead == 'c')
                ADVANCE(692);
            if(lookahead == 'd')
                ADVANCE(722);
            if(lookahead == 'f')
                ADVANCE(655);
            if(lookahead == 'i')
                ADVANCE(716);
            if(lookahead == 'l')
                ADVANCE(724);
            if(lookahead == 'o')
                ADVANCE(666);
            if(lookahead == 's')
                ADVANCE(694);
            if(lookahead == 't')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(702);
            if(lookahead == 'v')
                ADVANCE(723);
            if(lookahead == 'w')
                ADVANCE(668);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(38)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ':')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == '}')
                ADVANCE(472);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == ';')
                ADVANCE(468);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 's')
                ADVANCE(765);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(35);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(493);
            END_STATE();
        case 42:
            if(lookahead == '1')
                ADVANCE(49);
            if(lookahead == '3')
                ADVANCE(43);
            if(lookahead == '6')
                ADVANCE(46);
            if(lookahead == '8')
                ADVANCE(617);
            END_STATE();
        case 43:
            if(lookahead == '2')
                ADVANCE(621);
            END_STATE();
        case 44:
            if(lookahead == '2')
                ADVANCE(50);
            END_STATE();
        case 45:
            if(lookahead == '2')
                ADVANCE(625);
            END_STATE();
        case 46:
            if(lookahead == '4')
                ADVANCE(623);
            END_STATE();
        case 47:
            if(lookahead == '4')
                ADVANCE(627);
            END_STATE();
        case 48:
            if(lookahead == '6')
                ADVANCE(637);
            END_STATE();
        case 49:
            if(lookahead == '6')
                ADVANCE(619);
            END_STATE();
        case 50:
            if(lookahead == '8')
                ADVANCE(629);
            END_STATE();
        case 51:
            if(lookahead == ':')
                ADVANCE(639);
            END_STATE();
        case 52:
            if(lookahead == '<')
                ADVANCE(480);
            END_STATE();
        case 53:
            if(lookahead == 'C')
                ADVANCE(57);
            END_STATE();
        case 54:
            if(lookahead == 'D')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(286);
            if(lookahead == 'b')
                ADVANCE(225);
            if(lookahead == 'd')
                ADVANCE(87);
            if(lookahead == 'e')
                ADVANCE(447);
            if(lookahead == 'f')
                ADVANCE(222);
            if(lookahead == 'h')
                ADVANCE(74);
            if(lookahead == 'i')
                ADVANCE(126);
            if(lookahead == 'k')
                ADVANCE(145);
            if(lookahead == 'm')
                ADVANCE(426);
            if(lookahead == 'n')
                ADVANCE(167);
            if(lookahead == 'o')
                ADVANCE(337);
            if(lookahead == 'p')
                ADVANCE(314);
            if(lookahead == 't')
                ADVANCE(346);
            if(lookahead == 'v')
                ADVANCE(75);
            END_STATE();
        case 55:
            if(lookahead == 'D')
                ADVANCE(56);
            if(lookahead == 'a')
                ADVANCE(285);
            if(lookahead == 'b')
                ADVANCE(225);
            if(lookahead == 'd')
                ADVANCE(86);
            if(lookahead == 'f')
                ADVANCE(222);
            if(lookahead == 'i')
                ADVANCE(204);
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
                ADVANCE(585);
            END_STATE();
        case 59:
            if(lookahead == 'R')
                ADVANCE(152);
            if(lookahead == 'S')
                ADVANCE(175);
            END_STATE();
        case 60:
            if(lookahead == 'S')
                ADVANCE(59);
            END_STATE();
        case 61:
            if(lookahead == 'T')
                ADVANCE(313);
            END_STATE();
        case 62:
            if(lookahead == 'T')
                ADVANCE(330);
            END_STATE();
        case 63:
            if(lookahead == '_')
                ADVANCE(104);
            END_STATE();
        case 64:
            if(lookahead == '_')
                ADVANCE(118);
            END_STATE();
        case 65:
            if(lookahead == '_')
                ADVANCE(432);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(263);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(357);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(377);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(300);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(267);
            END_STATE();
        case 71:
            if(lookahead == 'a')
                ADVANCE(369);
            if(lookahead == 'h')
                ADVANCE(80);
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(261);
            if(lookahead == 'i')
                ADVANCE(446);
            if(lookahead == 'l')
                ADVANCE(315);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(368);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(262);
            if(lookahead == 'e')
                ADVANCE(347);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(237);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(245);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(272);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(67);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(344);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(365);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(246);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(430);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(345);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(247);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(406);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(406);
            if(lookahead == 'e')
                ADVANCE(197);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(275);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(249);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(388);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(408);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(296);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(401);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(438);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(123);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(108);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(422);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(109);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(423);
            END_STATE();
        case 103:
            if(lookahead == 'b')
                ADVANCE(441);
            END_STATE();
        case 104:
            if(lookahead == 'b')
                ADVANCE(332);
            END_STATE();
        case 105:
            if(lookahead == 'b')
                ADVANCE(243);
            END_STATE();
        case 106:
            if(lookahead == 'b')
                ADVANCE(254);
            END_STATE();
        case 107:
            if(lookahead == 'b')
                ADVANCE(94);
            END_STATE();
        case 108:
            if(lookahead == 'b')
                ADVANCE(258);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(259);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(260);
            END_STATE();
        case 111:
            if(lookahead == 'c')
                ADVANCE(208);
            if(lookahead == 's')
                ADVANCE(405);
            END_STATE();
        case 112:
            if(lookahead == 'c')
                ADVANCE(522);
            END_STATE();
        case 113:
            if(lookahead == 'c')
                ADVANCE(519);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(206);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(403);
            if(lookahead == 'u')
                ADVANCE(384);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(77);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(77);
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(329);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(392);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(394);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(159);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(161);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(164);
            END_STATE();
        case 124:
            if(lookahead == 'd')
                ADVANCE(165);
            END_STATE();
        case 125:
            if(lookahead == 'd')
                ADVANCE(567);
            END_STATE();
        case 126:
            if(lookahead == 'd')
                ADVANCE(567);
            if(lookahead == 'g')
                ADVANCE(295);
            END_STATE();
        case 127:
            if(lookahead == 'd')
                ADVANCE(591);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(781);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(582);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(569);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(579);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(26);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(573);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(566);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(565);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(440);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(334);
            if(lookahead == 'l')
                ADVANCE(322);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(178);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(168);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(192);
            if(lookahead == 'p')
                ADVANCE(314);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(86);
            if(lookahead == 'f')
                ADVANCE(222);
            if(lookahead == 'i')
                ADVANCE(204);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(101);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(194);
            if(lookahead == 'o')
                ADVANCE(427);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(342);
            if(lookahead == 'h')
                ADVANCE(316);
            if(lookahead == 't')
                ADVANCE(343);
            if(lookahead == 'w')
                ADVANCE(230);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(449);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(631);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(508);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(520);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(587);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(289);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(589);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(580);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(595);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(470);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(469);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(511);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(576);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(771);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(523);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(518);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(577);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(601);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(517);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(196);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(341);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(382);
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(193);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(128);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(66);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(131);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(132);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(367);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(348);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(134);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(284);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(364);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(283);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(91);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(353);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(360);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(361);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(390);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(307);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(354);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(139);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(448);
            if(lookahead == 'h')
                ADVANCE(74);
            if(lookahead == 'i')
                ADVANCE(125);
            if(lookahead == 'k')
                ADVANCE(145);
            if(lookahead == 'm')
                ADVANCE(442);
            if(lookahead == 'n')
                ADVANCE(317);
            if(lookahead == 'o')
                ADVANCE(337);
            if(lookahead == 't')
                ADVANCE(346);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(197);
            END_STATE();
        case 193:
            if(lookahead == 'f')
                ADVANCE(510);
            END_STATE();
        case 194:
            if(lookahead == 'f')
                ADVANCE(83);
            END_STATE();
        case 195:
            if(lookahead == 'f')
                ADVANCE(98);
            END_STATE();
        case 196:
            if(lookahead == 'f')
                ADVANCE(229);
            END_STATE();
        case 197:
            if(lookahead == 'f')
                ADVANCE(97);
            END_STATE();
        case 198:
            if(lookahead == 'g')
                ADVANCE(599);
            END_STATE();
        case 199:
            if(lookahead == 'g')
                ADVANCE(777);
            END_STATE();
        case 200:
            if(lookahead == 'g')
                ADVANCE(779);
            END_STATE();
        case 201:
            if(lookahead == 'g')
                ADVANCE(607);
            END_STATE();
        case 202:
            if(lookahead == 'g')
                ADVANCE(610);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(611);
            END_STATE();
        case 204:
            if(lookahead == 'g')
                ADVANCE(295);
            END_STATE();
        case 205:
            if(lookahead == 'g')
                ADVANCE(302);
            END_STATE();
        case 206:
            if(lookahead == 'h')
                ADVANCE(506);
            END_STATE();
        case 207:
            if(lookahead == 'h')
                ADVANCE(224);
            END_STATE();
        case 208:
            if(lookahead == 'h')
                ADVANCE(84);
            END_STATE();
        case 209:
            if(lookahead == 'h')
                ADVANCE(331);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(445);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(454);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(205);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(127);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(383);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(383);
            if(lookahead == 'o')
                ADVANCE(311);
            if(lookahead == 'y')
                ADVANCE(398);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(269);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(228);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(103);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(105);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(112);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(129);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(293);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(113);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(130);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(385);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(281);
            if(lookahead == 'u')
                ADVANCE(119);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(319);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(319);
            if(lookahead == 's')
                ADVANCE(212);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(301);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(397);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(333);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(282);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(89);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(400);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(122);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(416);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(375);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(323);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(325);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(412);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(419);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(328);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(264);
            END_STATE();
        case 244:
            if(lookahead == 'k')
                ADVANCE(509);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(516);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(578);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(568);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(563);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(501);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(450);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(69);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(180);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(211);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(154);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(155);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(393);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(425);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(158);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(162);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(163);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(373);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(435);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(240);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(234);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(326);
            if(lookahead == 's')
                ADVANCE(209);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(327);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(241);
            END_STATE();
        case 268:
            if(lookahead == 'm')
                ADVANCE(498);
            END_STATE();
        case 269:
            if(lookahead == 'm')
                ADVANCE(583);
            END_STATE();
        case 270:
            if(lookahead == 'm')
                ADVANCE(148);
            if(lookahead == 't')
                ADVANCE(210);
            END_STATE();
        case 271:
            if(lookahead == 'm')
                ADVANCE(81);
            END_STATE();
        case 272:
            if(lookahead == 'm')
                ADVANCE(174);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(526);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(504);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(633);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(581);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(503);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(584);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(68);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(429);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(199);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(200);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(121);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(142);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(292);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(292);
            if(lookahead == 'p')
                ADVANCE(338);
            if(lookahead == 'u')
                ADVANCE(415);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(201);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(202);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(370);
            if(lookahead == 'r')
                ADVANCE(298);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(381);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(324);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(82);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(133);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(321);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(135);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(386);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(85);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(78);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(157);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(173);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(138);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(374);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(227);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(413);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(424);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(117);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(136);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(213);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(339);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(380);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(93);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(355);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(116);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(221);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(356);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(287);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(276);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(420);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(288);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(290);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(291);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(340);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(358);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(434);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(299);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(443);
            END_STATE();
        case 335:
            if(lookahead == 'p')
                ADVANCE(250);
            if(lookahead == 'q')
                ADVANCE(436);
            END_STATE();
        case 336:
            if(lookahead == 'p')
                ADVANCE(190);
            END_STATE();
        case 337:
            if(lookahead == 'p')
                ADVANCE(404);
            END_STATE();
        case 338:
            if(lookahead == 'p')
                ADVANCE(177);
            END_STATE();
        case 339:
            if(lookahead == 'p')
                ADVANCE(220);
            END_STATE();
        case 340:
            if(lookahead == 'p')
                ADVANCE(223);
            END_STATE();
        case 341:
            if(lookahead == 'p')
                ADVANCE(359);
            END_STATE();
        case 342:
            if(lookahead == 'q')
                ADVANCE(439);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(226);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(603);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(605);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(453);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(107);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(444);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(431);
            if(lookahead == 'y')
                ADVANCE(336);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(218);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(437);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(233);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(90);
            END_STATE();
        case 354:
            if(lookahead == 'r')
                ADVANCE(92);
            END_STATE();
        case 355:
            if(lookahead == 'r')
                ADVANCE(391);
            END_STATE();
        case 356:
            if(lookahead == 'r')
                ADVANCE(171);
            END_STATE();
        case 357:
            if(lookahead == 'r')
                ADVANCE(166);
            END_STATE();
        case 358:
            if(lookahead == 'r')
                ADVANCE(395);
            END_STATE();
        case 359:
            if(lookahead == 'r')
                ADVANCE(189);
            END_STATE();
        case 360:
            if(lookahead == 'r')
                ADVANCE(195);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(298);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(428);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(232);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(378);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(244);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(525);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(502);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(207);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(147);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(219);
            END_STATE();
        case 371:
            if(lookahead == 's')
                ADVANCE(402);
            END_STATE();
        case 372:
            if(lookahead == 's')
                ADVANCE(402);
            if(lookahead == 't')
                ADVANCE(99);
            END_STATE();
        case 373:
            if(lookahead == 's')
                ADVANCE(151);
            END_STATE();
        case 374:
            if(lookahead == 's')
                ADVANCE(387);
            END_STATE();
        case 375:
            if(lookahead == 's')
                ADVANCE(170);
            END_STATE();
        case 376:
            if(lookahead == 's')
                ADVANCE(421);
            END_STATE();
        case 377:
            if(lookahead == 's')
                ADVANCE(186);
            END_STATE();
        case 378:
            if(lookahead == 's')
                ADVANCE(417);
            END_STATE();
        case 379:
            if(lookahead == 's')
                ADVANCE(185);
            END_STATE();
        case 380:
            if(lookahead == 's')
                ADVANCE(236);
            END_STATE();
        case 381:
            if(lookahead == 's')
                ADVANCE(409);
            END_STATE();
        case 382:
            if(lookahead == 's')
                ADVANCE(410);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(271);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(528);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(63);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(42);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(532);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(593);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(530);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(608);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(597);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(473);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(496);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(572);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(602);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(399);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(114);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(146);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(451);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(210);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(65);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(184);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(231);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(363);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(79);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(150);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(216);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(351);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(172);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(160);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(182);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(183);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(320);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(238);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(95);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(362);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(187);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(100);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(62);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(239);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(242);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(102);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(70);
            END_STATE();
        case 426:
            if(lookahead == 'u')
                ADVANCE(372);
            END_STATE();
        case 427:
            if(lookahead == 'u')
                ADVANCE(106);
            END_STATE();
        case 428:
            if(lookahead == 'u')
                ADVANCE(119);
            END_STATE();
        case 429:
            if(lookahead == 'u')
                ADVANCE(268);
            END_STATE();
        case 430:
            if(lookahead == 'u')
                ADVANCE(256);
            END_STATE();
        case 431:
            if(lookahead == 'u')
                ADVANCE(149);
            END_STATE();
        case 432:
            if(lookahead == 'u')
                ADVANCE(303);
            END_STATE();
        case 433:
            if(lookahead == 'u')
                ADVANCE(389);
            END_STATE();
        case 434:
            if(lookahead == 'u')
                ADVANCE(294);
            END_STATE();
        case 435:
            if(lookahead == 'u')
                ADVANCE(153);
            END_STATE();
        case 436:
            if(lookahead == 'u')
                ADVANCE(188);
            END_STATE();
        case 437:
            if(lookahead == 'u')
                ADVANCE(120);
            END_STATE();
        case 438:
            if(lookahead == 'u')
                ADVANCE(257);
            END_STATE();
        case 439:
            if(lookahead == 'u')
                ADVANCE(179);
            END_STATE();
        case 440:
            if(lookahead == 'u')
                ADVANCE(255);
            END_STATE();
        case 441:
            if(lookahead == 'u')
                ADVANCE(411);
            END_STATE();
        case 442:
            if(lookahead == 'u')
                ADVANCE(371);
            END_STATE();
        case 443:
            if(lookahead == 'u')
                ADVANCE(110);
            END_STATE();
        case 444:
            if(lookahead == 'v')
                ADVANCE(235);
            END_STATE();
        case 445:
            if(lookahead == 'v')
                ADVANCE(156);
            END_STATE();
        case 446:
            if(lookahead == 'x')
                ADVANCE(169);
            END_STATE();
        case 447:
            if(lookahead == 'x')
                ADVANCE(407);
            END_STATE();
        case 448:
            if(lookahead == 'x')
                ADVANCE(414);
            END_STATE();
        case 449:
            if(lookahead == 'y')
                ADVANCE(564);
            END_STATE();
        case 450:
            if(lookahead == 'y')
                ADVANCE(61);
            END_STATE();
        case 451:
            if(lookahead == 'y')
                ADVANCE(575);
            END_STATE();
        case 452:
            if(lookahead == 'y')
                ADVANCE(336);
            END_STATE();
        case 453:
            if(lookahead == 'y')
                ADVANCE(64);
            END_STATE();
        case 454:
            if(lookahead == 'z')
                ADVANCE(176);
            END_STATE();
        case 455:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            END_STATE();
        case 456:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(533);
            END_STATE();
        case 457:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            END_STATE();
        case 458:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(547);
            END_STATE();
        case 459:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            END_STATE();
        case 460:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(535);
            END_STATE();
        case 461:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(789);
            if(lookahead == '\r')
                ADVANCE(791);
            if(lookahead == '\\')
                ADVANCE(790);
            END_STATE();
        case 462:
            if(eof)
                ADVANCE(467);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 463:
            if(eof)
                ADVANCE(467);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(462)
            END_STATE();
        case 464:
            if(eof)
                ADVANCE(467);
            if(lookahead == '\n')
                SKIP(466)
            END_STATE();
        case 465:
            if(eof)
                ADVANCE(467);
            if(lookahead == '\n')
                SKIP(466)
            if(lookahead == '\r')
                SKIP(464)
            END_STATE();
        case 466:
            if(eof)
                ADVANCE(467);
            if(lookahead == '#')
                ADVANCE(124);
            if(lookahead == '$')
                ADVANCE(478);
            if(lookahead == '%')
                ADVANCE(487);
            if(lookahead == '(')
                ADVANCE(489);
            if(lookahead == ')')
                ADVANCE(491);
            if(lookahead == '*')
                ADVANCE(485);
            if(lookahead == '+')
                ADVANCE(481);
            if(lookahead == ',')
                ADVANCE(500);
            if(lookahead == '-')
                ADVANCE(483);
            if(lookahead == '/')
                ADVANCE(486);
            if(lookahead == ':')
                ADVANCE(475);
            if(lookahead == ';')
                ADVANCE(468);
            if(lookahead == '<')
                ADVANCE(52);
            if(lookahead == '>')
                ADVANCE(776);
            if(lookahead == '@')
                ADVANCE(55);
            if(lookahead == '\\')
                SKIP(465)
            if(lookahead == ']')
                ADVANCE(770);
            if(lookahead == '^')
                ADVANCE(477);
            if(lookahead == 'b')
                ADVANCE(214);
            if(lookahead == 'c')
                ADVANCE(310);
            if(lookahead == 'e')
                ADVANCE(280);
            if(lookahead == 'i')
                ADVANCE(306);
            if(lookahead == 'l')
                ADVANCE(318);
            if(lookahead == 'm')
                ADVANCE(309);
            if(lookahead == 'n')
                ADVANCE(96);
            if(lookahead == 's')
                ADVANCE(418);
            if(lookahead == 't')
                ADVANCE(452);
            if(lookahead == 'u')
                ADVANCE(305);
            if(lookahead == '|')
                ADVANCE(476);
            if(lookahead == '}')
                ADVANCE(472);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(466)
            END_STATE();
        case 467:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '0')
                ADVANCE(541);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '0')
                ADVANCE(541);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(783);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '"')
                ADVANCE(570);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(493);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(515);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(514);
            if(lookahead == '\\')
                ADVANCE(512);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(513);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(785);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(433);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_out);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_inout);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(456);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(557);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(533);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(562);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(460);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(534);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(534);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(460);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(535);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(535);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(457);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(550);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(767);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(551);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(457);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(552);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(459);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(553);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(539);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(457);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(551);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(457);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(553);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(539);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(455);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(554);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(641);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(455);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(555);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(34);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(557);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(455);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(559);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(767);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(455);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(560);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(459);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(557);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(455);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(561);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(455);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(557);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(562);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(458);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(460);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(546);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(547);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(547);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(458);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(546);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(547);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(547);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(459);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(460);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(459);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(460);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(553);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(459);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(551);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(459);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(459);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(553);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(539);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(459);
            if(lookahead == '.')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(553);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(553);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '0')
                ADVANCE(542);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(561);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '0')
                ADVANCE(543);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(562);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(460);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(534);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(534);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(460);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(535);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(535);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(546);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(557);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(547);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(562);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(547);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(561);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(545);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(562);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(562);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_ATbit_bound);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_bit_bound_token1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(574);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_extensibility);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_mutable);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_appendable);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_nested);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_value);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_ATposition);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_autoid);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_verbatim);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(586);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_true);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_true);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_false);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_false);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(44);
            if(lookahead == '3')
                ADVANCE(45);
            if(lookahead == '6')
                ADVANCE(47);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(645);
            if(lookahead == '3')
                ADVANCE(646);
            if(lookahead == '6')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(137);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(137);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(48);
            if(lookahead == '8')
                ADVANCE(635);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(651);
            if(lookahead == '8')
                ADVANCE(636);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_octet);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_octet);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(266);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(650);
            if(lookahead == '3')
                ADVANCE(643);
            if(lookahead == '6')
                ADVANCE(647);
            if(lookahead == '8')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_int8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_uint8);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_uint8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_float32);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_float32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_float64);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_float64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_float128);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_float128);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_byte);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_byte);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_boolean);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_boolean);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_char8);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_char8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_char16);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_char16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(265);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(456);
            if(lookahead == '0')
                ADVANCE(536);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(652);
            if(lookahead == '3')
                ADVANCE(644);
            if(lookahead == '6')
                ADVANCE(648);
            if(lookahead == '8')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(614);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(638);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '8')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(706);
            if(lookahead == 'i')
                ADVANCE(766);
            if(lookahead == 'l')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(706);
            if(lookahead == 'l')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(695);
            if(lookahead == 's')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(640);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(730);
            if(lookahead == 'h')
                ADVANCE(728);
            if(lookahead == 't')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(730);
            if(lookahead == 'h')
                ADVANCE(728);
            if(lookahead == 't')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(730);
            if(lookahead == 'h')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(588);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(718);
            if(lookahead == 'u')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(719);
            if(lookahead == 'n')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(719);
            if(lookahead == 'n')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(729);
            if(lookahead == 's')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(726);
            if(lookahead == 'y')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(604);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(606);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(529);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(531);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(480);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(479);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(768);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(461);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(789);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(515);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(787);
            if(lookahead == '\\')
                ADVANCE(461);
            if(lookahead != 0)
                ADVANCE(789);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(788);
            if(lookahead == '\\')
                ADVANCE(23);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(787);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(789);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(784);
            if(lookahead == '\\')
                ADVANCE(461);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(789);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(461);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(789);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(789);
            if(lookahead == '\r')
                ADVANCE(791);
            if(lookahead == '\\')
                ADVANCE(790);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(789);
            if(lookahead == '\\')
                ADVANCE(461);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 466 },
    [2] = { .lex_state = 31 },
    [3] = { .lex_state = 31 },
    [4] = { .lex_state = 31 },
    [5] = { .lex_state = 31 },
    [6] = { .lex_state = 31 },
    [7] = { .lex_state = 31 },
    [8] = { .lex_state = 31 },
    [9] = { .lex_state = 31 },
    [10] = { .lex_state = 31 },
    [11] = { .lex_state = 36 },
    [12] = { .lex_state = 31 },
    [13] = { .lex_state = 31 },
    [14] = { .lex_state = 31 },
    [15] = { .lex_state = 31 },
    [16] = { .lex_state = 31 },
    [17] = { .lex_state = 31 },
    [18] = { .lex_state = 31 },
    [19] = { .lex_state = 31 },
    [20] = { .lex_state = 31 },
    [21] = { .lex_state = 31 },
    [22] = { .lex_state = 31 },
    [23] = { .lex_state = 31 },
    [24] = { .lex_state = 31 },
    [25] = { .lex_state = 31 },
    [26] = { .lex_state = 466 },
    [27] = { .lex_state = 466 },
    [28] = { .lex_state = 466 },
    [29] = { .lex_state = 466 },
    [30] = { .lex_state = 37 },
    [31] = { .lex_state = 31 },
    [32] = { .lex_state = 31 },
    [33] = { .lex_state = 38 },
    [34] = { .lex_state = 30 },
    [35] = { .lex_state = 30 },
    [36] = { .lex_state = 30 },
    [37] = { .lex_state = 30 },
    [38] = { .lex_state = 30 },
    [39] = { .lex_state = 30 },
    [40] = { .lex_state = 30 },
    [41] = { .lex_state = 30 },
    [42] = { .lex_state = 30 },
    [43] = { .lex_state = 30 },
    [44] = { .lex_state = 466 },
    [45] = { .lex_state = 466 },
    [46] = { .lex_state = 466 },
    [47] = { .lex_state = 466 },
    [48] = { .lex_state = 30 },
    [49] = { .lex_state = 30 },
    [50] = { .lex_state = 30 },
    [51] = { .lex_state = 28 },
    [52] = { .lex_state = 30 },
    [53] = { .lex_state = 28 },
    [54] = { .lex_state = 28 },
    [55] = { .lex_state = 28 },
    [56] = { .lex_state = 466 },
    [57] = { .lex_state = 466 },
    [58] = { .lex_state = 466 },
    [59] = { .lex_state = 466 },
    [60] = { .lex_state = 466 },
    [61] = { .lex_state = 30 },
    [62] = { .lex_state = 466 },
    [63] = { .lex_state = 466 },
    [64] = { .lex_state = 466 },
    [65] = { .lex_state = 466 },
    [66] = { .lex_state = 466 },
    [67] = { .lex_state = 466 },
    [68] = { .lex_state = 30 },
    [69] = { .lex_state = 466 },
    [70] = { .lex_state = 466 },
    [71] = { .lex_state = 466 },
    [72] = { .lex_state = 466 },
    [73] = { .lex_state = 32 },
    [74] = { .lex_state = 30 },
    [75] = { .lex_state = 32 },
    [76] = { .lex_state = 32 },
    [77] = { .lex_state = 29 },
    [78] = { .lex_state = 29 },
    [79] = { .lex_state = 39 },
    [80] = { .lex_state = 39 },
    [81] = { .lex_state = 466 },
    [82] = { .lex_state = 39 },
    [83] = { .lex_state = 466 },
    [84] = { .lex_state = 39 },
    [85] = { .lex_state = 39 },
    [86] = { .lex_state = 39 },
    [87] = { .lex_state = 39 },
    [88] = { .lex_state = 39 },
    [89] = { .lex_state = 29 },
    [90] = { .lex_state = 29 },
    [91] = { .lex_state = 29 },
    [92] = { .lex_state = 32 },
    [93] = { .lex_state = 32 },
    [94] = { .lex_state = 28 },
    [95] = { .lex_state = 28 },
    [96] = { .lex_state = 28 },
    [97] = { .lex_state = 28 },
    [98] = { .lex_state = 33 },
    [99] = { .lex_state = 32 },
    [100] = { .lex_state = 28 },
    [101] = { .lex_state = 32 },
    [102] = { .lex_state = 0 },
    [103] = { .lex_state = 33 },
    [104] = { .lex_state = 0 },
    [105] = { .lex_state = 33 },
    [106] = { .lex_state = 39 },
    [107] = { .lex_state = 33 },
    [108] = { .lex_state = 28 },
    [109] = { .lex_state = 33 },
    [110] = { .lex_state = 33 },
    [111] = { .lex_state = 28 },
    [112] = { .lex_state = 0 },
    [113] = { .lex_state = 0 },
    [114] = { .lex_state = 30 },
    [115] = { .lex_state = 32 },
    [116] = { .lex_state = 33 },
    [117] = { .lex_state = 0 },
    [118] = { .lex_state = 28 },
    [119] = { .lex_state = 33 },
    [120] = { .lex_state = 0 },
    [121] = { .lex_state = 28 },
    [122] = { .lex_state = 28 },
    [123] = { .lex_state = 33 },
    [124] = { .lex_state = 0 },
    [125] = { .lex_state = 466 },
    [126] = { .lex_state = 466 },
    [127] = { .lex_state = 28 },
    [128] = { .lex_state = 466 },
    [129] = { .lex_state = 0 },
    [130] = { .lex_state = 28 },
    [131] = { .lex_state = 466 },
    [132] = { .lex_state = 28 },
    [133] = { .lex_state = 39 },
    [134] = { .lex_state = 0 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 0 },
    [137] = { .lex_state = 29 },
    [138] = { .lex_state = 28 },
    [139] = { .lex_state = 39 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 33 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 28 },
    [144] = { .lex_state = 28 },
    [145] = { .lex_state = 28 },
    [146] = { .lex_state = 33 },
    [147] = { .lex_state = 0 },
    [148] = { .lex_state = 28 },
    [149] = { .lex_state = 28 },
    [150] = { .lex_state = 28 },
    [151] = { .lex_state = 28 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 40 },
    [154] = { .lex_state = 0 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 33 },
    [157] = { .lex_state = 33 },
    [158] = { .lex_state = 0 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 33 },
    [161] = { .lex_state = 0 },
    [162] = { .lex_state = 0 },
    [163] = { .lex_state = 33 },
    [164] = { .lex_state = 33 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 31 },
    [167] = { .lex_state = 0 },
    [168] = { .lex_state = 33 },
    [169] = { .lex_state = 0 },
    [170] = { .lex_state = 33 },
    [171] = { .lex_state = 33 },
    [172] = { .lex_state = 33 },
    [173] = { .lex_state = 33 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 28 },
    [176] = { .lex_state = 33 },
    [177] = { .lex_state = 0 },
    [178] = { .lex_state = 33 },
    [179] = { .lex_state = 33 },
    [180] = { .lex_state = 0 },
    [181] = { .lex_state = 0 },
    [182] = { .lex_state = 0 },
    [183] = { .lex_state = 0 },
    [184] = { .lex_state = 0 },
    [185] = { .lex_state = 28 },
    [186] = { .lex_state = 0 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 28 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 28 },
    [191] = { .lex_state = 28 },
    [192] = { .lex_state = 41 },
    [193] = { .lex_state = 33 },
    [194] = { .lex_state = 41 },
    [195] = { .lex_state = 28 },
    [196] = { .lex_state = 28 },
    [197] = { .lex_state = 28 },
    [198] = { .lex_state = 28 },
    [199] = { .lex_state = 28 },
    [200] = { .lex_state = 28 },
    [201] = { .lex_state = 0 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 28 },
    [205] = { .lex_state = 41 },
    [206] = { .lex_state = 28 },
    [207] = { .lex_state = 28 },
    [208] = { .lex_state = 28 },
    [209] = { .lex_state = 33 },
    [210] = { .lex_state = 33 },
    [211] = { .lex_state = 28 },
    [212] = { .lex_state = 28 },
    [213] = { .lex_state = 41 },
    [214] = { .lex_state = 28 },
    [215] = { .lex_state = 28 },
    [216] = { .lex_state = 33 },
    [217] = { .lex_state = 33 },
    [218] = { .lex_state = 33 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 33 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 33 },
    [223] = { .lex_state = 28 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 28 },
    [226] = { .lex_state = 28 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 33 },
    [229] = { .lex_state = 28 },
    [230] = { .lex_state = 28 },
    [231] = { .lex_state = 28 },
    [232] = { .lex_state = 28 },
    [233] = { .lex_state = 33 },
    [234] = { .lex_state = 28 },
    [235] = { .lex_state = 28 },
    [236] = { .lex_state = 28 },
    [237] = { .lex_state = 31 },
    [238] = { .lex_state = 466 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 28 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 28 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 28 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 466 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 31 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 466 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 28 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 28 },
    [268] = { .lex_state = 466 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 28 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 41 },
    [276] = { .lex_state = 31 },
    [277] = { .lex_state = 28 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 31 },
    [280] = { .lex_state = 41 },
    [281] = { .lex_state = 787 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 466 },
    [289] = { .lex_state = 28 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 41 },
    [294] = { .lex_state = 28 },
    [295] = { .lex_state = 466 },
    [296] = { .lex_state = 28 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 31 },
    [301] = { .lex_state = 28 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 28 },
    [304] = { .lex_state = 466 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 41 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 28 },
    [309] = { .lex_state = 466 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 513 },
    [313] = { .lex_state = 28 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 31 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 31 },
    [318] = { .lex_state = 466 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 28 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 28 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 28 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 28 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 28 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 28 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 28 },
    [346] = { .lex_state = 28 },
    [347] = { .lex_state = 28 },
    [348] = { .lex_state = 28 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 28 },
    [351] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
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
        [sym_dds_service] = ACTIONS(1),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
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
        [anon_sym_void] = ACTIONS(1),
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
        [sym_specification] = STATE(284),
        [sym__definition] = STATE(46),
        [sym_native_dcl] = STATE(283),
        [sym_module_dcl] = STATE(283),
        [sym_struct_forward_dcl] = STATE(283),
        [sym_struct_def] = STATE(283),
        [sym_enum_dcl] = STATE(283),
        [sym_enum_anno] = STATE(282),
        [sym_annotation] = STATE(283),
        [sym_union_forward_dcl] = STATE(283),
        [sym_union_def] = STATE(283),
        [sym_bitmask] = STATE(283),
        [sym_typedef_dcl] = STATE(283),
        [sym_predefine] = STATE(45),
        [sym_interface] = STATE(283),
        [sym_dds_request_topic] = STATE(128),
        [sym_dds_reply_topic] = STATE(128),
        [sym_interface_anno] = STATE(125),
        [sym_const_dcl] = STATE(283),
        [sym_bit_bound] = STATE(274),
        [sym_data_representation] = STATE(167),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(29),
        [aux_sym_struct_def_repeat1] = STATE(124),
        [aux_sym_interface_repeat1] = STATE(83),
        [ts_builtin_sym_end] = ACTIONS(5),
        [anon_sym_native] = ACTIONS(7),
        [anon_sym_module] = ACTIONS(9),
        [anon_sym_struct] = ACTIONS(11),
        [anon_sym_enum] = ACTIONS(13),
        [anon_sym_ATignore_literal_names] = ACTIONS(15),
        [anon_sym_ATannotation] = ACTIONS(17),
        [anon_sym_union] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_typedef] = ACTIONS(23),
        [anon_sym_POUNDdefine] = ACTIONS(25),
        [anon_sym_local] = ACTIONS(27),
        [anon_sym_interface] = ACTIONS(29),
        [sym_dds_service] = ACTIONS(31),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(33),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_ATbit_bound] = ACTIONS(39),
        [sym_final] = ACTIONS(41),
        [anon_sym_ATdata_representation] = ACTIONS(43),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    anon_sym_RBRACE,
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    STATE(2),
    1,
    sym_comment,
    STATE(4),
    1,
    aux_sym_struct_def_repeat2,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(67),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(6),
    1,
    aux_sym_struct_def_repeat2,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [218] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_RBRACE,
    ACTIONS(74),
    1,
    anon_sym_AThashid,
    ACTIONS(77),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(86),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    sym_identifier,
    ACTIONS(92),
    1,
    anon_sym_sequence,
    ACTIONS(98),
    1,
    anon_sym_fixed,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(95),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(4),
    2,
    sym_comment,
    aux_sym_struct_def_repeat2,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(83),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(71),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(80),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [325] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(101),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_struct_def_repeat2,
    STATE(5),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(103),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_struct_def_repeat2,
    STATE(6),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(45),
    1,
    anon_sym_RBRACE,
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    STATE(5),
    1,
    aux_sym_struct_def_repeat2,
    STATE(7),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(105),
    1,
    anon_sym_RBRACE,
    STATE(2),
    1,
    aux_sym_struct_def_repeat2,
    STATE(8),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(107),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    sym_comment,
    STATE(10),
    1,
    aux_sym_struct_def_repeat2,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(109),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_struct_def_repeat2,
    STATE(10),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_member_repeat1,
    STATE(20),
    1,
    sym_member,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    ACTIONS(15),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    sym_final,
    ACTIONS(43),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(111),
    1,
    anon_sym_struct,
    ACTIONS(113),
    1,
    anon_sym_enum,
    ACTIONS(115),
    1,
    anon_sym_union,
    STATE(11),
    1,
    sym_comment,
    STATE(124),
    1,
    aux_sym_struct_def_repeat1,
    STATE(167),
    1,
    sym_data_representation,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(282),
    1,
    sym_enum_anno,
    STATE(301),
    1,
    sym_scoped_name,
    STATE(302),
    1,
    sym_type_declarator,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(132),
    7,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1087] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_AThashid,
    ACTIONS(51),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    STATE(12),
    1,
    sym_comment,
    STATE(13),
    1,
    aux_sym_member_repeat1,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(130),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(47),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1187] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(120),
    1,
    anon_sym_AThashid,
    ACTIONS(123),
    1,
    anon_sym_ATtry_construct,
    STATE(25),
    1,
    sym_struct_modifier,
    STATE(13),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(22),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(128),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(126),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1257] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    ACTIONS(130),
    1,
    anon_sym_COMMA,
    ACTIONS(132),
    1,
    anon_sym_GT,
    STATE(14),
    1,
    sym_comment,
    STATE(193),
    1,
    sym_scoped_name,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(276),
    1,
    sym_type_spec,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1339] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    STATE(15),
    1,
    sym_comment,
    STATE(148),
    1,
    sym_type_spec,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(301),
    1,
    sym_scoped_name,
    STATE(328),
    1,
    sym_element_spec,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1418] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(16),
    1,
    sym_comment,
    ACTIONS(134),
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
    ACTIONS(136),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1475] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(17),
    1,
    sym_comment,
    ACTIONS(138),
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
    ACTIONS(140),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1532] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(18),
    1,
    sym_comment,
    ACTIONS(142),
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
    ACTIONS(144),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1589] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(19),
    1,
    sym_comment,
    ACTIONS(146),
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
    ACTIONS(148),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1646] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(20),
    1,
    sym_comment,
    ACTIONS(150),
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
    ACTIONS(152),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1703] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(21),
    1,
    sym_comment,
    ACTIONS(154),
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
    ACTIONS(156),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1759] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(22),
    1,
    sym_comment,
    ACTIONS(158),
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
    ACTIONS(160),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1815] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(23),
    1,
    sym_comment,
    ACTIONS(162),
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
    ACTIONS(164),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1871] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    ACTIONS(65),
    1,
    anon_sym_fixed,
    STATE(24),
    1,
    sym_comment,
    STATE(218),
    1,
    sym_primitive_type,
    STATE(294),
    1,
    sym_type_spec,
    STATE(301),
    1,
    sym_scoped_name,
    ACTIONS(63),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(216),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [1947] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(25),
    1,
    sym_comment,
    ACTIONS(166),
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
    ACTIONS(168),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [2003] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(172),
    1,
    anon_sym_native,
    ACTIONS(175),
    1,
    anon_sym_module,
    ACTIONS(178),
    1,
    anon_sym_struct,
    ACTIONS(181),
    1,
    anon_sym_enum,
    ACTIONS(184),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(187),
    1,
    anon_sym_ATannotation,
    ACTIONS(190),
    1,
    anon_sym_union,
    ACTIONS(193),
    1,
    anon_sym_bitmask,
    ACTIONS(196),
    1,
    anon_sym_typedef,
    ACTIONS(199),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(202),
    1,
    anon_sym_local,
    ACTIONS(205),
    1,
    anon_sym_interface,
    ACTIONS(208),
    1,
    sym_dds_service,
    ACTIONS(211),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(214),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(217),
    1,
    anon_sym_const,
    ACTIONS(220),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(223),
    1,
    sym_final,
    ACTIONS(226),
    1,
    anon_sym_ATdata_representation,
    STATE(45),
    1,
    sym_predefine,
    STATE(46),
    1,
    sym__definition,
    STATE(83),
    1,
    aux_sym_interface_repeat1,
    STATE(124),
    1,
    aux_sym_struct_def_repeat1,
    STATE(125),
    1,
    sym_interface_anno,
    STATE(167),
    1,
    sym_data_representation,
    STATE(274),
    1,
    sym_bit_bound,
    STATE(282),
    1,
    sym_enum_anno,
    ACTIONS(170),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(26),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(128),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(283),
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
    sym_interface,
    sym_const_dcl,
    [2114] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_native,
    ACTIONS(9),
    1,
    anon_sym_module,
    ACTIONS(11),
    1,
    anon_sym_struct,
    ACTIONS(13),
    1,
    anon_sym_enum,
    ACTIONS(15),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(17),
    1,
    anon_sym_ATannotation,
    ACTIONS(19),
    1,
    anon_sym_union,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_typedef,
    ACTIONS(25),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(27),
    1,
    anon_sym_local,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    sym_dds_service,
    ACTIONS(33),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(35),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(41),
    1,
    sym_final,
    ACTIONS(43),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(229),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    aux_sym_specification_repeat1,
    STATE(27),
    1,
    sym_comment,
    STATE(45),
    1,
    sym_predefine,
    STATE(46),
    1,
    sym__definition,
    STATE(83),
    1,
    aux_sym_interface_repeat1,
    STATE(124),
    1,
    aux_sym_struct_def_repeat1,
    STATE(125),
    1,
    sym_interface_anno,
    STATE(167),
    1,
    sym_data_representation,
    STATE(274),
    1,
    sym_bit_bound,
    STATE(282),
    1,
    sym_enum_anno,
    STATE(128),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(283),
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
    sym_interface,
    sym_const_dcl,
    [2226] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_native,
    ACTIONS(9),
    1,
    anon_sym_module,
    ACTIONS(11),
    1,
    anon_sym_struct,
    ACTIONS(13),
    1,
    anon_sym_enum,
    ACTIONS(15),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(17),
    1,
    anon_sym_ATannotation,
    ACTIONS(19),
    1,
    anon_sym_union,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_typedef,
    ACTIONS(25),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(27),
    1,
    anon_sym_local,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    sym_dds_service,
    ACTIONS(33),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(35),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(41),
    1,
    sym_final,
    ACTIONS(43),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(231),
    1,
    anon_sym_RBRACE,
    STATE(27),
    1,
    aux_sym_specification_repeat1,
    STATE(28),
    1,
    sym_comment,
    STATE(45),
    1,
    sym_predefine,
    STATE(46),
    1,
    sym__definition,
    STATE(83),
    1,
    aux_sym_interface_repeat1,
    STATE(124),
    1,
    aux_sym_struct_def_repeat1,
    STATE(125),
    1,
    sym_interface_anno,
    STATE(167),
    1,
    sym_data_representation,
    STATE(274),
    1,
    sym_bit_bound,
    STATE(282),
    1,
    sym_enum_anno,
    STATE(128),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(283),
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
    sym_interface,
    sym_const_dcl,
    [2338] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_native,
    ACTIONS(9),
    1,
    anon_sym_module,
    ACTIONS(11),
    1,
    anon_sym_struct,
    ACTIONS(13),
    1,
    anon_sym_enum,
    ACTIONS(15),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(17),
    1,
    anon_sym_ATannotation,
    ACTIONS(19),
    1,
    anon_sym_union,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_typedef,
    ACTIONS(25),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(27),
    1,
    anon_sym_local,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    sym_dds_service,
    ACTIONS(33),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(35),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(41),
    1,
    sym_final,
    ACTIONS(43),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(233),
    1,
    ts_builtin_sym_end,
    STATE(26),
    1,
    aux_sym_specification_repeat1,
    STATE(29),
    1,
    sym_comment,
    STATE(45),
    1,
    sym_predefine,
    STATE(46),
    1,
    sym__definition,
    STATE(83),
    1,
    aux_sym_interface_repeat1,
    STATE(124),
    1,
    aux_sym_struct_def_repeat1,
    STATE(125),
    1,
    sym_interface_anno,
    STATE(167),
    1,
    sym_data_representation,
    STATE(274),
    1,
    sym_bit_bound,
    STATE(282),
    1,
    sym_enum_anno,
    STATE(128),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(283),
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
    sym_interface,
    sym_const_dcl,
    [2450] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(61),
    1,
    anon_sym_sequence,
    STATE(30),
    1,
    sym_comment,
    STATE(343),
    1,
    sym_const_type,
    STATE(346),
    1,
    sym_scoped_name,
    STATE(345),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [2511] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(31),
    1,
    sym_comment,
    ACTIONS(237),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(235),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [2559] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(32),
    1,
    sym_comment,
    ACTIONS(241),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(239),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [2607] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(206),
    1,
    sym_scoped_name,
    STATE(324),
    1,
    sym_primitive_type,
    STATE(329),
    1,
    sym_switch_type_spec,
    ACTIONS(55),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(53),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
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
    [2664] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(298),
    1,
    sym_positive_int_const,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [2736] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(35),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(254),
    1,
    sym_positive_int_const,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [2808] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(36),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(237),
    1,
    sym_positive_int_const,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [2880] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(253),
    1,
    sym_positive_int_const,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [2952] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(38),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(317),
    1,
    sym_positive_int_const,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3024] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(39),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(327),
    1,
    sym_const_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3093] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(40),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(242),
    1,
    sym_const_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3162] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(287),
    1,
    sym_const_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3231] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(310),
    1,
    sym_const_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3300] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(43),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(89),
    1,
    sym_xor_expr,
    STATE(91),
    1,
    sym_or_expr,
    STATE(269),
    1,
    sym_const_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3369] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(259),
    21,
    ts_builtin_sym_end,
    anon_sym_native,
    anon_sym_module,
    anon_sym_RBRACE,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3399] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(261),
    21,
    ts_builtin_sym_end,
    anon_sym_native,
    anon_sym_module,
    anon_sym_RBRACE,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3429] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(263),
    21,
    ts_builtin_sym_end,
    anon_sym_native,
    anon_sym_module,
    anon_sym_RBRACE,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3459] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(265),
    21,
    ts_builtin_sym_end,
    anon_sym_native,
    anon_sym_module,
    anon_sym_RBRACE,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3489] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(48),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(78),
    1,
    sym_and_expr,
    STATE(90),
    1,
    sym_xor_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3552] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(72),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    STATE(77),
    1,
    sym_and_expr,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3612] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(69),
    1,
    sym_add_expr,
    STATE(71),
    1,
    sym_shift_expr,
    STATE(74),
    1,
    sym_unary_operator,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3669] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(271),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(269),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(267),
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
    [3699] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(60),
    1,
    sym_mult_expr,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(70),
    1,
    sym_add_expr,
    STATE(74),
    1,
    sym_unary_operator,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3753] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(275),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(273),
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
    [3781] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(279),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(277),
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
    [3809] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(271),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(283),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(281),
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
    [3839] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(283),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(281),
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
    [3866] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(269),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(267),
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
    [3893] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(287),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(285),
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
    [3920] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(291),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(289),
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
    [3947] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(297),
    1,
    anon_sym_SLASH,
    ACTIONS(299),
    1,
    anon_sym_GT,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(295),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(293),
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
    [3978] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(61),
    1,
    sym_comment,
    STATE(63),
    1,
    sym_unary_expr,
    STATE(66),
    1,
    sym_mult_expr,
    STATE(74),
    1,
    sym_unary_operator,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4029] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(303),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(301),
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
    [4056] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(307),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(305),
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
    [4083] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(311),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(309),
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
    [4110] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(315),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(313),
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
    [4137] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(297),
    1,
    anon_sym_SLASH,
    ACTIONS(319),
    1,
    anon_sym_GT,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(295),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(317),
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
    [4168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(323),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(321),
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
    [4195] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(245),
    1,
    anon_sym_TILDE,
    ACTIONS(247),
    1,
    anon_sym_LPAREN,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(56),
    1,
    sym_literal,
    STATE(67),
    1,
    sym_unary_expr,
    STATE(68),
    1,
    sym_comment,
    STATE(74),
    1,
    sym_unary_operator,
    ACTIONS(243),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4243] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(329),
    1,
    anon_sym_GT,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(327),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(325),
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
    [4269] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(333),
    1,
    anon_sym_GT,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(327),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(331),
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
    [4295] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(339),
    1,
    anon_sym_GT,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(337),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(335),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [4319] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(343),
    1,
    anon_sym_GT,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(337),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(341),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [4343] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(345),
    1,
    anon_sym_RPAREN,
    ACTIONS(349),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(351),
    1,
    sym_identifier,
    STATE(73),
    1,
    sym_comment,
    STATE(76),
    1,
    aux_sym_interface_function_repeat1,
    STATE(115),
    1,
    sym_function_arg,
    STATE(160),
    1,
    sym_interface_modifier,
    STATE(213),
    1,
    sym_scoped_name,
    ACTIONS(347),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4376] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(249),
    1,
    anon_sym_SQUOTE,
    ACTIONS(251),
    1,
    anon_sym_L,
    ACTIONS(253),
    1,
    sym_number_literal,
    ACTIONS(255),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(257),
    1,
    sym_identifier,
    ACTIONS(353),
    1,
    anon_sym_LPAREN,
    STATE(51),
    1,
    sym_scoped_name,
    STATE(57),
    1,
    sym_literal,
    STATE(74),
    1,
    sym_comment,
    STATE(65),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4411] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(355),
    1,
    anon_sym_RPAREN,
    ACTIONS(360),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(363),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_function_arg,
    STATE(160),
    1,
    sym_interface_modifier,
    STATE(213),
    1,
    sym_scoped_name,
    STATE(75),
    2,
    sym_comment,
    aux_sym_interface_function_repeat1,
    ACTIONS(357),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4442] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(349),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(351),
    1,
    sym_identifier,
    ACTIONS(366),
    1,
    anon_sym_RPAREN,
    STATE(75),
    1,
    aux_sym_interface_function_repeat1,
    STATE(76),
    1,
    sym_comment,
    STATE(115),
    1,
    sym_function_arg,
    STATE(160),
    1,
    sym_interface_modifier,
    STATE(213),
    1,
    sym_scoped_name,
    ACTIONS(347),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4475] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_DOLLAR,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(368),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4495] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(370),
    1,
    anon_sym_DOLLAR,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(372),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4515] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(374),
    1,
    anon_sym_RBRACE,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    STATE(79),
    1,
    sym_comment,
    STATE(106),
    1,
    aux_sym_interface_repeat2,
    STATE(110),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4549] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    ACTIONS(378),
    1,
    anon_sym_RBRACE,
    STATE(80),
    1,
    sym_comment,
    STATE(106),
    1,
    aux_sym_interface_repeat2,
    STATE(119),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4583] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(382),
    1,
    sym_dds_service,
    ACTIONS(385),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(388),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(125),
    1,
    sym_interface_anno,
    ACTIONS(380),
    2,
    anon_sym_local,
    anon_sym_interface,
    STATE(81),
    2,
    sym_comment,
    aux_sym_interface_repeat1,
    STATE(128),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [4611] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    ACTIONS(378),
    1,
    anon_sym_RBRACE,
    STATE(82),
    1,
    sym_comment,
    STATE(86),
    1,
    aux_sym_interface_repeat2,
    STATE(119),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4645] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(31),
    1,
    sym_dds_service,
    ACTIONS(33),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(35),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(391),
    1,
    anon_sym_local,
    ACTIONS(393),
    1,
    anon_sym_interface,
    STATE(81),
    1,
    aux_sym_interface_repeat1,
    STATE(83),
    1,
    sym_comment,
    STATE(125),
    1,
    sym_interface_anno,
    STATE(128),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [4677] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    ACTIONS(395),
    1,
    anon_sym_RBRACE,
    STATE(79),
    1,
    aux_sym_interface_repeat2,
    STATE(84),
    1,
    sym_comment,
    STATE(103),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4711] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    ACTIONS(395),
    1,
    anon_sym_RBRACE,
    STATE(85),
    1,
    sym_comment,
    STATE(103),
    1,
    aux_sym_interface_repeat3,
    STATE(106),
    1,
    aux_sym_interface_repeat2,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4745] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    ACTIONS(397),
    1,
    anon_sym_RBRACE,
    STATE(86),
    1,
    sym_comment,
    STATE(106),
    1,
    aux_sym_interface_repeat2,
    STATE(109),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4779] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    ACTIONS(399),
    1,
    anon_sym_RBRACE,
    STATE(85),
    1,
    aux_sym_interface_repeat2,
    STATE(87),
    1,
    sym_comment,
    STATE(105),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4813] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(59),
    1,
    sym_identifier,
    ACTIONS(374),
    1,
    anon_sym_RBRACE,
    ACTIONS(376),
    1,
    anon_sym_attribute,
    STATE(80),
    1,
    aux_sym_interface_repeat2,
    STATE(88),
    1,
    sym_comment,
    STATE(110),
    1,
    aux_sym_interface_repeat3,
    STATE(133),
    1,
    sym_interface_attribute,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [4847] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(403),
    1,
    anon_sym_CARET,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(401),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4866] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(403),
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
    [4885] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(409),
    1,
    anon_sym_PIPE,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(407),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4903] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(413),
    1,
    anon_sym_COMMA,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(411),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(415),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [4923] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(419),
    1,
    anon_sym_COMMA,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(417),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(421),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [4943] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(423),
    1,
    anon_sym_RBRACE,
    ACTIONS(425),
    1,
    anon_sym_ATposition,
    ACTIONS(427),
    1,
    sym_identifier,
    STATE(94),
    1,
    sym_comment,
    STATE(97),
    1,
    aux_sym_bitmask_repeat1,
    STATE(175),
    1,
    sym_bitmask_field,
    STATE(271),
    1,
    sym_position,
    [4968] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(429),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(431),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    STATE(96),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(149),
    1,
    aux_sym_enumerator_repeat1,
    STATE(201),
    1,
    sym_enumerator,
    STATE(223),
    1,
    sym_enum_modifier,
    [4993] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(433),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(436),
    1,
    sym_identifier,
    STATE(149),
    1,
    aux_sym_enumerator_repeat1,
    STATE(223),
    1,
    sym_enum_modifier,
    STATE(255),
    1,
    sym_enumerator,
    STATE(96),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [5016] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(439),
    1,
    anon_sym_RBRACE,
    ACTIONS(441),
    1,
    anon_sym_ATposition,
    ACTIONS(444),
    1,
    sym_identifier,
    STATE(175),
    1,
    sym_bitmask_field,
    STATE(271),
    1,
    sym_position,
    STATE(97),
    2,
    sym_comment,
    aux_sym_bitmask_repeat1,
    [5039] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_RBRACE,
    ACTIONS(449),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(452),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_annotation_field,
    STATE(289),
    1,
    sym_scoped_name,
    STATE(98),
    2,
    sym_comment,
    aux_sym_annotation_repeat1,
    [5062] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(455),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5079] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(429),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(431),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(111),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(149),
    1,
    aux_sym_enumerator_repeat1,
    STATE(201),
    1,
    sym_enumerator,
    STATE(223),
    1,
    sym_enum_modifier,
    [5104] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(417),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(421),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(461),
    1,
    anon_sym_LBRACK,
    STATE(152),
    1,
    sym_fixed_array_size,
    STATE(102),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(459),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5140] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(374),
    1,
    anon_sym_RBRACE,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(103),
    1,
    sym_comment,
    STATE(107),
    1,
    aux_sym_interface_repeat3,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [5165] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(466),
    1,
    anon_sym_RBRACE,
    ACTIONS(468),
    1,
    anon_sym_default,
    ACTIONS(471),
    1,
    anon_sym_case,
    STATE(15),
    1,
    sym_case_label,
    STATE(162),
    1,
    sym_case,
    STATE(104),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [5188] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(395),
    1,
    anon_sym_RBRACE,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    STATE(107),
    1,
    aux_sym_interface_repeat3,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [5213] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(476),
    1,
    anon_sym_attribute,
    ACTIONS(479),
    1,
    sym_identifier,
    STATE(133),
    1,
    sym_interface_attribute,
    ACTIONS(474),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    STATE(106),
    2,
    sym_comment,
    aux_sym_interface_repeat2,
    [5234] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(481),
    1,
    anon_sym_RBRACE,
    ACTIONS(483),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(486),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    STATE(107),
    2,
    sym_comment,
    aux_sym_interface_repeat3,
    [5257] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(425),
    1,
    anon_sym_ATposition,
    ACTIONS(427),
    1,
    sym_identifier,
    ACTIONS(489),
    1,
    anon_sym_RBRACE,
    STATE(94),
    1,
    aux_sym_bitmask_repeat1,
    STATE(108),
    1,
    sym_comment,
    STATE(175),
    1,
    sym_bitmask_field,
    STATE(271),
    1,
    sym_position,
    [5282] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(464),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_RBRACE,
    STATE(107),
    1,
    aux_sym_interface_repeat3,
    STATE(109),
    1,
    sym_comment,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [5307] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(378),
    1,
    anon_sym_RBRACE,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(107),
    1,
    aux_sym_interface_repeat3,
    STATE(110),
    1,
    sym_comment,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [5332] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(429),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(431),
    1,
    sym_identifier,
    STATE(96),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(111),
    1,
    sym_comment,
    STATE(149),
    1,
    aux_sym_enumerator_repeat1,
    STATE(223),
    1,
    sym_enum_modifier,
    STATE(227),
    1,
    sym_enumerator,
    [5357] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(493),
    1,
    anon_sym_RBRACE,
    ACTIONS(495),
    1,
    anon_sym_default,
    ACTIONS(497),
    1,
    anon_sym_case,
    STATE(15),
    1,
    sym_case_label,
    STATE(104),
    1,
    aux_sym_union_def_repeat1,
    STATE(112),
    1,
    sym_comment,
    STATE(162),
    1,
    sym_case,
    [5382] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(501),
    1,
    anon_sym_LBRACK,
    STATE(113),
    1,
    sym_comment,
    STATE(117),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(152),
    1,
    sym_fixed_array_size,
    ACTIONS(499),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5403] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(503),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(505),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [5420] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(507),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(509),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5437] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(464),
    1,
    sym_identifier,
    ACTIONS(511),
    1,
    anon_sym_RBRACE,
    STATE(98),
    1,
    aux_sym_annotation_repeat1,
    STATE(116),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_annotation_field,
    STATE(289),
    1,
    sym_scoped_name,
    [5462] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(501),
    1,
    anon_sym_LBRACK,
    STATE(102),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(117),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_fixed_array_size,
    ACTIONS(513),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5483] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(425),
    1,
    anon_sym_ATposition,
    ACTIONS(427),
    1,
    sym_identifier,
    ACTIONS(515),
    1,
    anon_sym_RBRACE,
    STATE(118),
    1,
    sym_comment,
    STATE(122),
    1,
    aux_sym_bitmask_repeat1,
    STATE(175),
    1,
    sym_bitmask_field,
    STATE(271),
    1,
    sym_position,
    [5508] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_RBRACE,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(107),
    1,
    aux_sym_interface_repeat3,
    STATE(119),
    1,
    sym_comment,
    STATE(164),
    1,
    sym_interface_function,
    STATE(243),
    1,
    sym_scoped_name,
    [5533] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    anon_sym_default,
    ACTIONS(497),
    1,
    anon_sym_case,
    ACTIONS(517),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    sym_case_label,
    STATE(112),
    1,
    aux_sym_union_def_repeat1,
    STATE(120),
    1,
    sym_comment,
    STATE(162),
    1,
    sym_case,
    [5558] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(429),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(431),
    1,
    sym_identifier,
    STATE(95),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(121),
    1,
    sym_comment,
    STATE(149),
    1,
    aux_sym_enumerator_repeat1,
    STATE(221),
    1,
    sym_enumerator,
    STATE(223),
    1,
    sym_enum_modifier,
    [5583] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(425),
    1,
    anon_sym_ATposition,
    ACTIONS(427),
    1,
    sym_identifier,
    ACTIONS(489),
    1,
    anon_sym_RBRACE,
    STATE(97),
    1,
    aux_sym_bitmask_repeat1,
    STATE(122),
    1,
    sym_comment,
    STATE(175),
    1,
    sym_bitmask_field,
    STATE(271),
    1,
    sym_position,
    [5608] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(464),
    1,
    sym_identifier,
    ACTIONS(519),
    1,
    anon_sym_RBRACE,
    STATE(116),
    1,
    aux_sym_annotation_repeat1,
    STATE(123),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_annotation_field,
    STATE(289),
    1,
    sym_scoped_name,
    [5633] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(41),
    1,
    sym_final,
    ACTIONS(43),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(521),
    1,
    anon_sym_struct,
    STATE(124),
    1,
    sym_comment,
    STATE(129),
    1,
    aux_sym_struct_def_repeat1,
    STATE(167),
    1,
    sym_data_representation,
    [5655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(523),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5669] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(525),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5683] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(136),
    1,
    sym_declarator,
    STATE(186),
    1,
    sym_declarators,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [5703] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(529),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5717] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(531),
    1,
    anon_sym_struct,
    ACTIONS(533),
    1,
    sym_final,
    ACTIONS(536),
    1,
    anon_sym_ATdata_representation,
    STATE(167),
    1,
    sym_data_representation,
    STATE(129),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [5737] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(130),
    1,
    sym_comment,
    STATE(136),
    1,
    sym_declarator,
    STATE(155),
    1,
    sym_declarators,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [5757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(539),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5771] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(132),
    1,
    sym_comment,
    STATE(187),
    1,
    sym_any_declarator,
    STATE(299),
    1,
    sym_any_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [5791] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(541),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    ACTIONS(543),
    2,
    anon_sym_attribute,
    sym_identifier,
    [5806] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(547),
    1,
    anon_sym_COMMA,
    STATE(134),
    1,
    sym_comment,
    STATE(135),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(545),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [5823] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(551),
    1,
    anon_sym_COMMA,
    ACTIONS(549),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(135),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [5838] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(547),
    1,
    anon_sym_COMMA,
    STATE(134),
    1,
    aux_sym_declarators_repeat1,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(554),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [5855] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(556),
    1,
    anon_sym_SEMI,
    ACTIONS(558),
    1,
    anon_sym_default,
    STATE(137),
    1,
    sym_comment,
    STATE(257),
    1,
    sym_default,
    [5874] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(562),
    1,
    anon_sym_COMMA,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(560),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [5889] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(564),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    ACTIONS(566),
    2,
    anon_sym_attribute,
    sym_identifier,
    [5904] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(568),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [5917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(273),
    4,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [5930] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(570),
    1,
    anon_sym_RPAREN,
    ACTIONS(572),
    1,
    anon_sym_XCDR,
    ACTIONS(575),
    1,
    anon_sym_XCDR2,
    STATE(142),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [5947] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(578),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(581),
    1,
    sym_identifier,
    STATE(223),
    1,
    sym_enum_modifier,
    STATE(143),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [5964] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(585),
    1,
    anon_sym_COMMA,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(583),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [5979] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(589),
    1,
    anon_sym_LBRACE,
    ACTIONS(591),
    1,
    anon_sym_COLON,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(587),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [5996] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(277),
    4,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [6009] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(593),
    1,
    anon_sym_RPAREN,
    ACTIONS(595),
    1,
    anon_sym_XCDR,
    ACTIONS(597),
    1,
    anon_sym_XCDR2,
    STATE(142),
    1,
    aux_sym_data_representation_repeat1,
    STATE(147),
    1,
    sym_comment,
    [6028] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(340),
    1,
    sym_declarator,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6045] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(429),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(599),
    1,
    sym_identifier,
    STATE(143),
    1,
    aux_sym_enumerator_repeat1,
    STATE(149),
    1,
    sym_comment,
    STATE(223),
    1,
    sym_enum_modifier,
    [6064] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_comment,
    STATE(161),
    1,
    sym_declarator,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6081] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(151),
    1,
    sym_comment,
    STATE(189),
    1,
    sym_any_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6098] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(601),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6111] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(603),
    1,
    anon_sym_SEMI,
    ACTIONS(605),
    1,
    anon_sym_switch,
    ACTIONS(607),
    1,
    sym_identifier,
    STATE(153),
    1,
    sym_comment,
    [6127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_SEMI,
    ACTIONS(611),
    1,
    anon_sym_COMMA,
    STATE(154),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [6141] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(614),
    1,
    anon_sym_SEMI,
    ACTIONS(616),
    1,
    anon_sym_default,
    STATE(155),
    1,
    sym_comment,
    STATE(290),
    1,
    sym_default,
    [6157] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(618),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6169] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(620),
    3,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [6181] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(622),
    1,
    anon_sym_SEMI,
    ACTIONS(624),
    1,
    anon_sym_raises,
    STATE(158),
    1,
    sym_comment,
    STATE(319),
    1,
    sym_interface_except,
    [6197] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(626),
    1,
    anon_sym_SEMI,
    ACTIONS(628),
    1,
    anon_sym_COMMA,
    STATE(154),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(159),
    1,
    sym_comment,
    [6213] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(349),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(630),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    STATE(205),
    1,
    sym_scoped_name,
    [6229] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(549),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6241] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(632),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6253] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(634),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(636),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6277] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(624),
    1,
    anon_sym_raises,
    ACTIONS(638),
    1,
    anon_sym_SEMI,
    STATE(165),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_interface_except,
    [6293] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(640),
    3,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [6305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(642),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(644),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6329] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(648),
    1,
    anon_sym_XCDR,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(646),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [6343] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_comment,
    STATE(214),
    1,
    sym_scoped_name,
    [6359] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(171),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_scoped_name,
    [6375] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(652),
    1,
    anon_sym_LT,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(650),
    2,
    sym_identifier,
    anon_sym_GT,
    [6389] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(654),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6401] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(656),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6413] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(658),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(660),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6437] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(595),
    1,
    anon_sym_XCDR,
    ACTIONS(597),
    1,
    anon_sym_XCDR2,
    STATE(147),
    1,
    aux_sym_data_representation_repeat1,
    STATE(177),
    1,
    sym_comment,
    [6453] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(662),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6465] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(57),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(464),
    1,
    sym_identifier,
    STATE(179),
    1,
    sym_comment,
    STATE(230),
    1,
    sym_scoped_name,
    [6481] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(664),
    1,
    anon_sym_LBRACE,
    ACTIONS(666),
    1,
    anon_sym_COLON,
    STATE(180),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_inherit,
    [6497] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(666),
    1,
    anon_sym_COLON,
    ACTIONS(668),
    1,
    anon_sym_LBRACE,
    STATE(181),
    1,
    sym_comment,
    STATE(342),
    1,
    sym_inherit,
    [6513] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(670),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6525] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(666),
    1,
    anon_sym_COLON,
    ACTIONS(672),
    1,
    anon_sym_LBRACE,
    STATE(183),
    1,
    sym_comment,
    STATE(250),
    1,
    sym_inherit,
    [6541] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(674),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6553] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(560),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6565] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(616),
    1,
    anon_sym_default,
    ACTIONS(676),
    1,
    anon_sym_SEMI,
    STATE(186),
    1,
    sym_comment,
    STATE(252),
    1,
    sym_default,
    [6581] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(628),
    1,
    anon_sym_COMMA,
    ACTIONS(678),
    1,
    anon_sym_SEMI,
    STATE(159),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(187),
    1,
    sym_comment,
    [6597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(680),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6609] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(609),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [6620] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(682),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(684),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(265),
    1,
    sym_simple_declarator,
    [6644] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(273),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(192),
    1,
    sym_comment,
    [6657] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    sym_identifier,
    ACTIONS(688),
    1,
    anon_sym_GT,
    STATE(193),
    1,
    sym_comment,
    [6670] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(277),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(279),
    1,
    sym_identifier,
    STATE(194),
    1,
    sym_comment,
    [6683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(690),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6694] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(692),
    1,
    sym_identifier,
    STATE(196),
    1,
    sym_comment,
    STATE(229),
    1,
    aux_sym_inherit_repeat1,
    [6707] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    sym_identifier,
    ACTIONS(694),
    1,
    anon_sym_RPAREN,
    STATE(197),
    1,
    sym_comment,
    [6720] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(696),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(698),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(700),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [6753] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    anon_sym_RBRACE,
    ACTIONS(704),
    1,
    anon_sym_COMMA,
    STATE(201),
    1,
    sym_comment,
    [6766] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(706),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [6777] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(708),
    1,
    anon_sym_LBRACE,
    ACTIONS(710),
    1,
    anon_sym_COLON,
    STATE(203),
    1,
    sym_comment,
    [6790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(712),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6801] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(714),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(716),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_comment,
    [6814] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    sym_identifier,
    ACTIONS(718),
    1,
    anon_sym_RPAREN,
    STATE(206),
    1,
    sym_comment,
    [6827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(720),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6838] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(722),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6849] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(724),
    2,
    sym_identifier,
    anon_sym_GT,
    [6860] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(726),
    2,
    sym_identifier,
    anon_sym_GT,
    [6871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(728),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6882] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(730),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6893] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(716),
    1,
    sym_identifier,
    ACTIONS(732),
    1,
    aux_sym_char_literal_token1,
    STATE(213),
    1,
    sym_comment,
    [6906] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    sym_identifier,
    ACTIONS(734),
    1,
    anon_sym_LBRACE,
    STATE(214),
    1,
    sym_comment,
    [6919] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(736),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [6930] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(738),
    2,
    sym_identifier,
    anon_sym_GT,
    [6941] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(740),
    2,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6952] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(688),
    2,
    sym_identifier,
    anon_sym_GT,
    [6963] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(742),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [6974] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(744),
    2,
    sym_identifier,
    anon_sym_GT,
    [6985] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(704),
    1,
    anon_sym_COMMA,
    ACTIONS(746),
    1,
    anon_sym_RBRACE,
    STATE(221),
    1,
    sym_comment,
    [6998] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(748),
    2,
    sym_identifier,
    anon_sym_GT,
    [7009] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(750),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7020] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(752),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7031] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(754),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7042] = 3,
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
    [7053] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(704),
    1,
    anon_sym_COMMA,
    ACTIONS(758),
    1,
    anon_sym_RBRACE,
    STATE(227),
    1,
    sym_comment,
    [7066] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(760),
    2,
    sym_identifier,
    anon_sym_GT,
    [7077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(762),
    1,
    sym_identifier,
    STATE(229),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_inherit_repeat1,
    [7090] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_LBRACE,
    STATE(230),
    1,
    sym_comment,
    [7103] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(273),
    1,
    sym_identifier,
    ACTIONS(766),
    1,
    anon_sym_LPAREN,
    STATE(231),
    1,
    sym_comment,
    [7116] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    anon_sym_LBRACE,
    ACTIONS(770),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_comment,
    [7129] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(772),
    2,
    sym_identifier,
    anon_sym_GT,
    [7140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(770),
    1,
    sym_identifier,
    ACTIONS(774),
    1,
    anon_sym_LBRACE,
    STATE(234),
    1,
    sym_comment,
    [7153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(776),
    1,
    sym_identifier,
    STATE(235),
    2,
    sym_comment,
    aux_sym_inherit_repeat1,
    [7164] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(779),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(781),
    1,
    anon_sym_GT,
    STATE(237),
    1,
    sym_comment,
    [7185] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(783),
    1,
    anon_sym_LPAREN,
    STATE(238),
    1,
    sym_comment,
    [7195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(785),
    1,
    anon_sym_LBRACE,
    STATE(239),
    1,
    sym_comment,
    [7205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(787),
    1,
    anon_sym_RPAREN,
    STATE(240),
    1,
    sym_comment,
    [7215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(789),
    1,
    anon_sym_RPAREN,
    STATE(241),
    1,
    sym_comment,
    [7225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(791),
    1,
    anon_sym_SEMI,
    STATE(242),
    1,
    sym_comment,
    [7235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(793),
    1,
    sym_identifier,
    STATE(243),
    1,
    sym_comment,
    [7245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(795),
    1,
    anon_sym_SEMI,
    STATE(244),
    1,
    sym_comment,
    [7255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(686),
    1,
    sym_identifier,
    STATE(245),
    1,
    sym_comment,
    [7265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(797),
    1,
    anon_sym_LBRACE,
    STATE(246),
    1,
    sym_comment,
    [7275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(799),
    1,
    anon_sym_DQUOTE,
    STATE(247),
    1,
    sym_comment,
    [7285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(801),
    1,
    sym_identifier,
    STATE(248),
    1,
    sym_comment,
    [7295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(803),
    1,
    anon_sym_SEMI,
    STATE(249),
    1,
    sym_comment,
    [7305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(664),
    1,
    anon_sym_LBRACE,
    STATE(250),
    1,
    sym_comment,
    [7315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(805),
    1,
    anon_sym_interface,
    STATE(251),
    1,
    sym_comment,
    [7325] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(807),
    1,
    anon_sym_SEMI,
    STATE(252),
    1,
    sym_comment,
    [7335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(809),
    1,
    anon_sym_COMMA,
    STATE(253),
    1,
    sym_comment,
    [7345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(811),
    1,
    anon_sym_GT,
    STATE(254),
    1,
    sym_comment,
    [7355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(704),
    1,
    anon_sym_COMMA,
    STATE(255),
    1,
    sym_comment,
    [7365] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(813),
    1,
    anon_sym_LPAREN,
    STATE(256),
    1,
    sym_comment,
    [7375] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(815),
    1,
    anon_sym_SEMI,
    STATE(257),
    1,
    sym_comment,
    [7385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_LBRACE,
    STATE(258),
    1,
    sym_comment,
    [7395] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(819),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_comment,
    [7405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_LBRACE,
    STATE(260),
    1,
    sym_comment,
    [7415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(823),
    1,
    anon_sym_LBRACE,
    STATE(261),
    1,
    sym_comment,
    [7425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    anon_sym_SQUOTE,
    STATE(262),
    1,
    sym_comment,
    [7435] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(827),
    1,
    anon_sym_SEMI,
    STATE(263),
    1,
    sym_comment,
    [7445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_LBRACE,
    STATE(264),
    1,
    sym_comment,
    [7455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(831),
    1,
    anon_sym_SEMI,
    STATE(265),
    1,
    sym_comment,
    [7465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(499),
    1,
    anon_sym_SEMI,
    STATE(266),
    1,
    sym_comment,
    [7475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(833),
    1,
    sym_identifier,
    STATE(267),
    1,
    sym_comment,
    [7485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(835),
    1,
    anon_sym_LPAREN,
    STATE(268),
    1,
    sym_comment,
    [7495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(837),
    1,
    anon_sym_RPAREN,
    STATE(269),
    1,
    sym_comment,
    [7505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(839),
    1,
    anon_sym_bitmask,
    STATE(270),
    1,
    sym_comment,
    [7515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(841),
    1,
    sym_identifier,
    STATE(271),
    1,
    sym_comment,
    [7525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(843),
    1,
    anon_sym_SEMI,
    STATE(272),
    1,
    sym_comment,
    [7535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_SQUOTE,
    STATE(273),
    1,
    sym_comment,
    [7545] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(847),
    1,
    anon_sym_bitmask,
    STATE(274),
    1,
    sym_comment,
    [7555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(849),
    1,
    aux_sym_char_literal_token1,
    STATE(275),
    1,
    sym_comment,
    [7565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_GT,
    STATE(276),
    1,
    sym_comment,
    [7575] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(770),
    1,
    sym_identifier,
    STATE(277),
    1,
    sym_comment,
    [7585] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(853),
    1,
    aux_sym_bit_bound_token1,
    STATE(278),
    1,
    sym_comment,
    [7595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(855),
    1,
    anon_sym_LT,
    STATE(279),
    1,
    sym_comment,
    [7605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(857),
    1,
    aux_sym_char_literal_token1,
    STATE(280),
    1,
    sym_comment,
    [7615] = 3,
    ACTIONS(859),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(861),
    1,
    aux_sym_comment_token1,
    STATE(281),
    1,
    sym_comment,
    [7625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(863),
    1,
    anon_sym_enum,
    STATE(282),
    1,
    sym_comment,
    [7635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(865),
    1,
    anon_sym_SEMI,
    STATE(283),
    1,
    sym_comment,
    [7645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    ts_builtin_sym_end,
    STATE(284),
    1,
    sym_comment,
    [7655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(869),
    1,
    anon_sym_SEMI,
    STATE(285),
    1,
    sym_comment,
    [7665] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(871),
    1,
    aux_sym_bit_bound_token1,
    STATE(286),
    1,
    sym_comment,
    [7675] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(873),
    1,
    anon_sym_SEMI,
    STATE(287),
    1,
    sym_comment,
    [7685] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    anon_sym_LPAREN,
    STATE(288),
    1,
    sym_comment,
    [7695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_comment,
    [7705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(879),
    1,
    anon_sym_SEMI,
    STATE(290),
    1,
    sym_comment,
    [7715] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(881),
    1,
    anon_sym_SEMI,
    STATE(291),
    1,
    sym_comment,
    [7725] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(883),
    1,
    anon_sym_SEMI,
    STATE(292),
    1,
    sym_comment,
    [7735] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(885),
    1,
    aux_sym_char_literal_token1,
    STATE(293),
    1,
    sym_comment,
    [7745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(887),
    1,
    sym_identifier,
    STATE(294),
    1,
    sym_comment,
    [7755] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(889),
    1,
    anon_sym_LPAREN,
    STATE(295),
    1,
    sym_comment,
    [7765] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(891),
    1,
    sym_identifier,
    STATE(296),
    1,
    sym_comment,
    [7775] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(893),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    sym_comment,
    [7785] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(895),
    1,
    anon_sym_RBRACK,
    STATE(298),
    1,
    sym_comment,
    [7795] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(897),
    1,
    anon_sym_SEMI,
    STATE(299),
    1,
    sym_comment,
    [7805] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(899),
    1,
    anon_sym_LT,
    STATE(300),
    1,
    sym_comment,
    [7815] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(688),
    1,
    sym_identifier,
    STATE(301),
    1,
    sym_comment,
    [7825] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(901),
    1,
    anon_sym_SEMI,
    STATE(302),
    1,
    sym_comment,
    [7835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(903),
    1,
    sym_identifier,
    STATE(303),
    1,
    sym_comment,
    [7845] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(905),
    1,
    anon_sym_LPAREN,
    STATE(304),
    1,
    sym_comment,
    [7855] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(907),
    1,
    anon_sym_name,
    STATE(305),
    1,
    sym_comment,
    [7865] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(909),
    1,
    aux_sym_char_literal_token1,
    STATE(306),
    1,
    sym_comment,
    [7875] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(911),
    1,
    anon_sym_SQUOTE,
    STATE(307),
    1,
    sym_comment,
    [7885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(913),
    1,
    sym_identifier,
    STATE(308),
    1,
    sym_comment,
    [7895] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(393),
    1,
    anon_sym_interface,
    STATE(309),
    1,
    sym_comment,
    [7905] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(915),
    1,
    anon_sym_RPAREN,
    STATE(310),
    1,
    sym_comment,
    [7915] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    anon_sym_COLON,
    STATE(311),
    1,
    sym_comment,
    [7925] = 3,
    ACTIONS(859),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(919),
    1,
    aux_sym_predefine_token1,
    STATE(312),
    1,
    sym_comment,
    [7935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(921),
    1,
    sym_identifier,
    STATE(313),
    1,
    sym_comment,
    [7945] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_LBRACE,
    STATE(314),
    1,
    sym_comment,
    [7955] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(315),
    1,
    sym_comment,
    [7965] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    anon_sym_SEMI,
    STATE(316),
    1,
    sym_comment,
    [7975] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_GT,
    STATE(317),
    1,
    sym_comment,
    [7985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(931),
    1,
    anon_sym_LPAREN,
    STATE(318),
    1,
    sym_comment,
    [7995] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(638),
    1,
    anon_sym_SEMI,
    STATE(319),
    1,
    sym_comment,
    [8005] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(933),
    1,
    anon_sym_RPAREN,
    STATE(320),
    1,
    sym_comment,
    [8015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    sym_identifier,
    STATE(321),
    1,
    sym_comment,
    [8025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(937),
    1,
    anon_sym_SEMI,
    STATE(322),
    1,
    sym_comment,
    [8035] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    sym_identifier,
    STATE(323),
    1,
    sym_comment,
    [8045] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(718),
    1,
    anon_sym_RPAREN,
    STATE(324),
    1,
    sym_comment,
    [8055] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(941),
    1,
    sym_identifier,
    STATE(325),
    1,
    sym_comment,
    [8065] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(943),
    1,
    anon_sym_enum,
    STATE(326),
    1,
    sym_comment,
    [8075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_COLON,
    STATE(327),
    1,
    sym_comment,
    [8085] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(947),
    1,
    anon_sym_SEMI,
    STATE(328),
    1,
    sym_comment,
    [8095] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(949),
    1,
    anon_sym_RPAREN,
    STATE(329),
    1,
    sym_comment,
    [8105] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(951),
    1,
    anon_sym_SEMI,
    STATE(330),
    1,
    sym_comment,
    [8115] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(953),
    1,
    anon_sym_LBRACE,
    STATE(331),
    1,
    sym_comment,
    [8125] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(955),
    1,
    anon_sym_RPAREN,
    STATE(332),
    1,
    sym_comment,
    [8135] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(957),
    1,
    anon_sym_EQ,
    STATE(333),
    1,
    sym_comment,
    [8145] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(959),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_comment,
    [8155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(961),
    1,
    anon_sym_EQ,
    STATE(335),
    1,
    sym_comment,
    [8165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(963),
    1,
    anon_sym_SEMI,
    STATE(336),
    1,
    sym_comment,
    [8175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(965),
    1,
    anon_sym_SEMI,
    STATE(337),
    1,
    sym_comment,
    [8185] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    sym_identifier,
    STATE(338),
    1,
    sym_comment,
    [8195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(969),
    1,
    anon_sym_EQ,
    STATE(339),
    1,
    sym_comment,
    [8205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(971),
    1,
    anon_sym_SEMI,
    STATE(340),
    1,
    sym_comment,
    [8215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(973),
    1,
    anon_sym_name,
    STATE(341),
    1,
    sym_comment,
    [8225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(672),
    1,
    anon_sym_LBRACE,
    STATE(342),
    1,
    sym_comment,
    [8235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(975),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    [8245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(977),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [8255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    sym_identifier,
    STATE(345),
    1,
    sym_comment,
    [8265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    sym_identifier,
    STATE(346),
    1,
    sym_comment,
    [8275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(981),
    1,
    sym_identifier,
    STATE(347),
    1,
    sym_comment,
    [8285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(983),
    1,
    sym_identifier,
    STATE(348),
    1,
    sym_comment,
    [8295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(985),
    1,
    anon_sym_SEMI,
    STATE(349),
    1,
    sym_comment,
    [8305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(271),
    1,
    sym_identifier,
    STATE(350),
    1,
    sym_comment,
    [8315] = 1,
    ACTIONS(987),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 109,
    [SMALL_STATE(4)] = 218,
    [SMALL_STATE(5)] = 325,
    [SMALL_STATE(6)] = 434,
    [SMALL_STATE(7)] = 543,
    [SMALL_STATE(8)] = 652,
    [SMALL_STATE(9)] = 761,
    [SMALL_STATE(10)] = 870,
    [SMALL_STATE(11)] = 979,
    [SMALL_STATE(12)] = 1087,
    [SMALL_STATE(13)] = 1187,
    [SMALL_STATE(14)] = 1257,
    [SMALL_STATE(15)] = 1339,
    [SMALL_STATE(16)] = 1418,
    [SMALL_STATE(17)] = 1475,
    [SMALL_STATE(18)] = 1532,
    [SMALL_STATE(19)] = 1589,
    [SMALL_STATE(20)] = 1646,
    [SMALL_STATE(21)] = 1703,
    [SMALL_STATE(22)] = 1759,
    [SMALL_STATE(23)] = 1815,
    [SMALL_STATE(24)] = 1871,
    [SMALL_STATE(25)] = 1947,
    [SMALL_STATE(26)] = 2003,
    [SMALL_STATE(27)] = 2114,
    [SMALL_STATE(28)] = 2226,
    [SMALL_STATE(29)] = 2338,
    [SMALL_STATE(30)] = 2450,
    [SMALL_STATE(31)] = 2511,
    [SMALL_STATE(32)] = 2559,
    [SMALL_STATE(33)] = 2607,
    [SMALL_STATE(34)] = 2664,
    [SMALL_STATE(35)] = 2736,
    [SMALL_STATE(36)] = 2808,
    [SMALL_STATE(37)] = 2880,
    [SMALL_STATE(38)] = 2952,
    [SMALL_STATE(39)] = 3024,
    [SMALL_STATE(40)] = 3093,
    [SMALL_STATE(41)] = 3162,
    [SMALL_STATE(42)] = 3231,
    [SMALL_STATE(43)] = 3300,
    [SMALL_STATE(44)] = 3369,
    [SMALL_STATE(45)] = 3399,
    [SMALL_STATE(46)] = 3429,
    [SMALL_STATE(47)] = 3459,
    [SMALL_STATE(48)] = 3489,
    [SMALL_STATE(49)] = 3552,
    [SMALL_STATE(50)] = 3612,
    [SMALL_STATE(51)] = 3669,
    [SMALL_STATE(52)] = 3699,
    [SMALL_STATE(53)] = 3753,
    [SMALL_STATE(54)] = 3781,
    [SMALL_STATE(55)] = 3809,
    [SMALL_STATE(56)] = 3839,
    [SMALL_STATE(57)] = 3866,
    [SMALL_STATE(58)] = 3893,
    [SMALL_STATE(59)] = 3920,
    [SMALL_STATE(60)] = 3947,
    [SMALL_STATE(61)] = 3978,
    [SMALL_STATE(62)] = 4029,
    [SMALL_STATE(63)] = 4056,
    [SMALL_STATE(64)] = 4083,
    [SMALL_STATE(65)] = 4110,
    [SMALL_STATE(66)] = 4137,
    [SMALL_STATE(67)] = 4168,
    [SMALL_STATE(68)] = 4195,
    [SMALL_STATE(69)] = 4243,
    [SMALL_STATE(70)] = 4269,
    [SMALL_STATE(71)] = 4295,
    [SMALL_STATE(72)] = 4319,
    [SMALL_STATE(73)] = 4343,
    [SMALL_STATE(74)] = 4376,
    [SMALL_STATE(75)] = 4411,
    [SMALL_STATE(76)] = 4442,
    [SMALL_STATE(77)] = 4475,
    [SMALL_STATE(78)] = 4495,
    [SMALL_STATE(79)] = 4515,
    [SMALL_STATE(80)] = 4549,
    [SMALL_STATE(81)] = 4583,
    [SMALL_STATE(82)] = 4611,
    [SMALL_STATE(83)] = 4645,
    [SMALL_STATE(84)] = 4677,
    [SMALL_STATE(85)] = 4711,
    [SMALL_STATE(86)] = 4745,
    [SMALL_STATE(87)] = 4779,
    [SMALL_STATE(88)] = 4813,
    [SMALL_STATE(89)] = 4847,
    [SMALL_STATE(90)] = 4866,
    [SMALL_STATE(91)] = 4885,
    [SMALL_STATE(92)] = 4903,
    [SMALL_STATE(93)] = 4923,
    [SMALL_STATE(94)] = 4943,
    [SMALL_STATE(95)] = 4968,
    [SMALL_STATE(96)] = 4993,
    [SMALL_STATE(97)] = 5016,
    [SMALL_STATE(98)] = 5039,
    [SMALL_STATE(99)] = 5062,
    [SMALL_STATE(100)] = 5079,
    [SMALL_STATE(101)] = 5104,
    [SMALL_STATE(102)] = 5121,
    [SMALL_STATE(103)] = 5140,
    [SMALL_STATE(104)] = 5165,
    [SMALL_STATE(105)] = 5188,
    [SMALL_STATE(106)] = 5213,
    [SMALL_STATE(107)] = 5234,
    [SMALL_STATE(108)] = 5257,
    [SMALL_STATE(109)] = 5282,
    [SMALL_STATE(110)] = 5307,
    [SMALL_STATE(111)] = 5332,
    [SMALL_STATE(112)] = 5357,
    [SMALL_STATE(113)] = 5382,
    [SMALL_STATE(114)] = 5403,
    [SMALL_STATE(115)] = 5420,
    [SMALL_STATE(116)] = 5437,
    [SMALL_STATE(117)] = 5462,
    [SMALL_STATE(118)] = 5483,
    [SMALL_STATE(119)] = 5508,
    [SMALL_STATE(120)] = 5533,
    [SMALL_STATE(121)] = 5558,
    [SMALL_STATE(122)] = 5583,
    [SMALL_STATE(123)] = 5608,
    [SMALL_STATE(124)] = 5633,
    [SMALL_STATE(125)] = 5655,
    [SMALL_STATE(126)] = 5669,
    [SMALL_STATE(127)] = 5683,
    [SMALL_STATE(128)] = 5703,
    [SMALL_STATE(129)] = 5717,
    [SMALL_STATE(130)] = 5737,
    [SMALL_STATE(131)] = 5757,
    [SMALL_STATE(132)] = 5771,
    [SMALL_STATE(133)] = 5791,
    [SMALL_STATE(134)] = 5806,
    [SMALL_STATE(135)] = 5823,
    [SMALL_STATE(136)] = 5838,
    [SMALL_STATE(137)] = 5855,
    [SMALL_STATE(138)] = 5874,
    [SMALL_STATE(139)] = 5889,
    [SMALL_STATE(140)] = 5904,
    [SMALL_STATE(141)] = 5917,
    [SMALL_STATE(142)] = 5930,
    [SMALL_STATE(143)] = 5947,
    [SMALL_STATE(144)] = 5964,
    [SMALL_STATE(145)] = 5979,
    [SMALL_STATE(146)] = 5996,
    [SMALL_STATE(147)] = 6009,
    [SMALL_STATE(148)] = 6028,
    [SMALL_STATE(149)] = 6045,
    [SMALL_STATE(150)] = 6064,
    [SMALL_STATE(151)] = 6081,
    [SMALL_STATE(152)] = 6098,
    [SMALL_STATE(153)] = 6111,
    [SMALL_STATE(154)] = 6127,
    [SMALL_STATE(155)] = 6141,
    [SMALL_STATE(156)] = 6157,
    [SMALL_STATE(157)] = 6169,
    [SMALL_STATE(158)] = 6181,
    [SMALL_STATE(159)] = 6197,
    [SMALL_STATE(160)] = 6213,
    [SMALL_STATE(161)] = 6229,
    [SMALL_STATE(162)] = 6241,
    [SMALL_STATE(163)] = 6253,
    [SMALL_STATE(164)] = 6265,
    [SMALL_STATE(165)] = 6277,
    [SMALL_STATE(166)] = 6293,
    [SMALL_STATE(167)] = 6305,
    [SMALL_STATE(168)] = 6317,
    [SMALL_STATE(169)] = 6329,
    [SMALL_STATE(170)] = 6343,
    [SMALL_STATE(171)] = 6359,
    [SMALL_STATE(172)] = 6375,
    [SMALL_STATE(173)] = 6389,
    [SMALL_STATE(174)] = 6401,
    [SMALL_STATE(175)] = 6413,
    [SMALL_STATE(176)] = 6425,
    [SMALL_STATE(177)] = 6437,
    [SMALL_STATE(178)] = 6453,
    [SMALL_STATE(179)] = 6465,
    [SMALL_STATE(180)] = 6481,
    [SMALL_STATE(181)] = 6497,
    [SMALL_STATE(182)] = 6513,
    [SMALL_STATE(183)] = 6525,
    [SMALL_STATE(184)] = 6541,
    [SMALL_STATE(185)] = 6553,
    [SMALL_STATE(186)] = 6565,
    [SMALL_STATE(187)] = 6581,
    [SMALL_STATE(188)] = 6597,
    [SMALL_STATE(189)] = 6609,
    [SMALL_STATE(190)] = 6620,
    [SMALL_STATE(191)] = 6631,
    [SMALL_STATE(192)] = 6644,
    [SMALL_STATE(193)] = 6657,
    [SMALL_STATE(194)] = 6670,
    [SMALL_STATE(195)] = 6683,
    [SMALL_STATE(196)] = 6694,
    [SMALL_STATE(197)] = 6707,
    [SMALL_STATE(198)] = 6720,
    [SMALL_STATE(199)] = 6731,
    [SMALL_STATE(200)] = 6742,
    [SMALL_STATE(201)] = 6753,
    [SMALL_STATE(202)] = 6766,
    [SMALL_STATE(203)] = 6777,
    [SMALL_STATE(204)] = 6790,
    [SMALL_STATE(205)] = 6801,
    [SMALL_STATE(206)] = 6814,
    [SMALL_STATE(207)] = 6827,
    [SMALL_STATE(208)] = 6838,
    [SMALL_STATE(209)] = 6849,
    [SMALL_STATE(210)] = 6860,
    [SMALL_STATE(211)] = 6871,
    [SMALL_STATE(212)] = 6882,
    [SMALL_STATE(213)] = 6893,
    [SMALL_STATE(214)] = 6906,
    [SMALL_STATE(215)] = 6919,
    [SMALL_STATE(216)] = 6930,
    [SMALL_STATE(217)] = 6941,
    [SMALL_STATE(218)] = 6952,
    [SMALL_STATE(219)] = 6963,
    [SMALL_STATE(220)] = 6974,
    [SMALL_STATE(221)] = 6985,
    [SMALL_STATE(222)] = 6998,
    [SMALL_STATE(223)] = 7009,
    [SMALL_STATE(224)] = 7020,
    [SMALL_STATE(225)] = 7031,
    [SMALL_STATE(226)] = 7042,
    [SMALL_STATE(227)] = 7053,
    [SMALL_STATE(228)] = 7066,
    [SMALL_STATE(229)] = 7077,
    [SMALL_STATE(230)] = 7090,
    [SMALL_STATE(231)] = 7103,
    [SMALL_STATE(232)] = 7116,
    [SMALL_STATE(233)] = 7129,
    [SMALL_STATE(234)] = 7140,
    [SMALL_STATE(235)] = 7153,
    [SMALL_STATE(236)] = 7164,
    [SMALL_STATE(237)] = 7175,
    [SMALL_STATE(238)] = 7185,
    [SMALL_STATE(239)] = 7195,
    [SMALL_STATE(240)] = 7205,
    [SMALL_STATE(241)] = 7215,
    [SMALL_STATE(242)] = 7225,
    [SMALL_STATE(243)] = 7235,
    [SMALL_STATE(244)] = 7245,
    [SMALL_STATE(245)] = 7255,
    [SMALL_STATE(246)] = 7265,
    [SMALL_STATE(247)] = 7275,
    [SMALL_STATE(248)] = 7285,
    [SMALL_STATE(249)] = 7295,
    [SMALL_STATE(250)] = 7305,
    [SMALL_STATE(251)] = 7315,
    [SMALL_STATE(252)] = 7325,
    [SMALL_STATE(253)] = 7335,
    [SMALL_STATE(254)] = 7345,
    [SMALL_STATE(255)] = 7355,
    [SMALL_STATE(256)] = 7365,
    [SMALL_STATE(257)] = 7375,
    [SMALL_STATE(258)] = 7385,
    [SMALL_STATE(259)] = 7395,
    [SMALL_STATE(260)] = 7405,
    [SMALL_STATE(261)] = 7415,
    [SMALL_STATE(262)] = 7425,
    [SMALL_STATE(263)] = 7435,
    [SMALL_STATE(264)] = 7445,
    [SMALL_STATE(265)] = 7455,
    [SMALL_STATE(266)] = 7465,
    [SMALL_STATE(267)] = 7475,
    [SMALL_STATE(268)] = 7485,
    [SMALL_STATE(269)] = 7495,
    [SMALL_STATE(270)] = 7505,
    [SMALL_STATE(271)] = 7515,
    [SMALL_STATE(272)] = 7525,
    [SMALL_STATE(273)] = 7535,
    [SMALL_STATE(274)] = 7545,
    [SMALL_STATE(275)] = 7555,
    [SMALL_STATE(276)] = 7565,
    [SMALL_STATE(277)] = 7575,
    [SMALL_STATE(278)] = 7585,
    [SMALL_STATE(279)] = 7595,
    [SMALL_STATE(280)] = 7605,
    [SMALL_STATE(281)] = 7615,
    [SMALL_STATE(282)] = 7625,
    [SMALL_STATE(283)] = 7635,
    [SMALL_STATE(284)] = 7645,
    [SMALL_STATE(285)] = 7655,
    [SMALL_STATE(286)] = 7665,
    [SMALL_STATE(287)] = 7675,
    [SMALL_STATE(288)] = 7685,
    [SMALL_STATE(289)] = 7695,
    [SMALL_STATE(290)] = 7705,
    [SMALL_STATE(291)] = 7715,
    [SMALL_STATE(292)] = 7725,
    [SMALL_STATE(293)] = 7735,
    [SMALL_STATE(294)] = 7745,
    [SMALL_STATE(295)] = 7755,
    [SMALL_STATE(296)] = 7765,
    [SMALL_STATE(297)] = 7775,
    [SMALL_STATE(298)] = 7785,
    [SMALL_STATE(299)] = 7795,
    [SMALL_STATE(300)] = 7805,
    [SMALL_STATE(301)] = 7815,
    [SMALL_STATE(302)] = 7825,
    [SMALL_STATE(303)] = 7835,
    [SMALL_STATE(304)] = 7845,
    [SMALL_STATE(305)] = 7855,
    [SMALL_STATE(306)] = 7865,
    [SMALL_STATE(307)] = 7875,
    [SMALL_STATE(308)] = 7885,
    [SMALL_STATE(309)] = 7895,
    [SMALL_STATE(310)] = 7905,
    [SMALL_STATE(311)] = 7915,
    [SMALL_STATE(312)] = 7925,
    [SMALL_STATE(313)] = 7935,
    [SMALL_STATE(314)] = 7945,
    [SMALL_STATE(315)] = 7955,
    [SMALL_STATE(316)] = 7965,
    [SMALL_STATE(317)] = 7975,
    [SMALL_STATE(318)] = 7985,
    [SMALL_STATE(319)] = 7995,
    [SMALL_STATE(320)] = 8005,
    [SMALL_STATE(321)] = 8015,
    [SMALL_STATE(322)] = 8025,
    [SMALL_STATE(323)] = 8035,
    [SMALL_STATE(324)] = 8045,
    [SMALL_STATE(325)] = 8055,
    [SMALL_STATE(326)] = 8065,
    [SMALL_STATE(327)] = 8075,
    [SMALL_STATE(328)] = 8085,
    [SMALL_STATE(329)] = 8095,
    [SMALL_STATE(330)] = 8105,
    [SMALL_STATE(331)] = 8115,
    [SMALL_STATE(332)] = 8125,
    [SMALL_STATE(333)] = 8135,
    [SMALL_STATE(334)] = 8145,
    [SMALL_STATE(335)] = 8155,
    [SMALL_STATE(336)] = 8165,
    [SMALL_STATE(337)] = 8175,
    [SMALL_STATE(338)] = 8185,
    [SMALL_STATE(339)] = 8195,
    [SMALL_STATE(340)] = 8205,
    [SMALL_STATE(341)] = 8215,
    [SMALL_STATE(342)] = 8225,
    [SMALL_STATE(343)] = 8235,
    [SMALL_STATE(344)] = 8245,
    [SMALL_STATE(345)] = 8255,
    [SMALL_STATE(346)] = 8265,
    [SMALL_STATE(347)] = 8275,
    [SMALL_STATE(348)] = 8285,
    [SMALL_STATE(349)] = 8295,
    [SMALL_STATE(350)] = 8305,
    [SMALL_STATE(351)] = 8315,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(157),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(146),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(279),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(172),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(300),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [69] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    [71] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(22),
    [74] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(315),
    [77] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(313),
    [80] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(157),
    [83] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(157),
    [86] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(245),
    [89] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(146),
    [92] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(279),
    [95] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(172),
    [98] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_struct_def_repeat2, 2),
    SHIFT_REPEAT(300),
    [101] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(338),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(334),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(321),
    [117] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(22),
    [120] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(315),
    [123] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(313),
    [126] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [128] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 12),
    [136] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 12),
    [138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 7),
    [140] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 7),
    [142] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 12),
    [144] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 12),
    [146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 7),
    [148] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 7),
    [150] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat2, 1),
    [152] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_struct_def_repeat2, 1),
    [154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 11),
    [156] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 11),
    [158] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [160] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [164] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [168] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [172] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(191),
    [175] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(348),
    [178] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(338),
    [181] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(334),
    [184] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(326),
    [187] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(323),
    [190] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(321),
    [193] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(314),
    [196] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(11),
    [199] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(312),
    [202] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(309),
    [205] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(308),
    [208] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(128),
    [211] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(304),
    [214] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(295),
    [217] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(30),
    [220] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(238),
    [223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(167),
    [226] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(288),
    [229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [235] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [237] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [239] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [243] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [251] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(273),
    [253] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [257] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [265] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [269] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [271] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [275] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [279] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [281] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [283] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [285] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [287] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 10),
    [291] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 10),
    [293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [297] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [299] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [303] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [307] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [309] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 13),
    [311] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 13),
    [313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [315] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [319] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [323] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [325] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [329] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [333] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [339] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [341] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [343] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [347] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(217),
    [349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [351] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(194),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    [357] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(217),
    [360] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(267),
    [363] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(194),
    [366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [368] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [372] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [374] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(24),
    [378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [380] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    [382] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    SHIFT_REPEAT(128),
    [385] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    SHIFT_REPEAT(304),
    [388] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    SHIFT_REPEAT(295),
    [391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [409] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 2),
    [413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [415] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 2),
    [417] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 3),
    [419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [421] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 3),
    [423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [429] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [433] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(215),
    [436] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(219),
    [439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    [441] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(268),
    [444] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(144),
    [447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    [449] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(245),
    [452] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(146),
    [455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 4),
    [457] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 4),
    [459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [461] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(34),
    [464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [466] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [468] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(311),
    [471] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(39),
    [474] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat2, 2),
    [476] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_repeat2, 2),
    SHIFT_REPEAT(24),
    [479] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_repeat2, 2),
    [481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 2),
    [483] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 2),
    SHIFT_REPEAT(245),
    [486] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 2),
    SHIFT_REPEAT(146),
    [489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [493] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [505] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 1),
    [509] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 1),
    [511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 1),
    [525] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [533] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(167),
    [536] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(288),
    [539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat2, 1),
    [543] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_repeat2, 1),
    [545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [551] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(150),
    [554] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [556] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [558] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [560] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 2),
    [562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [564] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_attribute, 3),
    [566] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_interface_attribute, 3),
    [568] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [570] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [572] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(169),
    [575] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(169),
    [578] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(215),
    [581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 1),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [587] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [595] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [601] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [605] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(256),
    [607] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [609] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [611] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(151),
    [614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 4),
    [620] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [628] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [630] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [632] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 5),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 1),
    [638] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 1),
    [646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [648] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [650] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 3),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [658] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 1),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 6),
    [662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 7),
    [664] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [670] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [674] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [676] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [678] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 3),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 8),
    [684] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [686] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [688] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [696] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [698] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [704] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [708] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [710] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 14),
    [714] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [716] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [718] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [722] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [726] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [728] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 14),
    [730] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [732] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_modifier, 1),
    [742] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [750] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [754] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 8),
    [756] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [758] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [762] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [764] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inherit, 2, .production_id = 2),
    [770] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inherit_repeat1, 1, .production_id = 1),
    [772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inherit, 3, .production_id = 5),
    [776] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inherit_repeat1, 2, .production_id = 6),
    SHIFT_REPEAT(277),
    [779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [785] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [791] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 5),
    [797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 4),
    [805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_position, 4, .production_id = 9),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 3),
    [829] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_bound, 4),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 6),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [847] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [859] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(281),
    [861] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(351),
    [863] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [867] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [869] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 4),
    [871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [873] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [881] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 5),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 4),
    [885] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [887] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [893] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 7),
    [895] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [897] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [899] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [901] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [903] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [905] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [907] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [909] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [911] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [913] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [915] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [917] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [919] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [921] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [923] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [927] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 8),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [937] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [943] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [945] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [947] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [949] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [951] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 5),
    [953] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [955] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [959] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [961] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [965] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 9),
    [967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [969] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [971] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [975] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_except, 4),
    [979] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [981] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [983] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [985] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [987] = { .entry = { .count = 1, .reusable = true } },
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
