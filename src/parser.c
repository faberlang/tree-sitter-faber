#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 440
#define ALIAS_COUNT 0
#define TOKEN_COUNT 414
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_frontmatter = 1,
  sym_at_sign = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_eq_sign = 5,
  anon_sym_COMMA = 6,
  anon_sym_cli = 7,
  anon_sym_command = 8,
  anon_sym_conversio = 9,
  anon_sym_conversion = 10,
  anon_sym_cursor = 11,
  anon_sym_fragment = 12,
  anon_sym_futura = 13,
  anon_sym_future = 14,
  anon_sym_imperia = 15,
  anon_sym_imperium = 16,
  anon_sym_json = 17,
  anon_sym_kernel = 18,
  anon_sym_nondum = 19,
  anon_sym_nucleum = 20,
  anon_sym_operand = 21,
  anon_sym_operandus = 22,
  anon_sym_optio = 23,
  anon_sym_option = 24,
  anon_sym_privata = 25,
  anon_sym_private = 26,
  anon_sym_protecta = 27,
  anon_sym_protected = 28,
  anon_sym_public = 29,
  anon_sym_publica = 30,
  anon_sym_radix = 31,
  anon_sym_rename = 32,
  anon_sym_unstable = 33,
  anon_sym_versio = 34,
  anon_sym_verte = 35,
  anon_sym_vertex = 36,
  anon_sym_brevis = 37,
  anon_sym_descriptio = 38,
  anon_sym_description = 39,
  anon_sym_global = 40,
  anon_sym_lane = 41,
  anon_sym_long = 42,
  anon_sym_longum = 43,
  anon_sym_name = 44,
  anon_sym_nomen = 45,
  anon_sym_short = 46,
  anon_sym_ubique = 47,
  anon_sym_ascii = 48,
  anon_sym_bivalens = 49,
  anon_sym_bool = 50,
  anon_sym_byte = 51,
  anon_sym_bytes = 52,
  anon_sym_char = 53,
  anon_sym_copia = 54,
  anon_sym_cursor_t = 55,
  anon_sym_exactus = 56,
  anon_sym_f16 = 57,
  anon_sym_f32 = 58,
  anon_sym_f64 = 59,
  anon_sym_float = 60,
  anon_sym_fractus = 61,
  anon_sym_i16 = 62,
  anon_sym_i32 = 63,
  anon_sym_i64 = 64,
  anon_sym_i8 = 65,
  anon_sym_ignotum = 66,
  anon_sym_instans = 67,
  anon_sym_instant = 68,
  anon_sym_int = 69,
  anon_sym_intervallum = 70,
  anon_sym_iterator = 71,
  anon_sym_lf16 = 72,
  anon_sym_lf32 = 73,
  anon_sym_lf64 = 74,
  anon_sym_li16 = 75,
  anon_sym_li32 = 76,
  anon_sym_li64 = 77,
  anon_sym_li8 = 78,
  anon_sym_list = 79,
  anon_sym_lista = 80,
  anon_sym_littera = 81,
  anon_sym_lu16 = 82,
  anon_sym_lu32 = 83,
  anon_sym_lu64 = 84,
  anon_sym_lu8 = 85,
  anon_sym_map = 86,
  anon_sym_matrix = 87,
  anon_sym_mf16 = 88,
  anon_sym_mf32 = 89,
  anon_sym_mf64 = 90,
  anon_sym_mi16 = 91,
  anon_sym_mi32 = 92,
  anon_sym_mi64 = 93,
  anon_sym_mi8 = 94,
  anon_sym_mu16 = 95,
  anon_sym_mu32 = 96,
  anon_sym_mu64 = 97,
  anon_sym_mu8 = 98,
  anon_sym_never = 99,
  anon_sym_numerus = 100,
  anon_sym_numquam = 101,
  anon_sym_octeti = 102,
  anon_sym_octetus = 103,
  anon_sym_promise = 104,
  anon_sym_promissum = 105,
  anon_sym_queue = 106,
  anon_sym_ratio = 107,
  anon_sym_record = 108,
  anon_sym_regex = 109,
  anon_sym_saturating = 110,
  anon_sym_saturatus = 111,
  anon_sym_series = 112,
  anon_sym_set = 113,
  anon_sym_sf16 = 114,
  anon_sym_sf32 = 115,
  anon_sym_sf64 = 116,
  anon_sym_si16 = 117,
  anon_sym_si32 = 118,
  anon_sym_si64 = 119,
  anon_sym_si8 = 120,
  anon_sym_sparsa = 121,
  anon_sym_stack = 122,
  anon_sym_string = 123,
  anon_sym_su16 = 124,
  anon_sym_su32 = 125,
  anon_sym_su64 = 126,
  anon_sym_su8 = 127,
  anon_sym_tabula = 128,
  anon_sym_tensor = 129,
  anon_sym_textus = 130,
  anon_sym_tf16 = 131,
  anon_sym_tf32 = 132,
  anon_sym_tf64 = 133,
  anon_sym_ti16 = 134,
  anon_sym_ti32 = 135,
  anon_sym_ti64 = 136,
  anon_sym_ti8 = 137,
  anon_sym_trapping = 138,
  anon_sym_tu16 = 139,
  anon_sym_tu32 = 140,
  anon_sym_tu64 = 141,
  anon_sym_tu8 = 142,
  anon_sym_u16 = 143,
  anon_sym_u32 = 144,
  anon_sym_u64 = 145,
  anon_sym_u8 = 146,
  anon_sym_unio = 147,
  anon_sym_unknown = 148,
  anon_sym_vacua = 149,
  anon_sym_vacuum = 150,
  anon_sym_valor = 151,
  anon_sym_vector = 152,
  anon_sym_vf16 = 153,
  anon_sym_vf32 = 154,
  anon_sym_vf64 = 155,
  anon_sym_vi16 = 156,
  anon_sym_vi32 = 157,
  anon_sym_vi64 = 158,
  anon_sym_vi8 = 159,
  anon_sym_void = 160,
  anon_sym_vu16 = 161,
  anon_sym_vu32 = 162,
  anon_sym_vu64 = 163,
  anon_sym_vu8 = 164,
  anon_sym_DOT = 165,
  anon_sym_QMARK_DOT = 166,
  anon_sym_BANG_DOT = 167,
  anon_sym_ad = 168,
  anon_sym_adfirma = 169,
  anon_sym_apud = 170,
  anon_sym_args = 171,
  anon_sym_argumenta = 172,
  anon_sym_assert = 173,
  anon_sym_async_main = 174,
  anon_sym_at = 175,
  anon_sym_break = 176,
  anon_sym_call = 177,
  anon_sym_cape = 178,
  anon_sym_capta = 179,
  anon_sym_case = 180,
  anon_sym_casu = 181,
  anon_sym_catch = 182,
  anon_sym_ceterum = 183,
  anon_sym_continue = 184,
  anon_sym_custodi = 185,
  anon_sym_default = 186,
  anon_sym_discerne = 187,
  anon_sym_do = 188,
  anon_sym_dum = 189,
  anon_sym_elif = 190,
  anon_sym_elige = 191,
  anon_sym_else = 192,
  anon_sym_ergo = 193,
  anon_sym_fac = 194,
  anon_sym_for = 195,
  anon_sym_guard = 196,
  anon_sym_iace = 197,
  anon_sym_if = 198,
  anon_sym_incipiet = 199,
  anon_sym_incipit = 200,
  anon_sym_itera = 201,
  anon_sym_main = 202,
  anon_sym_match = 203,
  anon_sym_mori = 204,
  anon_sym_panic = 205,
  anon_sym_pass = 206,
  anon_sym_perge = 207,
  anon_sym_redde = 208,
  anon_sym_reice = 209,
  anon_sym_reject = 210,
  anon_sym_require = 211,
  anon_sym_requirit = 212,
  anon_sym_return = 213,
  anon_sym_rumpe = 214,
  anon_sym_secus = 215,
  anon_sym_si = 216,
  anon_sym_sic = 217,
  anon_sym_sin = 218,
  anon_sym_switch = 219,
  anon_sym_tacet = 220,
  anon_sym_then = 221,
  anon_sym_throw = 222,
  anon_sym_trap = 223,
  anon_sym_while = 224,
  anon_sym_yields = 225,
  anon_sym_ceteri = 226,
  anon_sym_class = 227,
  anon_sym_column = 228,
  anon_sym_columna = 229,
  anon_sym_const = 230,
  anon_sym_discretio = 231,
  anon_sym_enum = 232,
  anon_sym_errata = 233,
  anon_sym_errors = 234,
  anon_sym_exit = 235,
  anon_sym_exitus = 236,
  anon_sym_fixum = 237,
  anon_sym_fn = 238,
  anon_sym_functio = 239,
  anon_sym_generis = 240,
  anon_sym_genus = 241,
  anon_sym_iacit = 242,
  anon_sym_immutata = 243,
  anon_sym_implendum = 244,
  anon_sym_import = 245,
  anon_sym_importa = 246,
  anon_sym_interface = 247,
  anon_sym_interna = 248,
  anon_sym_internal = 249,
  anon_sym_iuncta = 250,
  anon_sym_let = 251,
  anon_sym_magnitudo = 252,
  anon_sym_optional = 253,
  anon_sym_optiones = 254,
  anon_sym_options = 255,
  anon_sym_ordo = 256,
  anon_sym_prae = 257,
  anon_sym_readonly = 258,
  anon_sym_rest = 259,
  anon_sym_schema = 260,
  anon_sym_sit = 261,
  anon_sym_size = 262,
  anon_sym_sponte = 263,
  anon_sym_static = 264,
  anon_sym_throws = 265,
  anon_sym_tuple = 266,
  anon_sym_type = 267,
  anon_sym_typus = 268,
  anon_sym_union = 269,
  anon_sym_var = 270,
  anon_sym_varia = 271,
  anon_sym_ab = 272,
  anon_sym_all = 273,
  anon_sym_and = 274,
  anon_sym_ante = 275,
  anon_sym_as = 276,
  anon_sym_async = 277,
  anon_sym_async_generator = 278,
  anon_sym_async_setup = 279,
  anon_sym_async_teardown = 280,
  anon_sym_aut = 281,
  anon_sym_await = 282,
  anon_sym_await_const = 283,
  anon_sym_await_var = 284,
  anon_sym_before = 285,
  anon_sym_bench = 286,
  anon_sym_cede = 287,
  anon_sym_clausura = 288,
  anon_sym_coalesce = 289,
  anon_sym_comptime = 290,
  anon_sym_copy = 291,
  anon_sym_de = 292,
  anon_sym_debug = 293,
  anon_sym_describe = 294,
  anon_sym_ego = 295,
  anon_sym_embed = 296,
  anon_sym_erratur = 297,
  anon_sym_est = 298,
  anon_sym_et = 299,
  anon_sym_ex = 300,
  anon_sym_exemplum = 301,
  anon_sym_expect_failure = 302,
  anon_sym_fient = 303,
  anon_sym_fiet = 304,
  anon_sym_figendum = 305,
  anon_sym_finge = 306,
  anon_sym_fiunt = 307,
  anon_sym_flaky = 308,
  anon_sym_format = 309,
  anon_sym_fragilis = 310,
  anon_sym_from = 311,
  anon_sym_futurum = 312,
  anon_sym_generator = 313,
  anon_sym_implements = 314,
  anon_sym_implet = 315,
  anon_sym_in = 316,
  anon_sym_insere = 317,
  anon_sym_is = 318,
  anon_sym_lambda = 319,
  anon_sym_lege = 320,
  anon_sym_line = 321,
  anon_sym_lineam = 322,
  anon_sym_metior = 323,
  anon_sym_modulus = 324,
  anon_sym_mone = 325,
  anon_sym_mut = 326,
  anon_sym_negative = 327,
  anon_sym_negativum = 328,
  anon_sym_nihil = 329,
  anon_sym_non = 330,
  anon_sym_none = 331,
  anon_sym_nonnihil = 332,
  anon_sym_nonnulla = 333,
  anon_sym_not = 334,
  anon_sym_nota = 335,
  anon_sym_null = 336,
  anon_sym_nulla = 337,
  anon_sym_omitte = 338,
  anon_sym_omnia = 339,
  anon_sym_only = 340,
  anon_sym_only_in = 341,
  anon_sym_or = 342,
  anon_sym_own = 343,
  anon_sym_penes = 344,
  anon_sym_per = 345,
  anon_sym_positive = 346,
  anon_sym_positivum = 347,
  anon_sym_postpara = 348,
  anon_sym_postparabit = 349,
  anon_sym_praefixum = 350,
  anon_sym_praepara = 351,
  anon_sym_praeparabit = 352,
  anon_sym_print = 353,
  anon_sym_proba = 354,
  anon_sym_probandum = 355,
  anon_sym_range = 356,
  anon_sym_read = 357,
  anon_sym_reddet = 358,
  anon_sym_ref = 359,
  anon_sym_repeat = 360,
  anon_sym_repete = 361,
  anon_sym_return_await = 362,
  anon_sym_scribe = 363,
  anon_sym_scriptum = 364,
  anon_sym_self = 365,
  anon_sym_setup = 366,
  anon_sym_skip = 367,
  anon_sym_solum = 368,
  anon_sym_solum_in = 369,
  anon_sym_some = 370,
  anon_sym_sparge = 371,
  anon_sym_spread = 372,
  anon_sym_step = 373,
  anon_sym_tacebit = 374,
  anon_sym_tag = 375,
  anon_sym_teardown = 376,
  anon_sym_temporis = 377,
  anon_sym_test = 378,
  anon_sym_timeout = 379,
  anon_sym_todo = 380,
  anon_sym_until = 381,
  anon_sym_usque = 382,
  anon_sym_ut = 383,
  anon_sym_variandum = 384,
  anon_sym_variant = 385,
  anon_sym_vel = 386,
  anon_sym_via = 387,
  anon_sym_vide = 388,
  anon_sym_warn = 389,
  anon_sym_wrapping = 390,
  anon_sym_write = 391,
  anon_sym_yield = 392,
  anon_sym_false = 393,
  anon_sym_falsum = 394,
  anon_sym_true = 395,
  anon_sym_verum = 396,
  sym_guillemet_string = 397,
  sym_octeti_string = 398,
  sym_backtick_string = 399,
  sym_ascii_string = 400,
  sym_string = 401,
  sym_number = 402,
  sym_identifier = 403,
  sym_operator = 404,
  anon_sym_LPAREN = 405,
  anon_sym_RPAREN = 406,
  anon_sym_LBRACK = 407,
  anon_sym_RBRACK = 408,
  anon_sym_COLON = 409,
  anon_sym_SEMI = 410,
  sym_hash = 411,
  sym_line_comment = 412,
  sym_faber_newline = 413,
  sym_program = 414,
  sym_lbrace = 415,
  sym_rbrace = 416,
  sym_comma_sign = 417,
  sym_annotation = 418,
  sym_known_annotation_name = 419,
  sym_annotation_name = 420,
  sym_annotation_modifier = 421,
  sym_annotation_value_type = 422,
  sym_braced_annotation = 423,
  sym_annotation_field = 424,
  sym_annotation_arguments = 425,
  sym__annotation_argument = 426,
  sym__token = 427,
  sym_member_access = 428,
  sym_member_glyph = 429,
  sym_keyword_control = 430,
  sym_keyword_declaration = 431,
  sym_keyword_other = 432,
  sym_builtin_type = 433,
  sym_boolean = 434,
  sym_punctuation = 435,
  aux_sym_program_repeat1 = 436,
  aux_sym_braced_annotation_repeat1 = 437,
  aux_sym_braced_annotation_repeat2 = 438,
  aux_sym_annotation_arguments_repeat1 = 439,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_frontmatter] = "frontmatter",
  [sym_at_sign] = "at_sign",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_eq_sign] = "eq_sign",
  [anon_sym_COMMA] = ",",
  [anon_sym_cli] = "cli",
  [anon_sym_command] = "command",
  [anon_sym_conversio] = "conversio",
  [anon_sym_conversion] = "conversion",
  [anon_sym_cursor] = "cursor",
  [anon_sym_fragment] = "fragment",
  [anon_sym_futura] = "futura",
  [anon_sym_future] = "future",
  [anon_sym_imperia] = "imperia",
  [anon_sym_imperium] = "imperium",
  [anon_sym_json] = "json",
  [anon_sym_kernel] = "kernel",
  [anon_sym_nondum] = "nondum",
  [anon_sym_nucleum] = "nucleum",
  [anon_sym_operand] = "operand",
  [anon_sym_operandus] = "operandus",
  [anon_sym_optio] = "optio",
  [anon_sym_option] = "option",
  [anon_sym_privata] = "privata",
  [anon_sym_private] = "private",
  [anon_sym_protecta] = "protecta",
  [anon_sym_protected] = "protected",
  [anon_sym_public] = "public",
  [anon_sym_publica] = "publica",
  [anon_sym_radix] = "radix",
  [anon_sym_rename] = "rename",
  [anon_sym_unstable] = "unstable",
  [anon_sym_versio] = "versio",
  [anon_sym_verte] = "verte",
  [anon_sym_vertex] = "vertex",
  [anon_sym_brevis] = "brevis",
  [anon_sym_descriptio] = "descriptio",
  [anon_sym_description] = "description",
  [anon_sym_global] = "global",
  [anon_sym_lane] = "lane",
  [anon_sym_long] = "long",
  [anon_sym_longum] = "longum",
  [anon_sym_name] = "name",
  [anon_sym_nomen] = "nomen",
  [anon_sym_short] = "short",
  [anon_sym_ubique] = "ubique",
  [anon_sym_ascii] = "ascii",
  [anon_sym_bivalens] = "bivalens",
  [anon_sym_bool] = "bool",
  [anon_sym_byte] = "byte",
  [anon_sym_bytes] = "bytes",
  [anon_sym_char] = "char",
  [anon_sym_copia] = "copia",
  [anon_sym_cursor_t] = "cursor_t",
  [anon_sym_exactus] = "exactus",
  [anon_sym_f16] = "f16",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_float] = "float",
  [anon_sym_fractus] = "fractus",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i8] = "i8",
  [anon_sym_ignotum] = "ignotum",
  [anon_sym_instans] = "instans",
  [anon_sym_instant] = "instant",
  [anon_sym_int] = "int",
  [anon_sym_intervallum] = "intervallum",
  [anon_sym_iterator] = "iterator",
  [anon_sym_lf16] = "lf16",
  [anon_sym_lf32] = "lf32",
  [anon_sym_lf64] = "lf64",
  [anon_sym_li16] = "li16",
  [anon_sym_li32] = "li32",
  [anon_sym_li64] = "li64",
  [anon_sym_li8] = "li8",
  [anon_sym_list] = "list",
  [anon_sym_lista] = "lista",
  [anon_sym_littera] = "littera",
  [anon_sym_lu16] = "lu16",
  [anon_sym_lu32] = "lu32",
  [anon_sym_lu64] = "lu64",
  [anon_sym_lu8] = "lu8",
  [anon_sym_map] = "map",
  [anon_sym_matrix] = "matrix",
  [anon_sym_mf16] = "mf16",
  [anon_sym_mf32] = "mf32",
  [anon_sym_mf64] = "mf64",
  [anon_sym_mi16] = "mi16",
  [anon_sym_mi32] = "mi32",
  [anon_sym_mi64] = "mi64",
  [anon_sym_mi8] = "mi8",
  [anon_sym_mu16] = "mu16",
  [anon_sym_mu32] = "mu32",
  [anon_sym_mu64] = "mu64",
  [anon_sym_mu8] = "mu8",
  [anon_sym_never] = "never",
  [anon_sym_numerus] = "numerus",
  [anon_sym_numquam] = "numquam",
  [anon_sym_octeti] = "octeti",
  [anon_sym_octetus] = "octetus",
  [anon_sym_promise] = "promise",
  [anon_sym_promissum] = "promissum",
  [anon_sym_queue] = "queue",
  [anon_sym_ratio] = "ratio",
  [anon_sym_record] = "record",
  [anon_sym_regex] = "regex",
  [anon_sym_saturating] = "saturating",
  [anon_sym_saturatus] = "saturatus",
  [anon_sym_series] = "series",
  [anon_sym_set] = "set",
  [anon_sym_sf16] = "sf16",
  [anon_sym_sf32] = "sf32",
  [anon_sym_sf64] = "sf64",
  [anon_sym_si16] = "si16",
  [anon_sym_si32] = "si32",
  [anon_sym_si64] = "si64",
  [anon_sym_si8] = "si8",
  [anon_sym_sparsa] = "sparsa",
  [anon_sym_stack] = "stack",
  [anon_sym_string] = "string",
  [anon_sym_su16] = "su16",
  [anon_sym_su32] = "su32",
  [anon_sym_su64] = "su64",
  [anon_sym_su8] = "su8",
  [anon_sym_tabula] = "tabula",
  [anon_sym_tensor] = "tensor",
  [anon_sym_textus] = "textus",
  [anon_sym_tf16] = "tf16",
  [anon_sym_tf32] = "tf32",
  [anon_sym_tf64] = "tf64",
  [anon_sym_ti16] = "ti16",
  [anon_sym_ti32] = "ti32",
  [anon_sym_ti64] = "ti64",
  [anon_sym_ti8] = "ti8",
  [anon_sym_trapping] = "trapping",
  [anon_sym_tu16] = "tu16",
  [anon_sym_tu32] = "tu32",
  [anon_sym_tu64] = "tu64",
  [anon_sym_tu8] = "tu8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u8] = "u8",
  [anon_sym_unio] = "unio",
  [anon_sym_unknown] = "unknown",
  [anon_sym_vacua] = "vacua",
  [anon_sym_vacuum] = "vacuum",
  [anon_sym_valor] = "valor",
  [anon_sym_vector] = "vector",
  [anon_sym_vf16] = "vf16",
  [anon_sym_vf32] = "vf32",
  [anon_sym_vf64] = "vf64",
  [anon_sym_vi16] = "vi16",
  [anon_sym_vi32] = "vi32",
  [anon_sym_vi64] = "vi64",
  [anon_sym_vi8] = "vi8",
  [anon_sym_void] = "void",
  [anon_sym_vu16] = "vu16",
  [anon_sym_vu32] = "vu32",
  [anon_sym_vu64] = "vu64",
  [anon_sym_vu8] = "vu8",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK_DOT] = "\?.",
  [anon_sym_BANG_DOT] = "!.",
  [anon_sym_ad] = "ad",
  [anon_sym_adfirma] = "adfirma",
  [anon_sym_apud] = "apud",
  [anon_sym_args] = "args",
  [anon_sym_argumenta] = "argumenta",
  [anon_sym_assert] = "assert",
  [anon_sym_async_main] = "async_main",
  [anon_sym_at] = "at",
  [anon_sym_break] = "break",
  [anon_sym_call] = "call",
  [anon_sym_cape] = "cape",
  [anon_sym_capta] = "capta",
  [anon_sym_case] = "case",
  [anon_sym_casu] = "casu",
  [anon_sym_catch] = "catch",
  [anon_sym_ceterum] = "ceterum",
  [anon_sym_continue] = "continue",
  [anon_sym_custodi] = "custodi",
  [anon_sym_default] = "default",
  [anon_sym_discerne] = "discerne",
  [anon_sym_do] = "do",
  [anon_sym_dum] = "dum",
  [anon_sym_elif] = "elif",
  [anon_sym_elige] = "elige",
  [anon_sym_else] = "else",
  [anon_sym_ergo] = "ergo",
  [anon_sym_fac] = "fac",
  [anon_sym_for] = "for",
  [anon_sym_guard] = "guard",
  [anon_sym_iace] = "iace",
  [anon_sym_if] = "if",
  [anon_sym_incipiet] = "incipiet",
  [anon_sym_incipit] = "incipit",
  [anon_sym_itera] = "itera",
  [anon_sym_main] = "main",
  [anon_sym_match] = "match",
  [anon_sym_mori] = "mori",
  [anon_sym_panic] = "panic",
  [anon_sym_pass] = "pass",
  [anon_sym_perge] = "perge",
  [anon_sym_redde] = "redde",
  [anon_sym_reice] = "reice",
  [anon_sym_reject] = "reject",
  [anon_sym_require] = "require",
  [anon_sym_requirit] = "requirit",
  [anon_sym_return] = "return",
  [anon_sym_rumpe] = "rumpe",
  [anon_sym_secus] = "secus",
  [anon_sym_si] = "si",
  [anon_sym_sic] = "sic",
  [anon_sym_sin] = "sin",
  [anon_sym_switch] = "switch",
  [anon_sym_tacet] = "tacet",
  [anon_sym_then] = "then",
  [anon_sym_throw] = "throw",
  [anon_sym_trap] = "trap",
  [anon_sym_while] = "while",
  [anon_sym_yields] = "yields",
  [anon_sym_ceteri] = "ceteri",
  [anon_sym_class] = "class",
  [anon_sym_column] = "column",
  [anon_sym_columna] = "columna",
  [anon_sym_const] = "const",
  [anon_sym_discretio] = "discretio",
  [anon_sym_enum] = "enum",
  [anon_sym_errata] = "errata",
  [anon_sym_errors] = "errors",
  [anon_sym_exit] = "exit",
  [anon_sym_exitus] = "exitus",
  [anon_sym_fixum] = "fixum",
  [anon_sym_fn] = "fn",
  [anon_sym_functio] = "functio",
  [anon_sym_generis] = "generis",
  [anon_sym_genus] = "genus",
  [anon_sym_iacit] = "iacit",
  [anon_sym_immutata] = "immutata",
  [anon_sym_implendum] = "implendum",
  [anon_sym_import] = "import",
  [anon_sym_importa] = "importa",
  [anon_sym_interface] = "interface",
  [anon_sym_interna] = "interna",
  [anon_sym_internal] = "internal",
  [anon_sym_iuncta] = "iuncta",
  [anon_sym_let] = "let",
  [anon_sym_magnitudo] = "magnitudo",
  [anon_sym_optional] = "optional",
  [anon_sym_optiones] = "optiones",
  [anon_sym_options] = "options",
  [anon_sym_ordo] = "ordo",
  [anon_sym_prae] = "prae",
  [anon_sym_readonly] = "readonly",
  [anon_sym_rest] = "rest",
  [anon_sym_schema] = "schema",
  [anon_sym_sit] = "sit",
  [anon_sym_size] = "size",
  [anon_sym_sponte] = "sponte",
  [anon_sym_static] = "static",
  [anon_sym_throws] = "throws",
  [anon_sym_tuple] = "tuple",
  [anon_sym_type] = "type",
  [anon_sym_typus] = "typus",
  [anon_sym_union] = "union",
  [anon_sym_var] = "var",
  [anon_sym_varia] = "varia",
  [anon_sym_ab] = "ab",
  [anon_sym_all] = "all",
  [anon_sym_and] = "and",
  [anon_sym_ante] = "ante",
  [anon_sym_as] = "as",
  [anon_sym_async] = "async",
  [anon_sym_async_generator] = "async_generator",
  [anon_sym_async_setup] = "async_setup",
  [anon_sym_async_teardown] = "async_teardown",
  [anon_sym_aut] = "aut",
  [anon_sym_await] = "await",
  [anon_sym_await_const] = "await_const",
  [anon_sym_await_var] = "await_var",
  [anon_sym_before] = "before",
  [anon_sym_bench] = "bench",
  [anon_sym_cede] = "cede",
  [anon_sym_clausura] = "clausura",
  [anon_sym_coalesce] = "coalesce",
  [anon_sym_comptime] = "comptime",
  [anon_sym_copy] = "copy",
  [anon_sym_de] = "de",
  [anon_sym_debug] = "debug",
  [anon_sym_describe] = "describe",
  [anon_sym_ego] = "ego",
  [anon_sym_embed] = "embed",
  [anon_sym_erratur] = "erratur",
  [anon_sym_est] = "est",
  [anon_sym_et] = "et",
  [anon_sym_ex] = "ex",
  [anon_sym_exemplum] = "exemplum",
  [anon_sym_expect_failure] = "expect_failure",
  [anon_sym_fient] = "fient",
  [anon_sym_fiet] = "fiet",
  [anon_sym_figendum] = "figendum",
  [anon_sym_finge] = "finge",
  [anon_sym_fiunt] = "fiunt",
  [anon_sym_flaky] = "flaky",
  [anon_sym_format] = "format",
  [anon_sym_fragilis] = "fragilis",
  [anon_sym_from] = "from",
  [anon_sym_futurum] = "futurum",
  [anon_sym_generator] = "generator",
  [anon_sym_implements] = "implements",
  [anon_sym_implet] = "implet",
  [anon_sym_in] = "in",
  [anon_sym_insere] = "insere",
  [anon_sym_is] = "is",
  [anon_sym_lambda] = "lambda",
  [anon_sym_lege] = "lege",
  [anon_sym_line] = "line",
  [anon_sym_lineam] = "lineam",
  [anon_sym_metior] = "metior",
  [anon_sym_modulus] = "modulus",
  [anon_sym_mone] = "mone",
  [anon_sym_mut] = "mut",
  [anon_sym_negative] = "negative",
  [anon_sym_negativum] = "negativum",
  [anon_sym_nihil] = "nihil",
  [anon_sym_non] = "non",
  [anon_sym_none] = "none",
  [anon_sym_nonnihil] = "nonnihil",
  [anon_sym_nonnulla] = "nonnulla",
  [anon_sym_not] = "not",
  [anon_sym_nota] = "nota",
  [anon_sym_null] = "null",
  [anon_sym_nulla] = "nulla",
  [anon_sym_omitte] = "omitte",
  [anon_sym_omnia] = "omnia",
  [anon_sym_only] = "only",
  [anon_sym_only_in] = "only_in",
  [anon_sym_or] = "or",
  [anon_sym_own] = "own",
  [anon_sym_penes] = "penes",
  [anon_sym_per] = "per",
  [anon_sym_positive] = "positive",
  [anon_sym_positivum] = "positivum",
  [anon_sym_postpara] = "postpara",
  [anon_sym_postparabit] = "postparabit",
  [anon_sym_praefixum] = "praefixum",
  [anon_sym_praepara] = "praepara",
  [anon_sym_praeparabit] = "praeparabit",
  [anon_sym_print] = "print",
  [anon_sym_proba] = "proba",
  [anon_sym_probandum] = "probandum",
  [anon_sym_range] = "range",
  [anon_sym_read] = "read",
  [anon_sym_reddet] = "reddet",
  [anon_sym_ref] = "ref",
  [anon_sym_repeat] = "repeat",
  [anon_sym_repete] = "repete",
  [anon_sym_return_await] = "return_await",
  [anon_sym_scribe] = "scribe",
  [anon_sym_scriptum] = "scriptum",
  [anon_sym_self] = "self",
  [anon_sym_setup] = "setup",
  [anon_sym_skip] = "skip",
  [anon_sym_solum] = "solum",
  [anon_sym_solum_in] = "solum_in",
  [anon_sym_some] = "some",
  [anon_sym_sparge] = "sparge",
  [anon_sym_spread] = "spread",
  [anon_sym_step] = "step",
  [anon_sym_tacebit] = "tacebit",
  [anon_sym_tag] = "tag",
  [anon_sym_teardown] = "teardown",
  [anon_sym_temporis] = "temporis",
  [anon_sym_test] = "test",
  [anon_sym_timeout] = "timeout",
  [anon_sym_todo] = "todo",
  [anon_sym_until] = "until",
  [anon_sym_usque] = "usque",
  [anon_sym_ut] = "ut",
  [anon_sym_variandum] = "variandum",
  [anon_sym_variant] = "variant",
  [anon_sym_vel] = "vel",
  [anon_sym_via] = "via",
  [anon_sym_vide] = "vide",
  [anon_sym_warn] = "warn",
  [anon_sym_wrapping] = "wrapping",
  [anon_sym_write] = "write",
  [anon_sym_yield] = "yield",
  [anon_sym_false] = "false",
  [anon_sym_falsum] = "falsum",
  [anon_sym_true] = "true",
  [anon_sym_verum] = "verum",
  [sym_guillemet_string] = "guillemet_string",
  [sym_octeti_string] = "octeti_string",
  [sym_backtick_string] = "backtick_string",
  [sym_ascii_string] = "ascii_string",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_operator] = "operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_hash] = "hash",
  [sym_line_comment] = "line_comment",
  [sym_faber_newline] = "faber_newline",
  [sym_program] = "program",
  [sym_lbrace] = "lbrace",
  [sym_rbrace] = "rbrace",
  [sym_comma_sign] = "comma_sign",
  [sym_annotation] = "annotation",
  [sym_known_annotation_name] = "known_annotation_name",
  [sym_annotation_name] = "annotation_name",
  [sym_annotation_modifier] = "annotation_modifier",
  [sym_annotation_value_type] = "annotation_value_type",
  [sym_braced_annotation] = "braced_annotation",
  [sym_annotation_field] = "annotation_field",
  [sym_annotation_arguments] = "annotation_arguments",
  [sym__annotation_argument] = "_annotation_argument",
  [sym__token] = "_token",
  [sym_member_access] = "member_access",
  [sym_member_glyph] = "operator",
  [sym_keyword_control] = "keyword_control",
  [sym_keyword_declaration] = "keyword_declaration",
  [sym_keyword_other] = "keyword_other",
  [sym_builtin_type] = "builtin_type",
  [sym_boolean] = "boolean",
  [sym_punctuation] = "punctuation",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_braced_annotation_repeat1] = "braced_annotation_repeat1",
  [aux_sym_braced_annotation_repeat2] = "braced_annotation_repeat2",
  [aux_sym_annotation_arguments_repeat1] = "annotation_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_frontmatter] = sym_frontmatter,
  [sym_at_sign] = sym_at_sign,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_eq_sign] = sym_eq_sign,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_cli] = anon_sym_cli,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_conversio] = anon_sym_conversio,
  [anon_sym_conversion] = anon_sym_conversion,
  [anon_sym_cursor] = anon_sym_cursor,
  [anon_sym_fragment] = anon_sym_fragment,
  [anon_sym_futura] = anon_sym_futura,
  [anon_sym_future] = anon_sym_future,
  [anon_sym_imperia] = anon_sym_imperia,
  [anon_sym_imperium] = anon_sym_imperium,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_kernel] = anon_sym_kernel,
  [anon_sym_nondum] = anon_sym_nondum,
  [anon_sym_nucleum] = anon_sym_nucleum,
  [anon_sym_operand] = anon_sym_operand,
  [anon_sym_operandus] = anon_sym_operandus,
  [anon_sym_optio] = anon_sym_optio,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_privata] = anon_sym_privata,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protecta] = anon_sym_protecta,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_publica] = anon_sym_publica,
  [anon_sym_radix] = anon_sym_radix,
  [anon_sym_rename] = anon_sym_rename,
  [anon_sym_unstable] = anon_sym_unstable,
  [anon_sym_versio] = anon_sym_versio,
  [anon_sym_verte] = anon_sym_verte,
  [anon_sym_vertex] = anon_sym_vertex,
  [anon_sym_brevis] = anon_sym_brevis,
  [anon_sym_descriptio] = anon_sym_descriptio,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_lane] = anon_sym_lane,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_longum] = anon_sym_longum,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_nomen] = anon_sym_nomen,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ubique] = anon_sym_ubique,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_bivalens] = anon_sym_bivalens,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_copia] = anon_sym_copia,
  [anon_sym_cursor_t] = anon_sym_cursor_t,
  [anon_sym_exactus] = anon_sym_exactus,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_fractus] = anon_sym_fractus,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_ignotum] = anon_sym_ignotum,
  [anon_sym_instans] = anon_sym_instans,
  [anon_sym_instant] = anon_sym_instant,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_intervallum] = anon_sym_intervallum,
  [anon_sym_iterator] = anon_sym_iterator,
  [anon_sym_lf16] = anon_sym_lf16,
  [anon_sym_lf32] = anon_sym_lf32,
  [anon_sym_lf64] = anon_sym_lf64,
  [anon_sym_li16] = anon_sym_li16,
  [anon_sym_li32] = anon_sym_li32,
  [anon_sym_li64] = anon_sym_li64,
  [anon_sym_li8] = anon_sym_li8,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_lista] = anon_sym_lista,
  [anon_sym_littera] = anon_sym_littera,
  [anon_sym_lu16] = anon_sym_lu16,
  [anon_sym_lu32] = anon_sym_lu32,
  [anon_sym_lu64] = anon_sym_lu64,
  [anon_sym_lu8] = anon_sym_lu8,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_matrix] = anon_sym_matrix,
  [anon_sym_mf16] = anon_sym_mf16,
  [anon_sym_mf32] = anon_sym_mf32,
  [anon_sym_mf64] = anon_sym_mf64,
  [anon_sym_mi16] = anon_sym_mi16,
  [anon_sym_mi32] = anon_sym_mi32,
  [anon_sym_mi64] = anon_sym_mi64,
  [anon_sym_mi8] = anon_sym_mi8,
  [anon_sym_mu16] = anon_sym_mu16,
  [anon_sym_mu32] = anon_sym_mu32,
  [anon_sym_mu64] = anon_sym_mu64,
  [anon_sym_mu8] = anon_sym_mu8,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_numerus] = anon_sym_numerus,
  [anon_sym_numquam] = anon_sym_numquam,
  [anon_sym_octeti] = anon_sym_octeti,
  [anon_sym_octetus] = anon_sym_octetus,
  [anon_sym_promise] = anon_sym_promise,
  [anon_sym_promissum] = anon_sym_promissum,
  [anon_sym_queue] = anon_sym_queue,
  [anon_sym_ratio] = anon_sym_ratio,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_saturating] = anon_sym_saturating,
  [anon_sym_saturatus] = anon_sym_saturatus,
  [anon_sym_series] = anon_sym_series,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_sf16] = anon_sym_sf16,
  [anon_sym_sf32] = anon_sym_sf32,
  [anon_sym_sf64] = anon_sym_sf64,
  [anon_sym_si16] = anon_sym_si16,
  [anon_sym_si32] = anon_sym_si32,
  [anon_sym_si64] = anon_sym_si64,
  [anon_sym_si8] = anon_sym_si8,
  [anon_sym_sparsa] = anon_sym_sparsa,
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_su16] = anon_sym_su16,
  [anon_sym_su32] = anon_sym_su32,
  [anon_sym_su64] = anon_sym_su64,
  [anon_sym_su8] = anon_sym_su8,
  [anon_sym_tabula] = anon_sym_tabula,
  [anon_sym_tensor] = anon_sym_tensor,
  [anon_sym_textus] = anon_sym_textus,
  [anon_sym_tf16] = anon_sym_tf16,
  [anon_sym_tf32] = anon_sym_tf32,
  [anon_sym_tf64] = anon_sym_tf64,
  [anon_sym_ti16] = anon_sym_ti16,
  [anon_sym_ti32] = anon_sym_ti32,
  [anon_sym_ti64] = anon_sym_ti64,
  [anon_sym_ti8] = anon_sym_ti8,
  [anon_sym_trapping] = anon_sym_trapping,
  [anon_sym_tu16] = anon_sym_tu16,
  [anon_sym_tu32] = anon_sym_tu32,
  [anon_sym_tu64] = anon_sym_tu64,
  [anon_sym_tu8] = anon_sym_tu8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_unio] = anon_sym_unio,
  [anon_sym_unknown] = anon_sym_unknown,
  [anon_sym_vacua] = anon_sym_vacua,
  [anon_sym_vacuum] = anon_sym_vacuum,
  [anon_sym_valor] = anon_sym_valor,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_vf16] = anon_sym_vf16,
  [anon_sym_vf32] = anon_sym_vf32,
  [anon_sym_vf64] = anon_sym_vf64,
  [anon_sym_vi16] = anon_sym_vi16,
  [anon_sym_vi32] = anon_sym_vi32,
  [anon_sym_vi64] = anon_sym_vi64,
  [anon_sym_vi8] = anon_sym_vi8,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_vu16] = anon_sym_vu16,
  [anon_sym_vu32] = anon_sym_vu32,
  [anon_sym_vu64] = anon_sym_vu64,
  [anon_sym_vu8] = anon_sym_vu8,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK_DOT] = anon_sym_QMARK_DOT,
  [anon_sym_BANG_DOT] = anon_sym_BANG_DOT,
  [anon_sym_ad] = anon_sym_ad,
  [anon_sym_adfirma] = anon_sym_adfirma,
  [anon_sym_apud] = anon_sym_apud,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_argumenta] = anon_sym_argumenta,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_async_main] = anon_sym_async_main,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_cape] = anon_sym_cape,
  [anon_sym_capta] = anon_sym_capta,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_casu] = anon_sym_casu,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_ceterum] = anon_sym_ceterum,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_custodi] = anon_sym_custodi,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_discerne] = anon_sym_discerne,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_dum] = anon_sym_dum,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_elige] = anon_sym_elige,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_ergo] = anon_sym_ergo,
  [anon_sym_fac] = anon_sym_fac,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_guard] = anon_sym_guard,
  [anon_sym_iace] = anon_sym_iace,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_incipiet] = anon_sym_incipiet,
  [anon_sym_incipit] = anon_sym_incipit,
  [anon_sym_itera] = anon_sym_itera,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_mori] = anon_sym_mori,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_perge] = anon_sym_perge,
  [anon_sym_redde] = anon_sym_redde,
  [anon_sym_reice] = anon_sym_reice,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_requirit] = anon_sym_requirit,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_rumpe] = anon_sym_rumpe,
  [anon_sym_secus] = anon_sym_secus,
  [anon_sym_si] = anon_sym_si,
  [anon_sym_sic] = anon_sym_sic,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_tacet] = anon_sym_tacet,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_trap] = anon_sym_trap,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_yields] = anon_sym_yields,
  [anon_sym_ceteri] = anon_sym_ceteri,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_column] = anon_sym_column,
  [anon_sym_columna] = anon_sym_columna,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_discretio] = anon_sym_discretio,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_errata] = anon_sym_errata,
  [anon_sym_errors] = anon_sym_errors,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_exitus] = anon_sym_exitus,
  [anon_sym_fixum] = anon_sym_fixum,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_functio] = anon_sym_functio,
  [anon_sym_generis] = anon_sym_generis,
  [anon_sym_genus] = anon_sym_genus,
  [anon_sym_iacit] = anon_sym_iacit,
  [anon_sym_immutata] = anon_sym_immutata,
  [anon_sym_implendum] = anon_sym_implendum,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_importa] = anon_sym_importa,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_interna] = anon_sym_interna,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_iuncta] = anon_sym_iuncta,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_magnitudo] = anon_sym_magnitudo,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_optiones] = anon_sym_optiones,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_ordo] = anon_sym_ordo,
  [anon_sym_prae] = anon_sym_prae,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_rest] = anon_sym_rest,
  [anon_sym_schema] = anon_sym_schema,
  [anon_sym_sit] = anon_sym_sit,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_sponte] = anon_sym_sponte,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_throws] = anon_sym_throws,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_typus] = anon_sym_typus,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_varia] = anon_sym_varia,
  [anon_sym_ab] = anon_sym_ab,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_ante] = anon_sym_ante,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_async_generator] = anon_sym_async_generator,
  [anon_sym_async_setup] = anon_sym_async_setup,
  [anon_sym_async_teardown] = anon_sym_async_teardown,
  [anon_sym_aut] = anon_sym_aut,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_await_const] = anon_sym_await_const,
  [anon_sym_await_var] = anon_sym_await_var,
  [anon_sym_before] = anon_sym_before,
  [anon_sym_bench] = anon_sym_bench,
  [anon_sym_cede] = anon_sym_cede,
  [anon_sym_clausura] = anon_sym_clausura,
  [anon_sym_coalesce] = anon_sym_coalesce,
  [anon_sym_comptime] = anon_sym_comptime,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_de] = anon_sym_de,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_describe] = anon_sym_describe,
  [anon_sym_ego] = anon_sym_ego,
  [anon_sym_embed] = anon_sym_embed,
  [anon_sym_erratur] = anon_sym_erratur,
  [anon_sym_est] = anon_sym_est,
  [anon_sym_et] = anon_sym_et,
  [anon_sym_ex] = anon_sym_ex,
  [anon_sym_exemplum] = anon_sym_exemplum,
  [anon_sym_expect_failure] = anon_sym_expect_failure,
  [anon_sym_fient] = anon_sym_fient,
  [anon_sym_fiet] = anon_sym_fiet,
  [anon_sym_figendum] = anon_sym_figendum,
  [anon_sym_finge] = anon_sym_finge,
  [anon_sym_fiunt] = anon_sym_fiunt,
  [anon_sym_flaky] = anon_sym_flaky,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_fragilis] = anon_sym_fragilis,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_futurum] = anon_sym_futurum,
  [anon_sym_generator] = anon_sym_generator,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_implet] = anon_sym_implet,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_insere] = anon_sym_insere,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_lege] = anon_sym_lege,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_lineam] = anon_sym_lineam,
  [anon_sym_metior] = anon_sym_metior,
  [anon_sym_modulus] = anon_sym_modulus,
  [anon_sym_mone] = anon_sym_mone,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_negative] = anon_sym_negative,
  [anon_sym_negativum] = anon_sym_negativum,
  [anon_sym_nihil] = anon_sym_nihil,
  [anon_sym_non] = anon_sym_non,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_nonnihil] = anon_sym_nonnihil,
  [anon_sym_nonnulla] = anon_sym_nonnulla,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_nota] = anon_sym_nota,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_nulla] = anon_sym_nulla,
  [anon_sym_omitte] = anon_sym_omitte,
  [anon_sym_omnia] = anon_sym_omnia,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_only_in] = anon_sym_only_in,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_own] = anon_sym_own,
  [anon_sym_penes] = anon_sym_penes,
  [anon_sym_per] = anon_sym_per,
  [anon_sym_positive] = anon_sym_positive,
  [anon_sym_positivum] = anon_sym_positivum,
  [anon_sym_postpara] = anon_sym_postpara,
  [anon_sym_postparabit] = anon_sym_postparabit,
  [anon_sym_praefixum] = anon_sym_praefixum,
  [anon_sym_praepara] = anon_sym_praepara,
  [anon_sym_praeparabit] = anon_sym_praeparabit,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_proba] = anon_sym_proba,
  [anon_sym_probandum] = anon_sym_probandum,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_reddet] = anon_sym_reddet,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_repete] = anon_sym_repete,
  [anon_sym_return_await] = anon_sym_return_await,
  [anon_sym_scribe] = anon_sym_scribe,
  [anon_sym_scriptum] = anon_sym_scriptum,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_setup] = anon_sym_setup,
  [anon_sym_skip] = anon_sym_skip,
  [anon_sym_solum] = anon_sym_solum,
  [anon_sym_solum_in] = anon_sym_solum_in,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_sparge] = anon_sym_sparge,
  [anon_sym_spread] = anon_sym_spread,
  [anon_sym_step] = anon_sym_step,
  [anon_sym_tacebit] = anon_sym_tacebit,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_teardown] = anon_sym_teardown,
  [anon_sym_temporis] = anon_sym_temporis,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_timeout] = anon_sym_timeout,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_until] = anon_sym_until,
  [anon_sym_usque] = anon_sym_usque,
  [anon_sym_ut] = anon_sym_ut,
  [anon_sym_variandum] = anon_sym_variandum,
  [anon_sym_variant] = anon_sym_variant,
  [anon_sym_vel] = anon_sym_vel,
  [anon_sym_via] = anon_sym_via,
  [anon_sym_vide] = anon_sym_vide,
  [anon_sym_warn] = anon_sym_warn,
  [anon_sym_wrapping] = anon_sym_wrapping,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_falsum] = anon_sym_falsum,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_verum] = anon_sym_verum,
  [sym_guillemet_string] = sym_guillemet_string,
  [sym_octeti_string] = sym_octeti_string,
  [sym_backtick_string] = sym_backtick_string,
  [sym_ascii_string] = sym_ascii_string,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_operator] = sym_operator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_hash] = sym_hash,
  [sym_line_comment] = sym_line_comment,
  [sym_faber_newline] = sym_faber_newline,
  [sym_program] = sym_program,
  [sym_lbrace] = sym_lbrace,
  [sym_rbrace] = sym_rbrace,
  [sym_comma_sign] = sym_comma_sign,
  [sym_annotation] = sym_annotation,
  [sym_known_annotation_name] = sym_known_annotation_name,
  [sym_annotation_name] = sym_annotation_name,
  [sym_annotation_modifier] = sym_annotation_modifier,
  [sym_annotation_value_type] = sym_annotation_value_type,
  [sym_braced_annotation] = sym_braced_annotation,
  [sym_annotation_field] = sym_annotation_field,
  [sym_annotation_arguments] = sym_annotation_arguments,
  [sym__annotation_argument] = sym__annotation_argument,
  [sym__token] = sym__token,
  [sym_member_access] = sym_member_access,
  [sym_member_glyph] = sym_operator,
  [sym_keyword_control] = sym_keyword_control,
  [sym_keyword_declaration] = sym_keyword_declaration,
  [sym_keyword_other] = sym_keyword_other,
  [sym_builtin_type] = sym_builtin_type,
  [sym_boolean] = sym_boolean,
  [sym_punctuation] = sym_punctuation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_braced_annotation_repeat1] = aux_sym_braced_annotation_repeat1,
  [aux_sym_braced_annotation_repeat2] = aux_sym_braced_annotation_repeat2,
  [aux_sym_annotation_arguments_repeat1] = aux_sym_annotation_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_at_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_eq_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conversio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_futura] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_future] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imperia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imperium] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kernel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nondum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nucleum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operandus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_privata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protecta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_publica] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_radix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unstable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_versio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brevis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_descriptio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lane] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bivalens] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cursor_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fractus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignotum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intervallum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iterator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lista] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_littera] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matrix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numerus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numquam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_octeti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_octetus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_promissum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_queue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ratio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saturating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saturatus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_series] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sparsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_su8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tabula] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tensor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ti8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unknown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vacua] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vacuum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vu8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adfirma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apud] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_argumenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_casu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceterum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custodi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discerne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elige] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ergo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incipiet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incipit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itera] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mori] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_perge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requirit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rumpe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tacet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yields] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceteri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_column] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_columna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discretio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_errata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_errors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exitus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_genus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iacit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_immutata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implendum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_importa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iuncta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magnitudo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optiones] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ordo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sponte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ante] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async_generator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async_setup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async_teardown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bench] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cede] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clausura] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coalesce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comptime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_de] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_describe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ego] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_embed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_erratur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_est] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_et] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exemplum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expect_failure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fiet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_figendum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fiunt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flaky] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragilis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_futurum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insere] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lege] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_line] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lineam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modulus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negativum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nihil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_non] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonnihil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonnulla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nota] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nulla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omitte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omnia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_own] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_penes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_per] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positivum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postpara] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postparabit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_praefixum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_praepara] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_praeparabit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_probandum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reddet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scribe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scriptum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solum_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sparge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tacebit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_teardown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_temporis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_todo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_until] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usque] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variandum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_via] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wrapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_falsum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verum] = {
    .visible = true,
    .named = false,
  },
  [sym_guillemet_string] = {
    .visible = true,
    .named = true,
  },
  [sym_octeti_string] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick_string] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_faber_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_lbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_rbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_known_annotation_name] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_name] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_value_type] = {
    .visible = true,
    .named = true,
  },
  [sym_braced_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_field] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation_argument] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym_member_glyph] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_control] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_other] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braced_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_braced_annotation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 13,
  [28] = 28,
  [29] = 14,
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
  [48] = 15,
  [49] = 9,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 11,
};

static TSCharacterRange sym_operator_character_set_1[] = {
  {'!', '!'}, {'%', '%'}, {'*', '+'}, {'-', '-'}, {'/', '/'}, {'<', '@'}, {0xac, 0xac}, {0xb6, 0xb7},
  {0xd7, 0xd7}, {0xf7, 0xf7}, {0x1d40, 0x1d40}, {0x2025, 0x2026}, {0x2190, 0x2193}, {0x21a2, 0x21a2}, {0x21a4, 0x21a4}, {0x21a6, 0x21a6},
  {0x21c7, 0x21c7}, {0x21d0, 0x21d0}, {0x21d2, 0x21d2}, {0x21e5, 0x21e5}, {0x2207, 0x2209}, {0x2227, 0x222a}, {0x2234, 0x2234}, {0x2237, 0x2237},
  {0x2245, 0x2245}, {0x2247, 0x2249}, {0x2260, 0x2262}, {0x2264, 0x2265}, {0x227a, 0x227b}, {0x2297, 0x2299}, {0x229c, 0x229c}, {0x22a5, 0x22a5},
  {0x22bb, 0x22bb}, {0x2713, 0x2713}, {0x2717, 0x2717}, {0x2912, 0x2913},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '!', 1421,
        '"', 7,
        '#', 1429,
        '\'', 8,
        '(', 1423,
        ')', 1424,
        '+', 1420,
        ',', 34,
        '.', 198,
        '0', 437,
        ':', 1427,
        ';', 1428,
        '=', 33,
        '?', 1422,
        '@', 30,
        '[', 1425,
        ']', 1426,
        '`', 12,
        'a', 638,
        'b', 722,
        'c', 530,
        'd', 724,
        'e', 851,
        'f', 444,
        'g', 725,
        'i', 447,
        'j', 1253,
        'k', 784,
        'l', 532,
        'm', 533,
        'n', 572,
        'o', 681,
        'p', 534,
        'q', 1350,
        'r', 535,
        's', 585,
        't', 537,
        'u', 450,
        'v', 538,
        'w', 619,
        'y', 883,
        '{', 31,
        '|', 14,
        '}', 32,
        0xab, 15,
        0x221e, 436,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      if (set_contains(sym_operator_character_set_1, 36, lookahead)) ADVANCE(1419);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 7,
        '\'', 8,
        '0', 437,
        '=', 33,
        '`', 12,
        'a', 1257,
        'b', 870,
        'c', 865,
        'e', 1413,
        'f', 446,
        'i', 449,
        'l', 838,
        'm', 571,
        'n', 788,
        'o', 683,
        'p', 1192,
        'q', 1350,
        'r', 629,
        's', 587,
        't', 588,
        'u', 453,
        'v', 574,
        '|', 14,
        0xab, 15,
        0x221e, 436,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(4);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        ',', 34,
        'b', 1208,
        'd', 825,
        'g', 961,
        'l', 614,
        'n', 573,
        's', 866,
        'u', 639,
        '}', 32,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(437);
      if (lookahead == 0x221e) ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(433);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'c', 974,
        'f', 1201,
        'i', 1022,
        'j', 1253,
        'k', 784,
        'n', 1132,
        'o', 1133,
        'p', 1171,
        'r', 621,
        'u', 1077,
        'v', 811,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 14:
      if (lookahead == '|') ADVANCE(432);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 0xbb) ADVANCE(431);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(440);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(441);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '!', 1421,
        '"', 7,
        '#', 1429,
        '\'', 8,
        '(', 1423,
        ')', 1424,
        '+', 1420,
        ',', 34,
        '.', 198,
        '0', 437,
        ':', 1427,
        ';', 1428,
        '?', 1422,
        '@', 30,
        '[', 1425,
        ']', 1426,
        '`', 12,
        'a', 638,
        'b', 723,
        'c', 531,
        'd', 836,
        'e', 851,
        'f', 445,
        'g', 726,
        'i', 448,
        'j', 1253,
        'l', 610,
        'm', 533,
        'n', 727,
        'o', 682,
        'p', 534,
        'q', 1350,
        'r', 536,
        's', 586,
        't', 537,
        'u', 452,
        'v', 539,
        'w', 619,
        'y', 883,
        '{', 31,
        '|', 14,
        '}', 32,
        0xab, 15,
        0x221e, 436,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      if (set_contains(sym_operator_character_set_1, 36, lookahead)) ADVANCE(1419);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '!', 1421,
        '"', 7,
        '#', 1429,
        '\'', 8,
        '(', 1423,
        ')', 1424,
        ',', 34,
        '.', 198,
        '0', 437,
        ':', 1427,
        ';', 1428,
        '?', 1422,
        '@', 30,
        '[', 1425,
        ']', 1426,
        '`', 12,
        'a', 638,
        'b', 722,
        'c', 531,
        'd', 724,
        'e', 851,
        'f', 445,
        'g', 725,
        'i', 448,
        'j', 1253,
        'l', 532,
        'm', 533,
        'n', 572,
        'o', 682,
        'p', 534,
        'q', 1350,
        'r', 536,
        's', 585,
        't', 537,
        'u', 451,
        'v', 539,
        'w', 619,
        'y', 883,
        '{', 31,
        '|', 14,
        '}', 32,
        0xab, 15,
        0x221e, 436,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      if (set_contains(sym_operator_character_set_1, 36, lookahead)) ADVANCE(1419);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '!', 1421,
        '"', 7,
        '#', 1429,
        '\'', 8,
        '(', 1423,
        ')', 1424,
        ',', 34,
        '.', 198,
        '0', 437,
        ':', 1427,
        ';', 1428,
        '?', 1422,
        '@', 30,
        '[', 1425,
        ']', 1426,
        '`', 12,
        'a', 638,
        'b', 723,
        'c', 531,
        'd', 836,
        'e', 851,
        'f', 445,
        'g', 726,
        'i', 448,
        'j', 1253,
        'l', 610,
        'm', 533,
        'n', 727,
        'o', 682,
        'p', 534,
        'q', 1350,
        'r', 536,
        's', 586,
        't', 537,
        'u', 452,
        'v', 539,
        'w', 619,
        'y', 883,
        '{', 31,
        '|', 14,
        '}', 32,
        0xab, 15,
        0x221e, 436,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      if (set_contains(sym_operator_character_set_1, 36, lookahead)) ADVANCE(1419);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_frontmatter);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_frontmatter);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_at_sign);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_eq_sign);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_cli);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_command);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_conversio);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_conversion);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (lookahead == '_') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_cursor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_futura);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_future);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_imperia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_imperium);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_kernel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_nondum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_nucleum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_operand);
      if (lookahead == 'u') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_operandus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_optio);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_optio);
      if (lookahead == 'n') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_privata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_protecta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_public);
      if (lookahead == 'a') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_publica);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_radix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_rename);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_unstable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_versio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_verte);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_vertex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_brevis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_descriptio);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_description);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_lane);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == 'u') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_longum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_nomen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ubique);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ascii);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bivalens);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_copia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_cursor_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_exactus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_fractus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ignotum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_instans);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_instant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_intervallum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_iterator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_lf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_lf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_lf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_li16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_li32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_li64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_li8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_lista);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_littera);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_lu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_lu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_lu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_lu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_matrix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_mf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_mf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_mf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_mi16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_mi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_mi64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_mi8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_mu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_mu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_mu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_mu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_never);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_numerus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_numquam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_octeti);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_octetus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_promise);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_promissum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ratio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_regex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_saturating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_saturatus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_series);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'u') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_sf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_sf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_sf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_si16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_si32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_si64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_si8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_sparsa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_stack);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_su16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_su32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_su64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_su8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_tabula);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_tensor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_textus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_tf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_tf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_tf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ti16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ti32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ti64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ti8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_trapping);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_tu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_tu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_tu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_tu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_unio);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_unio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_unknown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_vacua);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_vacuum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_valor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_vf16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_vf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_vf64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_vi16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_vi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_vi64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_vi8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_vu16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_vu32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_vu64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_vu8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG_DOT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ad);
      if (lookahead == 'f') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_adfirma);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_apud);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_args);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_argumenta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_async_main);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_at);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_cape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_capta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_casu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_catch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ceterum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_custodi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_discerne);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_dum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_elige);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_ergo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_fac);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'm') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_guard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_iace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_incipiet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_incipit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_itera);
      if (lookahead == 't') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_main);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_mori);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_panic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_pass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_perge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_redde);
      if (lookahead == 't') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_reice);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_reject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_requirit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_rumpe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_secus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_si);
      ADVANCE_MAP(
        '1', 520,
        '3', 484,
        '6', 502,
        '8', 152,
        'c', 250,
        'n', 251,
        't', 294,
        'z', 743,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1418);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_tacet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_then);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_throw);
      if (lookahead == 's') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_trap);
      if (lookahead == 'p') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_yields);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ceteri);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_column);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_columna);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_discretio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_errata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_errors);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead == 'u') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_exitus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_fixum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_functio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_generis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_genus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_iacit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_immutata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_implendum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_importa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_interna);
      if (lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_iuncta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_magnitudo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_optiones);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_options);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_ordo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_prae);
      if (lookahead == 'f') ADVANCE(886);
      if (lookahead == 'p') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_rest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_schema);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_sit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_size);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_sponte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_throws);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_typus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'i') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_varia);
      if (lookahead == 'n') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_ab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ante);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'c') ADVANCE(909);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead == 'y') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_async);
      if (lookahead == '_') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_async_generator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_async_setup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_async_teardown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_aut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_await);
      if (lookahead == '_') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_await_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_await_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_before);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_bench);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_cede);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_clausura);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_coalesce);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_copy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_de);
      if (lookahead == 'b') ADVANCE(1351);
      if (lookahead == 'f') ADVANCE(623);
      if (lookahead == 's') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_de);
      if (lookahead == 'b') ADVANCE(1351);
      if (lookahead == 'f') ADVANCE(623);
      if (lookahead == 's') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_debug);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_describe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_ego);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_embed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_erratur);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_est);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_et);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_ex);
      if (lookahead == 'a') ADVANCE(687);
      if (lookahead == 'e') ADVANCE(1019);
      if (lookahead == 'i') ADVANCE(1275);
      if (lookahead == 'p') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_exemplum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_expect_failure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_fient);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_fiet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_figendum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_finge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_fiunt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_flaky);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_fragilis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_futurum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_generator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_implements);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_implet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(890);
      if (lookahead == 's') ADVANCE(819);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_insere);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_lege);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_line);
      if (lookahead == 'a') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_lineam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_metior);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_modulus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_mone);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_negative);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_negativum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_nihil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_non);
      if (lookahead == 'd') ADVANCE(1363);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_nonnihil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_nonnulla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_nota);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_nulla);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_omitte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_omnia);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '_') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_only_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'd') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_own);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_penes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_per);
      if (lookahead == 'g') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_positive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_positivum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_postpara);
      if (lookahead == 'b') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_postparabit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_praefixum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_praepara);
      if (lookahead == 'b') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_praeparabit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_proba);
      if (lookahead == 'n') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_probandum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == 'o') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_reddet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_repete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_return_await);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_scribe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_scriptum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_setup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_skip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_solum);
      if (lookahead == '_') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_solum_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_some);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_sparge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_spread);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_step);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_tacebit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_teardown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_temporis);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_test);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_todo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_until);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_usque);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_ut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_variandum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_variant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_vel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_via);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_vide);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_warn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_wrapping);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_write);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_yield);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_falsum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_verum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_guillemet_string);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_octeti_string);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_backtick_string);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 19,
        'B', 17,
        'b', 17,
        'E', 16,
        'e', 16,
        'O', 18,
        'o', 18,
        'X', 21,
        'x', 21,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 510,
        '3', 474,
        '6', 492,
        'a', 652,
        'i', 785,
        'l', 540,
        'n', 271,
        'o', 1156,
        'r', 541,
        'u', 1056,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 510,
        '3', 474,
        '6', 492,
        'a', 652,
        'i', 785,
        'l', 540,
        'n', 271,
        'o', 1156,
        'r', 541,
        'u', 1057,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(510);
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == '6') ADVANCE(492);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'l') ADVANCE(1109);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 511,
        '3', 475,
        '6', 493,
        '8', 95,
        'a', 653,
        'f', 231,
        'g', 1060,
        'm', 1017,
        'n', 350,
        's', 352,
        't', 790,
        'u', 1082,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 511,
        '3', 475,
        '6', 493,
        '8', 95,
        'a', 653,
        'f', 231,
        'g', 1060,
        'm', 1018,
        'n', 350,
        's', 352,
        't', 790,
        'u', 1082,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(511);
      if (lookahead == '3') ADVANCE(475);
      if (lookahead == '6') ADVANCE(493);
      if (lookahead == '8') ADVANCE(95);
      if (lookahead == 'g') ADVANCE(1060);
      if (lookahead == 'n') ADVANCE(1262);
      if (lookahead == 't') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 512,
        '3', 476,
        '6', 494,
        '8', 178,
        'b', 945,
        'n', 901,
        's', 1154,
        't', 417,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '1', 512,
        '3', 476,
        '6', 494,
        '8', 178,
        'b', 945,
        'n', 902,
        's', 1154,
        't', 417,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(512);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == '6') ADVANCE(494);
      if (lookahead == '8') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(902);
      if (lookahead == 's') ADVANCE(1154);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(512);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == '6') ADVANCE(494);
      if (lookahead == '8') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(513);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '6') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(514);
      if (lookahead == '3') ADVANCE(478);
      if (lookahead == '6') ADVANCE(496);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(738);
      if (lookahead == 's') ADVANCE(1276);
      if (lookahead == 't') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(514);
      if (lookahead == '3') ADVANCE(478);
      if (lookahead == '6') ADVANCE(496);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 's') ADVANCE(1276);
      if (lookahead == 't') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(515);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '6') ADVANCE(497);
      if (lookahead == '8') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(516);
      if (lookahead == '3') ADVANCE(480);
      if (lookahead == '6') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(517);
      if (lookahead == '3') ADVANCE(481);
      if (lookahead == '6') ADVANCE(499);
      if (lookahead == '8') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(518);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '6') ADVANCE(500);
      if (lookahead == '8') ADVANCE(129);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(518);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '6') ADVANCE(500);
      if (lookahead == '8') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(519);
      if (lookahead == '3') ADVANCE(483);
      if (lookahead == '6') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(520);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '6') ADVANCE(502);
      if (lookahead == '8') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(521);
      if (lookahead == '3') ADVANCE(485);
      if (lookahead == '6') ADVANCE(503);
      if (lookahead == '8') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(522);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == '6') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(523);
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == '6') ADVANCE(505);
      if (lookahead == '8') ADVANCE(169);
      if (lookahead == 'm') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(523);
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == '6') ADVANCE(505);
      if (lookahead == '8') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(524);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '6') ADVANCE(506);
      if (lookahead == '8') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(524);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '6') ADVANCE(506);
      if (lookahead == '8') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(525);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead == '6') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(526);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '6') ADVANCE(508);
      if (lookahead == '8') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'd') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(526);
      if (lookahead == '3') ADVANCE(490);
      if (lookahead == '6') ADVANCE(508);
      if (lookahead == '8') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(527);
      if (lookahead == '3') ADVANCE(491);
      if (lookahead == '6') ADVANCE(509);
      if (lookahead == '8') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(964);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == 'h') ADVANCE(578);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == 'u') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(964);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == 'h') ADVANCE(578);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == 'u') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(1053);
      if (lookahead == 'u') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == 'u') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1065);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 'u') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'u') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'a', 648,
        'e', 593,
        'f', 465,
        'h', 796,
        'i', 466,
        'o', 707,
        'r', 590,
        'u', 468,
        'y', 1140,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'o') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'e') ADVANCE(1136);
      if (lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1134);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == 'o') ADVANCE(1032);
      if (lookahead == 'u') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == 'o') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1256);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'v') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'a', 695,
        'c', 1127,
        'd', 713,
        'f', 393,
        'g', 787,
        'i', 677,
        'j', 827,
        'n', 622,
        'p', 742,
        'q', 1392,
        's', 1277,
        't', 1394,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'a', 695,
        'c', 1127,
        'd', 713,
        'f', 393,
        'g', 787,
        'i', 677,
        'j', 827,
        'p', 742,
        'q', 1392,
        's', 1277,
        't', 1394,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(969);
      if (lookahead == 'l') ADVANCE(1353);
      if (lookahead == 'm') ADVANCE(1020);
      if (lookahead == 'n') ADVANCE(1259);
      if (lookahead == 'p') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(969);
      if (lookahead == 'l') ADVANCE(1353);
      if (lookahead == 'm') ADVANCE(1147);
      if (lookahead == 'n') ADVANCE(1259);
      if (lookahead == 'p') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'a', 1327,
        'c', 868,
        'e', 667,
        'f', 462,
        'h', 1110,
        'i', 249,
        'k', 881,
        'o', 979,
        'p', 591,
        't', 542,
        'u', 464,
        'w', 899,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'a', 1327,
        'c', 868,
        'e', 667,
        'f', 462,
        'i', 249,
        'k', 881,
        'o', 979,
        'p', 591,
        't', 542,
        'u', 464,
        'w', 899,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead == 'e') ADVANCE(1210);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'p') ADVANCE(611);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'u') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(633);
      if (lookahead == 'u') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1137);
      if (lookahead == 'u') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1158);
      if (lookahead == 'o') ADVANCE(1086);
      if (lookahead == 'r') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1148);
      if (lookahead == 'i') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1211);
      if (lookahead == 'm') ADVANCE(1151);
      if (lookahead == 'n') ADVANCE(1270);
      if (lookahead == 's') ADVANCE(1278);
      if (lookahead == 'x') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1306);
      if (lookahead == 'o') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'e') ADVANCE(1252);
      if (lookahead == 's') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1016);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'u') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1293);
      if (lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'o') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1186);
      if (lookahead == 'h') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == 'e') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1330);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1150);
      if (lookahead == 'u') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1345);
      if (lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'b', 305,
        'd', 201,
        'l', 950,
        'n', 693,
        'p', 1348,
        'r', 844,
        's', 309,
        't', 208,
        'u', 1273,
        'w', 620,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(904);
      if (lookahead == 't') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(768);
      if (lookahead == 'p') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1358);
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == 'g') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(929);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(948);
      if (lookahead == 't') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(863);
      if (lookahead == 'r') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1127);
      if (lookahead == 'g') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1356);
      if (lookahead == 'l') ADVANCE(840);
      if (lookahead == 'r') ADVANCE(930);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1349);
      if (lookahead == 'l') ADVANCE(1114);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1349);
      if (lookahead == 'l') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1342);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1342);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1342);
      if (lookahead == 'r') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1316);
      if (lookahead == 'm') ADVANCE(892);
      if (lookahead == 'n') ADVANCE(951);
      if (lookahead == 'p') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1316);
      if (lookahead == 'm') ADVANCE(892);
      if (lookahead == 'n') ADVANCE(951);
      if (lookahead == 'p') ADVANCE(834);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead == 'w') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1129);
      if (lookahead == 'v') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == 'l') ADVANCE(954);
      if (lookahead == 'm') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1333);
      if (lookahead == 'g') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == 't') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(733);
      if (lookahead == 't') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1355);
      if (lookahead == 'n') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(874);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 't') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1383);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'o') ADVANCE(1107);
      if (lookahead == 'r') ADVANCE(728);
      if (lookahead == 'y') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'o') ADVANCE(1107);
      if (lookahead == 'r') ADVANCE(810);
      if (lookahead == 'y') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(1254);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead == 'l') ADVANCE(1108);
      if (lookahead == 'u') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead == 'u') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead == 'u') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 's') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'u') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'g') ADVANCE(798);
      if (lookahead == 'n') ADVANCE(856);
      if (lookahead == 'u') ADVANCE(1073);
      if (lookahead == 'x') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1403);
      if (lookahead == 'u') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1040);
      if (lookahead == 'r') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead == 'u') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1218);
      if (lookahead == 'q') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1215);
      if (lookahead == 't') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'o') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1190);
      if (lookahead == 'r') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1204);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'o') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1216);
      if (lookahead == 't') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(1254);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == 'g') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(624);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 'v') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1112);
      if (lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'g', 1090,
        'l', 872,
        'm', 642,
        'n', 1352,
        'r', 853,
        's', 1274,
        't', 333,
        'x', 334,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(626);
      if (lookahead == 'v') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1091);
      if (lookahead == 'r') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1083);
      if (lookahead == 'i') ADVANCE(1039);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 't') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(737);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(769);
      if (lookahead == 's') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(809);
      if (lookahead == 'm') ADVANCE(615);
      if (lookahead == 's') ADVANCE(813);
      if (lookahead == 't') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(578);
      if (lookahead == 'o') ADVANCE(1146);
      if (lookahead == 'u') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == 'o') ADVANCE(1107);
      if (lookahead == 'y') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead == 's') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1334);
      if (lookahead == 'n') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'y') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1095);
      if (lookahead == 'k') ADVANCE(1068);
      if (lookahead == 's') ADVANCE(1315);
      if (lookahead == 't') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1095);
      if (lookahead == 'k') ADVANCE(1068);
      if (lookahead == 't') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1104);
      if (lookahead == 'k') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1061);
      if (lookahead == 'u') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1402);
      if (lookahead == 'o') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(869);
      if (lookahead == 'u') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(971);
      if (lookahead == 'm') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1331);
      if (lookahead == 't') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(953);
      if (lookahead == 'p') ADVANCE(731);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead == 't') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(871);
      if (lookahead == 'o') ADVANCE(1028);
      if (lookahead == 'u') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1357);
      if (lookahead == 'm') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(641);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1376);
      if (lookahead == 'p') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1376);
      if (lookahead == 'p') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead == 'p') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1021);
      if (lookahead == 'n') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(828);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == 't') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == 't') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == 's') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1281);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1285);
      if (lookahead == 'v') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1270);
      if (lookahead == 'x') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'u') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 't') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(934);
      if (lookahead == 'u') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1268);
      if (lookahead == 's') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(930);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1228);
      if (lookahead == 'u') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1280);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == 'v') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1328);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead == 'u') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == 't') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead == 'u') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(1419);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(1419);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_hash);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 24, .external_lex_state = 1},
  [2] = {.lex_state = 25, .external_lex_state = 1},
  [3] = {.lex_state = 25, .external_lex_state = 1},
  [4] = {.lex_state = 25, .external_lex_state = 1},
  [5] = {.lex_state = 25, .external_lex_state = 1},
  [6] = {.lex_state = 26, .external_lex_state = 1},
  [7] = {.lex_state = 26, .external_lex_state = 1},
  [8] = {.lex_state = 26, .external_lex_state = 1},
  [9] = {.lex_state = 25, .external_lex_state = 1},
  [10] = {.lex_state = 26, .external_lex_state = 1},
  [11] = {.lex_state = 25, .external_lex_state = 1},
  [12] = {.lex_state = 25, .external_lex_state = 1},
  [13] = {.lex_state = 25, .external_lex_state = 1},
  [14] = {.lex_state = 25, .external_lex_state = 1},
  [15] = {.lex_state = 25, .external_lex_state = 1},
  [16] = {.lex_state = 26, .external_lex_state = 1},
  [17] = {.lex_state = 26, .external_lex_state = 1},
  [18] = {.lex_state = 26, .external_lex_state = 1},
  [19] = {.lex_state = 26, .external_lex_state = 1},
  [20] = {.lex_state = 26, .external_lex_state = 1},
  [21] = {.lex_state = 26, .external_lex_state = 1},
  [22] = {.lex_state = 26, .external_lex_state = 1},
  [23] = {.lex_state = 26, .external_lex_state = 1},
  [24] = {.lex_state = 26, .external_lex_state = 1},
  [25] = {.lex_state = 26, .external_lex_state = 1},
  [26] = {.lex_state = 26, .external_lex_state = 1},
  [27] = {.lex_state = 26, .external_lex_state = 1},
  [28] = {.lex_state = 26, .external_lex_state = 1},
  [29] = {.lex_state = 26, .external_lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 10, .external_lex_state = 2},
  [33] = {.lex_state = 10, .external_lex_state = 2},
  [34] = {.lex_state = 10, .external_lex_state = 2},
  [35] = {.lex_state = 10, .external_lex_state = 2},
  [36] = {.lex_state = 10, .external_lex_state = 2},
  [37] = {.lex_state = 10, .external_lex_state = 2},
  [38] = {.lex_state = 10, .external_lex_state = 2},
  [39] = {.lex_state = 10, .external_lex_state = 2},
  [40] = {.lex_state = 10, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_frontmatter] = ACTIONS(1),
    [sym_at_sign] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_eq_sign] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_cli] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_conversio] = ACTIONS(1),
    [anon_sym_conversion] = ACTIONS(1),
    [anon_sym_cursor] = ACTIONS(1),
    [anon_sym_fragment] = ACTIONS(1),
    [anon_sym_futura] = ACTIONS(1),
    [anon_sym_future] = ACTIONS(1),
    [anon_sym_imperia] = ACTIONS(1),
    [anon_sym_imperium] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_kernel] = ACTIONS(1),
    [anon_sym_nondum] = ACTIONS(1),
    [anon_sym_nucleum] = ACTIONS(1),
    [anon_sym_operand] = ACTIONS(1),
    [anon_sym_operandus] = ACTIONS(1),
    [anon_sym_optio] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_privata] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protecta] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_publica] = ACTIONS(1),
    [anon_sym_radix] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [anon_sym_unstable] = ACTIONS(1),
    [anon_sym_versio] = ACTIONS(1),
    [anon_sym_verte] = ACTIONS(1),
    [anon_sym_vertex] = ACTIONS(1),
    [anon_sym_brevis] = ACTIONS(1),
    [anon_sym_descriptio] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_lane] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_longum] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_nomen] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ubique] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_bivalens] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_copia] = ACTIONS(1),
    [anon_sym_cursor_t] = ACTIONS(1),
    [anon_sym_exactus] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_fractus] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_ignotum] = ACTIONS(1),
    [anon_sym_instans] = ACTIONS(1),
    [anon_sym_instant] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_intervallum] = ACTIONS(1),
    [anon_sym_iterator] = ACTIONS(1),
    [anon_sym_lf16] = ACTIONS(1),
    [anon_sym_lf32] = ACTIONS(1),
    [anon_sym_lf64] = ACTIONS(1),
    [anon_sym_li16] = ACTIONS(1),
    [anon_sym_li32] = ACTIONS(1),
    [anon_sym_li64] = ACTIONS(1),
    [anon_sym_li8] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_lista] = ACTIONS(1),
    [anon_sym_littera] = ACTIONS(1),
    [anon_sym_lu16] = ACTIONS(1),
    [anon_sym_lu32] = ACTIONS(1),
    [anon_sym_lu64] = ACTIONS(1),
    [anon_sym_lu8] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_matrix] = ACTIONS(1),
    [anon_sym_mf16] = ACTIONS(1),
    [anon_sym_mf32] = ACTIONS(1),
    [anon_sym_mf64] = ACTIONS(1),
    [anon_sym_mi16] = ACTIONS(1),
    [anon_sym_mi32] = ACTIONS(1),
    [anon_sym_mi64] = ACTIONS(1),
    [anon_sym_mi8] = ACTIONS(1),
    [anon_sym_mu16] = ACTIONS(1),
    [anon_sym_mu32] = ACTIONS(1),
    [anon_sym_mu64] = ACTIONS(1),
    [anon_sym_mu8] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_numerus] = ACTIONS(1),
    [anon_sym_numquam] = ACTIONS(1),
    [anon_sym_octeti] = ACTIONS(1),
    [anon_sym_octetus] = ACTIONS(1),
    [anon_sym_promise] = ACTIONS(1),
    [anon_sym_promissum] = ACTIONS(1),
    [anon_sym_queue] = ACTIONS(1),
    [anon_sym_ratio] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_saturating] = ACTIONS(1),
    [anon_sym_saturatus] = ACTIONS(1),
    [anon_sym_series] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_sf16] = ACTIONS(1),
    [anon_sym_sf32] = ACTIONS(1),
    [anon_sym_sf64] = ACTIONS(1),
    [anon_sym_si16] = ACTIONS(1),
    [anon_sym_si32] = ACTIONS(1),
    [anon_sym_si64] = ACTIONS(1),
    [anon_sym_si8] = ACTIONS(1),
    [anon_sym_sparsa] = ACTIONS(1),
    [anon_sym_stack] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_su16] = ACTIONS(1),
    [anon_sym_su32] = ACTIONS(1),
    [anon_sym_su64] = ACTIONS(1),
    [anon_sym_su8] = ACTIONS(1),
    [anon_sym_tabula] = ACTIONS(1),
    [anon_sym_tensor] = ACTIONS(1),
    [anon_sym_textus] = ACTIONS(1),
    [anon_sym_tf16] = ACTIONS(1),
    [anon_sym_tf32] = ACTIONS(1),
    [anon_sym_tf64] = ACTIONS(1),
    [anon_sym_ti16] = ACTIONS(1),
    [anon_sym_ti32] = ACTIONS(1),
    [anon_sym_ti64] = ACTIONS(1),
    [anon_sym_ti8] = ACTIONS(1),
    [anon_sym_trapping] = ACTIONS(1),
    [anon_sym_tu16] = ACTIONS(1),
    [anon_sym_tu32] = ACTIONS(1),
    [anon_sym_tu64] = ACTIONS(1),
    [anon_sym_tu8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_unio] = ACTIONS(1),
    [anon_sym_unknown] = ACTIONS(1),
    [anon_sym_vacua] = ACTIONS(1),
    [anon_sym_vacuum] = ACTIONS(1),
    [anon_sym_valor] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_vf16] = ACTIONS(1),
    [anon_sym_vf32] = ACTIONS(1),
    [anon_sym_vf64] = ACTIONS(1),
    [anon_sym_vi16] = ACTIONS(1),
    [anon_sym_vi32] = ACTIONS(1),
    [anon_sym_vi64] = ACTIONS(1),
    [anon_sym_vi8] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_vu16] = ACTIONS(1),
    [anon_sym_vu32] = ACTIONS(1),
    [anon_sym_vu64] = ACTIONS(1),
    [anon_sym_vu8] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_BANG_DOT] = ACTIONS(1),
    [anon_sym_ad] = ACTIONS(1),
    [anon_sym_adfirma] = ACTIONS(1),
    [anon_sym_apud] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_argumenta] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_async_main] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_cape] = ACTIONS(1),
    [anon_sym_capta] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_casu] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_ceterum] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_custodi] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_discerne] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_dum] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_elige] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_ergo] = ACTIONS(1),
    [anon_sym_fac] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_guard] = ACTIONS(1),
    [anon_sym_iace] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_incipiet] = ACTIONS(1),
    [anon_sym_incipit] = ACTIONS(1),
    [anon_sym_itera] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_mori] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_perge] = ACTIONS(1),
    [anon_sym_redde] = ACTIONS(1),
    [anon_sym_reice] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_requirit] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_rumpe] = ACTIONS(1),
    [anon_sym_secus] = ACTIONS(1),
    [anon_sym_si] = ACTIONS(1),
    [anon_sym_sic] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_tacet] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_trap] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_yields] = ACTIONS(1),
    [anon_sym_ceteri] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_column] = ACTIONS(1),
    [anon_sym_columna] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_discretio] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_errata] = ACTIONS(1),
    [anon_sym_errors] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_exitus] = ACTIONS(1),
    [anon_sym_fixum] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_functio] = ACTIONS(1),
    [anon_sym_generis] = ACTIONS(1),
    [anon_sym_genus] = ACTIONS(1),
    [anon_sym_iacit] = ACTIONS(1),
    [anon_sym_immutata] = ACTIONS(1),
    [anon_sym_implendum] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_importa] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_interna] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_iuncta] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_magnitudo] = ACTIONS(1),
    [anon_sym_ordo] = ACTIONS(1),
    [anon_sym_prae] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_rest] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [anon_sym_sit] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_sponte] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_throws] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_typus] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_varia] = ACTIONS(1),
    [anon_sym_ab] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_ante] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_async_generator] = ACTIONS(1),
    [anon_sym_async_setup] = ACTIONS(1),
    [anon_sym_async_teardown] = ACTIONS(1),
    [anon_sym_aut] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_await_const] = ACTIONS(1),
    [anon_sym_await_var] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_bench] = ACTIONS(1),
    [anon_sym_cede] = ACTIONS(1),
    [anon_sym_clausura] = ACTIONS(1),
    [anon_sym_coalesce] = ACTIONS(1),
    [anon_sym_comptime] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_de] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_describe] = ACTIONS(1),
    [anon_sym_ego] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_erratur] = ACTIONS(1),
    [anon_sym_est] = ACTIONS(1),
    [anon_sym_et] = ACTIONS(1),
    [anon_sym_ex] = ACTIONS(1),
    [anon_sym_exemplum] = ACTIONS(1),
    [anon_sym_expect_failure] = ACTIONS(1),
    [anon_sym_fient] = ACTIONS(1),
    [anon_sym_fiet] = ACTIONS(1),
    [anon_sym_figendum] = ACTIONS(1),
    [anon_sym_finge] = ACTIONS(1),
    [anon_sym_fiunt] = ACTIONS(1),
    [anon_sym_flaky] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_fragilis] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_futurum] = ACTIONS(1),
    [anon_sym_generator] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_implet] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_insere] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_lege] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_lineam] = ACTIONS(1),
    [anon_sym_metior] = ACTIONS(1),
    [anon_sym_modulus] = ACTIONS(1),
    [anon_sym_mone] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_negative] = ACTIONS(1),
    [anon_sym_negativum] = ACTIONS(1),
    [anon_sym_nihil] = ACTIONS(1),
    [anon_sym_non] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_nonnihil] = ACTIONS(1),
    [anon_sym_nonnulla] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_nota] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_nulla] = ACTIONS(1),
    [anon_sym_omitte] = ACTIONS(1),
    [anon_sym_omnia] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_only_in] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_own] = ACTIONS(1),
    [anon_sym_penes] = ACTIONS(1),
    [anon_sym_per] = ACTIONS(1),
    [anon_sym_positive] = ACTIONS(1),
    [anon_sym_positivum] = ACTIONS(1),
    [anon_sym_postpara] = ACTIONS(1),
    [anon_sym_postparabit] = ACTIONS(1),
    [anon_sym_praefixum] = ACTIONS(1),
    [anon_sym_praepara] = ACTIONS(1),
    [anon_sym_praeparabit] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_proba] = ACTIONS(1),
    [anon_sym_probandum] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_reddet] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_repete] = ACTIONS(1),
    [anon_sym_return_await] = ACTIONS(1),
    [anon_sym_scribe] = ACTIONS(1),
    [anon_sym_scriptum] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_setup] = ACTIONS(1),
    [anon_sym_skip] = ACTIONS(1),
    [anon_sym_solum] = ACTIONS(1),
    [anon_sym_solum_in] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_sparge] = ACTIONS(1),
    [anon_sym_spread] = ACTIONS(1),
    [anon_sym_step] = ACTIONS(1),
    [anon_sym_tacebit] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_teardown] = ACTIONS(1),
    [anon_sym_temporis] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_timeout] = ACTIONS(1),
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_until] = ACTIONS(1),
    [anon_sym_usque] = ACTIONS(1),
    [anon_sym_ut] = ACTIONS(1),
    [anon_sym_variandum] = ACTIONS(1),
    [anon_sym_variant] = ACTIONS(1),
    [anon_sym_vel] = ACTIONS(1),
    [anon_sym_via] = ACTIONS(1),
    [anon_sym_vide] = ACTIONS(1),
    [anon_sym_warn] = ACTIONS(1),
    [anon_sym_wrapping] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_falsum] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_verum] = ACTIONS(1),
    [sym_guillemet_string] = ACTIONS(1),
    [sym_octeti_string] = ACTIONS(1),
    [sym_backtick_string] = ACTIONS(1),
    [sym_ascii_string] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_hash] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_faber_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(52),
    [sym_annotation] = STATE(7),
    [sym__token] = STATE(7),
    [sym_member_access] = STATE(7),
    [sym_member_glyph] = STATE(51),
    [sym_keyword_control] = STATE(7),
    [sym_keyword_declaration] = STATE(7),
    [sym_keyword_other] = STATE(7),
    [sym_builtin_type] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_punctuation] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_frontmatter] = ACTIONS(5),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cli] = ACTIONS(11),
    [anon_sym_conversio] = ACTIONS(11),
    [anon_sym_conversion] = ACTIONS(11),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_futura] = ACTIONS(11),
    [anon_sym_imperium] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_nondum] = ACTIONS(11),
    [anon_sym_nucleum] = ACTIONS(11),
    [anon_sym_operandus] = ACTIONS(11),
    [anon_sym_optio] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protecta] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_publica] = ACTIONS(15),
    [anon_sym_radix] = ACTIONS(11),
    [anon_sym_verte] = ACTIONS(11),
    [anon_sym_vertex] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_bytes] = ACTIONS(13),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor_t] = ACTIONS(13),
    [anon_sym_exactus] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_instant] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_iterator] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_list] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_littera] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_never] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_octetus] = ACTIONS(13),
    [anon_sym_promise] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_queue] = ACTIONS(13),
    [anon_sym_ratio] = ACTIONS(13),
    [anon_sym_record] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_saturating] = ACTIONS(13),
    [anon_sym_saturatus] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_trapping] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_unknown] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_QMARK_DOT] = ACTIONS(17),
    [anon_sym_BANG_DOT] = ACTIONS(17),
    [anon_sym_ad] = ACTIONS(19),
    [anon_sym_adfirma] = ACTIONS(19),
    [anon_sym_apud] = ACTIONS(19),
    [anon_sym_args] = ACTIONS(19),
    [anon_sym_argumenta] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(19),
    [anon_sym_async_main] = ACTIONS(19),
    [anon_sym_at] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_cape] = ACTIONS(19),
    [anon_sym_capta] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_casu] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_ceterum] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_custodi] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_discerne] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_dum] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_elige] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_ergo] = ACTIONS(19),
    [anon_sym_fac] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_guard] = ACTIONS(19),
    [anon_sym_iace] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_incipiet] = ACTIONS(19),
    [anon_sym_incipit] = ACTIONS(19),
    [anon_sym_itera] = ACTIONS(19),
    [anon_sym_main] = ACTIONS(19),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_mori] = ACTIONS(19),
    [anon_sym_panic] = ACTIONS(19),
    [anon_sym_pass] = ACTIONS(19),
    [anon_sym_perge] = ACTIONS(19),
    [anon_sym_redde] = ACTIONS(19),
    [anon_sym_reice] = ACTIONS(19),
    [anon_sym_reject] = ACTIONS(19),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_requirit] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_rumpe] = ACTIONS(19),
    [anon_sym_secus] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sic] = ACTIONS(19),
    [anon_sym_sin] = ACTIONS(19),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_tacet] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_throw] = ACTIONS(19),
    [anon_sym_trap] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_yields] = ACTIONS(19),
    [anon_sym_ceteri] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(15),
    [anon_sym_column] = ACTIONS(15),
    [anon_sym_columna] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_discretio] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_errata] = ACTIONS(15),
    [anon_sym_errors] = ACTIONS(15),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_exitus] = ACTIONS(15),
    [anon_sym_fixum] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_functio] = ACTIONS(15),
    [anon_sym_generis] = ACTIONS(15),
    [anon_sym_genus] = ACTIONS(15),
    [anon_sym_iacit] = ACTIONS(15),
    [anon_sym_immutata] = ACTIONS(15),
    [anon_sym_implendum] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_importa] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_interna] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_iuncta] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_magnitudo] = ACTIONS(15),
    [anon_sym_optional] = ACTIONS(15),
    [anon_sym_optiones] = ACTIONS(15),
    [anon_sym_options] = ACTIONS(15),
    [anon_sym_ordo] = ACTIONS(15),
    [anon_sym_prae] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(15),
    [anon_sym_rest] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(15),
    [anon_sym_sit] = ACTIONS(15),
    [anon_sym_size] = ACTIONS(15),
    [anon_sym_sponte] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_throws] = ACTIONS(15),
    [anon_sym_tuple] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_typus] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_varia] = ACTIONS(15),
    [anon_sym_ab] = ACTIONS(11),
    [anon_sym_all] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_as] = ACTIONS(11),
    [anon_sym_async] = ACTIONS(11),
    [anon_sym_async_generator] = ACTIONS(11),
    [anon_sym_async_setup] = ACTIONS(11),
    [anon_sym_async_teardown] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_await] = ACTIONS(11),
    [anon_sym_await_const] = ACTIONS(11),
    [anon_sym_await_var] = ACTIONS(11),
    [anon_sym_before] = ACTIONS(11),
    [anon_sym_bench] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_coalesce] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(11),
    [anon_sym_copy] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_debug] = ACTIONS(11),
    [anon_sym_describe] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_embed] = ACTIONS(11),
    [anon_sym_erratur] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_exemplum] = ACTIONS(11),
    [anon_sym_expect_failure] = ACTIONS(11),
    [anon_sym_fient] = ACTIONS(11),
    [anon_sym_fiet] = ACTIONS(11),
    [anon_sym_figendum] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fiunt] = ACTIONS(11),
    [anon_sym_flaky] = ACTIONS(11),
    [anon_sym_format] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_generator] = ACTIONS(11),
    [anon_sym_implements] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_insere] = ACTIONS(11),
    [anon_sym_is] = ACTIONS(11),
    [anon_sym_lambda] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_line] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_mut] = ACTIONS(11),
    [anon_sym_negative] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_nihil] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_none] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_only] = ACTIONS(11),
    [anon_sym_only_in] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_own] = ACTIONS(11),
    [anon_sym_penes] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positive] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_range] = ACTIONS(11),
    [anon_sym_read] = ACTIONS(11),
    [anon_sym_reddet] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_return_await] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_setup] = ACTIONS(11),
    [anon_sym_skip] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_some] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_spread] = ACTIONS(11),
    [anon_sym_step] = ACTIONS(11),
    [anon_sym_tacebit] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_teardown] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(11),
    [anon_sym_timeout] = ACTIONS(11),
    [anon_sym_todo] = ACTIONS(11),
    [anon_sym_until] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_variandum] = ACTIONS(11),
    [anon_sym_variant] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_via] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_warn] = ACTIONS(11),
    [anon_sym_wrapping] = ACTIONS(11),
    [anon_sym_write] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_falsum] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_verum] = ACTIONS(21),
    [sym_guillemet_string] = ACTIONS(23),
    [sym_octeti_string] = ACTIONS(23),
    [sym_backtick_string] = ACTIONS(23),
    [sym_ascii_string] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_operator] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(23),
    [sym_faber_newline] = ACTIONS(23),
  },
  [2] = {
    [sym_lbrace] = STATE(34),
    [sym_annotation_modifier] = STATE(3),
    [sym_annotation_value_type] = STATE(3),
    [sym_braced_annotation] = STATE(16),
    [sym_annotation_arguments] = STATE(16),
    [sym__annotation_argument] = STATE(3),
    [sym_keyword_declaration] = STATE(3),
    [sym_keyword_other] = STATE(3),
    [sym_boolean] = STATE(3),
    [aux_sym_annotation_arguments_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_at_sign] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_cli] = ACTIONS(32),
    [anon_sym_conversio] = ACTIONS(32),
    [anon_sym_conversion] = ACTIONS(32),
    [anon_sym_cursor] = ACTIONS(35),
    [anon_sym_fragment] = ACTIONS(32),
    [anon_sym_futura] = ACTIONS(32),
    [anon_sym_imperium] = ACTIONS(32),
    [anon_sym_json] = ACTIONS(35),
    [anon_sym_nondum] = ACTIONS(32),
    [anon_sym_nucleum] = ACTIONS(32),
    [anon_sym_operandus] = ACTIONS(32),
    [anon_sym_optio] = ACTIONS(32),
    [anon_sym_privata] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(37),
    [anon_sym_protecta] = ACTIONS(37),
    [anon_sym_protected] = ACTIONS(37),
    [anon_sym_public] = ACTIONS(37),
    [anon_sym_publica] = ACTIONS(37),
    [anon_sym_radix] = ACTIONS(32),
    [anon_sym_verte] = ACTIONS(32),
    [anon_sym_vertex] = ACTIONS(32),
    [anon_sym_brevis] = ACTIONS(40),
    [anon_sym_descriptio] = ACTIONS(40),
    [anon_sym_description] = ACTIONS(40),
    [anon_sym_global] = ACTIONS(40),
    [anon_sym_lane] = ACTIONS(40),
    [anon_sym_long] = ACTIONS(40),
    [anon_sym_longum] = ACTIONS(40),
    [anon_sym_name] = ACTIONS(40),
    [anon_sym_nomen] = ACTIONS(40),
    [anon_sym_short] = ACTIONS(40),
    [anon_sym_ubique] = ACTIONS(40),
    [anon_sym_ascii] = ACTIONS(42),
    [anon_sym_bivalens] = ACTIONS(42),
    [anon_sym_bool] = ACTIONS(42),
    [anon_sym_byte] = ACTIONS(42),
    [anon_sym_bytes] = ACTIONS(42),
    [anon_sym_char] = ACTIONS(42),
    [anon_sym_copia] = ACTIONS(42),
    [anon_sym_cursor_t] = ACTIONS(42),
    [anon_sym_exactus] = ACTIONS(42),
    [anon_sym_f16] = ACTIONS(42),
    [anon_sym_f32] = ACTIONS(42),
    [anon_sym_f64] = ACTIONS(42),
    [anon_sym_float] = ACTIONS(42),
    [anon_sym_fractus] = ACTIONS(42),
    [anon_sym_i16] = ACTIONS(42),
    [anon_sym_i32] = ACTIONS(42),
    [anon_sym_i64] = ACTIONS(42),
    [anon_sym_i8] = ACTIONS(42),
    [anon_sym_ignotum] = ACTIONS(42),
    [anon_sym_instans] = ACTIONS(42),
    [anon_sym_instant] = ACTIONS(42),
    [anon_sym_int] = ACTIONS(42),
    [anon_sym_intervallum] = ACTIONS(42),
    [anon_sym_iterator] = ACTIONS(42),
    [anon_sym_lf16] = ACTIONS(42),
    [anon_sym_lf32] = ACTIONS(42),
    [anon_sym_lf64] = ACTIONS(42),
    [anon_sym_li16] = ACTIONS(42),
    [anon_sym_li32] = ACTIONS(42),
    [anon_sym_li64] = ACTIONS(42),
    [anon_sym_li8] = ACTIONS(42),
    [anon_sym_list] = ACTIONS(42),
    [anon_sym_lista] = ACTIONS(42),
    [anon_sym_littera] = ACTIONS(42),
    [anon_sym_lu16] = ACTIONS(42),
    [anon_sym_lu32] = ACTIONS(42),
    [anon_sym_lu64] = ACTIONS(42),
    [anon_sym_lu8] = ACTIONS(42),
    [anon_sym_map] = ACTIONS(42),
    [anon_sym_matrix] = ACTIONS(42),
    [anon_sym_mf16] = ACTIONS(42),
    [anon_sym_mf32] = ACTIONS(42),
    [anon_sym_mf64] = ACTIONS(42),
    [anon_sym_mi16] = ACTIONS(42),
    [anon_sym_mi32] = ACTIONS(42),
    [anon_sym_mi64] = ACTIONS(42),
    [anon_sym_mi8] = ACTIONS(42),
    [anon_sym_mu16] = ACTIONS(42),
    [anon_sym_mu32] = ACTIONS(42),
    [anon_sym_mu64] = ACTIONS(42),
    [anon_sym_mu8] = ACTIONS(42),
    [anon_sym_never] = ACTIONS(42),
    [anon_sym_numerus] = ACTIONS(42),
    [anon_sym_numquam] = ACTIONS(42),
    [anon_sym_octeti] = ACTIONS(42),
    [anon_sym_octetus] = ACTIONS(42),
    [anon_sym_promise] = ACTIONS(42),
    [anon_sym_promissum] = ACTIONS(42),
    [anon_sym_queue] = ACTIONS(42),
    [anon_sym_ratio] = ACTIONS(42),
    [anon_sym_record] = ACTIONS(42),
    [anon_sym_regex] = ACTIONS(42),
    [anon_sym_saturating] = ACTIONS(42),
    [anon_sym_saturatus] = ACTIONS(42),
    [anon_sym_series] = ACTIONS(42),
    [anon_sym_set] = ACTIONS(42),
    [anon_sym_sf16] = ACTIONS(42),
    [anon_sym_sf32] = ACTIONS(42),
    [anon_sym_sf64] = ACTIONS(42),
    [anon_sym_si16] = ACTIONS(42),
    [anon_sym_si32] = ACTIONS(42),
    [anon_sym_si64] = ACTIONS(42),
    [anon_sym_si8] = ACTIONS(42),
    [anon_sym_sparsa] = ACTIONS(42),
    [anon_sym_stack] = ACTIONS(42),
    [anon_sym_string] = ACTIONS(42),
    [anon_sym_su16] = ACTIONS(42),
    [anon_sym_su32] = ACTIONS(42),
    [anon_sym_su64] = ACTIONS(42),
    [anon_sym_su8] = ACTIONS(42),
    [anon_sym_tabula] = ACTIONS(42),
    [anon_sym_tensor] = ACTIONS(42),
    [anon_sym_textus] = ACTIONS(42),
    [anon_sym_tf16] = ACTIONS(42),
    [anon_sym_tf32] = ACTIONS(42),
    [anon_sym_tf64] = ACTIONS(42),
    [anon_sym_ti16] = ACTIONS(42),
    [anon_sym_ti32] = ACTIONS(42),
    [anon_sym_ti64] = ACTIONS(42),
    [anon_sym_ti8] = ACTIONS(42),
    [anon_sym_trapping] = ACTIONS(42),
    [anon_sym_tu16] = ACTIONS(42),
    [anon_sym_tu32] = ACTIONS(42),
    [anon_sym_tu64] = ACTIONS(42),
    [anon_sym_tu8] = ACTIONS(42),
    [anon_sym_u16] = ACTIONS(42),
    [anon_sym_u32] = ACTIONS(42),
    [anon_sym_u64] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(42),
    [anon_sym_unio] = ACTIONS(42),
    [anon_sym_unknown] = ACTIONS(42),
    [anon_sym_vacua] = ACTIONS(42),
    [anon_sym_vacuum] = ACTIONS(42),
    [anon_sym_valor] = ACTIONS(42),
    [anon_sym_vector] = ACTIONS(42),
    [anon_sym_vf16] = ACTIONS(42),
    [anon_sym_vf32] = ACTIONS(42),
    [anon_sym_vf64] = ACTIONS(42),
    [anon_sym_vi16] = ACTIONS(42),
    [anon_sym_vi32] = ACTIONS(42),
    [anon_sym_vi64] = ACTIONS(42),
    [anon_sym_vi8] = ACTIONS(42),
    [anon_sym_void] = ACTIONS(42),
    [anon_sym_vu16] = ACTIONS(42),
    [anon_sym_vu32] = ACTIONS(42),
    [anon_sym_vu64] = ACTIONS(42),
    [anon_sym_vu8] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_QMARK_DOT] = ACTIONS(27),
    [anon_sym_BANG_DOT] = ACTIONS(27),
    [anon_sym_ad] = ACTIONS(35),
    [anon_sym_adfirma] = ACTIONS(35),
    [anon_sym_apud] = ACTIONS(35),
    [anon_sym_args] = ACTIONS(35),
    [anon_sym_argumenta] = ACTIONS(35),
    [anon_sym_assert] = ACTIONS(35),
    [anon_sym_async_main] = ACTIONS(35),
    [anon_sym_at] = ACTIONS(35),
    [anon_sym_break] = ACTIONS(35),
    [anon_sym_call] = ACTIONS(35),
    [anon_sym_cape] = ACTIONS(35),
    [anon_sym_capta] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_casu] = ACTIONS(35),
    [anon_sym_catch] = ACTIONS(35),
    [anon_sym_ceterum] = ACTIONS(35),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_custodi] = ACTIONS(35),
    [anon_sym_default] = ACTIONS(35),
    [anon_sym_discerne] = ACTIONS(35),
    [anon_sym_do] = ACTIONS(35),
    [anon_sym_dum] = ACTIONS(35),
    [anon_sym_elif] = ACTIONS(35),
    [anon_sym_elige] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_ergo] = ACTIONS(35),
    [anon_sym_fac] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_guard] = ACTIONS(35),
    [anon_sym_iace] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_incipiet] = ACTIONS(35),
    [anon_sym_incipit] = ACTIONS(35),
    [anon_sym_itera] = ACTIONS(35),
    [anon_sym_main] = ACTIONS(35),
    [anon_sym_match] = ACTIONS(35),
    [anon_sym_mori] = ACTIONS(35),
    [anon_sym_panic] = ACTIONS(35),
    [anon_sym_pass] = ACTIONS(35),
    [anon_sym_perge] = ACTIONS(35),
    [anon_sym_redde] = ACTIONS(35),
    [anon_sym_reice] = ACTIONS(35),
    [anon_sym_reject] = ACTIONS(35),
    [anon_sym_require] = ACTIONS(35),
    [anon_sym_requirit] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_rumpe] = ACTIONS(35),
    [anon_sym_secus] = ACTIONS(35),
    [anon_sym_si] = ACTIONS(35),
    [anon_sym_sic] = ACTIONS(35),
    [anon_sym_sin] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(35),
    [anon_sym_tacet] = ACTIONS(35),
    [anon_sym_then] = ACTIONS(35),
    [anon_sym_throw] = ACTIONS(35),
    [anon_sym_trap] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_yields] = ACTIONS(35),
    [anon_sym_ceteri] = ACTIONS(37),
    [anon_sym_class] = ACTIONS(37),
    [anon_sym_column] = ACTIONS(37),
    [anon_sym_columna] = ACTIONS(37),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_discretio] = ACTIONS(37),
    [anon_sym_enum] = ACTIONS(37),
    [anon_sym_errata] = ACTIONS(37),
    [anon_sym_errors] = ACTIONS(37),
    [anon_sym_exit] = ACTIONS(37),
    [anon_sym_exitus] = ACTIONS(37),
    [anon_sym_fixum] = ACTIONS(37),
    [anon_sym_fn] = ACTIONS(37),
    [anon_sym_functio] = ACTIONS(37),
    [anon_sym_generis] = ACTIONS(37),
    [anon_sym_genus] = ACTIONS(37),
    [anon_sym_iacit] = ACTIONS(37),
    [anon_sym_immutata] = ACTIONS(37),
    [anon_sym_implendum] = ACTIONS(37),
    [anon_sym_import] = ACTIONS(37),
    [anon_sym_importa] = ACTIONS(37),
    [anon_sym_interface] = ACTIONS(37),
    [anon_sym_interna] = ACTIONS(37),
    [anon_sym_internal] = ACTIONS(37),
    [anon_sym_iuncta] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_magnitudo] = ACTIONS(37),
    [anon_sym_optional] = ACTIONS(37),
    [anon_sym_optiones] = ACTIONS(37),
    [anon_sym_options] = ACTIONS(37),
    [anon_sym_ordo] = ACTIONS(37),
    [anon_sym_prae] = ACTIONS(37),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_rest] = ACTIONS(37),
    [anon_sym_schema] = ACTIONS(37),
    [anon_sym_sit] = ACTIONS(37),
    [anon_sym_size] = ACTIONS(37),
    [anon_sym_sponte] = ACTIONS(37),
    [anon_sym_static] = ACTIONS(37),
    [anon_sym_throws] = ACTIONS(37),
    [anon_sym_tuple] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_typus] = ACTIONS(37),
    [anon_sym_union] = ACTIONS(37),
    [anon_sym_var] = ACTIONS(37),
    [anon_sym_varia] = ACTIONS(37),
    [anon_sym_ab] = ACTIONS(32),
    [anon_sym_all] = ACTIONS(32),
    [anon_sym_and] = ACTIONS(32),
    [anon_sym_ante] = ACTIONS(32),
    [anon_sym_as] = ACTIONS(32),
    [anon_sym_async] = ACTIONS(32),
    [anon_sym_async_generator] = ACTIONS(32),
    [anon_sym_async_setup] = ACTIONS(32),
    [anon_sym_async_teardown] = ACTIONS(32),
    [anon_sym_aut] = ACTIONS(32),
    [anon_sym_await] = ACTIONS(32),
    [anon_sym_await_const] = ACTIONS(32),
    [anon_sym_await_var] = ACTIONS(32),
    [anon_sym_before] = ACTIONS(32),
    [anon_sym_bench] = ACTIONS(32),
    [anon_sym_cede] = ACTIONS(32),
    [anon_sym_clausura] = ACTIONS(32),
    [anon_sym_coalesce] = ACTIONS(32),
    [anon_sym_comptime] = ACTIONS(32),
    [anon_sym_copy] = ACTIONS(32),
    [anon_sym_de] = ACTIONS(32),
    [anon_sym_debug] = ACTIONS(32),
    [anon_sym_describe] = ACTIONS(32),
    [anon_sym_ego] = ACTIONS(32),
    [anon_sym_embed] = ACTIONS(32),
    [anon_sym_erratur] = ACTIONS(32),
    [anon_sym_est] = ACTIONS(32),
    [anon_sym_et] = ACTIONS(32),
    [anon_sym_ex] = ACTIONS(32),
    [anon_sym_exemplum] = ACTIONS(32),
    [anon_sym_expect_failure] = ACTIONS(32),
    [anon_sym_fient] = ACTIONS(32),
    [anon_sym_fiet] = ACTIONS(32),
    [anon_sym_figendum] = ACTIONS(32),
    [anon_sym_finge] = ACTIONS(32),
    [anon_sym_fiunt] = ACTIONS(32),
    [anon_sym_flaky] = ACTIONS(32),
    [anon_sym_format] = ACTIONS(32),
    [anon_sym_fragilis] = ACTIONS(32),
    [anon_sym_from] = ACTIONS(32),
    [anon_sym_futurum] = ACTIONS(32),
    [anon_sym_generator] = ACTIONS(32),
    [anon_sym_implements] = ACTIONS(32),
    [anon_sym_implet] = ACTIONS(32),
    [anon_sym_in] = ACTIONS(32),
    [anon_sym_insere] = ACTIONS(32),
    [anon_sym_is] = ACTIONS(32),
    [anon_sym_lambda] = ACTIONS(32),
    [anon_sym_lege] = ACTIONS(32),
    [anon_sym_line] = ACTIONS(32),
    [anon_sym_lineam] = ACTIONS(32),
    [anon_sym_metior] = ACTIONS(32),
    [anon_sym_modulus] = ACTIONS(32),
    [anon_sym_mone] = ACTIONS(32),
    [anon_sym_mut] = ACTIONS(32),
    [anon_sym_negative] = ACTIONS(32),
    [anon_sym_negativum] = ACTIONS(32),
    [anon_sym_nihil] = ACTIONS(32),
    [anon_sym_non] = ACTIONS(32),
    [anon_sym_none] = ACTIONS(32),
    [anon_sym_nonnihil] = ACTIONS(32),
    [anon_sym_nonnulla] = ACTIONS(32),
    [anon_sym_not] = ACTIONS(32),
    [anon_sym_nota] = ACTIONS(32),
    [anon_sym_null] = ACTIONS(32),
    [anon_sym_nulla] = ACTIONS(32),
    [anon_sym_omitte] = ACTIONS(32),
    [anon_sym_omnia] = ACTIONS(32),
    [anon_sym_only] = ACTIONS(32),
    [anon_sym_only_in] = ACTIONS(32),
    [anon_sym_or] = ACTIONS(32),
    [anon_sym_own] = ACTIONS(32),
    [anon_sym_penes] = ACTIONS(32),
    [anon_sym_per] = ACTIONS(32),
    [anon_sym_positive] = ACTIONS(32),
    [anon_sym_positivum] = ACTIONS(32),
    [anon_sym_postpara] = ACTIONS(32),
    [anon_sym_postparabit] = ACTIONS(32),
    [anon_sym_praefixum] = ACTIONS(32),
    [anon_sym_praepara] = ACTIONS(32),
    [anon_sym_praeparabit] = ACTIONS(32),
    [anon_sym_print] = ACTIONS(32),
    [anon_sym_proba] = ACTIONS(32),
    [anon_sym_probandum] = ACTIONS(32),
    [anon_sym_range] = ACTIONS(32),
    [anon_sym_read] = ACTIONS(32),
    [anon_sym_reddet] = ACTIONS(32),
    [anon_sym_ref] = ACTIONS(32),
    [anon_sym_repeat] = ACTIONS(32),
    [anon_sym_repete] = ACTIONS(32),
    [anon_sym_return_await] = ACTIONS(32),
    [anon_sym_scribe] = ACTIONS(32),
    [anon_sym_scriptum] = ACTIONS(32),
    [anon_sym_self] = ACTIONS(32),
    [anon_sym_setup] = ACTIONS(32),
    [anon_sym_skip] = ACTIONS(32),
    [anon_sym_solum] = ACTIONS(32),
    [anon_sym_solum_in] = ACTIONS(32),
    [anon_sym_some] = ACTIONS(32),
    [anon_sym_sparge] = ACTIONS(32),
    [anon_sym_spread] = ACTIONS(32),
    [anon_sym_step] = ACTIONS(32),
    [anon_sym_tacebit] = ACTIONS(32),
    [anon_sym_tag] = ACTIONS(32),
    [anon_sym_teardown] = ACTIONS(32),
    [anon_sym_temporis] = ACTIONS(32),
    [anon_sym_test] = ACTIONS(32),
    [anon_sym_timeout] = ACTIONS(32),
    [anon_sym_todo] = ACTIONS(32),
    [anon_sym_until] = ACTIONS(32),
    [anon_sym_usque] = ACTIONS(32),
    [anon_sym_ut] = ACTIONS(32),
    [anon_sym_variandum] = ACTIONS(32),
    [anon_sym_variant] = ACTIONS(32),
    [anon_sym_vel] = ACTIONS(32),
    [anon_sym_via] = ACTIONS(32),
    [anon_sym_vide] = ACTIONS(32),
    [anon_sym_warn] = ACTIONS(32),
    [anon_sym_wrapping] = ACTIONS(32),
    [anon_sym_write] = ACTIONS(32),
    [anon_sym_yield] = ACTIONS(32),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_falsum] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_verum] = ACTIONS(45),
    [sym_guillemet_string] = ACTIONS(48),
    [sym_octeti_string] = ACTIONS(48),
    [sym_backtick_string] = ACTIONS(48),
    [sym_ascii_string] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_identifier] = ACTIONS(51),
    [sym_operator] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_hash] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(27),
    [sym_faber_newline] = ACTIONS(27),
  },
  [3] = {
    [sym_annotation_modifier] = STATE(4),
    [sym_annotation_value_type] = STATE(4),
    [sym__annotation_argument] = STATE(4),
    [sym_keyword_declaration] = STATE(4),
    [sym_keyword_other] = STATE(4),
    [sym_boolean] = STATE(4),
    [aux_sym_annotation_arguments_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_at_sign] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_cli] = ACTIONS(56),
    [anon_sym_conversio] = ACTIONS(56),
    [anon_sym_conversion] = ACTIONS(56),
    [anon_sym_cursor] = ACTIONS(59),
    [anon_sym_fragment] = ACTIONS(56),
    [anon_sym_futura] = ACTIONS(56),
    [anon_sym_imperium] = ACTIONS(56),
    [anon_sym_json] = ACTIONS(59),
    [anon_sym_nondum] = ACTIONS(56),
    [anon_sym_nucleum] = ACTIONS(56),
    [anon_sym_operandus] = ACTIONS(56),
    [anon_sym_optio] = ACTIONS(56),
    [anon_sym_privata] = ACTIONS(61),
    [anon_sym_private] = ACTIONS(61),
    [anon_sym_protecta] = ACTIONS(61),
    [anon_sym_protected] = ACTIONS(61),
    [anon_sym_public] = ACTIONS(61),
    [anon_sym_publica] = ACTIONS(61),
    [anon_sym_radix] = ACTIONS(56),
    [anon_sym_verte] = ACTIONS(56),
    [anon_sym_vertex] = ACTIONS(56),
    [anon_sym_brevis] = ACTIONS(40),
    [anon_sym_descriptio] = ACTIONS(40),
    [anon_sym_description] = ACTIONS(40),
    [anon_sym_global] = ACTIONS(40),
    [anon_sym_lane] = ACTIONS(40),
    [anon_sym_long] = ACTIONS(40),
    [anon_sym_longum] = ACTIONS(40),
    [anon_sym_name] = ACTIONS(40),
    [anon_sym_nomen] = ACTIONS(40),
    [anon_sym_short] = ACTIONS(40),
    [anon_sym_ubique] = ACTIONS(40),
    [anon_sym_ascii] = ACTIONS(64),
    [anon_sym_bivalens] = ACTIONS(64),
    [anon_sym_bool] = ACTIONS(64),
    [anon_sym_byte] = ACTIONS(64),
    [anon_sym_bytes] = ACTIONS(64),
    [anon_sym_char] = ACTIONS(64),
    [anon_sym_copia] = ACTIONS(64),
    [anon_sym_cursor_t] = ACTIONS(64),
    [anon_sym_exactus] = ACTIONS(64),
    [anon_sym_f16] = ACTIONS(64),
    [anon_sym_f32] = ACTIONS(64),
    [anon_sym_f64] = ACTIONS(64),
    [anon_sym_float] = ACTIONS(64),
    [anon_sym_fractus] = ACTIONS(64),
    [anon_sym_i16] = ACTIONS(64),
    [anon_sym_i32] = ACTIONS(64),
    [anon_sym_i64] = ACTIONS(64),
    [anon_sym_i8] = ACTIONS(64),
    [anon_sym_ignotum] = ACTIONS(64),
    [anon_sym_instans] = ACTIONS(64),
    [anon_sym_instant] = ACTIONS(64),
    [anon_sym_int] = ACTIONS(64),
    [anon_sym_intervallum] = ACTIONS(64),
    [anon_sym_iterator] = ACTIONS(64),
    [anon_sym_lf16] = ACTIONS(64),
    [anon_sym_lf32] = ACTIONS(64),
    [anon_sym_lf64] = ACTIONS(64),
    [anon_sym_li16] = ACTIONS(64),
    [anon_sym_li32] = ACTIONS(64),
    [anon_sym_li64] = ACTIONS(64),
    [anon_sym_li8] = ACTIONS(64),
    [anon_sym_list] = ACTIONS(64),
    [anon_sym_lista] = ACTIONS(64),
    [anon_sym_littera] = ACTIONS(64),
    [anon_sym_lu16] = ACTIONS(64),
    [anon_sym_lu32] = ACTIONS(64),
    [anon_sym_lu64] = ACTIONS(64),
    [anon_sym_lu8] = ACTIONS(64),
    [anon_sym_map] = ACTIONS(64),
    [anon_sym_matrix] = ACTIONS(64),
    [anon_sym_mf16] = ACTIONS(64),
    [anon_sym_mf32] = ACTIONS(64),
    [anon_sym_mf64] = ACTIONS(64),
    [anon_sym_mi16] = ACTIONS(64),
    [anon_sym_mi32] = ACTIONS(64),
    [anon_sym_mi64] = ACTIONS(64),
    [anon_sym_mi8] = ACTIONS(64),
    [anon_sym_mu16] = ACTIONS(64),
    [anon_sym_mu32] = ACTIONS(64),
    [anon_sym_mu64] = ACTIONS(64),
    [anon_sym_mu8] = ACTIONS(64),
    [anon_sym_never] = ACTIONS(64),
    [anon_sym_numerus] = ACTIONS(64),
    [anon_sym_numquam] = ACTIONS(64),
    [anon_sym_octeti] = ACTIONS(64),
    [anon_sym_octetus] = ACTIONS(64),
    [anon_sym_promise] = ACTIONS(64),
    [anon_sym_promissum] = ACTIONS(64),
    [anon_sym_queue] = ACTIONS(64),
    [anon_sym_ratio] = ACTIONS(64),
    [anon_sym_record] = ACTIONS(64),
    [anon_sym_regex] = ACTIONS(64),
    [anon_sym_saturating] = ACTIONS(64),
    [anon_sym_saturatus] = ACTIONS(64),
    [anon_sym_series] = ACTIONS(64),
    [anon_sym_set] = ACTIONS(64),
    [anon_sym_sf16] = ACTIONS(64),
    [anon_sym_sf32] = ACTIONS(64),
    [anon_sym_sf64] = ACTIONS(64),
    [anon_sym_si16] = ACTIONS(64),
    [anon_sym_si32] = ACTIONS(64),
    [anon_sym_si64] = ACTIONS(64),
    [anon_sym_si8] = ACTIONS(64),
    [anon_sym_sparsa] = ACTIONS(64),
    [anon_sym_stack] = ACTIONS(64),
    [anon_sym_string] = ACTIONS(64),
    [anon_sym_su16] = ACTIONS(64),
    [anon_sym_su32] = ACTIONS(64),
    [anon_sym_su64] = ACTIONS(64),
    [anon_sym_su8] = ACTIONS(64),
    [anon_sym_tabula] = ACTIONS(64),
    [anon_sym_tensor] = ACTIONS(64),
    [anon_sym_textus] = ACTIONS(64),
    [anon_sym_tf16] = ACTIONS(64),
    [anon_sym_tf32] = ACTIONS(64),
    [anon_sym_tf64] = ACTIONS(64),
    [anon_sym_ti16] = ACTIONS(64),
    [anon_sym_ti32] = ACTIONS(64),
    [anon_sym_ti64] = ACTIONS(64),
    [anon_sym_ti8] = ACTIONS(64),
    [anon_sym_trapping] = ACTIONS(64),
    [anon_sym_tu16] = ACTIONS(64),
    [anon_sym_tu32] = ACTIONS(64),
    [anon_sym_tu64] = ACTIONS(64),
    [anon_sym_tu8] = ACTIONS(64),
    [anon_sym_u16] = ACTIONS(64),
    [anon_sym_u32] = ACTIONS(64),
    [anon_sym_u64] = ACTIONS(64),
    [anon_sym_u8] = ACTIONS(64),
    [anon_sym_unio] = ACTIONS(64),
    [anon_sym_unknown] = ACTIONS(64),
    [anon_sym_vacua] = ACTIONS(64),
    [anon_sym_vacuum] = ACTIONS(64),
    [anon_sym_valor] = ACTIONS(64),
    [anon_sym_vector] = ACTIONS(64),
    [anon_sym_vf16] = ACTIONS(64),
    [anon_sym_vf32] = ACTIONS(64),
    [anon_sym_vf64] = ACTIONS(64),
    [anon_sym_vi16] = ACTIONS(64),
    [anon_sym_vi32] = ACTIONS(64),
    [anon_sym_vi64] = ACTIONS(64),
    [anon_sym_vi8] = ACTIONS(64),
    [anon_sym_void] = ACTIONS(64),
    [anon_sym_vu16] = ACTIONS(64),
    [anon_sym_vu32] = ACTIONS(64),
    [anon_sym_vu64] = ACTIONS(64),
    [anon_sym_vu8] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_QMARK_DOT] = ACTIONS(54),
    [anon_sym_BANG_DOT] = ACTIONS(54),
    [anon_sym_ad] = ACTIONS(59),
    [anon_sym_adfirma] = ACTIONS(59),
    [anon_sym_apud] = ACTIONS(59),
    [anon_sym_args] = ACTIONS(59),
    [anon_sym_argumenta] = ACTIONS(59),
    [anon_sym_assert] = ACTIONS(59),
    [anon_sym_async_main] = ACTIONS(59),
    [anon_sym_at] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(59),
    [anon_sym_call] = ACTIONS(59),
    [anon_sym_cape] = ACTIONS(59),
    [anon_sym_capta] = ACTIONS(59),
    [anon_sym_case] = ACTIONS(59),
    [anon_sym_casu] = ACTIONS(59),
    [anon_sym_catch] = ACTIONS(59),
    [anon_sym_ceterum] = ACTIONS(59),
    [anon_sym_continue] = ACTIONS(59),
    [anon_sym_custodi] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(59),
    [anon_sym_discerne] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_dum] = ACTIONS(59),
    [anon_sym_elif] = ACTIONS(59),
    [anon_sym_elige] = ACTIONS(59),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_ergo] = ACTIONS(59),
    [anon_sym_fac] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(59),
    [anon_sym_guard] = ACTIONS(59),
    [anon_sym_iace] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_incipiet] = ACTIONS(59),
    [anon_sym_incipit] = ACTIONS(59),
    [anon_sym_itera] = ACTIONS(59),
    [anon_sym_main] = ACTIONS(59),
    [anon_sym_match] = ACTIONS(59),
    [anon_sym_mori] = ACTIONS(59),
    [anon_sym_panic] = ACTIONS(59),
    [anon_sym_pass] = ACTIONS(59),
    [anon_sym_perge] = ACTIONS(59),
    [anon_sym_redde] = ACTIONS(59),
    [anon_sym_reice] = ACTIONS(59),
    [anon_sym_reject] = ACTIONS(59),
    [anon_sym_require] = ACTIONS(59),
    [anon_sym_requirit] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_rumpe] = ACTIONS(59),
    [anon_sym_secus] = ACTIONS(59),
    [anon_sym_si] = ACTIONS(59),
    [anon_sym_sic] = ACTIONS(59),
    [anon_sym_sin] = ACTIONS(59),
    [anon_sym_switch] = ACTIONS(59),
    [anon_sym_tacet] = ACTIONS(59),
    [anon_sym_then] = ACTIONS(59),
    [anon_sym_throw] = ACTIONS(59),
    [anon_sym_trap] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_yields] = ACTIONS(59),
    [anon_sym_ceteri] = ACTIONS(61),
    [anon_sym_class] = ACTIONS(61),
    [anon_sym_column] = ACTIONS(61),
    [anon_sym_columna] = ACTIONS(61),
    [anon_sym_const] = ACTIONS(61),
    [anon_sym_discretio] = ACTIONS(61),
    [anon_sym_enum] = ACTIONS(61),
    [anon_sym_errata] = ACTIONS(61),
    [anon_sym_errors] = ACTIONS(61),
    [anon_sym_exit] = ACTIONS(61),
    [anon_sym_exitus] = ACTIONS(61),
    [anon_sym_fixum] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(61),
    [anon_sym_functio] = ACTIONS(61),
    [anon_sym_generis] = ACTIONS(61),
    [anon_sym_genus] = ACTIONS(61),
    [anon_sym_iacit] = ACTIONS(61),
    [anon_sym_immutata] = ACTIONS(61),
    [anon_sym_implendum] = ACTIONS(61),
    [anon_sym_import] = ACTIONS(61),
    [anon_sym_importa] = ACTIONS(61),
    [anon_sym_interface] = ACTIONS(61),
    [anon_sym_interna] = ACTIONS(61),
    [anon_sym_internal] = ACTIONS(61),
    [anon_sym_iuncta] = ACTIONS(61),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_magnitudo] = ACTIONS(61),
    [anon_sym_optional] = ACTIONS(61),
    [anon_sym_optiones] = ACTIONS(61),
    [anon_sym_options] = ACTIONS(61),
    [anon_sym_ordo] = ACTIONS(61),
    [anon_sym_prae] = ACTIONS(61),
    [anon_sym_readonly] = ACTIONS(61),
    [anon_sym_rest] = ACTIONS(61),
    [anon_sym_schema] = ACTIONS(61),
    [anon_sym_sit] = ACTIONS(61),
    [anon_sym_size] = ACTIONS(61),
    [anon_sym_sponte] = ACTIONS(61),
    [anon_sym_static] = ACTIONS(61),
    [anon_sym_throws] = ACTIONS(61),
    [anon_sym_tuple] = ACTIONS(61),
    [anon_sym_type] = ACTIONS(61),
    [anon_sym_typus] = ACTIONS(61),
    [anon_sym_union] = ACTIONS(61),
    [anon_sym_var] = ACTIONS(61),
    [anon_sym_varia] = ACTIONS(61),
    [anon_sym_ab] = ACTIONS(56),
    [anon_sym_all] = ACTIONS(56),
    [anon_sym_and] = ACTIONS(56),
    [anon_sym_ante] = ACTIONS(56),
    [anon_sym_as] = ACTIONS(56),
    [anon_sym_async] = ACTIONS(56),
    [anon_sym_async_generator] = ACTIONS(56),
    [anon_sym_async_setup] = ACTIONS(56),
    [anon_sym_async_teardown] = ACTIONS(56),
    [anon_sym_aut] = ACTIONS(56),
    [anon_sym_await] = ACTIONS(56),
    [anon_sym_await_const] = ACTIONS(56),
    [anon_sym_await_var] = ACTIONS(56),
    [anon_sym_before] = ACTIONS(56),
    [anon_sym_bench] = ACTIONS(56),
    [anon_sym_cede] = ACTIONS(56),
    [anon_sym_clausura] = ACTIONS(56),
    [anon_sym_coalesce] = ACTIONS(56),
    [anon_sym_comptime] = ACTIONS(56),
    [anon_sym_copy] = ACTIONS(56),
    [anon_sym_de] = ACTIONS(56),
    [anon_sym_debug] = ACTIONS(56),
    [anon_sym_describe] = ACTIONS(56),
    [anon_sym_ego] = ACTIONS(56),
    [anon_sym_embed] = ACTIONS(56),
    [anon_sym_erratur] = ACTIONS(56),
    [anon_sym_est] = ACTIONS(56),
    [anon_sym_et] = ACTIONS(56),
    [anon_sym_ex] = ACTIONS(56),
    [anon_sym_exemplum] = ACTIONS(56),
    [anon_sym_expect_failure] = ACTIONS(56),
    [anon_sym_fient] = ACTIONS(56),
    [anon_sym_fiet] = ACTIONS(56),
    [anon_sym_figendum] = ACTIONS(56),
    [anon_sym_finge] = ACTIONS(56),
    [anon_sym_fiunt] = ACTIONS(56),
    [anon_sym_flaky] = ACTIONS(56),
    [anon_sym_format] = ACTIONS(56),
    [anon_sym_fragilis] = ACTIONS(56),
    [anon_sym_from] = ACTIONS(56),
    [anon_sym_futurum] = ACTIONS(56),
    [anon_sym_generator] = ACTIONS(56),
    [anon_sym_implements] = ACTIONS(56),
    [anon_sym_implet] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_insere] = ACTIONS(56),
    [anon_sym_is] = ACTIONS(56),
    [anon_sym_lambda] = ACTIONS(56),
    [anon_sym_lege] = ACTIONS(56),
    [anon_sym_line] = ACTIONS(56),
    [anon_sym_lineam] = ACTIONS(56),
    [anon_sym_metior] = ACTIONS(56),
    [anon_sym_modulus] = ACTIONS(56),
    [anon_sym_mone] = ACTIONS(56),
    [anon_sym_mut] = ACTIONS(56),
    [anon_sym_negative] = ACTIONS(56),
    [anon_sym_negativum] = ACTIONS(56),
    [anon_sym_nihil] = ACTIONS(56),
    [anon_sym_non] = ACTIONS(56),
    [anon_sym_none] = ACTIONS(56),
    [anon_sym_nonnihil] = ACTIONS(56),
    [anon_sym_nonnulla] = ACTIONS(56),
    [anon_sym_not] = ACTIONS(56),
    [anon_sym_nota] = ACTIONS(56),
    [anon_sym_null] = ACTIONS(56),
    [anon_sym_nulla] = ACTIONS(56),
    [anon_sym_omitte] = ACTIONS(56),
    [anon_sym_omnia] = ACTIONS(56),
    [anon_sym_only] = ACTIONS(56),
    [anon_sym_only_in] = ACTIONS(56),
    [anon_sym_or] = ACTIONS(56),
    [anon_sym_own] = ACTIONS(56),
    [anon_sym_penes] = ACTIONS(56),
    [anon_sym_per] = ACTIONS(56),
    [anon_sym_positive] = ACTIONS(56),
    [anon_sym_positivum] = ACTIONS(56),
    [anon_sym_postpara] = ACTIONS(56),
    [anon_sym_postparabit] = ACTIONS(56),
    [anon_sym_praefixum] = ACTIONS(56),
    [anon_sym_praepara] = ACTIONS(56),
    [anon_sym_praeparabit] = ACTIONS(56),
    [anon_sym_print] = ACTIONS(56),
    [anon_sym_proba] = ACTIONS(56),
    [anon_sym_probandum] = ACTIONS(56),
    [anon_sym_range] = ACTIONS(56),
    [anon_sym_read] = ACTIONS(56),
    [anon_sym_reddet] = ACTIONS(56),
    [anon_sym_ref] = ACTIONS(56),
    [anon_sym_repeat] = ACTIONS(56),
    [anon_sym_repete] = ACTIONS(56),
    [anon_sym_return_await] = ACTIONS(56),
    [anon_sym_scribe] = ACTIONS(56),
    [anon_sym_scriptum] = ACTIONS(56),
    [anon_sym_self] = ACTIONS(56),
    [anon_sym_setup] = ACTIONS(56),
    [anon_sym_skip] = ACTIONS(56),
    [anon_sym_solum] = ACTIONS(56),
    [anon_sym_solum_in] = ACTIONS(56),
    [anon_sym_some] = ACTIONS(56),
    [anon_sym_sparge] = ACTIONS(56),
    [anon_sym_spread] = ACTIONS(56),
    [anon_sym_step] = ACTIONS(56),
    [anon_sym_tacebit] = ACTIONS(56),
    [anon_sym_tag] = ACTIONS(56),
    [anon_sym_teardown] = ACTIONS(56),
    [anon_sym_temporis] = ACTIONS(56),
    [anon_sym_test] = ACTIONS(56),
    [anon_sym_timeout] = ACTIONS(56),
    [anon_sym_todo] = ACTIONS(56),
    [anon_sym_until] = ACTIONS(56),
    [anon_sym_usque] = ACTIONS(56),
    [anon_sym_ut] = ACTIONS(56),
    [anon_sym_variandum] = ACTIONS(56),
    [anon_sym_variant] = ACTIONS(56),
    [anon_sym_vel] = ACTIONS(56),
    [anon_sym_via] = ACTIONS(56),
    [anon_sym_vide] = ACTIONS(56),
    [anon_sym_warn] = ACTIONS(56),
    [anon_sym_wrapping] = ACTIONS(56),
    [anon_sym_write] = ACTIONS(56),
    [anon_sym_yield] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_falsum] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_verum] = ACTIONS(67),
    [sym_guillemet_string] = ACTIONS(70),
    [sym_octeti_string] = ACTIONS(70),
    [sym_backtick_string] = ACTIONS(70),
    [sym_ascii_string] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [sym_identifier] = ACTIONS(73),
    [sym_operator] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(54),
    [sym_hash] = ACTIONS(54),
    [sym_line_comment] = ACTIONS(54),
    [sym_faber_newline] = ACTIONS(54),
  },
  [4] = {
    [sym_annotation_modifier] = STATE(4),
    [sym_annotation_value_type] = STATE(4),
    [sym__annotation_argument] = STATE(4),
    [sym_keyword_declaration] = STATE(4),
    [sym_keyword_other] = STATE(4),
    [sym_boolean] = STATE(4),
    [aux_sym_annotation_arguments_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_at_sign] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_cli] = ACTIONS(78),
    [anon_sym_conversio] = ACTIONS(78),
    [anon_sym_conversion] = ACTIONS(78),
    [anon_sym_cursor] = ACTIONS(81),
    [anon_sym_fragment] = ACTIONS(78),
    [anon_sym_futura] = ACTIONS(78),
    [anon_sym_imperium] = ACTIONS(78),
    [anon_sym_json] = ACTIONS(81),
    [anon_sym_nondum] = ACTIONS(78),
    [anon_sym_nucleum] = ACTIONS(78),
    [anon_sym_operandus] = ACTIONS(78),
    [anon_sym_optio] = ACTIONS(78),
    [anon_sym_privata] = ACTIONS(83),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_protecta] = ACTIONS(83),
    [anon_sym_protected] = ACTIONS(83),
    [anon_sym_public] = ACTIONS(83),
    [anon_sym_publica] = ACTIONS(83),
    [anon_sym_radix] = ACTIONS(78),
    [anon_sym_verte] = ACTIONS(78),
    [anon_sym_vertex] = ACTIONS(78),
    [anon_sym_brevis] = ACTIONS(86),
    [anon_sym_descriptio] = ACTIONS(86),
    [anon_sym_description] = ACTIONS(86),
    [anon_sym_global] = ACTIONS(86),
    [anon_sym_lane] = ACTIONS(86),
    [anon_sym_long] = ACTIONS(86),
    [anon_sym_longum] = ACTIONS(86),
    [anon_sym_name] = ACTIONS(86),
    [anon_sym_nomen] = ACTIONS(86),
    [anon_sym_short] = ACTIONS(86),
    [anon_sym_ubique] = ACTIONS(86),
    [anon_sym_ascii] = ACTIONS(89),
    [anon_sym_bivalens] = ACTIONS(89),
    [anon_sym_bool] = ACTIONS(89),
    [anon_sym_byte] = ACTIONS(89),
    [anon_sym_bytes] = ACTIONS(89),
    [anon_sym_char] = ACTIONS(89),
    [anon_sym_copia] = ACTIONS(89),
    [anon_sym_cursor_t] = ACTIONS(89),
    [anon_sym_exactus] = ACTIONS(89),
    [anon_sym_f16] = ACTIONS(89),
    [anon_sym_f32] = ACTIONS(89),
    [anon_sym_f64] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(89),
    [anon_sym_fractus] = ACTIONS(89),
    [anon_sym_i16] = ACTIONS(89),
    [anon_sym_i32] = ACTIONS(89),
    [anon_sym_i64] = ACTIONS(89),
    [anon_sym_i8] = ACTIONS(89),
    [anon_sym_ignotum] = ACTIONS(89),
    [anon_sym_instans] = ACTIONS(89),
    [anon_sym_instant] = ACTIONS(89),
    [anon_sym_int] = ACTIONS(89),
    [anon_sym_intervallum] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_lf16] = ACTIONS(89),
    [anon_sym_lf32] = ACTIONS(89),
    [anon_sym_lf64] = ACTIONS(89),
    [anon_sym_li16] = ACTIONS(89),
    [anon_sym_li32] = ACTIONS(89),
    [anon_sym_li64] = ACTIONS(89),
    [anon_sym_li8] = ACTIONS(89),
    [anon_sym_list] = ACTIONS(89),
    [anon_sym_lista] = ACTIONS(89),
    [anon_sym_littera] = ACTIONS(89),
    [anon_sym_lu16] = ACTIONS(89),
    [anon_sym_lu32] = ACTIONS(89),
    [anon_sym_lu64] = ACTIONS(89),
    [anon_sym_lu8] = ACTIONS(89),
    [anon_sym_map] = ACTIONS(89),
    [anon_sym_matrix] = ACTIONS(89),
    [anon_sym_mf16] = ACTIONS(89),
    [anon_sym_mf32] = ACTIONS(89),
    [anon_sym_mf64] = ACTIONS(89),
    [anon_sym_mi16] = ACTIONS(89),
    [anon_sym_mi32] = ACTIONS(89),
    [anon_sym_mi64] = ACTIONS(89),
    [anon_sym_mi8] = ACTIONS(89),
    [anon_sym_mu16] = ACTIONS(89),
    [anon_sym_mu32] = ACTIONS(89),
    [anon_sym_mu64] = ACTIONS(89),
    [anon_sym_mu8] = ACTIONS(89),
    [anon_sym_never] = ACTIONS(89),
    [anon_sym_numerus] = ACTIONS(89),
    [anon_sym_numquam] = ACTIONS(89),
    [anon_sym_octeti] = ACTIONS(89),
    [anon_sym_octetus] = ACTIONS(89),
    [anon_sym_promise] = ACTIONS(89),
    [anon_sym_promissum] = ACTIONS(89),
    [anon_sym_queue] = ACTIONS(89),
    [anon_sym_ratio] = ACTIONS(89),
    [anon_sym_record] = ACTIONS(89),
    [anon_sym_regex] = ACTIONS(89),
    [anon_sym_saturating] = ACTIONS(89),
    [anon_sym_saturatus] = ACTIONS(89),
    [anon_sym_series] = ACTIONS(89),
    [anon_sym_set] = ACTIONS(89),
    [anon_sym_sf16] = ACTIONS(89),
    [anon_sym_sf32] = ACTIONS(89),
    [anon_sym_sf64] = ACTIONS(89),
    [anon_sym_si16] = ACTIONS(89),
    [anon_sym_si32] = ACTIONS(89),
    [anon_sym_si64] = ACTIONS(89),
    [anon_sym_si8] = ACTIONS(89),
    [anon_sym_sparsa] = ACTIONS(89),
    [anon_sym_stack] = ACTIONS(89),
    [anon_sym_string] = ACTIONS(89),
    [anon_sym_su16] = ACTIONS(89),
    [anon_sym_su32] = ACTIONS(89),
    [anon_sym_su64] = ACTIONS(89),
    [anon_sym_su8] = ACTIONS(89),
    [anon_sym_tabula] = ACTIONS(89),
    [anon_sym_tensor] = ACTIONS(89),
    [anon_sym_textus] = ACTIONS(89),
    [anon_sym_tf16] = ACTIONS(89),
    [anon_sym_tf32] = ACTIONS(89),
    [anon_sym_tf64] = ACTIONS(89),
    [anon_sym_ti16] = ACTIONS(89),
    [anon_sym_ti32] = ACTIONS(89),
    [anon_sym_ti64] = ACTIONS(89),
    [anon_sym_ti8] = ACTIONS(89),
    [anon_sym_trapping] = ACTIONS(89),
    [anon_sym_tu16] = ACTIONS(89),
    [anon_sym_tu32] = ACTIONS(89),
    [anon_sym_tu64] = ACTIONS(89),
    [anon_sym_tu8] = ACTIONS(89),
    [anon_sym_u16] = ACTIONS(89),
    [anon_sym_u32] = ACTIONS(89),
    [anon_sym_u64] = ACTIONS(89),
    [anon_sym_u8] = ACTIONS(89),
    [anon_sym_unio] = ACTIONS(89),
    [anon_sym_unknown] = ACTIONS(89),
    [anon_sym_vacua] = ACTIONS(89),
    [anon_sym_vacuum] = ACTIONS(89),
    [anon_sym_valor] = ACTIONS(89),
    [anon_sym_vector] = ACTIONS(89),
    [anon_sym_vf16] = ACTIONS(89),
    [anon_sym_vf32] = ACTIONS(89),
    [anon_sym_vf64] = ACTIONS(89),
    [anon_sym_vi16] = ACTIONS(89),
    [anon_sym_vi32] = ACTIONS(89),
    [anon_sym_vi64] = ACTIONS(89),
    [anon_sym_vi8] = ACTIONS(89),
    [anon_sym_void] = ACTIONS(89),
    [anon_sym_vu16] = ACTIONS(89),
    [anon_sym_vu32] = ACTIONS(89),
    [anon_sym_vu64] = ACTIONS(89),
    [anon_sym_vu8] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(76),
    [anon_sym_BANG_DOT] = ACTIONS(76),
    [anon_sym_ad] = ACTIONS(81),
    [anon_sym_adfirma] = ACTIONS(81),
    [anon_sym_apud] = ACTIONS(81),
    [anon_sym_args] = ACTIONS(81),
    [anon_sym_argumenta] = ACTIONS(81),
    [anon_sym_assert] = ACTIONS(81),
    [anon_sym_async_main] = ACTIONS(81),
    [anon_sym_at] = ACTIONS(81),
    [anon_sym_break] = ACTIONS(81),
    [anon_sym_call] = ACTIONS(81),
    [anon_sym_cape] = ACTIONS(81),
    [anon_sym_capta] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(81),
    [anon_sym_casu] = ACTIONS(81),
    [anon_sym_catch] = ACTIONS(81),
    [anon_sym_ceterum] = ACTIONS(81),
    [anon_sym_continue] = ACTIONS(81),
    [anon_sym_custodi] = ACTIONS(81),
    [anon_sym_default] = ACTIONS(81),
    [anon_sym_discerne] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_dum] = ACTIONS(81),
    [anon_sym_elif] = ACTIONS(81),
    [anon_sym_elige] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_ergo] = ACTIONS(81),
    [anon_sym_fac] = ACTIONS(81),
    [anon_sym_for] = ACTIONS(81),
    [anon_sym_guard] = ACTIONS(81),
    [anon_sym_iace] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_incipiet] = ACTIONS(81),
    [anon_sym_incipit] = ACTIONS(81),
    [anon_sym_itera] = ACTIONS(81),
    [anon_sym_main] = ACTIONS(81),
    [anon_sym_match] = ACTIONS(81),
    [anon_sym_mori] = ACTIONS(81),
    [anon_sym_panic] = ACTIONS(81),
    [anon_sym_pass] = ACTIONS(81),
    [anon_sym_perge] = ACTIONS(81),
    [anon_sym_redde] = ACTIONS(81),
    [anon_sym_reice] = ACTIONS(81),
    [anon_sym_reject] = ACTIONS(81),
    [anon_sym_require] = ACTIONS(81),
    [anon_sym_requirit] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(81),
    [anon_sym_rumpe] = ACTIONS(81),
    [anon_sym_secus] = ACTIONS(81),
    [anon_sym_si] = ACTIONS(81),
    [anon_sym_sic] = ACTIONS(81),
    [anon_sym_sin] = ACTIONS(81),
    [anon_sym_switch] = ACTIONS(81),
    [anon_sym_tacet] = ACTIONS(81),
    [anon_sym_then] = ACTIONS(81),
    [anon_sym_throw] = ACTIONS(81),
    [anon_sym_trap] = ACTIONS(81),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_yields] = ACTIONS(81),
    [anon_sym_ceteri] = ACTIONS(83),
    [anon_sym_class] = ACTIONS(83),
    [anon_sym_column] = ACTIONS(83),
    [anon_sym_columna] = ACTIONS(83),
    [anon_sym_const] = ACTIONS(83),
    [anon_sym_discretio] = ACTIONS(83),
    [anon_sym_enum] = ACTIONS(83),
    [anon_sym_errata] = ACTIONS(83),
    [anon_sym_errors] = ACTIONS(83),
    [anon_sym_exit] = ACTIONS(83),
    [anon_sym_exitus] = ACTIONS(83),
    [anon_sym_fixum] = ACTIONS(83),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_functio] = ACTIONS(83),
    [anon_sym_generis] = ACTIONS(83),
    [anon_sym_genus] = ACTIONS(83),
    [anon_sym_iacit] = ACTIONS(83),
    [anon_sym_immutata] = ACTIONS(83),
    [anon_sym_implendum] = ACTIONS(83),
    [anon_sym_import] = ACTIONS(83),
    [anon_sym_importa] = ACTIONS(83),
    [anon_sym_interface] = ACTIONS(83),
    [anon_sym_interna] = ACTIONS(83),
    [anon_sym_internal] = ACTIONS(83),
    [anon_sym_iuncta] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_magnitudo] = ACTIONS(83),
    [anon_sym_optional] = ACTIONS(83),
    [anon_sym_optiones] = ACTIONS(83),
    [anon_sym_options] = ACTIONS(83),
    [anon_sym_ordo] = ACTIONS(83),
    [anon_sym_prae] = ACTIONS(83),
    [anon_sym_readonly] = ACTIONS(83),
    [anon_sym_rest] = ACTIONS(83),
    [anon_sym_schema] = ACTIONS(83),
    [anon_sym_sit] = ACTIONS(83),
    [anon_sym_size] = ACTIONS(83),
    [anon_sym_sponte] = ACTIONS(83),
    [anon_sym_static] = ACTIONS(83),
    [anon_sym_throws] = ACTIONS(83),
    [anon_sym_tuple] = ACTIONS(83),
    [anon_sym_type] = ACTIONS(83),
    [anon_sym_typus] = ACTIONS(83),
    [anon_sym_union] = ACTIONS(83),
    [anon_sym_var] = ACTIONS(83),
    [anon_sym_varia] = ACTIONS(83),
    [anon_sym_ab] = ACTIONS(78),
    [anon_sym_all] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(78),
    [anon_sym_ante] = ACTIONS(78),
    [anon_sym_as] = ACTIONS(78),
    [anon_sym_async] = ACTIONS(78),
    [anon_sym_async_generator] = ACTIONS(78),
    [anon_sym_async_setup] = ACTIONS(78),
    [anon_sym_async_teardown] = ACTIONS(78),
    [anon_sym_aut] = ACTIONS(78),
    [anon_sym_await] = ACTIONS(78),
    [anon_sym_await_const] = ACTIONS(78),
    [anon_sym_await_var] = ACTIONS(78),
    [anon_sym_before] = ACTIONS(78),
    [anon_sym_bench] = ACTIONS(78),
    [anon_sym_cede] = ACTIONS(78),
    [anon_sym_clausura] = ACTIONS(78),
    [anon_sym_coalesce] = ACTIONS(78),
    [anon_sym_comptime] = ACTIONS(78),
    [anon_sym_copy] = ACTIONS(78),
    [anon_sym_de] = ACTIONS(78),
    [anon_sym_debug] = ACTIONS(78),
    [anon_sym_describe] = ACTIONS(78),
    [anon_sym_ego] = ACTIONS(78),
    [anon_sym_embed] = ACTIONS(78),
    [anon_sym_erratur] = ACTIONS(78),
    [anon_sym_est] = ACTIONS(78),
    [anon_sym_et] = ACTIONS(78),
    [anon_sym_ex] = ACTIONS(78),
    [anon_sym_exemplum] = ACTIONS(78),
    [anon_sym_expect_failure] = ACTIONS(78),
    [anon_sym_fient] = ACTIONS(78),
    [anon_sym_fiet] = ACTIONS(78),
    [anon_sym_figendum] = ACTIONS(78),
    [anon_sym_finge] = ACTIONS(78),
    [anon_sym_fiunt] = ACTIONS(78),
    [anon_sym_flaky] = ACTIONS(78),
    [anon_sym_format] = ACTIONS(78),
    [anon_sym_fragilis] = ACTIONS(78),
    [anon_sym_from] = ACTIONS(78),
    [anon_sym_futurum] = ACTIONS(78),
    [anon_sym_generator] = ACTIONS(78),
    [anon_sym_implements] = ACTIONS(78),
    [anon_sym_implet] = ACTIONS(78),
    [anon_sym_in] = ACTIONS(78),
    [anon_sym_insere] = ACTIONS(78),
    [anon_sym_is] = ACTIONS(78),
    [anon_sym_lambda] = ACTIONS(78),
    [anon_sym_lege] = ACTIONS(78),
    [anon_sym_line] = ACTIONS(78),
    [anon_sym_lineam] = ACTIONS(78),
    [anon_sym_metior] = ACTIONS(78),
    [anon_sym_modulus] = ACTIONS(78),
    [anon_sym_mone] = ACTIONS(78),
    [anon_sym_mut] = ACTIONS(78),
    [anon_sym_negative] = ACTIONS(78),
    [anon_sym_negativum] = ACTIONS(78),
    [anon_sym_nihil] = ACTIONS(78),
    [anon_sym_non] = ACTIONS(78),
    [anon_sym_none] = ACTIONS(78),
    [anon_sym_nonnihil] = ACTIONS(78),
    [anon_sym_nonnulla] = ACTIONS(78),
    [anon_sym_not] = ACTIONS(78),
    [anon_sym_nota] = ACTIONS(78),
    [anon_sym_null] = ACTIONS(78),
    [anon_sym_nulla] = ACTIONS(78),
    [anon_sym_omitte] = ACTIONS(78),
    [anon_sym_omnia] = ACTIONS(78),
    [anon_sym_only] = ACTIONS(78),
    [anon_sym_only_in] = ACTIONS(78),
    [anon_sym_or] = ACTIONS(78),
    [anon_sym_own] = ACTIONS(78),
    [anon_sym_penes] = ACTIONS(78),
    [anon_sym_per] = ACTIONS(78),
    [anon_sym_positive] = ACTIONS(78),
    [anon_sym_positivum] = ACTIONS(78),
    [anon_sym_postpara] = ACTIONS(78),
    [anon_sym_postparabit] = ACTIONS(78),
    [anon_sym_praefixum] = ACTIONS(78),
    [anon_sym_praepara] = ACTIONS(78),
    [anon_sym_praeparabit] = ACTIONS(78),
    [anon_sym_print] = ACTIONS(78),
    [anon_sym_proba] = ACTIONS(78),
    [anon_sym_probandum] = ACTIONS(78),
    [anon_sym_range] = ACTIONS(78),
    [anon_sym_read] = ACTIONS(78),
    [anon_sym_reddet] = ACTIONS(78),
    [anon_sym_ref] = ACTIONS(78),
    [anon_sym_repeat] = ACTIONS(78),
    [anon_sym_repete] = ACTIONS(78),
    [anon_sym_return_await] = ACTIONS(78),
    [anon_sym_scribe] = ACTIONS(78),
    [anon_sym_scriptum] = ACTIONS(78),
    [anon_sym_self] = ACTIONS(78),
    [anon_sym_setup] = ACTIONS(78),
    [anon_sym_skip] = ACTIONS(78),
    [anon_sym_solum] = ACTIONS(78),
    [anon_sym_solum_in] = ACTIONS(78),
    [anon_sym_some] = ACTIONS(78),
    [anon_sym_sparge] = ACTIONS(78),
    [anon_sym_spread] = ACTIONS(78),
    [anon_sym_step] = ACTIONS(78),
    [anon_sym_tacebit] = ACTIONS(78),
    [anon_sym_tag] = ACTIONS(78),
    [anon_sym_teardown] = ACTIONS(78),
    [anon_sym_temporis] = ACTIONS(78),
    [anon_sym_test] = ACTIONS(78),
    [anon_sym_timeout] = ACTIONS(78),
    [anon_sym_todo] = ACTIONS(78),
    [anon_sym_until] = ACTIONS(78),
    [anon_sym_usque] = ACTIONS(78),
    [anon_sym_ut] = ACTIONS(78),
    [anon_sym_variandum] = ACTIONS(78),
    [anon_sym_variant] = ACTIONS(78),
    [anon_sym_vel] = ACTIONS(78),
    [anon_sym_via] = ACTIONS(78),
    [anon_sym_vide] = ACTIONS(78),
    [anon_sym_warn] = ACTIONS(78),
    [anon_sym_wrapping] = ACTIONS(78),
    [anon_sym_write] = ACTIONS(78),
    [anon_sym_yield] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(92),
    [anon_sym_falsum] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_verum] = ACTIONS(92),
    [sym_guillemet_string] = ACTIONS(95),
    [sym_octeti_string] = ACTIONS(95),
    [sym_backtick_string] = ACTIONS(95),
    [sym_ascii_string] = ACTIONS(95),
    [sym_string] = ACTIONS(95),
    [sym_number] = ACTIONS(95),
    [sym_identifier] = ACTIONS(98),
    [sym_operator] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(76),
    [sym_hash] = ACTIONS(76),
    [sym_line_comment] = ACTIONS(76),
    [sym_faber_newline] = ACTIONS(76),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_at_sign] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_cli] = ACTIONS(103),
    [anon_sym_conversio] = ACTIONS(103),
    [anon_sym_conversion] = ACTIONS(103),
    [anon_sym_cursor] = ACTIONS(103),
    [anon_sym_fragment] = ACTIONS(103),
    [anon_sym_futura] = ACTIONS(103),
    [anon_sym_imperium] = ACTIONS(103),
    [anon_sym_json] = ACTIONS(103),
    [anon_sym_nondum] = ACTIONS(103),
    [anon_sym_nucleum] = ACTIONS(103),
    [anon_sym_operandus] = ACTIONS(103),
    [anon_sym_optio] = ACTIONS(103),
    [anon_sym_privata] = ACTIONS(103),
    [anon_sym_private] = ACTIONS(103),
    [anon_sym_protecta] = ACTIONS(103),
    [anon_sym_protected] = ACTIONS(103),
    [anon_sym_public] = ACTIONS(103),
    [anon_sym_publica] = ACTIONS(103),
    [anon_sym_radix] = ACTIONS(103),
    [anon_sym_verte] = ACTIONS(103),
    [anon_sym_vertex] = ACTIONS(103),
    [anon_sym_brevis] = ACTIONS(103),
    [anon_sym_descriptio] = ACTIONS(103),
    [anon_sym_description] = ACTIONS(103),
    [anon_sym_global] = ACTIONS(103),
    [anon_sym_lane] = ACTIONS(103),
    [anon_sym_long] = ACTIONS(103),
    [anon_sym_longum] = ACTIONS(103),
    [anon_sym_name] = ACTIONS(103),
    [anon_sym_nomen] = ACTIONS(103),
    [anon_sym_short] = ACTIONS(103),
    [anon_sym_ubique] = ACTIONS(103),
    [anon_sym_ascii] = ACTIONS(103),
    [anon_sym_bivalens] = ACTIONS(103),
    [anon_sym_bool] = ACTIONS(103),
    [anon_sym_byte] = ACTIONS(103),
    [anon_sym_bytes] = ACTIONS(103),
    [anon_sym_char] = ACTIONS(103),
    [anon_sym_copia] = ACTIONS(103),
    [anon_sym_cursor_t] = ACTIONS(103),
    [anon_sym_exactus] = ACTIONS(103),
    [anon_sym_f16] = ACTIONS(103),
    [anon_sym_f32] = ACTIONS(103),
    [anon_sym_f64] = ACTIONS(103),
    [anon_sym_float] = ACTIONS(103),
    [anon_sym_fractus] = ACTIONS(103),
    [anon_sym_i16] = ACTIONS(103),
    [anon_sym_i32] = ACTIONS(103),
    [anon_sym_i64] = ACTIONS(103),
    [anon_sym_i8] = ACTIONS(103),
    [anon_sym_ignotum] = ACTIONS(103),
    [anon_sym_instans] = ACTIONS(103),
    [anon_sym_instant] = ACTIONS(103),
    [anon_sym_int] = ACTIONS(103),
    [anon_sym_intervallum] = ACTIONS(103),
    [anon_sym_iterator] = ACTIONS(103),
    [anon_sym_lf16] = ACTIONS(103),
    [anon_sym_lf32] = ACTIONS(103),
    [anon_sym_lf64] = ACTIONS(103),
    [anon_sym_li16] = ACTIONS(103),
    [anon_sym_li32] = ACTIONS(103),
    [anon_sym_li64] = ACTIONS(103),
    [anon_sym_li8] = ACTIONS(103),
    [anon_sym_list] = ACTIONS(103),
    [anon_sym_lista] = ACTIONS(103),
    [anon_sym_littera] = ACTIONS(103),
    [anon_sym_lu16] = ACTIONS(103),
    [anon_sym_lu32] = ACTIONS(103),
    [anon_sym_lu64] = ACTIONS(103),
    [anon_sym_lu8] = ACTIONS(103),
    [anon_sym_map] = ACTIONS(103),
    [anon_sym_matrix] = ACTIONS(103),
    [anon_sym_mf16] = ACTIONS(103),
    [anon_sym_mf32] = ACTIONS(103),
    [anon_sym_mf64] = ACTIONS(103),
    [anon_sym_mi16] = ACTIONS(103),
    [anon_sym_mi32] = ACTIONS(103),
    [anon_sym_mi64] = ACTIONS(103),
    [anon_sym_mi8] = ACTIONS(103),
    [anon_sym_mu16] = ACTIONS(103),
    [anon_sym_mu32] = ACTIONS(103),
    [anon_sym_mu64] = ACTIONS(103),
    [anon_sym_mu8] = ACTIONS(103),
    [anon_sym_never] = ACTIONS(103),
    [anon_sym_numerus] = ACTIONS(103),
    [anon_sym_numquam] = ACTIONS(103),
    [anon_sym_octeti] = ACTIONS(103),
    [anon_sym_octetus] = ACTIONS(103),
    [anon_sym_promise] = ACTIONS(103),
    [anon_sym_promissum] = ACTIONS(103),
    [anon_sym_queue] = ACTIONS(103),
    [anon_sym_ratio] = ACTIONS(103),
    [anon_sym_record] = ACTIONS(103),
    [anon_sym_regex] = ACTIONS(103),
    [anon_sym_saturating] = ACTIONS(103),
    [anon_sym_saturatus] = ACTIONS(103),
    [anon_sym_series] = ACTIONS(103),
    [anon_sym_set] = ACTIONS(103),
    [anon_sym_sf16] = ACTIONS(103),
    [anon_sym_sf32] = ACTIONS(103),
    [anon_sym_sf64] = ACTIONS(103),
    [anon_sym_si16] = ACTIONS(103),
    [anon_sym_si32] = ACTIONS(103),
    [anon_sym_si64] = ACTIONS(103),
    [anon_sym_si8] = ACTIONS(103),
    [anon_sym_sparsa] = ACTIONS(103),
    [anon_sym_stack] = ACTIONS(103),
    [anon_sym_string] = ACTIONS(103),
    [anon_sym_su16] = ACTIONS(103),
    [anon_sym_su32] = ACTIONS(103),
    [anon_sym_su64] = ACTIONS(103),
    [anon_sym_su8] = ACTIONS(103),
    [anon_sym_tabula] = ACTIONS(103),
    [anon_sym_tensor] = ACTIONS(103),
    [anon_sym_textus] = ACTIONS(103),
    [anon_sym_tf16] = ACTIONS(103),
    [anon_sym_tf32] = ACTIONS(103),
    [anon_sym_tf64] = ACTIONS(103),
    [anon_sym_ti16] = ACTIONS(103),
    [anon_sym_ti32] = ACTIONS(103),
    [anon_sym_ti64] = ACTIONS(103),
    [anon_sym_ti8] = ACTIONS(103),
    [anon_sym_trapping] = ACTIONS(103),
    [anon_sym_tu16] = ACTIONS(103),
    [anon_sym_tu32] = ACTIONS(103),
    [anon_sym_tu64] = ACTIONS(103),
    [anon_sym_tu8] = ACTIONS(103),
    [anon_sym_u16] = ACTIONS(103),
    [anon_sym_u32] = ACTIONS(103),
    [anon_sym_u64] = ACTIONS(103),
    [anon_sym_u8] = ACTIONS(103),
    [anon_sym_unio] = ACTIONS(103),
    [anon_sym_unknown] = ACTIONS(103),
    [anon_sym_vacua] = ACTIONS(103),
    [anon_sym_vacuum] = ACTIONS(103),
    [anon_sym_valor] = ACTIONS(103),
    [anon_sym_vector] = ACTIONS(103),
    [anon_sym_vf16] = ACTIONS(103),
    [anon_sym_vf32] = ACTIONS(103),
    [anon_sym_vf64] = ACTIONS(103),
    [anon_sym_vi16] = ACTIONS(103),
    [anon_sym_vi32] = ACTIONS(103),
    [anon_sym_vi64] = ACTIONS(103),
    [anon_sym_vi8] = ACTIONS(103),
    [anon_sym_void] = ACTIONS(103),
    [anon_sym_vu16] = ACTIONS(103),
    [anon_sym_vu32] = ACTIONS(103),
    [anon_sym_vu64] = ACTIONS(103),
    [anon_sym_vu8] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_QMARK_DOT] = ACTIONS(101),
    [anon_sym_BANG_DOT] = ACTIONS(101),
    [anon_sym_ad] = ACTIONS(103),
    [anon_sym_adfirma] = ACTIONS(103),
    [anon_sym_apud] = ACTIONS(103),
    [anon_sym_args] = ACTIONS(103),
    [anon_sym_argumenta] = ACTIONS(103),
    [anon_sym_assert] = ACTIONS(103),
    [anon_sym_async_main] = ACTIONS(103),
    [anon_sym_at] = ACTIONS(103),
    [anon_sym_break] = ACTIONS(103),
    [anon_sym_call] = ACTIONS(103),
    [anon_sym_cape] = ACTIONS(103),
    [anon_sym_capta] = ACTIONS(103),
    [anon_sym_case] = ACTIONS(103),
    [anon_sym_casu] = ACTIONS(103),
    [anon_sym_catch] = ACTIONS(103),
    [anon_sym_ceterum] = ACTIONS(103),
    [anon_sym_continue] = ACTIONS(103),
    [anon_sym_custodi] = ACTIONS(103),
    [anon_sym_default] = ACTIONS(103),
    [anon_sym_discerne] = ACTIONS(103),
    [anon_sym_do] = ACTIONS(103),
    [anon_sym_dum] = ACTIONS(103),
    [anon_sym_elif] = ACTIONS(103),
    [anon_sym_elige] = ACTIONS(103),
    [anon_sym_else] = ACTIONS(103),
    [anon_sym_ergo] = ACTIONS(103),
    [anon_sym_fac] = ACTIONS(103),
    [anon_sym_for] = ACTIONS(103),
    [anon_sym_guard] = ACTIONS(103),
    [anon_sym_iace] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_incipiet] = ACTIONS(103),
    [anon_sym_incipit] = ACTIONS(103),
    [anon_sym_itera] = ACTIONS(103),
    [anon_sym_main] = ACTIONS(103),
    [anon_sym_match] = ACTIONS(103),
    [anon_sym_mori] = ACTIONS(103),
    [anon_sym_panic] = ACTIONS(103),
    [anon_sym_pass] = ACTIONS(103),
    [anon_sym_perge] = ACTIONS(103),
    [anon_sym_redde] = ACTIONS(103),
    [anon_sym_reice] = ACTIONS(103),
    [anon_sym_reject] = ACTIONS(103),
    [anon_sym_require] = ACTIONS(103),
    [anon_sym_requirit] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_rumpe] = ACTIONS(103),
    [anon_sym_secus] = ACTIONS(103),
    [anon_sym_si] = ACTIONS(103),
    [anon_sym_sic] = ACTIONS(103),
    [anon_sym_sin] = ACTIONS(103),
    [anon_sym_switch] = ACTIONS(103),
    [anon_sym_tacet] = ACTIONS(103),
    [anon_sym_then] = ACTIONS(103),
    [anon_sym_throw] = ACTIONS(103),
    [anon_sym_trap] = ACTIONS(103),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_yields] = ACTIONS(103),
    [anon_sym_ceteri] = ACTIONS(103),
    [anon_sym_class] = ACTIONS(103),
    [anon_sym_column] = ACTIONS(103),
    [anon_sym_columna] = ACTIONS(103),
    [anon_sym_const] = ACTIONS(103),
    [anon_sym_discretio] = ACTIONS(103),
    [anon_sym_enum] = ACTIONS(103),
    [anon_sym_errata] = ACTIONS(103),
    [anon_sym_errors] = ACTIONS(103),
    [anon_sym_exit] = ACTIONS(103),
    [anon_sym_exitus] = ACTIONS(103),
    [anon_sym_fixum] = ACTIONS(103),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_functio] = ACTIONS(103),
    [anon_sym_generis] = ACTIONS(103),
    [anon_sym_genus] = ACTIONS(103),
    [anon_sym_iacit] = ACTIONS(103),
    [anon_sym_immutata] = ACTIONS(103),
    [anon_sym_implendum] = ACTIONS(103),
    [anon_sym_import] = ACTIONS(103),
    [anon_sym_importa] = ACTIONS(103),
    [anon_sym_interface] = ACTIONS(103),
    [anon_sym_interna] = ACTIONS(103),
    [anon_sym_internal] = ACTIONS(103),
    [anon_sym_iuncta] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_magnitudo] = ACTIONS(103),
    [anon_sym_optional] = ACTIONS(103),
    [anon_sym_optiones] = ACTIONS(103),
    [anon_sym_options] = ACTIONS(103),
    [anon_sym_ordo] = ACTIONS(103),
    [anon_sym_prae] = ACTIONS(103),
    [anon_sym_readonly] = ACTIONS(103),
    [anon_sym_rest] = ACTIONS(103),
    [anon_sym_schema] = ACTIONS(103),
    [anon_sym_sit] = ACTIONS(103),
    [anon_sym_size] = ACTIONS(103),
    [anon_sym_sponte] = ACTIONS(103),
    [anon_sym_static] = ACTIONS(103),
    [anon_sym_throws] = ACTIONS(103),
    [anon_sym_tuple] = ACTIONS(103),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_typus] = ACTIONS(103),
    [anon_sym_union] = ACTIONS(103),
    [anon_sym_var] = ACTIONS(103),
    [anon_sym_varia] = ACTIONS(103),
    [anon_sym_ab] = ACTIONS(103),
    [anon_sym_all] = ACTIONS(103),
    [anon_sym_and] = ACTIONS(103),
    [anon_sym_ante] = ACTIONS(103),
    [anon_sym_as] = ACTIONS(103),
    [anon_sym_async] = ACTIONS(103),
    [anon_sym_async_generator] = ACTIONS(103),
    [anon_sym_async_setup] = ACTIONS(103),
    [anon_sym_async_teardown] = ACTIONS(103),
    [anon_sym_aut] = ACTIONS(103),
    [anon_sym_await] = ACTIONS(103),
    [anon_sym_await_const] = ACTIONS(103),
    [anon_sym_await_var] = ACTIONS(103),
    [anon_sym_before] = ACTIONS(103),
    [anon_sym_bench] = ACTIONS(103),
    [anon_sym_cede] = ACTIONS(103),
    [anon_sym_clausura] = ACTIONS(103),
    [anon_sym_coalesce] = ACTIONS(103),
    [anon_sym_comptime] = ACTIONS(103),
    [anon_sym_copy] = ACTIONS(103),
    [anon_sym_de] = ACTIONS(103),
    [anon_sym_debug] = ACTIONS(103),
    [anon_sym_describe] = ACTIONS(103),
    [anon_sym_ego] = ACTIONS(103),
    [anon_sym_embed] = ACTIONS(103),
    [anon_sym_erratur] = ACTIONS(103),
    [anon_sym_est] = ACTIONS(103),
    [anon_sym_et] = ACTIONS(103),
    [anon_sym_ex] = ACTIONS(103),
    [anon_sym_exemplum] = ACTIONS(103),
    [anon_sym_expect_failure] = ACTIONS(103),
    [anon_sym_fient] = ACTIONS(103),
    [anon_sym_fiet] = ACTIONS(103),
    [anon_sym_figendum] = ACTIONS(103),
    [anon_sym_finge] = ACTIONS(103),
    [anon_sym_fiunt] = ACTIONS(103),
    [anon_sym_flaky] = ACTIONS(103),
    [anon_sym_format] = ACTIONS(103),
    [anon_sym_fragilis] = ACTIONS(103),
    [anon_sym_from] = ACTIONS(103),
    [anon_sym_futurum] = ACTIONS(103),
    [anon_sym_generator] = ACTIONS(103),
    [anon_sym_implements] = ACTIONS(103),
    [anon_sym_implet] = ACTIONS(103),
    [anon_sym_in] = ACTIONS(103),
    [anon_sym_insere] = ACTIONS(103),
    [anon_sym_is] = ACTIONS(103),
    [anon_sym_lambda] = ACTIONS(103),
    [anon_sym_lege] = ACTIONS(103),
    [anon_sym_line] = ACTIONS(103),
    [anon_sym_lineam] = ACTIONS(103),
    [anon_sym_metior] = ACTIONS(103),
    [anon_sym_modulus] = ACTIONS(103),
    [anon_sym_mone] = ACTIONS(103),
    [anon_sym_mut] = ACTIONS(103),
    [anon_sym_negative] = ACTIONS(103),
    [anon_sym_negativum] = ACTIONS(103),
    [anon_sym_nihil] = ACTIONS(103),
    [anon_sym_non] = ACTIONS(103),
    [anon_sym_none] = ACTIONS(103),
    [anon_sym_nonnihil] = ACTIONS(103),
    [anon_sym_nonnulla] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(103),
    [anon_sym_nota] = ACTIONS(103),
    [anon_sym_null] = ACTIONS(103),
    [anon_sym_nulla] = ACTIONS(103),
    [anon_sym_omitte] = ACTIONS(103),
    [anon_sym_omnia] = ACTIONS(103),
    [anon_sym_only] = ACTIONS(103),
    [anon_sym_only_in] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(103),
    [anon_sym_own] = ACTIONS(103),
    [anon_sym_penes] = ACTIONS(103),
    [anon_sym_per] = ACTIONS(103),
    [anon_sym_positive] = ACTIONS(103),
    [anon_sym_positivum] = ACTIONS(103),
    [anon_sym_postpara] = ACTIONS(103),
    [anon_sym_postparabit] = ACTIONS(103),
    [anon_sym_praefixum] = ACTIONS(103),
    [anon_sym_praepara] = ACTIONS(103),
    [anon_sym_praeparabit] = ACTIONS(103),
    [anon_sym_print] = ACTIONS(103),
    [anon_sym_proba] = ACTIONS(103),
    [anon_sym_probandum] = ACTIONS(103),
    [anon_sym_range] = ACTIONS(103),
    [anon_sym_read] = ACTIONS(103),
    [anon_sym_reddet] = ACTIONS(103),
    [anon_sym_ref] = ACTIONS(103),
    [anon_sym_repeat] = ACTIONS(103),
    [anon_sym_repete] = ACTIONS(103),
    [anon_sym_return_await] = ACTIONS(103),
    [anon_sym_scribe] = ACTIONS(103),
    [anon_sym_scriptum] = ACTIONS(103),
    [anon_sym_self] = ACTIONS(103),
    [anon_sym_setup] = ACTIONS(103),
    [anon_sym_skip] = ACTIONS(103),
    [anon_sym_solum] = ACTIONS(103),
    [anon_sym_solum_in] = ACTIONS(103),
    [anon_sym_some] = ACTIONS(103),
    [anon_sym_sparge] = ACTIONS(103),
    [anon_sym_spread] = ACTIONS(103),
    [anon_sym_step] = ACTIONS(103),
    [anon_sym_tacebit] = ACTIONS(103),
    [anon_sym_tag] = ACTIONS(103),
    [anon_sym_teardown] = ACTIONS(103),
    [anon_sym_temporis] = ACTIONS(103),
    [anon_sym_test] = ACTIONS(103),
    [anon_sym_timeout] = ACTIONS(103),
    [anon_sym_todo] = ACTIONS(103),
    [anon_sym_until] = ACTIONS(103),
    [anon_sym_usque] = ACTIONS(103),
    [anon_sym_ut] = ACTIONS(103),
    [anon_sym_variandum] = ACTIONS(103),
    [anon_sym_variant] = ACTIONS(103),
    [anon_sym_vel] = ACTIONS(103),
    [anon_sym_via] = ACTIONS(103),
    [anon_sym_vide] = ACTIONS(103),
    [anon_sym_warn] = ACTIONS(103),
    [anon_sym_wrapping] = ACTIONS(103),
    [anon_sym_write] = ACTIONS(103),
    [anon_sym_yield] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_falsum] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_verum] = ACTIONS(103),
    [sym_guillemet_string] = ACTIONS(101),
    [sym_octeti_string] = ACTIONS(101),
    [sym_backtick_string] = ACTIONS(101),
    [sym_ascii_string] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_operator] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_hash] = ACTIONS(101),
    [sym_line_comment] = ACTIONS(101),
    [sym_faber_newline] = ACTIONS(101),
  },
  [6] = {
    [sym_annotation] = STATE(8),
    [sym__token] = STATE(8),
    [sym_member_access] = STATE(8),
    [sym_member_glyph] = STATE(51),
    [sym_keyword_control] = STATE(8),
    [sym_keyword_declaration] = STATE(8),
    [sym_keyword_other] = STATE(8),
    [sym_builtin_type] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_punctuation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cli] = ACTIONS(11),
    [anon_sym_conversio] = ACTIONS(11),
    [anon_sym_conversion] = ACTIONS(11),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_futura] = ACTIONS(11),
    [anon_sym_imperium] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_nondum] = ACTIONS(11),
    [anon_sym_nucleum] = ACTIONS(11),
    [anon_sym_operandus] = ACTIONS(11),
    [anon_sym_optio] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protecta] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_publica] = ACTIONS(15),
    [anon_sym_radix] = ACTIONS(11),
    [anon_sym_verte] = ACTIONS(11),
    [anon_sym_vertex] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_bytes] = ACTIONS(13),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor_t] = ACTIONS(13),
    [anon_sym_exactus] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_instant] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_iterator] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_list] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_littera] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_never] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_octetus] = ACTIONS(13),
    [anon_sym_promise] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_queue] = ACTIONS(13),
    [anon_sym_ratio] = ACTIONS(13),
    [anon_sym_record] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_saturating] = ACTIONS(13),
    [anon_sym_saturatus] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_trapping] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_unknown] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_QMARK_DOT] = ACTIONS(17),
    [anon_sym_BANG_DOT] = ACTIONS(17),
    [anon_sym_ad] = ACTIONS(19),
    [anon_sym_adfirma] = ACTIONS(19),
    [anon_sym_apud] = ACTIONS(19),
    [anon_sym_args] = ACTIONS(19),
    [anon_sym_argumenta] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(19),
    [anon_sym_async_main] = ACTIONS(19),
    [anon_sym_at] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_cape] = ACTIONS(19),
    [anon_sym_capta] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_casu] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_ceterum] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_custodi] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_discerne] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_dum] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_elige] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_ergo] = ACTIONS(19),
    [anon_sym_fac] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_guard] = ACTIONS(19),
    [anon_sym_iace] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_incipiet] = ACTIONS(19),
    [anon_sym_incipit] = ACTIONS(19),
    [anon_sym_itera] = ACTIONS(19),
    [anon_sym_main] = ACTIONS(19),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_mori] = ACTIONS(19),
    [anon_sym_panic] = ACTIONS(19),
    [anon_sym_pass] = ACTIONS(19),
    [anon_sym_perge] = ACTIONS(19),
    [anon_sym_redde] = ACTIONS(19),
    [anon_sym_reice] = ACTIONS(19),
    [anon_sym_reject] = ACTIONS(19),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_requirit] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_rumpe] = ACTIONS(19),
    [anon_sym_secus] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sic] = ACTIONS(19),
    [anon_sym_sin] = ACTIONS(19),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_tacet] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_throw] = ACTIONS(19),
    [anon_sym_trap] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_yields] = ACTIONS(19),
    [anon_sym_ceteri] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(15),
    [anon_sym_column] = ACTIONS(15),
    [anon_sym_columna] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_discretio] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_errata] = ACTIONS(15),
    [anon_sym_errors] = ACTIONS(15),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_exitus] = ACTIONS(15),
    [anon_sym_fixum] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_functio] = ACTIONS(15),
    [anon_sym_generis] = ACTIONS(15),
    [anon_sym_genus] = ACTIONS(15),
    [anon_sym_iacit] = ACTIONS(15),
    [anon_sym_immutata] = ACTIONS(15),
    [anon_sym_implendum] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_importa] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_interna] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_iuncta] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_magnitudo] = ACTIONS(15),
    [anon_sym_optional] = ACTIONS(15),
    [anon_sym_optiones] = ACTIONS(15),
    [anon_sym_options] = ACTIONS(15),
    [anon_sym_ordo] = ACTIONS(15),
    [anon_sym_prae] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(15),
    [anon_sym_rest] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(15),
    [anon_sym_sit] = ACTIONS(15),
    [anon_sym_size] = ACTIONS(15),
    [anon_sym_sponte] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_throws] = ACTIONS(15),
    [anon_sym_tuple] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_typus] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_varia] = ACTIONS(15),
    [anon_sym_ab] = ACTIONS(11),
    [anon_sym_all] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_as] = ACTIONS(11),
    [anon_sym_async] = ACTIONS(11),
    [anon_sym_async_generator] = ACTIONS(11),
    [anon_sym_async_setup] = ACTIONS(11),
    [anon_sym_async_teardown] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_await] = ACTIONS(11),
    [anon_sym_await_const] = ACTIONS(11),
    [anon_sym_await_var] = ACTIONS(11),
    [anon_sym_before] = ACTIONS(11),
    [anon_sym_bench] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_coalesce] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(11),
    [anon_sym_copy] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_debug] = ACTIONS(11),
    [anon_sym_describe] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_embed] = ACTIONS(11),
    [anon_sym_erratur] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_exemplum] = ACTIONS(11),
    [anon_sym_expect_failure] = ACTIONS(11),
    [anon_sym_fient] = ACTIONS(11),
    [anon_sym_fiet] = ACTIONS(11),
    [anon_sym_figendum] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fiunt] = ACTIONS(11),
    [anon_sym_flaky] = ACTIONS(11),
    [anon_sym_format] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_generator] = ACTIONS(11),
    [anon_sym_implements] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_insere] = ACTIONS(11),
    [anon_sym_is] = ACTIONS(11),
    [anon_sym_lambda] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_line] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_mut] = ACTIONS(11),
    [anon_sym_negative] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_nihil] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_none] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_only] = ACTIONS(11),
    [anon_sym_only_in] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_own] = ACTIONS(11),
    [anon_sym_penes] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positive] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_range] = ACTIONS(11),
    [anon_sym_read] = ACTIONS(11),
    [anon_sym_reddet] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_return_await] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_setup] = ACTIONS(11),
    [anon_sym_skip] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_some] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_spread] = ACTIONS(11),
    [anon_sym_step] = ACTIONS(11),
    [anon_sym_tacebit] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_teardown] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(11),
    [anon_sym_timeout] = ACTIONS(11),
    [anon_sym_todo] = ACTIONS(11),
    [anon_sym_until] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_variandum] = ACTIONS(11),
    [anon_sym_variant] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_via] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_warn] = ACTIONS(11),
    [anon_sym_wrapping] = ACTIONS(11),
    [anon_sym_write] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_falsum] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_verum] = ACTIONS(21),
    [sym_guillemet_string] = ACTIONS(107),
    [sym_octeti_string] = ACTIONS(107),
    [sym_backtick_string] = ACTIONS(107),
    [sym_ascii_string] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_operator] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(107),
    [sym_line_comment] = ACTIONS(107),
    [sym_faber_newline] = ACTIONS(107),
  },
  [7] = {
    [sym_annotation] = STATE(8),
    [sym__token] = STATE(8),
    [sym_member_access] = STATE(8),
    [sym_member_glyph] = STATE(51),
    [sym_keyword_control] = STATE(8),
    [sym_keyword_declaration] = STATE(8),
    [sym_keyword_other] = STATE(8),
    [sym_builtin_type] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_punctuation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cli] = ACTIONS(11),
    [anon_sym_conversio] = ACTIONS(11),
    [anon_sym_conversion] = ACTIONS(11),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_futura] = ACTIONS(11),
    [anon_sym_imperium] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_nondum] = ACTIONS(11),
    [anon_sym_nucleum] = ACTIONS(11),
    [anon_sym_operandus] = ACTIONS(11),
    [anon_sym_optio] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protecta] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_publica] = ACTIONS(15),
    [anon_sym_radix] = ACTIONS(11),
    [anon_sym_verte] = ACTIONS(11),
    [anon_sym_vertex] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_bytes] = ACTIONS(13),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor_t] = ACTIONS(13),
    [anon_sym_exactus] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_instant] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_iterator] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_list] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_littera] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_never] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_octetus] = ACTIONS(13),
    [anon_sym_promise] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_queue] = ACTIONS(13),
    [anon_sym_ratio] = ACTIONS(13),
    [anon_sym_record] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_saturating] = ACTIONS(13),
    [anon_sym_saturatus] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_trapping] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_unknown] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_QMARK_DOT] = ACTIONS(17),
    [anon_sym_BANG_DOT] = ACTIONS(17),
    [anon_sym_ad] = ACTIONS(19),
    [anon_sym_adfirma] = ACTIONS(19),
    [anon_sym_apud] = ACTIONS(19),
    [anon_sym_args] = ACTIONS(19),
    [anon_sym_argumenta] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(19),
    [anon_sym_async_main] = ACTIONS(19),
    [anon_sym_at] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_cape] = ACTIONS(19),
    [anon_sym_capta] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_casu] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_ceterum] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_custodi] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_discerne] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_dum] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_elige] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_ergo] = ACTIONS(19),
    [anon_sym_fac] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_guard] = ACTIONS(19),
    [anon_sym_iace] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_incipiet] = ACTIONS(19),
    [anon_sym_incipit] = ACTIONS(19),
    [anon_sym_itera] = ACTIONS(19),
    [anon_sym_main] = ACTIONS(19),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_mori] = ACTIONS(19),
    [anon_sym_panic] = ACTIONS(19),
    [anon_sym_pass] = ACTIONS(19),
    [anon_sym_perge] = ACTIONS(19),
    [anon_sym_redde] = ACTIONS(19),
    [anon_sym_reice] = ACTIONS(19),
    [anon_sym_reject] = ACTIONS(19),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_requirit] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_rumpe] = ACTIONS(19),
    [anon_sym_secus] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sic] = ACTIONS(19),
    [anon_sym_sin] = ACTIONS(19),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_tacet] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_throw] = ACTIONS(19),
    [anon_sym_trap] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_yields] = ACTIONS(19),
    [anon_sym_ceteri] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(15),
    [anon_sym_column] = ACTIONS(15),
    [anon_sym_columna] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_discretio] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_errata] = ACTIONS(15),
    [anon_sym_errors] = ACTIONS(15),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_exitus] = ACTIONS(15),
    [anon_sym_fixum] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_functio] = ACTIONS(15),
    [anon_sym_generis] = ACTIONS(15),
    [anon_sym_genus] = ACTIONS(15),
    [anon_sym_iacit] = ACTIONS(15),
    [anon_sym_immutata] = ACTIONS(15),
    [anon_sym_implendum] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_importa] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_interna] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_iuncta] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_magnitudo] = ACTIONS(15),
    [anon_sym_optional] = ACTIONS(15),
    [anon_sym_optiones] = ACTIONS(15),
    [anon_sym_options] = ACTIONS(15),
    [anon_sym_ordo] = ACTIONS(15),
    [anon_sym_prae] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(15),
    [anon_sym_rest] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(15),
    [anon_sym_sit] = ACTIONS(15),
    [anon_sym_size] = ACTIONS(15),
    [anon_sym_sponte] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_throws] = ACTIONS(15),
    [anon_sym_tuple] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_typus] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_varia] = ACTIONS(15),
    [anon_sym_ab] = ACTIONS(11),
    [anon_sym_all] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_as] = ACTIONS(11),
    [anon_sym_async] = ACTIONS(11),
    [anon_sym_async_generator] = ACTIONS(11),
    [anon_sym_async_setup] = ACTIONS(11),
    [anon_sym_async_teardown] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_await] = ACTIONS(11),
    [anon_sym_await_const] = ACTIONS(11),
    [anon_sym_await_var] = ACTIONS(11),
    [anon_sym_before] = ACTIONS(11),
    [anon_sym_bench] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_coalesce] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(11),
    [anon_sym_copy] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_debug] = ACTIONS(11),
    [anon_sym_describe] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_embed] = ACTIONS(11),
    [anon_sym_erratur] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_exemplum] = ACTIONS(11),
    [anon_sym_expect_failure] = ACTIONS(11),
    [anon_sym_fient] = ACTIONS(11),
    [anon_sym_fiet] = ACTIONS(11),
    [anon_sym_figendum] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fiunt] = ACTIONS(11),
    [anon_sym_flaky] = ACTIONS(11),
    [anon_sym_format] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_generator] = ACTIONS(11),
    [anon_sym_implements] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_insere] = ACTIONS(11),
    [anon_sym_is] = ACTIONS(11),
    [anon_sym_lambda] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_line] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_mut] = ACTIONS(11),
    [anon_sym_negative] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_nihil] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_none] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_only] = ACTIONS(11),
    [anon_sym_only_in] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_own] = ACTIONS(11),
    [anon_sym_penes] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positive] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_range] = ACTIONS(11),
    [anon_sym_read] = ACTIONS(11),
    [anon_sym_reddet] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_return_await] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_setup] = ACTIONS(11),
    [anon_sym_skip] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_some] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_spread] = ACTIONS(11),
    [anon_sym_step] = ACTIONS(11),
    [anon_sym_tacebit] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_teardown] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(11),
    [anon_sym_timeout] = ACTIONS(11),
    [anon_sym_todo] = ACTIONS(11),
    [anon_sym_until] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_variandum] = ACTIONS(11),
    [anon_sym_variant] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_via] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_warn] = ACTIONS(11),
    [anon_sym_wrapping] = ACTIONS(11),
    [anon_sym_write] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_falsum] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_verum] = ACTIONS(21),
    [sym_guillemet_string] = ACTIONS(107),
    [sym_octeti_string] = ACTIONS(107),
    [sym_backtick_string] = ACTIONS(107),
    [sym_ascii_string] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_operator] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(107),
    [sym_line_comment] = ACTIONS(107),
    [sym_faber_newline] = ACTIONS(107),
  },
  [8] = {
    [sym_annotation] = STATE(8),
    [sym__token] = STATE(8),
    [sym_member_access] = STATE(8),
    [sym_member_glyph] = STATE(51),
    [sym_keyword_control] = STATE(8),
    [sym_keyword_declaration] = STATE(8),
    [sym_keyword_other] = STATE(8),
    [sym_builtin_type] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_punctuation] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_at_sign] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_cli] = ACTIONS(121),
    [anon_sym_conversio] = ACTIONS(121),
    [anon_sym_conversion] = ACTIONS(121),
    [anon_sym_cursor] = ACTIONS(124),
    [anon_sym_fragment] = ACTIONS(121),
    [anon_sym_futura] = ACTIONS(121),
    [anon_sym_imperium] = ACTIONS(121),
    [anon_sym_json] = ACTIONS(124),
    [anon_sym_nondum] = ACTIONS(121),
    [anon_sym_nucleum] = ACTIONS(121),
    [anon_sym_operandus] = ACTIONS(121),
    [anon_sym_optio] = ACTIONS(121),
    [anon_sym_privata] = ACTIONS(127),
    [anon_sym_private] = ACTIONS(127),
    [anon_sym_protecta] = ACTIONS(127),
    [anon_sym_protected] = ACTIONS(127),
    [anon_sym_public] = ACTIONS(127),
    [anon_sym_publica] = ACTIONS(127),
    [anon_sym_radix] = ACTIONS(121),
    [anon_sym_verte] = ACTIONS(121),
    [anon_sym_vertex] = ACTIONS(121),
    [anon_sym_ascii] = ACTIONS(124),
    [anon_sym_bivalens] = ACTIONS(124),
    [anon_sym_bool] = ACTIONS(124),
    [anon_sym_byte] = ACTIONS(124),
    [anon_sym_bytes] = ACTIONS(124),
    [anon_sym_char] = ACTIONS(124),
    [anon_sym_copia] = ACTIONS(124),
    [anon_sym_cursor_t] = ACTIONS(124),
    [anon_sym_exactus] = ACTIONS(124),
    [anon_sym_f16] = ACTIONS(124),
    [anon_sym_f32] = ACTIONS(124),
    [anon_sym_f64] = ACTIONS(124),
    [anon_sym_float] = ACTIONS(124),
    [anon_sym_fractus] = ACTIONS(124),
    [anon_sym_i16] = ACTIONS(124),
    [anon_sym_i32] = ACTIONS(124),
    [anon_sym_i64] = ACTIONS(124),
    [anon_sym_i8] = ACTIONS(124),
    [anon_sym_ignotum] = ACTIONS(124),
    [anon_sym_instans] = ACTIONS(124),
    [anon_sym_instant] = ACTIONS(124),
    [anon_sym_int] = ACTIONS(124),
    [anon_sym_intervallum] = ACTIONS(124),
    [anon_sym_iterator] = ACTIONS(124),
    [anon_sym_lf16] = ACTIONS(124),
    [anon_sym_lf32] = ACTIONS(124),
    [anon_sym_lf64] = ACTIONS(124),
    [anon_sym_li16] = ACTIONS(124),
    [anon_sym_li32] = ACTIONS(124),
    [anon_sym_li64] = ACTIONS(124),
    [anon_sym_li8] = ACTIONS(124),
    [anon_sym_list] = ACTIONS(124),
    [anon_sym_lista] = ACTIONS(124),
    [anon_sym_littera] = ACTIONS(124),
    [anon_sym_lu16] = ACTIONS(124),
    [anon_sym_lu32] = ACTIONS(124),
    [anon_sym_lu64] = ACTIONS(124),
    [anon_sym_lu8] = ACTIONS(124),
    [anon_sym_map] = ACTIONS(124),
    [anon_sym_matrix] = ACTIONS(124),
    [anon_sym_mf16] = ACTIONS(124),
    [anon_sym_mf32] = ACTIONS(124),
    [anon_sym_mf64] = ACTIONS(124),
    [anon_sym_mi16] = ACTIONS(124),
    [anon_sym_mi32] = ACTIONS(124),
    [anon_sym_mi64] = ACTIONS(124),
    [anon_sym_mi8] = ACTIONS(124),
    [anon_sym_mu16] = ACTIONS(124),
    [anon_sym_mu32] = ACTIONS(124),
    [anon_sym_mu64] = ACTIONS(124),
    [anon_sym_mu8] = ACTIONS(124),
    [anon_sym_never] = ACTIONS(124),
    [anon_sym_numerus] = ACTIONS(124),
    [anon_sym_numquam] = ACTIONS(124),
    [anon_sym_octeti] = ACTIONS(124),
    [anon_sym_octetus] = ACTIONS(124),
    [anon_sym_promise] = ACTIONS(124),
    [anon_sym_promissum] = ACTIONS(124),
    [anon_sym_queue] = ACTIONS(124),
    [anon_sym_ratio] = ACTIONS(124),
    [anon_sym_record] = ACTIONS(124),
    [anon_sym_regex] = ACTIONS(124),
    [anon_sym_saturating] = ACTIONS(124),
    [anon_sym_saturatus] = ACTIONS(124),
    [anon_sym_series] = ACTIONS(124),
    [anon_sym_set] = ACTIONS(124),
    [anon_sym_sf16] = ACTIONS(124),
    [anon_sym_sf32] = ACTIONS(124),
    [anon_sym_sf64] = ACTIONS(124),
    [anon_sym_si16] = ACTIONS(124),
    [anon_sym_si32] = ACTIONS(124),
    [anon_sym_si64] = ACTIONS(124),
    [anon_sym_si8] = ACTIONS(124),
    [anon_sym_sparsa] = ACTIONS(124),
    [anon_sym_stack] = ACTIONS(124),
    [anon_sym_string] = ACTIONS(124),
    [anon_sym_su16] = ACTIONS(124),
    [anon_sym_su32] = ACTIONS(124),
    [anon_sym_su64] = ACTIONS(124),
    [anon_sym_su8] = ACTIONS(124),
    [anon_sym_tabula] = ACTIONS(124),
    [anon_sym_tensor] = ACTIONS(124),
    [anon_sym_textus] = ACTIONS(124),
    [anon_sym_tf16] = ACTIONS(124),
    [anon_sym_tf32] = ACTIONS(124),
    [anon_sym_tf64] = ACTIONS(124),
    [anon_sym_ti16] = ACTIONS(124),
    [anon_sym_ti32] = ACTIONS(124),
    [anon_sym_ti64] = ACTIONS(124),
    [anon_sym_ti8] = ACTIONS(124),
    [anon_sym_trapping] = ACTIONS(124),
    [anon_sym_tu16] = ACTIONS(124),
    [anon_sym_tu32] = ACTIONS(124),
    [anon_sym_tu64] = ACTIONS(124),
    [anon_sym_tu8] = ACTIONS(124),
    [anon_sym_u16] = ACTIONS(124),
    [anon_sym_u32] = ACTIONS(124),
    [anon_sym_u64] = ACTIONS(124),
    [anon_sym_u8] = ACTIONS(124),
    [anon_sym_unio] = ACTIONS(124),
    [anon_sym_unknown] = ACTIONS(124),
    [anon_sym_vacua] = ACTIONS(124),
    [anon_sym_vacuum] = ACTIONS(124),
    [anon_sym_valor] = ACTIONS(124),
    [anon_sym_vector] = ACTIONS(124),
    [anon_sym_vf16] = ACTIONS(124),
    [anon_sym_vf32] = ACTIONS(124),
    [anon_sym_vf64] = ACTIONS(124),
    [anon_sym_vi16] = ACTIONS(124),
    [anon_sym_vi32] = ACTIONS(124),
    [anon_sym_vi64] = ACTIONS(124),
    [anon_sym_vi8] = ACTIONS(124),
    [anon_sym_void] = ACTIONS(124),
    [anon_sym_vu16] = ACTIONS(124),
    [anon_sym_vu32] = ACTIONS(124),
    [anon_sym_vu64] = ACTIONS(124),
    [anon_sym_vu8] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_QMARK_DOT] = ACTIONS(130),
    [anon_sym_BANG_DOT] = ACTIONS(130),
    [anon_sym_ad] = ACTIONS(133),
    [anon_sym_adfirma] = ACTIONS(133),
    [anon_sym_apud] = ACTIONS(133),
    [anon_sym_args] = ACTIONS(133),
    [anon_sym_argumenta] = ACTIONS(133),
    [anon_sym_assert] = ACTIONS(133),
    [anon_sym_async_main] = ACTIONS(133),
    [anon_sym_at] = ACTIONS(133),
    [anon_sym_break] = ACTIONS(133),
    [anon_sym_call] = ACTIONS(133),
    [anon_sym_cape] = ACTIONS(133),
    [anon_sym_capta] = ACTIONS(133),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_casu] = ACTIONS(133),
    [anon_sym_catch] = ACTIONS(133),
    [anon_sym_ceterum] = ACTIONS(133),
    [anon_sym_continue] = ACTIONS(133),
    [anon_sym_custodi] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_discerne] = ACTIONS(133),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_dum] = ACTIONS(133),
    [anon_sym_elif] = ACTIONS(133),
    [anon_sym_elige] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_ergo] = ACTIONS(133),
    [anon_sym_fac] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_guard] = ACTIONS(133),
    [anon_sym_iace] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_incipiet] = ACTIONS(133),
    [anon_sym_incipit] = ACTIONS(133),
    [anon_sym_itera] = ACTIONS(133),
    [anon_sym_main] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(133),
    [anon_sym_mori] = ACTIONS(133),
    [anon_sym_panic] = ACTIONS(133),
    [anon_sym_pass] = ACTIONS(133),
    [anon_sym_perge] = ACTIONS(133),
    [anon_sym_redde] = ACTIONS(133),
    [anon_sym_reice] = ACTIONS(133),
    [anon_sym_reject] = ACTIONS(133),
    [anon_sym_require] = ACTIONS(133),
    [anon_sym_requirit] = ACTIONS(133),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_rumpe] = ACTIONS(133),
    [anon_sym_secus] = ACTIONS(133),
    [anon_sym_si] = ACTIONS(133),
    [anon_sym_sic] = ACTIONS(133),
    [anon_sym_sin] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(133),
    [anon_sym_tacet] = ACTIONS(133),
    [anon_sym_then] = ACTIONS(133),
    [anon_sym_throw] = ACTIONS(133),
    [anon_sym_trap] = ACTIONS(133),
    [anon_sym_while] = ACTIONS(133),
    [anon_sym_yields] = ACTIONS(133),
    [anon_sym_ceteri] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(127),
    [anon_sym_column] = ACTIONS(127),
    [anon_sym_columna] = ACTIONS(127),
    [anon_sym_const] = ACTIONS(127),
    [anon_sym_discretio] = ACTIONS(127),
    [anon_sym_enum] = ACTIONS(127),
    [anon_sym_errata] = ACTIONS(127),
    [anon_sym_errors] = ACTIONS(127),
    [anon_sym_exit] = ACTIONS(127),
    [anon_sym_exitus] = ACTIONS(127),
    [anon_sym_fixum] = ACTIONS(127),
    [anon_sym_fn] = ACTIONS(127),
    [anon_sym_functio] = ACTIONS(127),
    [anon_sym_generis] = ACTIONS(127),
    [anon_sym_genus] = ACTIONS(127),
    [anon_sym_iacit] = ACTIONS(127),
    [anon_sym_immutata] = ACTIONS(127),
    [anon_sym_implendum] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_importa] = ACTIONS(127),
    [anon_sym_interface] = ACTIONS(127),
    [anon_sym_interna] = ACTIONS(127),
    [anon_sym_internal] = ACTIONS(127),
    [anon_sym_iuncta] = ACTIONS(127),
    [anon_sym_let] = ACTIONS(127),
    [anon_sym_magnitudo] = ACTIONS(127),
    [anon_sym_optional] = ACTIONS(127),
    [anon_sym_optiones] = ACTIONS(127),
    [anon_sym_options] = ACTIONS(127),
    [anon_sym_ordo] = ACTIONS(127),
    [anon_sym_prae] = ACTIONS(127),
    [anon_sym_readonly] = ACTIONS(127),
    [anon_sym_rest] = ACTIONS(127),
    [anon_sym_schema] = ACTIONS(127),
    [anon_sym_sit] = ACTIONS(127),
    [anon_sym_size] = ACTIONS(127),
    [anon_sym_sponte] = ACTIONS(127),
    [anon_sym_static] = ACTIONS(127),
    [anon_sym_throws] = ACTIONS(127),
    [anon_sym_tuple] = ACTIONS(127),
    [anon_sym_type] = ACTIONS(127),
    [anon_sym_typus] = ACTIONS(127),
    [anon_sym_union] = ACTIONS(127),
    [anon_sym_var] = ACTIONS(127),
    [anon_sym_varia] = ACTIONS(127),
    [anon_sym_ab] = ACTIONS(121),
    [anon_sym_all] = ACTIONS(121),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_ante] = ACTIONS(121),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_async] = ACTIONS(121),
    [anon_sym_async_generator] = ACTIONS(121),
    [anon_sym_async_setup] = ACTIONS(121),
    [anon_sym_async_teardown] = ACTIONS(121),
    [anon_sym_aut] = ACTIONS(121),
    [anon_sym_await] = ACTIONS(121),
    [anon_sym_await_const] = ACTIONS(121),
    [anon_sym_await_var] = ACTIONS(121),
    [anon_sym_before] = ACTIONS(121),
    [anon_sym_bench] = ACTIONS(121),
    [anon_sym_cede] = ACTIONS(121),
    [anon_sym_clausura] = ACTIONS(121),
    [anon_sym_coalesce] = ACTIONS(121),
    [anon_sym_comptime] = ACTIONS(121),
    [anon_sym_copy] = ACTIONS(121),
    [anon_sym_de] = ACTIONS(121),
    [anon_sym_debug] = ACTIONS(121),
    [anon_sym_describe] = ACTIONS(121),
    [anon_sym_ego] = ACTIONS(121),
    [anon_sym_embed] = ACTIONS(121),
    [anon_sym_erratur] = ACTIONS(121),
    [anon_sym_est] = ACTIONS(121),
    [anon_sym_et] = ACTIONS(121),
    [anon_sym_ex] = ACTIONS(121),
    [anon_sym_exemplum] = ACTIONS(121),
    [anon_sym_expect_failure] = ACTIONS(121),
    [anon_sym_fient] = ACTIONS(121),
    [anon_sym_fiet] = ACTIONS(121),
    [anon_sym_figendum] = ACTIONS(121),
    [anon_sym_finge] = ACTIONS(121),
    [anon_sym_fiunt] = ACTIONS(121),
    [anon_sym_flaky] = ACTIONS(121),
    [anon_sym_format] = ACTIONS(121),
    [anon_sym_fragilis] = ACTIONS(121),
    [anon_sym_from] = ACTIONS(121),
    [anon_sym_futurum] = ACTIONS(121),
    [anon_sym_generator] = ACTIONS(121),
    [anon_sym_implements] = ACTIONS(121),
    [anon_sym_implet] = ACTIONS(121),
    [anon_sym_in] = ACTIONS(121),
    [anon_sym_insere] = ACTIONS(121),
    [anon_sym_is] = ACTIONS(121),
    [anon_sym_lambda] = ACTIONS(121),
    [anon_sym_lege] = ACTIONS(121),
    [anon_sym_line] = ACTIONS(121),
    [anon_sym_lineam] = ACTIONS(121),
    [anon_sym_metior] = ACTIONS(121),
    [anon_sym_modulus] = ACTIONS(121),
    [anon_sym_mone] = ACTIONS(121),
    [anon_sym_mut] = ACTIONS(121),
    [anon_sym_negative] = ACTIONS(121),
    [anon_sym_negativum] = ACTIONS(121),
    [anon_sym_nihil] = ACTIONS(121),
    [anon_sym_non] = ACTIONS(121),
    [anon_sym_none] = ACTIONS(121),
    [anon_sym_nonnihil] = ACTIONS(121),
    [anon_sym_nonnulla] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_nota] = ACTIONS(121),
    [anon_sym_null] = ACTIONS(121),
    [anon_sym_nulla] = ACTIONS(121),
    [anon_sym_omitte] = ACTIONS(121),
    [anon_sym_omnia] = ACTIONS(121),
    [anon_sym_only] = ACTIONS(121),
    [anon_sym_only_in] = ACTIONS(121),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_own] = ACTIONS(121),
    [anon_sym_penes] = ACTIONS(121),
    [anon_sym_per] = ACTIONS(121),
    [anon_sym_positive] = ACTIONS(121),
    [anon_sym_positivum] = ACTIONS(121),
    [anon_sym_postpara] = ACTIONS(121),
    [anon_sym_postparabit] = ACTIONS(121),
    [anon_sym_praefixum] = ACTIONS(121),
    [anon_sym_praepara] = ACTIONS(121),
    [anon_sym_praeparabit] = ACTIONS(121),
    [anon_sym_print] = ACTIONS(121),
    [anon_sym_proba] = ACTIONS(121),
    [anon_sym_probandum] = ACTIONS(121),
    [anon_sym_range] = ACTIONS(121),
    [anon_sym_read] = ACTIONS(121),
    [anon_sym_reddet] = ACTIONS(121),
    [anon_sym_ref] = ACTIONS(121),
    [anon_sym_repeat] = ACTIONS(121),
    [anon_sym_repete] = ACTIONS(121),
    [anon_sym_return_await] = ACTIONS(121),
    [anon_sym_scribe] = ACTIONS(121),
    [anon_sym_scriptum] = ACTIONS(121),
    [anon_sym_self] = ACTIONS(121),
    [anon_sym_setup] = ACTIONS(121),
    [anon_sym_skip] = ACTIONS(121),
    [anon_sym_solum] = ACTIONS(121),
    [anon_sym_solum_in] = ACTIONS(121),
    [anon_sym_some] = ACTIONS(121),
    [anon_sym_sparge] = ACTIONS(121),
    [anon_sym_spread] = ACTIONS(121),
    [anon_sym_step] = ACTIONS(121),
    [anon_sym_tacebit] = ACTIONS(121),
    [anon_sym_tag] = ACTIONS(121),
    [anon_sym_teardown] = ACTIONS(121),
    [anon_sym_temporis] = ACTIONS(121),
    [anon_sym_test] = ACTIONS(121),
    [anon_sym_timeout] = ACTIONS(121),
    [anon_sym_todo] = ACTIONS(121),
    [anon_sym_until] = ACTIONS(121),
    [anon_sym_usque] = ACTIONS(121),
    [anon_sym_ut] = ACTIONS(121),
    [anon_sym_variandum] = ACTIONS(121),
    [anon_sym_variant] = ACTIONS(121),
    [anon_sym_vel] = ACTIONS(121),
    [anon_sym_via] = ACTIONS(121),
    [anon_sym_vide] = ACTIONS(121),
    [anon_sym_warn] = ACTIONS(121),
    [anon_sym_wrapping] = ACTIONS(121),
    [anon_sym_write] = ACTIONS(121),
    [anon_sym_yield] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_falsum] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_verum] = ACTIONS(136),
    [sym_guillemet_string] = ACTIONS(139),
    [sym_octeti_string] = ACTIONS(139),
    [sym_backtick_string] = ACTIONS(139),
    [sym_ascii_string] = ACTIONS(139),
    [sym_string] = ACTIONS(139),
    [sym_number] = ACTIONS(139),
    [sym_identifier] = ACTIONS(142),
    [sym_operator] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(118),
    [sym_hash] = ACTIONS(139),
    [sym_line_comment] = ACTIONS(139),
    [sym_faber_newline] = ACTIONS(139),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_at_sign] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_cli] = ACTIONS(147),
    [anon_sym_conversio] = ACTIONS(147),
    [anon_sym_conversion] = ACTIONS(147),
    [anon_sym_cursor] = ACTIONS(147),
    [anon_sym_fragment] = ACTIONS(147),
    [anon_sym_futura] = ACTIONS(147),
    [anon_sym_imperium] = ACTIONS(147),
    [anon_sym_json] = ACTIONS(147),
    [anon_sym_nondum] = ACTIONS(147),
    [anon_sym_nucleum] = ACTIONS(147),
    [anon_sym_operandus] = ACTIONS(147),
    [anon_sym_optio] = ACTIONS(147),
    [anon_sym_privata] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_protecta] = ACTIONS(147),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_publica] = ACTIONS(147),
    [anon_sym_radix] = ACTIONS(147),
    [anon_sym_verte] = ACTIONS(147),
    [anon_sym_vertex] = ACTIONS(147),
    [anon_sym_brevis] = ACTIONS(147),
    [anon_sym_descriptio] = ACTIONS(147),
    [anon_sym_description] = ACTIONS(147),
    [anon_sym_global] = ACTIONS(147),
    [anon_sym_lane] = ACTIONS(147),
    [anon_sym_long] = ACTIONS(147),
    [anon_sym_longum] = ACTIONS(147),
    [anon_sym_name] = ACTIONS(147),
    [anon_sym_nomen] = ACTIONS(147),
    [anon_sym_short] = ACTIONS(147),
    [anon_sym_ubique] = ACTIONS(147),
    [anon_sym_ascii] = ACTIONS(147),
    [anon_sym_bivalens] = ACTIONS(147),
    [anon_sym_bool] = ACTIONS(147),
    [anon_sym_byte] = ACTIONS(147),
    [anon_sym_bytes] = ACTIONS(147),
    [anon_sym_char] = ACTIONS(147),
    [anon_sym_copia] = ACTIONS(147),
    [anon_sym_cursor_t] = ACTIONS(147),
    [anon_sym_exactus] = ACTIONS(147),
    [anon_sym_f16] = ACTIONS(147),
    [anon_sym_f32] = ACTIONS(147),
    [anon_sym_f64] = ACTIONS(147),
    [anon_sym_float] = ACTIONS(147),
    [anon_sym_fractus] = ACTIONS(147),
    [anon_sym_i16] = ACTIONS(147),
    [anon_sym_i32] = ACTIONS(147),
    [anon_sym_i64] = ACTIONS(147),
    [anon_sym_i8] = ACTIONS(147),
    [anon_sym_ignotum] = ACTIONS(147),
    [anon_sym_instans] = ACTIONS(147),
    [anon_sym_instant] = ACTIONS(147),
    [anon_sym_int] = ACTIONS(147),
    [anon_sym_intervallum] = ACTIONS(147),
    [anon_sym_iterator] = ACTIONS(147),
    [anon_sym_lf16] = ACTIONS(147),
    [anon_sym_lf32] = ACTIONS(147),
    [anon_sym_lf64] = ACTIONS(147),
    [anon_sym_li16] = ACTIONS(147),
    [anon_sym_li32] = ACTIONS(147),
    [anon_sym_li64] = ACTIONS(147),
    [anon_sym_li8] = ACTIONS(147),
    [anon_sym_list] = ACTIONS(147),
    [anon_sym_lista] = ACTIONS(147),
    [anon_sym_littera] = ACTIONS(147),
    [anon_sym_lu16] = ACTIONS(147),
    [anon_sym_lu32] = ACTIONS(147),
    [anon_sym_lu64] = ACTIONS(147),
    [anon_sym_lu8] = ACTIONS(147),
    [anon_sym_map] = ACTIONS(147),
    [anon_sym_matrix] = ACTIONS(147),
    [anon_sym_mf16] = ACTIONS(147),
    [anon_sym_mf32] = ACTIONS(147),
    [anon_sym_mf64] = ACTIONS(147),
    [anon_sym_mi16] = ACTIONS(147),
    [anon_sym_mi32] = ACTIONS(147),
    [anon_sym_mi64] = ACTIONS(147),
    [anon_sym_mi8] = ACTIONS(147),
    [anon_sym_mu16] = ACTIONS(147),
    [anon_sym_mu32] = ACTIONS(147),
    [anon_sym_mu64] = ACTIONS(147),
    [anon_sym_mu8] = ACTIONS(147),
    [anon_sym_never] = ACTIONS(147),
    [anon_sym_numerus] = ACTIONS(147),
    [anon_sym_numquam] = ACTIONS(147),
    [anon_sym_octeti] = ACTIONS(147),
    [anon_sym_octetus] = ACTIONS(147),
    [anon_sym_promise] = ACTIONS(147),
    [anon_sym_promissum] = ACTIONS(147),
    [anon_sym_queue] = ACTIONS(147),
    [anon_sym_ratio] = ACTIONS(147),
    [anon_sym_record] = ACTIONS(147),
    [anon_sym_regex] = ACTIONS(147),
    [anon_sym_saturating] = ACTIONS(147),
    [anon_sym_saturatus] = ACTIONS(147),
    [anon_sym_series] = ACTIONS(147),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_sf16] = ACTIONS(147),
    [anon_sym_sf32] = ACTIONS(147),
    [anon_sym_sf64] = ACTIONS(147),
    [anon_sym_si16] = ACTIONS(147),
    [anon_sym_si32] = ACTIONS(147),
    [anon_sym_si64] = ACTIONS(147),
    [anon_sym_si8] = ACTIONS(147),
    [anon_sym_sparsa] = ACTIONS(147),
    [anon_sym_stack] = ACTIONS(147),
    [anon_sym_string] = ACTIONS(147),
    [anon_sym_su16] = ACTIONS(147),
    [anon_sym_su32] = ACTIONS(147),
    [anon_sym_su64] = ACTIONS(147),
    [anon_sym_su8] = ACTIONS(147),
    [anon_sym_tabula] = ACTIONS(147),
    [anon_sym_tensor] = ACTIONS(147),
    [anon_sym_textus] = ACTIONS(147),
    [anon_sym_tf16] = ACTIONS(147),
    [anon_sym_tf32] = ACTIONS(147),
    [anon_sym_tf64] = ACTIONS(147),
    [anon_sym_ti16] = ACTIONS(147),
    [anon_sym_ti32] = ACTIONS(147),
    [anon_sym_ti64] = ACTIONS(147),
    [anon_sym_ti8] = ACTIONS(147),
    [anon_sym_trapping] = ACTIONS(147),
    [anon_sym_tu16] = ACTIONS(147),
    [anon_sym_tu32] = ACTIONS(147),
    [anon_sym_tu64] = ACTIONS(147),
    [anon_sym_tu8] = ACTIONS(147),
    [anon_sym_u16] = ACTIONS(147),
    [anon_sym_u32] = ACTIONS(147),
    [anon_sym_u64] = ACTIONS(147),
    [anon_sym_u8] = ACTIONS(147),
    [anon_sym_unio] = ACTIONS(147),
    [anon_sym_unknown] = ACTIONS(147),
    [anon_sym_vacua] = ACTIONS(147),
    [anon_sym_vacuum] = ACTIONS(147),
    [anon_sym_valor] = ACTIONS(147),
    [anon_sym_vector] = ACTIONS(147),
    [anon_sym_vf16] = ACTIONS(147),
    [anon_sym_vf32] = ACTIONS(147),
    [anon_sym_vf64] = ACTIONS(147),
    [anon_sym_vi16] = ACTIONS(147),
    [anon_sym_vi32] = ACTIONS(147),
    [anon_sym_vi64] = ACTIONS(147),
    [anon_sym_vi8] = ACTIONS(147),
    [anon_sym_void] = ACTIONS(147),
    [anon_sym_vu16] = ACTIONS(147),
    [anon_sym_vu32] = ACTIONS(147),
    [anon_sym_vu64] = ACTIONS(147),
    [anon_sym_vu8] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_QMARK_DOT] = ACTIONS(145),
    [anon_sym_BANG_DOT] = ACTIONS(145),
    [anon_sym_ad] = ACTIONS(147),
    [anon_sym_adfirma] = ACTIONS(147),
    [anon_sym_apud] = ACTIONS(147),
    [anon_sym_args] = ACTIONS(147),
    [anon_sym_argumenta] = ACTIONS(147),
    [anon_sym_assert] = ACTIONS(147),
    [anon_sym_async_main] = ACTIONS(147),
    [anon_sym_at] = ACTIONS(147),
    [anon_sym_break] = ACTIONS(147),
    [anon_sym_call] = ACTIONS(147),
    [anon_sym_cape] = ACTIONS(147),
    [anon_sym_capta] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_casu] = ACTIONS(147),
    [anon_sym_catch] = ACTIONS(147),
    [anon_sym_ceterum] = ACTIONS(147),
    [anon_sym_continue] = ACTIONS(147),
    [anon_sym_custodi] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_discerne] = ACTIONS(147),
    [anon_sym_do] = ACTIONS(147),
    [anon_sym_dum] = ACTIONS(147),
    [anon_sym_elif] = ACTIONS(147),
    [anon_sym_elige] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_ergo] = ACTIONS(147),
    [anon_sym_fac] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(147),
    [anon_sym_guard] = ACTIONS(147),
    [anon_sym_iace] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_incipiet] = ACTIONS(147),
    [anon_sym_incipit] = ACTIONS(147),
    [anon_sym_itera] = ACTIONS(147),
    [anon_sym_main] = ACTIONS(147),
    [anon_sym_match] = ACTIONS(147),
    [anon_sym_mori] = ACTIONS(147),
    [anon_sym_panic] = ACTIONS(147),
    [anon_sym_pass] = ACTIONS(147),
    [anon_sym_perge] = ACTIONS(147),
    [anon_sym_redde] = ACTIONS(147),
    [anon_sym_reice] = ACTIONS(147),
    [anon_sym_reject] = ACTIONS(147),
    [anon_sym_require] = ACTIONS(147),
    [anon_sym_requirit] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_rumpe] = ACTIONS(147),
    [anon_sym_secus] = ACTIONS(147),
    [anon_sym_si] = ACTIONS(147),
    [anon_sym_sic] = ACTIONS(147),
    [anon_sym_sin] = ACTIONS(147),
    [anon_sym_switch] = ACTIONS(147),
    [anon_sym_tacet] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_throw] = ACTIONS(147),
    [anon_sym_trap] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_yields] = ACTIONS(147),
    [anon_sym_ceteri] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(147),
    [anon_sym_column] = ACTIONS(147),
    [anon_sym_columna] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(147),
    [anon_sym_discretio] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(147),
    [anon_sym_errata] = ACTIONS(147),
    [anon_sym_errors] = ACTIONS(147),
    [anon_sym_exit] = ACTIONS(147),
    [anon_sym_exitus] = ACTIONS(147),
    [anon_sym_fixum] = ACTIONS(147),
    [anon_sym_fn] = ACTIONS(147),
    [anon_sym_functio] = ACTIONS(147),
    [anon_sym_generis] = ACTIONS(147),
    [anon_sym_genus] = ACTIONS(147),
    [anon_sym_iacit] = ACTIONS(147),
    [anon_sym_immutata] = ACTIONS(147),
    [anon_sym_implendum] = ACTIONS(147),
    [anon_sym_import] = ACTIONS(147),
    [anon_sym_importa] = ACTIONS(147),
    [anon_sym_interface] = ACTIONS(147),
    [anon_sym_interna] = ACTIONS(147),
    [anon_sym_internal] = ACTIONS(147),
    [anon_sym_iuncta] = ACTIONS(147),
    [anon_sym_let] = ACTIONS(147),
    [anon_sym_magnitudo] = ACTIONS(147),
    [anon_sym_optional] = ACTIONS(147),
    [anon_sym_optiones] = ACTIONS(147),
    [anon_sym_options] = ACTIONS(147),
    [anon_sym_ordo] = ACTIONS(147),
    [anon_sym_prae] = ACTIONS(147),
    [anon_sym_readonly] = ACTIONS(147),
    [anon_sym_rest] = ACTIONS(147),
    [anon_sym_schema] = ACTIONS(147),
    [anon_sym_sit] = ACTIONS(147),
    [anon_sym_size] = ACTIONS(147),
    [anon_sym_sponte] = ACTIONS(147),
    [anon_sym_static] = ACTIONS(147),
    [anon_sym_throws] = ACTIONS(147),
    [anon_sym_tuple] = ACTIONS(147),
    [anon_sym_type] = ACTIONS(147),
    [anon_sym_typus] = ACTIONS(147),
    [anon_sym_union] = ACTIONS(147),
    [anon_sym_var] = ACTIONS(147),
    [anon_sym_varia] = ACTIONS(147),
    [anon_sym_ab] = ACTIONS(147),
    [anon_sym_all] = ACTIONS(147),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_ante] = ACTIONS(147),
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_async] = ACTIONS(147),
    [anon_sym_async_generator] = ACTIONS(147),
    [anon_sym_async_setup] = ACTIONS(147),
    [anon_sym_async_teardown] = ACTIONS(147),
    [anon_sym_aut] = ACTIONS(147),
    [anon_sym_await] = ACTIONS(147),
    [anon_sym_await_const] = ACTIONS(147),
    [anon_sym_await_var] = ACTIONS(147),
    [anon_sym_before] = ACTIONS(147),
    [anon_sym_bench] = ACTIONS(147),
    [anon_sym_cede] = ACTIONS(147),
    [anon_sym_clausura] = ACTIONS(147),
    [anon_sym_coalesce] = ACTIONS(147),
    [anon_sym_comptime] = ACTIONS(147),
    [anon_sym_copy] = ACTIONS(147),
    [anon_sym_de] = ACTIONS(147),
    [anon_sym_debug] = ACTIONS(147),
    [anon_sym_describe] = ACTIONS(147),
    [anon_sym_ego] = ACTIONS(147),
    [anon_sym_embed] = ACTIONS(147),
    [anon_sym_erratur] = ACTIONS(147),
    [anon_sym_est] = ACTIONS(147),
    [anon_sym_et] = ACTIONS(147),
    [anon_sym_ex] = ACTIONS(147),
    [anon_sym_exemplum] = ACTIONS(147),
    [anon_sym_expect_failure] = ACTIONS(147),
    [anon_sym_fient] = ACTIONS(147),
    [anon_sym_fiet] = ACTIONS(147),
    [anon_sym_figendum] = ACTIONS(147),
    [anon_sym_finge] = ACTIONS(147),
    [anon_sym_fiunt] = ACTIONS(147),
    [anon_sym_flaky] = ACTIONS(147),
    [anon_sym_format] = ACTIONS(147),
    [anon_sym_fragilis] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_futurum] = ACTIONS(147),
    [anon_sym_generator] = ACTIONS(147),
    [anon_sym_implements] = ACTIONS(147),
    [anon_sym_implet] = ACTIONS(147),
    [anon_sym_in] = ACTIONS(147),
    [anon_sym_insere] = ACTIONS(147),
    [anon_sym_is] = ACTIONS(147),
    [anon_sym_lambda] = ACTIONS(147),
    [anon_sym_lege] = ACTIONS(147),
    [anon_sym_line] = ACTIONS(147),
    [anon_sym_lineam] = ACTIONS(147),
    [anon_sym_metior] = ACTIONS(147),
    [anon_sym_modulus] = ACTIONS(147),
    [anon_sym_mone] = ACTIONS(147),
    [anon_sym_mut] = ACTIONS(147),
    [anon_sym_negative] = ACTIONS(147),
    [anon_sym_negativum] = ACTIONS(147),
    [anon_sym_nihil] = ACTIONS(147),
    [anon_sym_non] = ACTIONS(147),
    [anon_sym_none] = ACTIONS(147),
    [anon_sym_nonnihil] = ACTIONS(147),
    [anon_sym_nonnulla] = ACTIONS(147),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_nota] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_nulla] = ACTIONS(147),
    [anon_sym_omitte] = ACTIONS(147),
    [anon_sym_omnia] = ACTIONS(147),
    [anon_sym_only] = ACTIONS(147),
    [anon_sym_only_in] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [anon_sym_own] = ACTIONS(147),
    [anon_sym_penes] = ACTIONS(147),
    [anon_sym_per] = ACTIONS(147),
    [anon_sym_positive] = ACTIONS(147),
    [anon_sym_positivum] = ACTIONS(147),
    [anon_sym_postpara] = ACTIONS(147),
    [anon_sym_postparabit] = ACTIONS(147),
    [anon_sym_praefixum] = ACTIONS(147),
    [anon_sym_praepara] = ACTIONS(147),
    [anon_sym_praeparabit] = ACTIONS(147),
    [anon_sym_print] = ACTIONS(147),
    [anon_sym_proba] = ACTIONS(147),
    [anon_sym_probandum] = ACTIONS(147),
    [anon_sym_range] = ACTIONS(147),
    [anon_sym_read] = ACTIONS(147),
    [anon_sym_reddet] = ACTIONS(147),
    [anon_sym_ref] = ACTIONS(147),
    [anon_sym_repeat] = ACTIONS(147),
    [anon_sym_repete] = ACTIONS(147),
    [anon_sym_return_await] = ACTIONS(147),
    [anon_sym_scribe] = ACTIONS(147),
    [anon_sym_scriptum] = ACTIONS(147),
    [anon_sym_self] = ACTIONS(147),
    [anon_sym_setup] = ACTIONS(147),
    [anon_sym_skip] = ACTIONS(147),
    [anon_sym_solum] = ACTIONS(147),
    [anon_sym_solum_in] = ACTIONS(147),
    [anon_sym_some] = ACTIONS(147),
    [anon_sym_sparge] = ACTIONS(147),
    [anon_sym_spread] = ACTIONS(147),
    [anon_sym_step] = ACTIONS(147),
    [anon_sym_tacebit] = ACTIONS(147),
    [anon_sym_tag] = ACTIONS(147),
    [anon_sym_teardown] = ACTIONS(147),
    [anon_sym_temporis] = ACTIONS(147),
    [anon_sym_test] = ACTIONS(147),
    [anon_sym_timeout] = ACTIONS(147),
    [anon_sym_todo] = ACTIONS(147),
    [anon_sym_until] = ACTIONS(147),
    [anon_sym_usque] = ACTIONS(147),
    [anon_sym_ut] = ACTIONS(147),
    [anon_sym_variandum] = ACTIONS(147),
    [anon_sym_variant] = ACTIONS(147),
    [anon_sym_vel] = ACTIONS(147),
    [anon_sym_via] = ACTIONS(147),
    [anon_sym_vide] = ACTIONS(147),
    [anon_sym_warn] = ACTIONS(147),
    [anon_sym_wrapping] = ACTIONS(147),
    [anon_sym_write] = ACTIONS(147),
    [anon_sym_yield] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_falsum] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_verum] = ACTIONS(147),
    [sym_guillemet_string] = ACTIONS(145),
    [sym_octeti_string] = ACTIONS(145),
    [sym_backtick_string] = ACTIONS(145),
    [sym_ascii_string] = ACTIONS(145),
    [sym_string] = ACTIONS(145),
    [sym_number] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_operator] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [sym_hash] = ACTIONS(145),
    [sym_line_comment] = ACTIONS(145),
    [sym_faber_newline] = ACTIONS(145),
  },
  [10] = {
    [sym_annotation] = STATE(6),
    [sym__token] = STATE(6),
    [sym_member_access] = STATE(6),
    [sym_member_glyph] = STATE(51),
    [sym_keyword_control] = STATE(6),
    [sym_keyword_declaration] = STATE(6),
    [sym_keyword_other] = STATE(6),
    [sym_builtin_type] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_punctuation] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_at_sign] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_cli] = ACTIONS(11),
    [anon_sym_conversio] = ACTIONS(11),
    [anon_sym_conversion] = ACTIONS(11),
    [anon_sym_cursor] = ACTIONS(13),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_futura] = ACTIONS(11),
    [anon_sym_imperium] = ACTIONS(11),
    [anon_sym_json] = ACTIONS(13),
    [anon_sym_nondum] = ACTIONS(11),
    [anon_sym_nucleum] = ACTIONS(11),
    [anon_sym_operandus] = ACTIONS(11),
    [anon_sym_optio] = ACTIONS(11),
    [anon_sym_privata] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protecta] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_publica] = ACTIONS(15),
    [anon_sym_radix] = ACTIONS(11),
    [anon_sym_verte] = ACTIONS(11),
    [anon_sym_vertex] = ACTIONS(11),
    [anon_sym_ascii] = ACTIONS(13),
    [anon_sym_bivalens] = ACTIONS(13),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_byte] = ACTIONS(13),
    [anon_sym_bytes] = ACTIONS(13),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym_copia] = ACTIONS(13),
    [anon_sym_cursor_t] = ACTIONS(13),
    [anon_sym_exactus] = ACTIONS(13),
    [anon_sym_f16] = ACTIONS(13),
    [anon_sym_f32] = ACTIONS(13),
    [anon_sym_f64] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_fractus] = ACTIONS(13),
    [anon_sym_i16] = ACTIONS(13),
    [anon_sym_i32] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(13),
    [anon_sym_ignotum] = ACTIONS(13),
    [anon_sym_instans] = ACTIONS(13),
    [anon_sym_instant] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_intervallum] = ACTIONS(13),
    [anon_sym_iterator] = ACTIONS(13),
    [anon_sym_lf16] = ACTIONS(13),
    [anon_sym_lf32] = ACTIONS(13),
    [anon_sym_lf64] = ACTIONS(13),
    [anon_sym_li16] = ACTIONS(13),
    [anon_sym_li32] = ACTIONS(13),
    [anon_sym_li64] = ACTIONS(13),
    [anon_sym_li8] = ACTIONS(13),
    [anon_sym_list] = ACTIONS(13),
    [anon_sym_lista] = ACTIONS(13),
    [anon_sym_littera] = ACTIONS(13),
    [anon_sym_lu16] = ACTIONS(13),
    [anon_sym_lu32] = ACTIONS(13),
    [anon_sym_lu64] = ACTIONS(13),
    [anon_sym_lu8] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(13),
    [anon_sym_matrix] = ACTIONS(13),
    [anon_sym_mf16] = ACTIONS(13),
    [anon_sym_mf32] = ACTIONS(13),
    [anon_sym_mf64] = ACTIONS(13),
    [anon_sym_mi16] = ACTIONS(13),
    [anon_sym_mi32] = ACTIONS(13),
    [anon_sym_mi64] = ACTIONS(13),
    [anon_sym_mi8] = ACTIONS(13),
    [anon_sym_mu16] = ACTIONS(13),
    [anon_sym_mu32] = ACTIONS(13),
    [anon_sym_mu64] = ACTIONS(13),
    [anon_sym_mu8] = ACTIONS(13),
    [anon_sym_never] = ACTIONS(13),
    [anon_sym_numerus] = ACTIONS(13),
    [anon_sym_numquam] = ACTIONS(13),
    [anon_sym_octeti] = ACTIONS(13),
    [anon_sym_octetus] = ACTIONS(13),
    [anon_sym_promise] = ACTIONS(13),
    [anon_sym_promissum] = ACTIONS(13),
    [anon_sym_queue] = ACTIONS(13),
    [anon_sym_ratio] = ACTIONS(13),
    [anon_sym_record] = ACTIONS(13),
    [anon_sym_regex] = ACTIONS(13),
    [anon_sym_saturating] = ACTIONS(13),
    [anon_sym_saturatus] = ACTIONS(13),
    [anon_sym_series] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_sf16] = ACTIONS(13),
    [anon_sym_sf32] = ACTIONS(13),
    [anon_sym_sf64] = ACTIONS(13),
    [anon_sym_si16] = ACTIONS(13),
    [anon_sym_si32] = ACTIONS(13),
    [anon_sym_si64] = ACTIONS(13),
    [anon_sym_si8] = ACTIONS(13),
    [anon_sym_sparsa] = ACTIONS(13),
    [anon_sym_stack] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_su16] = ACTIONS(13),
    [anon_sym_su32] = ACTIONS(13),
    [anon_sym_su64] = ACTIONS(13),
    [anon_sym_su8] = ACTIONS(13),
    [anon_sym_tabula] = ACTIONS(13),
    [anon_sym_tensor] = ACTIONS(13),
    [anon_sym_textus] = ACTIONS(13),
    [anon_sym_tf16] = ACTIONS(13),
    [anon_sym_tf32] = ACTIONS(13),
    [anon_sym_tf64] = ACTIONS(13),
    [anon_sym_ti16] = ACTIONS(13),
    [anon_sym_ti32] = ACTIONS(13),
    [anon_sym_ti64] = ACTIONS(13),
    [anon_sym_ti8] = ACTIONS(13),
    [anon_sym_trapping] = ACTIONS(13),
    [anon_sym_tu16] = ACTIONS(13),
    [anon_sym_tu32] = ACTIONS(13),
    [anon_sym_tu64] = ACTIONS(13),
    [anon_sym_tu8] = ACTIONS(13),
    [anon_sym_u16] = ACTIONS(13),
    [anon_sym_u32] = ACTIONS(13),
    [anon_sym_u64] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(13),
    [anon_sym_unio] = ACTIONS(13),
    [anon_sym_unknown] = ACTIONS(13),
    [anon_sym_vacua] = ACTIONS(13),
    [anon_sym_vacuum] = ACTIONS(13),
    [anon_sym_valor] = ACTIONS(13),
    [anon_sym_vector] = ACTIONS(13),
    [anon_sym_vf16] = ACTIONS(13),
    [anon_sym_vf32] = ACTIONS(13),
    [anon_sym_vf64] = ACTIONS(13),
    [anon_sym_vi16] = ACTIONS(13),
    [anon_sym_vi32] = ACTIONS(13),
    [anon_sym_vi64] = ACTIONS(13),
    [anon_sym_vi8] = ACTIONS(13),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_vu16] = ACTIONS(13),
    [anon_sym_vu32] = ACTIONS(13),
    [anon_sym_vu64] = ACTIONS(13),
    [anon_sym_vu8] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_QMARK_DOT] = ACTIONS(17),
    [anon_sym_BANG_DOT] = ACTIONS(17),
    [anon_sym_ad] = ACTIONS(19),
    [anon_sym_adfirma] = ACTIONS(19),
    [anon_sym_apud] = ACTIONS(19),
    [anon_sym_args] = ACTIONS(19),
    [anon_sym_argumenta] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(19),
    [anon_sym_async_main] = ACTIONS(19),
    [anon_sym_at] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_cape] = ACTIONS(19),
    [anon_sym_capta] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_casu] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_ceterum] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_custodi] = ACTIONS(19),
    [anon_sym_default] = ACTIONS(19),
    [anon_sym_discerne] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_dum] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_elige] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_ergo] = ACTIONS(19),
    [anon_sym_fac] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_guard] = ACTIONS(19),
    [anon_sym_iace] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_incipiet] = ACTIONS(19),
    [anon_sym_incipit] = ACTIONS(19),
    [anon_sym_itera] = ACTIONS(19),
    [anon_sym_main] = ACTIONS(19),
    [anon_sym_match] = ACTIONS(19),
    [anon_sym_mori] = ACTIONS(19),
    [anon_sym_panic] = ACTIONS(19),
    [anon_sym_pass] = ACTIONS(19),
    [anon_sym_perge] = ACTIONS(19),
    [anon_sym_redde] = ACTIONS(19),
    [anon_sym_reice] = ACTIONS(19),
    [anon_sym_reject] = ACTIONS(19),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_requirit] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_rumpe] = ACTIONS(19),
    [anon_sym_secus] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sic] = ACTIONS(19),
    [anon_sym_sin] = ACTIONS(19),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_tacet] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_throw] = ACTIONS(19),
    [anon_sym_trap] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_yields] = ACTIONS(19),
    [anon_sym_ceteri] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(15),
    [anon_sym_column] = ACTIONS(15),
    [anon_sym_columna] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_discretio] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_errata] = ACTIONS(15),
    [anon_sym_errors] = ACTIONS(15),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_exitus] = ACTIONS(15),
    [anon_sym_fixum] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_functio] = ACTIONS(15),
    [anon_sym_generis] = ACTIONS(15),
    [anon_sym_genus] = ACTIONS(15),
    [anon_sym_iacit] = ACTIONS(15),
    [anon_sym_immutata] = ACTIONS(15),
    [anon_sym_implendum] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(15),
    [anon_sym_importa] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_interna] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_iuncta] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_magnitudo] = ACTIONS(15),
    [anon_sym_optional] = ACTIONS(15),
    [anon_sym_optiones] = ACTIONS(15),
    [anon_sym_options] = ACTIONS(15),
    [anon_sym_ordo] = ACTIONS(15),
    [anon_sym_prae] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(15),
    [anon_sym_rest] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(15),
    [anon_sym_sit] = ACTIONS(15),
    [anon_sym_size] = ACTIONS(15),
    [anon_sym_sponte] = ACTIONS(15),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_throws] = ACTIONS(15),
    [anon_sym_tuple] = ACTIONS(15),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_typus] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_varia] = ACTIONS(15),
    [anon_sym_ab] = ACTIONS(11),
    [anon_sym_all] = ACTIONS(11),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_ante] = ACTIONS(11),
    [anon_sym_as] = ACTIONS(11),
    [anon_sym_async] = ACTIONS(11),
    [anon_sym_async_generator] = ACTIONS(11),
    [anon_sym_async_setup] = ACTIONS(11),
    [anon_sym_async_teardown] = ACTIONS(11),
    [anon_sym_aut] = ACTIONS(11),
    [anon_sym_await] = ACTIONS(11),
    [anon_sym_await_const] = ACTIONS(11),
    [anon_sym_await_var] = ACTIONS(11),
    [anon_sym_before] = ACTIONS(11),
    [anon_sym_bench] = ACTIONS(11),
    [anon_sym_cede] = ACTIONS(11),
    [anon_sym_clausura] = ACTIONS(11),
    [anon_sym_coalesce] = ACTIONS(11),
    [anon_sym_comptime] = ACTIONS(11),
    [anon_sym_copy] = ACTIONS(11),
    [anon_sym_de] = ACTIONS(11),
    [anon_sym_debug] = ACTIONS(11),
    [anon_sym_describe] = ACTIONS(11),
    [anon_sym_ego] = ACTIONS(11),
    [anon_sym_embed] = ACTIONS(11),
    [anon_sym_erratur] = ACTIONS(11),
    [anon_sym_est] = ACTIONS(11),
    [anon_sym_et] = ACTIONS(11),
    [anon_sym_ex] = ACTIONS(11),
    [anon_sym_exemplum] = ACTIONS(11),
    [anon_sym_expect_failure] = ACTIONS(11),
    [anon_sym_fient] = ACTIONS(11),
    [anon_sym_fiet] = ACTIONS(11),
    [anon_sym_figendum] = ACTIONS(11),
    [anon_sym_finge] = ACTIONS(11),
    [anon_sym_fiunt] = ACTIONS(11),
    [anon_sym_flaky] = ACTIONS(11),
    [anon_sym_format] = ACTIONS(11),
    [anon_sym_fragilis] = ACTIONS(11),
    [anon_sym_from] = ACTIONS(11),
    [anon_sym_futurum] = ACTIONS(11),
    [anon_sym_generator] = ACTIONS(11),
    [anon_sym_implements] = ACTIONS(11),
    [anon_sym_implet] = ACTIONS(11),
    [anon_sym_in] = ACTIONS(11),
    [anon_sym_insere] = ACTIONS(11),
    [anon_sym_is] = ACTIONS(11),
    [anon_sym_lambda] = ACTIONS(11),
    [anon_sym_lege] = ACTIONS(11),
    [anon_sym_line] = ACTIONS(11),
    [anon_sym_lineam] = ACTIONS(11),
    [anon_sym_metior] = ACTIONS(11),
    [anon_sym_modulus] = ACTIONS(11),
    [anon_sym_mone] = ACTIONS(11),
    [anon_sym_mut] = ACTIONS(11),
    [anon_sym_negative] = ACTIONS(11),
    [anon_sym_negativum] = ACTIONS(11),
    [anon_sym_nihil] = ACTIONS(11),
    [anon_sym_non] = ACTIONS(11),
    [anon_sym_none] = ACTIONS(11),
    [anon_sym_nonnihil] = ACTIONS(11),
    [anon_sym_nonnulla] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_nota] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [anon_sym_nulla] = ACTIONS(11),
    [anon_sym_omitte] = ACTIONS(11),
    [anon_sym_omnia] = ACTIONS(11),
    [anon_sym_only] = ACTIONS(11),
    [anon_sym_only_in] = ACTIONS(11),
    [anon_sym_or] = ACTIONS(11),
    [anon_sym_own] = ACTIONS(11),
    [anon_sym_penes] = ACTIONS(11),
    [anon_sym_per] = ACTIONS(11),
    [anon_sym_positive] = ACTIONS(11),
    [anon_sym_positivum] = ACTIONS(11),
    [anon_sym_postpara] = ACTIONS(11),
    [anon_sym_postparabit] = ACTIONS(11),
    [anon_sym_praefixum] = ACTIONS(11),
    [anon_sym_praepara] = ACTIONS(11),
    [anon_sym_praeparabit] = ACTIONS(11),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_proba] = ACTIONS(11),
    [anon_sym_probandum] = ACTIONS(11),
    [anon_sym_range] = ACTIONS(11),
    [anon_sym_read] = ACTIONS(11),
    [anon_sym_reddet] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_repeat] = ACTIONS(11),
    [anon_sym_repete] = ACTIONS(11),
    [anon_sym_return_await] = ACTIONS(11),
    [anon_sym_scribe] = ACTIONS(11),
    [anon_sym_scriptum] = ACTIONS(11),
    [anon_sym_self] = ACTIONS(11),
    [anon_sym_setup] = ACTIONS(11),
    [anon_sym_skip] = ACTIONS(11),
    [anon_sym_solum] = ACTIONS(11),
    [anon_sym_solum_in] = ACTIONS(11),
    [anon_sym_some] = ACTIONS(11),
    [anon_sym_sparge] = ACTIONS(11),
    [anon_sym_spread] = ACTIONS(11),
    [anon_sym_step] = ACTIONS(11),
    [anon_sym_tacebit] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_teardown] = ACTIONS(11),
    [anon_sym_temporis] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(11),
    [anon_sym_timeout] = ACTIONS(11),
    [anon_sym_todo] = ACTIONS(11),
    [anon_sym_until] = ACTIONS(11),
    [anon_sym_usque] = ACTIONS(11),
    [anon_sym_ut] = ACTIONS(11),
    [anon_sym_variandum] = ACTIONS(11),
    [anon_sym_variant] = ACTIONS(11),
    [anon_sym_vel] = ACTIONS(11),
    [anon_sym_via] = ACTIONS(11),
    [anon_sym_vide] = ACTIONS(11),
    [anon_sym_warn] = ACTIONS(11),
    [anon_sym_wrapping] = ACTIONS(11),
    [anon_sym_write] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_falsum] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_verum] = ACTIONS(21),
    [sym_guillemet_string] = ACTIONS(149),
    [sym_octeti_string] = ACTIONS(149),
    [sym_backtick_string] = ACTIONS(149),
    [sym_ascii_string] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [sym_number] = ACTIONS(149),
    [sym_identifier] = ACTIONS(151),
    [sym_operator] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_hash] = ACTIONS(149),
    [sym_line_comment] = ACTIONS(149),
    [sym_faber_newline] = ACTIONS(149),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_at_sign] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_cli] = ACTIONS(155),
    [anon_sym_conversio] = ACTIONS(155),
    [anon_sym_conversion] = ACTIONS(155),
    [anon_sym_cursor] = ACTIONS(155),
    [anon_sym_fragment] = ACTIONS(155),
    [anon_sym_futura] = ACTIONS(155),
    [anon_sym_imperium] = ACTIONS(155),
    [anon_sym_json] = ACTIONS(155),
    [anon_sym_nondum] = ACTIONS(155),
    [anon_sym_nucleum] = ACTIONS(155),
    [anon_sym_operandus] = ACTIONS(155),
    [anon_sym_optio] = ACTIONS(155),
    [anon_sym_privata] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_protecta] = ACTIONS(155),
    [anon_sym_protected] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_publica] = ACTIONS(155),
    [anon_sym_radix] = ACTIONS(155),
    [anon_sym_verte] = ACTIONS(155),
    [anon_sym_vertex] = ACTIONS(155),
    [anon_sym_brevis] = ACTIONS(155),
    [anon_sym_descriptio] = ACTIONS(155),
    [anon_sym_description] = ACTIONS(155),
    [anon_sym_global] = ACTIONS(155),
    [anon_sym_lane] = ACTIONS(155),
    [anon_sym_long] = ACTIONS(155),
    [anon_sym_longum] = ACTIONS(155),
    [anon_sym_name] = ACTIONS(155),
    [anon_sym_nomen] = ACTIONS(155),
    [anon_sym_short] = ACTIONS(155),
    [anon_sym_ubique] = ACTIONS(155),
    [anon_sym_ascii] = ACTIONS(155),
    [anon_sym_bivalens] = ACTIONS(155),
    [anon_sym_bool] = ACTIONS(155),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_bytes] = ACTIONS(155),
    [anon_sym_char] = ACTIONS(155),
    [anon_sym_copia] = ACTIONS(155),
    [anon_sym_cursor_t] = ACTIONS(155),
    [anon_sym_exactus] = ACTIONS(155),
    [anon_sym_f16] = ACTIONS(155),
    [anon_sym_f32] = ACTIONS(155),
    [anon_sym_f64] = ACTIONS(155),
    [anon_sym_float] = ACTIONS(155),
    [anon_sym_fractus] = ACTIONS(155),
    [anon_sym_i16] = ACTIONS(155),
    [anon_sym_i32] = ACTIONS(155),
    [anon_sym_i64] = ACTIONS(155),
    [anon_sym_i8] = ACTIONS(155),
    [anon_sym_ignotum] = ACTIONS(155),
    [anon_sym_instans] = ACTIONS(155),
    [anon_sym_instant] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(155),
    [anon_sym_intervallum] = ACTIONS(155),
    [anon_sym_iterator] = ACTIONS(155),
    [anon_sym_lf16] = ACTIONS(155),
    [anon_sym_lf32] = ACTIONS(155),
    [anon_sym_lf64] = ACTIONS(155),
    [anon_sym_li16] = ACTIONS(155),
    [anon_sym_li32] = ACTIONS(155),
    [anon_sym_li64] = ACTIONS(155),
    [anon_sym_li8] = ACTIONS(155),
    [anon_sym_list] = ACTIONS(155),
    [anon_sym_lista] = ACTIONS(155),
    [anon_sym_littera] = ACTIONS(155),
    [anon_sym_lu16] = ACTIONS(155),
    [anon_sym_lu32] = ACTIONS(155),
    [anon_sym_lu64] = ACTIONS(155),
    [anon_sym_lu8] = ACTIONS(155),
    [anon_sym_map] = ACTIONS(155),
    [anon_sym_matrix] = ACTIONS(155),
    [anon_sym_mf16] = ACTIONS(155),
    [anon_sym_mf32] = ACTIONS(155),
    [anon_sym_mf64] = ACTIONS(155),
    [anon_sym_mi16] = ACTIONS(155),
    [anon_sym_mi32] = ACTIONS(155),
    [anon_sym_mi64] = ACTIONS(155),
    [anon_sym_mi8] = ACTIONS(155),
    [anon_sym_mu16] = ACTIONS(155),
    [anon_sym_mu32] = ACTIONS(155),
    [anon_sym_mu64] = ACTIONS(155),
    [anon_sym_mu8] = ACTIONS(155),
    [anon_sym_never] = ACTIONS(155),
    [anon_sym_numerus] = ACTIONS(155),
    [anon_sym_numquam] = ACTIONS(155),
    [anon_sym_octeti] = ACTIONS(155),
    [anon_sym_octetus] = ACTIONS(155),
    [anon_sym_promise] = ACTIONS(155),
    [anon_sym_promissum] = ACTIONS(155),
    [anon_sym_queue] = ACTIONS(155),
    [anon_sym_ratio] = ACTIONS(155),
    [anon_sym_record] = ACTIONS(155),
    [anon_sym_regex] = ACTIONS(155),
    [anon_sym_saturating] = ACTIONS(155),
    [anon_sym_saturatus] = ACTIONS(155),
    [anon_sym_series] = ACTIONS(155),
    [anon_sym_set] = ACTIONS(155),
    [anon_sym_sf16] = ACTIONS(155),
    [anon_sym_sf32] = ACTIONS(155),
    [anon_sym_sf64] = ACTIONS(155),
    [anon_sym_si16] = ACTIONS(155),
    [anon_sym_si32] = ACTIONS(155),
    [anon_sym_si64] = ACTIONS(155),
    [anon_sym_si8] = ACTIONS(155),
    [anon_sym_sparsa] = ACTIONS(155),
    [anon_sym_stack] = ACTIONS(155),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_su16] = ACTIONS(155),
    [anon_sym_su32] = ACTIONS(155),
    [anon_sym_su64] = ACTIONS(155),
    [anon_sym_su8] = ACTIONS(155),
    [anon_sym_tabula] = ACTIONS(155),
    [anon_sym_tensor] = ACTIONS(155),
    [anon_sym_textus] = ACTIONS(155),
    [anon_sym_tf16] = ACTIONS(155),
    [anon_sym_tf32] = ACTIONS(155),
    [anon_sym_tf64] = ACTIONS(155),
    [anon_sym_ti16] = ACTIONS(155),
    [anon_sym_ti32] = ACTIONS(155),
    [anon_sym_ti64] = ACTIONS(155),
    [anon_sym_ti8] = ACTIONS(155),
    [anon_sym_trapping] = ACTIONS(155),
    [anon_sym_tu16] = ACTIONS(155),
    [anon_sym_tu32] = ACTIONS(155),
    [anon_sym_tu64] = ACTIONS(155),
    [anon_sym_tu8] = ACTIONS(155),
    [anon_sym_u16] = ACTIONS(155),
    [anon_sym_u32] = ACTIONS(155),
    [anon_sym_u64] = ACTIONS(155),
    [anon_sym_u8] = ACTIONS(155),
    [anon_sym_unio] = ACTIONS(155),
    [anon_sym_unknown] = ACTIONS(155),
    [anon_sym_vacua] = ACTIONS(155),
    [anon_sym_vacuum] = ACTIONS(155),
    [anon_sym_valor] = ACTIONS(155),
    [anon_sym_vector] = ACTIONS(155),
    [anon_sym_vf16] = ACTIONS(155),
    [anon_sym_vf32] = ACTIONS(155),
    [anon_sym_vf64] = ACTIONS(155),
    [anon_sym_vi16] = ACTIONS(155),
    [anon_sym_vi32] = ACTIONS(155),
    [anon_sym_vi64] = ACTIONS(155),
    [anon_sym_vi8] = ACTIONS(155),
    [anon_sym_void] = ACTIONS(155),
    [anon_sym_vu16] = ACTIONS(155),
    [anon_sym_vu32] = ACTIONS(155),
    [anon_sym_vu64] = ACTIONS(155),
    [anon_sym_vu8] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_QMARK_DOT] = ACTIONS(153),
    [anon_sym_BANG_DOT] = ACTIONS(153),
    [anon_sym_ad] = ACTIONS(155),
    [anon_sym_adfirma] = ACTIONS(155),
    [anon_sym_apud] = ACTIONS(155),
    [anon_sym_args] = ACTIONS(155),
    [anon_sym_argumenta] = ACTIONS(155),
    [anon_sym_assert] = ACTIONS(155),
    [anon_sym_async_main] = ACTIONS(155),
    [anon_sym_at] = ACTIONS(155),
    [anon_sym_break] = ACTIONS(155),
    [anon_sym_call] = ACTIONS(155),
    [anon_sym_cape] = ACTIONS(155),
    [anon_sym_capta] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_casu] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_ceterum] = ACTIONS(155),
    [anon_sym_continue] = ACTIONS(155),
    [anon_sym_custodi] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_discerne] = ACTIONS(155),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_dum] = ACTIONS(155),
    [anon_sym_elif] = ACTIONS(155),
    [anon_sym_elige] = ACTIONS(155),
    [anon_sym_else] = ACTIONS(155),
    [anon_sym_ergo] = ACTIONS(155),
    [anon_sym_fac] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(155),
    [anon_sym_guard] = ACTIONS(155),
    [anon_sym_iace] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_incipiet] = ACTIONS(155),
    [anon_sym_incipit] = ACTIONS(155),
    [anon_sym_itera] = ACTIONS(155),
    [anon_sym_main] = ACTIONS(155),
    [anon_sym_match] = ACTIONS(155),
    [anon_sym_mori] = ACTIONS(155),
    [anon_sym_panic] = ACTIONS(155),
    [anon_sym_pass] = ACTIONS(155),
    [anon_sym_perge] = ACTIONS(155),
    [anon_sym_redde] = ACTIONS(155),
    [anon_sym_reice] = ACTIONS(155),
    [anon_sym_reject] = ACTIONS(155),
    [anon_sym_require] = ACTIONS(155),
    [anon_sym_requirit] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_rumpe] = ACTIONS(155),
    [anon_sym_secus] = ACTIONS(155),
    [anon_sym_si] = ACTIONS(155),
    [anon_sym_sic] = ACTIONS(155),
    [anon_sym_sin] = ACTIONS(155),
    [anon_sym_switch] = ACTIONS(155),
    [anon_sym_tacet] = ACTIONS(155),
    [anon_sym_then] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_trap] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_yields] = ACTIONS(155),
    [anon_sym_ceteri] = ACTIONS(155),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_column] = ACTIONS(155),
    [anon_sym_columna] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(155),
    [anon_sym_discretio] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(155),
    [anon_sym_errata] = ACTIONS(155),
    [anon_sym_errors] = ACTIONS(155),
    [anon_sym_exit] = ACTIONS(155),
    [anon_sym_exitus] = ACTIONS(155),
    [anon_sym_fixum] = ACTIONS(155),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_functio] = ACTIONS(155),
    [anon_sym_generis] = ACTIONS(155),
    [anon_sym_genus] = ACTIONS(155),
    [anon_sym_iacit] = ACTIONS(155),
    [anon_sym_immutata] = ACTIONS(155),
    [anon_sym_implendum] = ACTIONS(155),
    [anon_sym_import] = ACTIONS(155),
    [anon_sym_importa] = ACTIONS(155),
    [anon_sym_interface] = ACTIONS(155),
    [anon_sym_interna] = ACTIONS(155),
    [anon_sym_internal] = ACTIONS(155),
    [anon_sym_iuncta] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_magnitudo] = ACTIONS(155),
    [anon_sym_optional] = ACTIONS(155),
    [anon_sym_optiones] = ACTIONS(155),
    [anon_sym_options] = ACTIONS(155),
    [anon_sym_ordo] = ACTIONS(155),
    [anon_sym_prae] = ACTIONS(155),
    [anon_sym_readonly] = ACTIONS(155),
    [anon_sym_rest] = ACTIONS(155),
    [anon_sym_schema] = ACTIONS(155),
    [anon_sym_sit] = ACTIONS(155),
    [anon_sym_size] = ACTIONS(155),
    [anon_sym_sponte] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(155),
    [anon_sym_throws] = ACTIONS(155),
    [anon_sym_tuple] = ACTIONS(155),
    [anon_sym_type] = ACTIONS(155),
    [anon_sym_typus] = ACTIONS(155),
    [anon_sym_union] = ACTIONS(155),
    [anon_sym_var] = ACTIONS(155),
    [anon_sym_varia] = ACTIONS(155),
    [anon_sym_ab] = ACTIONS(155),
    [anon_sym_all] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_ante] = ACTIONS(155),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_async] = ACTIONS(155),
    [anon_sym_async_generator] = ACTIONS(155),
    [anon_sym_async_setup] = ACTIONS(155),
    [anon_sym_async_teardown] = ACTIONS(155),
    [anon_sym_aut] = ACTIONS(155),
    [anon_sym_await] = ACTIONS(155),
    [anon_sym_await_const] = ACTIONS(155),
    [anon_sym_await_var] = ACTIONS(155),
    [anon_sym_before] = ACTIONS(155),
    [anon_sym_bench] = ACTIONS(155),
    [anon_sym_cede] = ACTIONS(155),
    [anon_sym_clausura] = ACTIONS(155),
    [anon_sym_coalesce] = ACTIONS(155),
    [anon_sym_comptime] = ACTIONS(155),
    [anon_sym_copy] = ACTIONS(155),
    [anon_sym_de] = ACTIONS(155),
    [anon_sym_debug] = ACTIONS(155),
    [anon_sym_describe] = ACTIONS(155),
    [anon_sym_ego] = ACTIONS(155),
    [anon_sym_embed] = ACTIONS(155),
    [anon_sym_erratur] = ACTIONS(155),
    [anon_sym_est] = ACTIONS(155),
    [anon_sym_et] = ACTIONS(155),
    [anon_sym_ex] = ACTIONS(155),
    [anon_sym_exemplum] = ACTIONS(155),
    [anon_sym_expect_failure] = ACTIONS(155),
    [anon_sym_fient] = ACTIONS(155),
    [anon_sym_fiet] = ACTIONS(155),
    [anon_sym_figendum] = ACTIONS(155),
    [anon_sym_finge] = ACTIONS(155),
    [anon_sym_fiunt] = ACTIONS(155),
    [anon_sym_flaky] = ACTIONS(155),
    [anon_sym_format] = ACTIONS(155),
    [anon_sym_fragilis] = ACTIONS(155),
    [anon_sym_from] = ACTIONS(155),
    [anon_sym_futurum] = ACTIONS(155),
    [anon_sym_generator] = ACTIONS(155),
    [anon_sym_implements] = ACTIONS(155),
    [anon_sym_implet] = ACTIONS(155),
    [anon_sym_in] = ACTIONS(155),
    [anon_sym_insere] = ACTIONS(155),
    [anon_sym_is] = ACTIONS(155),
    [anon_sym_lambda] = ACTIONS(155),
    [anon_sym_lege] = ACTIONS(155),
    [anon_sym_line] = ACTIONS(155),
    [anon_sym_lineam] = ACTIONS(155),
    [anon_sym_metior] = ACTIONS(155),
    [anon_sym_modulus] = ACTIONS(155),
    [anon_sym_mone] = ACTIONS(155),
    [anon_sym_mut] = ACTIONS(155),
    [anon_sym_negative] = ACTIONS(155),
    [anon_sym_negativum] = ACTIONS(155),
    [anon_sym_nihil] = ACTIONS(155),
    [anon_sym_non] = ACTIONS(155),
    [anon_sym_none] = ACTIONS(155),
    [anon_sym_nonnihil] = ACTIONS(155),
    [anon_sym_nonnulla] = ACTIONS(155),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_nota] = ACTIONS(155),
    [anon_sym_null] = ACTIONS(155),
    [anon_sym_nulla] = ACTIONS(155),
    [anon_sym_omitte] = ACTIONS(155),
    [anon_sym_omnia] = ACTIONS(155),
    [anon_sym_only] = ACTIONS(155),
    [anon_sym_only_in] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_own] = ACTIONS(155),
    [anon_sym_penes] = ACTIONS(155),
    [anon_sym_per] = ACTIONS(155),
    [anon_sym_positive] = ACTIONS(155),
    [anon_sym_positivum] = ACTIONS(155),
    [anon_sym_postpara] = ACTIONS(155),
    [anon_sym_postparabit] = ACTIONS(155),
    [anon_sym_praefixum] = ACTIONS(155),
    [anon_sym_praepara] = ACTIONS(155),
    [anon_sym_praeparabit] = ACTIONS(155),
    [anon_sym_print] = ACTIONS(155),
    [anon_sym_proba] = ACTIONS(155),
    [anon_sym_probandum] = ACTIONS(155),
    [anon_sym_range] = ACTIONS(155),
    [anon_sym_read] = ACTIONS(155),
    [anon_sym_reddet] = ACTIONS(155),
    [anon_sym_ref] = ACTIONS(155),
    [anon_sym_repeat] = ACTIONS(155),
    [anon_sym_repete] = ACTIONS(155),
    [anon_sym_return_await] = ACTIONS(155),
    [anon_sym_scribe] = ACTIONS(155),
    [anon_sym_scriptum] = ACTIONS(155),
    [anon_sym_self] = ACTIONS(155),
    [anon_sym_setup] = ACTIONS(155),
    [anon_sym_skip] = ACTIONS(155),
    [anon_sym_solum] = ACTIONS(155),
    [anon_sym_solum_in] = ACTIONS(155),
    [anon_sym_some] = ACTIONS(155),
    [anon_sym_sparge] = ACTIONS(155),
    [anon_sym_spread] = ACTIONS(155),
    [anon_sym_step] = ACTIONS(155),
    [anon_sym_tacebit] = ACTIONS(155),
    [anon_sym_tag] = ACTIONS(155),
    [anon_sym_teardown] = ACTIONS(155),
    [anon_sym_temporis] = ACTIONS(155),
    [anon_sym_test] = ACTIONS(155),
    [anon_sym_timeout] = ACTIONS(155),
    [anon_sym_todo] = ACTIONS(155),
    [anon_sym_until] = ACTIONS(155),
    [anon_sym_usque] = ACTIONS(155),
    [anon_sym_ut] = ACTIONS(155),
    [anon_sym_variandum] = ACTIONS(155),
    [anon_sym_variant] = ACTIONS(155),
    [anon_sym_vel] = ACTIONS(155),
    [anon_sym_via] = ACTIONS(155),
    [anon_sym_vide] = ACTIONS(155),
    [anon_sym_warn] = ACTIONS(155),
    [anon_sym_wrapping] = ACTIONS(155),
    [anon_sym_write] = ACTIONS(155),
    [anon_sym_yield] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_falsum] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_verum] = ACTIONS(155),
    [sym_guillemet_string] = ACTIONS(153),
    [sym_octeti_string] = ACTIONS(153),
    [sym_backtick_string] = ACTIONS(153),
    [sym_ascii_string] = ACTIONS(153),
    [sym_string] = ACTIONS(153),
    [sym_number] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [sym_operator] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [sym_hash] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(153),
    [sym_faber_newline] = ACTIONS(153),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_at_sign] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_cli] = ACTIONS(159),
    [anon_sym_conversio] = ACTIONS(159),
    [anon_sym_conversion] = ACTIONS(159),
    [anon_sym_cursor] = ACTIONS(159),
    [anon_sym_fragment] = ACTIONS(159),
    [anon_sym_futura] = ACTIONS(159),
    [anon_sym_imperium] = ACTIONS(159),
    [anon_sym_json] = ACTIONS(159),
    [anon_sym_nondum] = ACTIONS(159),
    [anon_sym_nucleum] = ACTIONS(159),
    [anon_sym_operandus] = ACTIONS(159),
    [anon_sym_optio] = ACTIONS(159),
    [anon_sym_privata] = ACTIONS(159),
    [anon_sym_private] = ACTIONS(159),
    [anon_sym_protecta] = ACTIONS(159),
    [anon_sym_protected] = ACTIONS(159),
    [anon_sym_public] = ACTIONS(159),
    [anon_sym_publica] = ACTIONS(159),
    [anon_sym_radix] = ACTIONS(159),
    [anon_sym_verte] = ACTIONS(159),
    [anon_sym_vertex] = ACTIONS(159),
    [anon_sym_brevis] = ACTIONS(159),
    [anon_sym_descriptio] = ACTIONS(159),
    [anon_sym_description] = ACTIONS(159),
    [anon_sym_global] = ACTIONS(159),
    [anon_sym_lane] = ACTIONS(159),
    [anon_sym_long] = ACTIONS(159),
    [anon_sym_longum] = ACTIONS(159),
    [anon_sym_name] = ACTIONS(159),
    [anon_sym_nomen] = ACTIONS(159),
    [anon_sym_short] = ACTIONS(159),
    [anon_sym_ubique] = ACTIONS(159),
    [anon_sym_ascii] = ACTIONS(159),
    [anon_sym_bivalens] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_byte] = ACTIONS(159),
    [anon_sym_bytes] = ACTIONS(159),
    [anon_sym_char] = ACTIONS(159),
    [anon_sym_copia] = ACTIONS(159),
    [anon_sym_cursor_t] = ACTIONS(159),
    [anon_sym_exactus] = ACTIONS(159),
    [anon_sym_f16] = ACTIONS(159),
    [anon_sym_f32] = ACTIONS(159),
    [anon_sym_f64] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_fractus] = ACTIONS(159),
    [anon_sym_i16] = ACTIONS(159),
    [anon_sym_i32] = ACTIONS(159),
    [anon_sym_i64] = ACTIONS(159),
    [anon_sym_i8] = ACTIONS(159),
    [anon_sym_ignotum] = ACTIONS(159),
    [anon_sym_instans] = ACTIONS(159),
    [anon_sym_instant] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_intervallum] = ACTIONS(159),
    [anon_sym_iterator] = ACTIONS(159),
    [anon_sym_lf16] = ACTIONS(159),
    [anon_sym_lf32] = ACTIONS(159),
    [anon_sym_lf64] = ACTIONS(159),
    [anon_sym_li16] = ACTIONS(159),
    [anon_sym_li32] = ACTIONS(159),
    [anon_sym_li64] = ACTIONS(159),
    [anon_sym_li8] = ACTIONS(159),
    [anon_sym_list] = ACTIONS(159),
    [anon_sym_lista] = ACTIONS(159),
    [anon_sym_littera] = ACTIONS(159),
    [anon_sym_lu16] = ACTIONS(159),
    [anon_sym_lu32] = ACTIONS(159),
    [anon_sym_lu64] = ACTIONS(159),
    [anon_sym_lu8] = ACTIONS(159),
    [anon_sym_map] = ACTIONS(159),
    [anon_sym_matrix] = ACTIONS(159),
    [anon_sym_mf16] = ACTIONS(159),
    [anon_sym_mf32] = ACTIONS(159),
    [anon_sym_mf64] = ACTIONS(159),
    [anon_sym_mi16] = ACTIONS(159),
    [anon_sym_mi32] = ACTIONS(159),
    [anon_sym_mi64] = ACTIONS(159),
    [anon_sym_mi8] = ACTIONS(159),
    [anon_sym_mu16] = ACTIONS(159),
    [anon_sym_mu32] = ACTIONS(159),
    [anon_sym_mu64] = ACTIONS(159),
    [anon_sym_mu8] = ACTIONS(159),
    [anon_sym_never] = ACTIONS(159),
    [anon_sym_numerus] = ACTIONS(159),
    [anon_sym_numquam] = ACTIONS(159),
    [anon_sym_octeti] = ACTIONS(159),
    [anon_sym_octetus] = ACTIONS(159),
    [anon_sym_promise] = ACTIONS(159),
    [anon_sym_promissum] = ACTIONS(159),
    [anon_sym_queue] = ACTIONS(159),
    [anon_sym_ratio] = ACTIONS(159),
    [anon_sym_record] = ACTIONS(159),
    [anon_sym_regex] = ACTIONS(159),
    [anon_sym_saturating] = ACTIONS(159),
    [anon_sym_saturatus] = ACTIONS(159),
    [anon_sym_series] = ACTIONS(159),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_sf16] = ACTIONS(159),
    [anon_sym_sf32] = ACTIONS(159),
    [anon_sym_sf64] = ACTIONS(159),
    [anon_sym_si16] = ACTIONS(159),
    [anon_sym_si32] = ACTIONS(159),
    [anon_sym_si64] = ACTIONS(159),
    [anon_sym_si8] = ACTIONS(159),
    [anon_sym_sparsa] = ACTIONS(159),
    [anon_sym_stack] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_su16] = ACTIONS(159),
    [anon_sym_su32] = ACTIONS(159),
    [anon_sym_su64] = ACTIONS(159),
    [anon_sym_su8] = ACTIONS(159),
    [anon_sym_tabula] = ACTIONS(159),
    [anon_sym_tensor] = ACTIONS(159),
    [anon_sym_textus] = ACTIONS(159),
    [anon_sym_tf16] = ACTIONS(159),
    [anon_sym_tf32] = ACTIONS(159),
    [anon_sym_tf64] = ACTIONS(159),
    [anon_sym_ti16] = ACTIONS(159),
    [anon_sym_ti32] = ACTIONS(159),
    [anon_sym_ti64] = ACTIONS(159),
    [anon_sym_ti8] = ACTIONS(159),
    [anon_sym_trapping] = ACTIONS(159),
    [anon_sym_tu16] = ACTIONS(159),
    [anon_sym_tu32] = ACTIONS(159),
    [anon_sym_tu64] = ACTIONS(159),
    [anon_sym_tu8] = ACTIONS(159),
    [anon_sym_u16] = ACTIONS(159),
    [anon_sym_u32] = ACTIONS(159),
    [anon_sym_u64] = ACTIONS(159),
    [anon_sym_u8] = ACTIONS(159),
    [anon_sym_unio] = ACTIONS(159),
    [anon_sym_unknown] = ACTIONS(159),
    [anon_sym_vacua] = ACTIONS(159),
    [anon_sym_vacuum] = ACTIONS(159),
    [anon_sym_valor] = ACTIONS(159),
    [anon_sym_vector] = ACTIONS(159),
    [anon_sym_vf16] = ACTIONS(159),
    [anon_sym_vf32] = ACTIONS(159),
    [anon_sym_vf64] = ACTIONS(159),
    [anon_sym_vi16] = ACTIONS(159),
    [anon_sym_vi32] = ACTIONS(159),
    [anon_sym_vi64] = ACTIONS(159),
    [anon_sym_vi8] = ACTIONS(159),
    [anon_sym_void] = ACTIONS(159),
    [anon_sym_vu16] = ACTIONS(159),
    [anon_sym_vu32] = ACTIONS(159),
    [anon_sym_vu64] = ACTIONS(159),
    [anon_sym_vu8] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_QMARK_DOT] = ACTIONS(157),
    [anon_sym_BANG_DOT] = ACTIONS(157),
    [anon_sym_ad] = ACTIONS(159),
    [anon_sym_adfirma] = ACTIONS(159),
    [anon_sym_apud] = ACTIONS(159),
    [anon_sym_args] = ACTIONS(159),
    [anon_sym_argumenta] = ACTIONS(159),
    [anon_sym_assert] = ACTIONS(159),
    [anon_sym_async_main] = ACTIONS(159),
    [anon_sym_at] = ACTIONS(159),
    [anon_sym_break] = ACTIONS(159),
    [anon_sym_call] = ACTIONS(159),
    [anon_sym_cape] = ACTIONS(159),
    [anon_sym_capta] = ACTIONS(159),
    [anon_sym_case] = ACTIONS(159),
    [anon_sym_casu] = ACTIONS(159),
    [anon_sym_catch] = ACTIONS(159),
    [anon_sym_ceterum] = ACTIONS(159),
    [anon_sym_continue] = ACTIONS(159),
    [anon_sym_custodi] = ACTIONS(159),
    [anon_sym_default] = ACTIONS(159),
    [anon_sym_discerne] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(159),
    [anon_sym_dum] = ACTIONS(159),
    [anon_sym_elif] = ACTIONS(159),
    [anon_sym_elige] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(159),
    [anon_sym_ergo] = ACTIONS(159),
    [anon_sym_fac] = ACTIONS(159),
    [anon_sym_for] = ACTIONS(159),
    [anon_sym_guard] = ACTIONS(159),
    [anon_sym_iace] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_incipiet] = ACTIONS(159),
    [anon_sym_incipit] = ACTIONS(159),
    [anon_sym_itera] = ACTIONS(159),
    [anon_sym_main] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(159),
    [anon_sym_mori] = ACTIONS(159),
    [anon_sym_panic] = ACTIONS(159),
    [anon_sym_pass] = ACTIONS(159),
    [anon_sym_perge] = ACTIONS(159),
    [anon_sym_redde] = ACTIONS(159),
    [anon_sym_reice] = ACTIONS(159),
    [anon_sym_reject] = ACTIONS(159),
    [anon_sym_require] = ACTIONS(159),
    [anon_sym_requirit] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(159),
    [anon_sym_rumpe] = ACTIONS(159),
    [anon_sym_secus] = ACTIONS(159),
    [anon_sym_si] = ACTIONS(159),
    [anon_sym_sic] = ACTIONS(159),
    [anon_sym_sin] = ACTIONS(159),
    [anon_sym_switch] = ACTIONS(159),
    [anon_sym_tacet] = ACTIONS(159),
    [anon_sym_then] = ACTIONS(159),
    [anon_sym_throw] = ACTIONS(159),
    [anon_sym_trap] = ACTIONS(159),
    [anon_sym_while] = ACTIONS(159),
    [anon_sym_yields] = ACTIONS(159),
    [anon_sym_ceteri] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(159),
    [anon_sym_column] = ACTIONS(159),
    [anon_sym_columna] = ACTIONS(159),
    [anon_sym_const] = ACTIONS(159),
    [anon_sym_discretio] = ACTIONS(159),
    [anon_sym_enum] = ACTIONS(159),
    [anon_sym_errata] = ACTIONS(159),
    [anon_sym_errors] = ACTIONS(159),
    [anon_sym_exit] = ACTIONS(159),
    [anon_sym_exitus] = ACTIONS(159),
    [anon_sym_fixum] = ACTIONS(159),
    [anon_sym_fn] = ACTIONS(159),
    [anon_sym_functio] = ACTIONS(159),
    [anon_sym_generis] = ACTIONS(159),
    [anon_sym_genus] = ACTIONS(159),
    [anon_sym_iacit] = ACTIONS(159),
    [anon_sym_immutata] = ACTIONS(159),
    [anon_sym_implendum] = ACTIONS(159),
    [anon_sym_import] = ACTIONS(159),
    [anon_sym_importa] = ACTIONS(159),
    [anon_sym_interface] = ACTIONS(159),
    [anon_sym_interna] = ACTIONS(159),
    [anon_sym_internal] = ACTIONS(159),
    [anon_sym_iuncta] = ACTIONS(159),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_magnitudo] = ACTIONS(159),
    [anon_sym_optional] = ACTIONS(159),
    [anon_sym_optiones] = ACTIONS(159),
    [anon_sym_options] = ACTIONS(159),
    [anon_sym_ordo] = ACTIONS(159),
    [anon_sym_prae] = ACTIONS(159),
    [anon_sym_readonly] = ACTIONS(159),
    [anon_sym_rest] = ACTIONS(159),
    [anon_sym_schema] = ACTIONS(159),
    [anon_sym_sit] = ACTIONS(159),
    [anon_sym_size] = ACTIONS(159),
    [anon_sym_sponte] = ACTIONS(159),
    [anon_sym_static] = ACTIONS(159),
    [anon_sym_throws] = ACTIONS(159),
    [anon_sym_tuple] = ACTIONS(159),
    [anon_sym_type] = ACTIONS(159),
    [anon_sym_typus] = ACTIONS(159),
    [anon_sym_union] = ACTIONS(159),
    [anon_sym_var] = ACTIONS(159),
    [anon_sym_varia] = ACTIONS(159),
    [anon_sym_ab] = ACTIONS(159),
    [anon_sym_all] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_ante] = ACTIONS(159),
    [anon_sym_as] = ACTIONS(159),
    [anon_sym_async] = ACTIONS(159),
    [anon_sym_async_generator] = ACTIONS(159),
    [anon_sym_async_setup] = ACTIONS(159),
    [anon_sym_async_teardown] = ACTIONS(159),
    [anon_sym_aut] = ACTIONS(159),
    [anon_sym_await] = ACTIONS(159),
    [anon_sym_await_const] = ACTIONS(159),
    [anon_sym_await_var] = ACTIONS(159),
    [anon_sym_before] = ACTIONS(159),
    [anon_sym_bench] = ACTIONS(159),
    [anon_sym_cede] = ACTIONS(159),
    [anon_sym_clausura] = ACTIONS(159),
    [anon_sym_coalesce] = ACTIONS(159),
    [anon_sym_comptime] = ACTIONS(159),
    [anon_sym_copy] = ACTIONS(159),
    [anon_sym_de] = ACTIONS(159),
    [anon_sym_debug] = ACTIONS(159),
    [anon_sym_describe] = ACTIONS(159),
    [anon_sym_ego] = ACTIONS(159),
    [anon_sym_embed] = ACTIONS(159),
    [anon_sym_erratur] = ACTIONS(159),
    [anon_sym_est] = ACTIONS(159),
    [anon_sym_et] = ACTIONS(159),
    [anon_sym_ex] = ACTIONS(159),
    [anon_sym_exemplum] = ACTIONS(159),
    [anon_sym_expect_failure] = ACTIONS(159),
    [anon_sym_fient] = ACTIONS(159),
    [anon_sym_fiet] = ACTIONS(159),
    [anon_sym_figendum] = ACTIONS(159),
    [anon_sym_finge] = ACTIONS(159),
    [anon_sym_fiunt] = ACTIONS(159),
    [anon_sym_flaky] = ACTIONS(159),
    [anon_sym_format] = ACTIONS(159),
    [anon_sym_fragilis] = ACTIONS(159),
    [anon_sym_from] = ACTIONS(159),
    [anon_sym_futurum] = ACTIONS(159),
    [anon_sym_generator] = ACTIONS(159),
    [anon_sym_implements] = ACTIONS(159),
    [anon_sym_implet] = ACTIONS(159),
    [anon_sym_in] = ACTIONS(159),
    [anon_sym_insere] = ACTIONS(159),
    [anon_sym_is] = ACTIONS(159),
    [anon_sym_lambda] = ACTIONS(159),
    [anon_sym_lege] = ACTIONS(159),
    [anon_sym_line] = ACTIONS(159),
    [anon_sym_lineam] = ACTIONS(159),
    [anon_sym_metior] = ACTIONS(159),
    [anon_sym_modulus] = ACTIONS(159),
    [anon_sym_mone] = ACTIONS(159),
    [anon_sym_mut] = ACTIONS(159),
    [anon_sym_negative] = ACTIONS(159),
    [anon_sym_negativum] = ACTIONS(159),
    [anon_sym_nihil] = ACTIONS(159),
    [anon_sym_non] = ACTIONS(159),
    [anon_sym_none] = ACTIONS(159),
    [anon_sym_nonnihil] = ACTIONS(159),
    [anon_sym_nonnulla] = ACTIONS(159),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_nota] = ACTIONS(159),
    [anon_sym_null] = ACTIONS(159),
    [anon_sym_nulla] = ACTIONS(159),
    [anon_sym_omitte] = ACTIONS(159),
    [anon_sym_omnia] = ACTIONS(159),
    [anon_sym_only] = ACTIONS(159),
    [anon_sym_only_in] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [anon_sym_own] = ACTIONS(159),
    [anon_sym_penes] = ACTIONS(159),
    [anon_sym_per] = ACTIONS(159),
    [anon_sym_positive] = ACTIONS(159),
    [anon_sym_positivum] = ACTIONS(159),
    [anon_sym_postpara] = ACTIONS(159),
    [anon_sym_postparabit] = ACTIONS(159),
    [anon_sym_praefixum] = ACTIONS(159),
    [anon_sym_praepara] = ACTIONS(159),
    [anon_sym_praeparabit] = ACTIONS(159),
    [anon_sym_print] = ACTIONS(159),
    [anon_sym_proba] = ACTIONS(159),
    [anon_sym_probandum] = ACTIONS(159),
    [anon_sym_range] = ACTIONS(159),
    [anon_sym_read] = ACTIONS(159),
    [anon_sym_reddet] = ACTIONS(159),
    [anon_sym_ref] = ACTIONS(159),
    [anon_sym_repeat] = ACTIONS(159),
    [anon_sym_repete] = ACTIONS(159),
    [anon_sym_return_await] = ACTIONS(159),
    [anon_sym_scribe] = ACTIONS(159),
    [anon_sym_scriptum] = ACTIONS(159),
    [anon_sym_self] = ACTIONS(159),
    [anon_sym_setup] = ACTIONS(159),
    [anon_sym_skip] = ACTIONS(159),
    [anon_sym_solum] = ACTIONS(159),
    [anon_sym_solum_in] = ACTIONS(159),
    [anon_sym_some] = ACTIONS(159),
    [anon_sym_sparge] = ACTIONS(159),
    [anon_sym_spread] = ACTIONS(159),
    [anon_sym_step] = ACTIONS(159),
    [anon_sym_tacebit] = ACTIONS(159),
    [anon_sym_tag] = ACTIONS(159),
    [anon_sym_teardown] = ACTIONS(159),
    [anon_sym_temporis] = ACTIONS(159),
    [anon_sym_test] = ACTIONS(159),
    [anon_sym_timeout] = ACTIONS(159),
    [anon_sym_todo] = ACTIONS(159),
    [anon_sym_until] = ACTIONS(159),
    [anon_sym_usque] = ACTIONS(159),
    [anon_sym_ut] = ACTIONS(159),
    [anon_sym_variandum] = ACTIONS(159),
    [anon_sym_variant] = ACTIONS(159),
    [anon_sym_vel] = ACTIONS(159),
    [anon_sym_via] = ACTIONS(159),
    [anon_sym_vide] = ACTIONS(159),
    [anon_sym_warn] = ACTIONS(159),
    [anon_sym_wrapping] = ACTIONS(159),
    [anon_sym_write] = ACTIONS(159),
    [anon_sym_yield] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_falsum] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_verum] = ACTIONS(159),
    [sym_guillemet_string] = ACTIONS(157),
    [sym_octeti_string] = ACTIONS(157),
    [sym_backtick_string] = ACTIONS(157),
    [sym_ascii_string] = ACTIONS(157),
    [sym_string] = ACTIONS(157),
    [sym_number] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [sym_operator] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [sym_hash] = ACTIONS(157),
    [sym_line_comment] = ACTIONS(157),
    [sym_faber_newline] = ACTIONS(157),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_at_sign] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_cli] = ACTIONS(163),
    [anon_sym_conversio] = ACTIONS(163),
    [anon_sym_conversion] = ACTIONS(163),
    [anon_sym_cursor] = ACTIONS(163),
    [anon_sym_fragment] = ACTIONS(163),
    [anon_sym_futura] = ACTIONS(163),
    [anon_sym_imperium] = ACTIONS(163),
    [anon_sym_json] = ACTIONS(163),
    [anon_sym_nondum] = ACTIONS(163),
    [anon_sym_nucleum] = ACTIONS(163),
    [anon_sym_operandus] = ACTIONS(163),
    [anon_sym_optio] = ACTIONS(163),
    [anon_sym_privata] = ACTIONS(163),
    [anon_sym_private] = ACTIONS(163),
    [anon_sym_protecta] = ACTIONS(163),
    [anon_sym_protected] = ACTIONS(163),
    [anon_sym_public] = ACTIONS(163),
    [anon_sym_publica] = ACTIONS(163),
    [anon_sym_radix] = ACTIONS(163),
    [anon_sym_verte] = ACTIONS(163),
    [anon_sym_vertex] = ACTIONS(163),
    [anon_sym_brevis] = ACTIONS(163),
    [anon_sym_descriptio] = ACTIONS(163),
    [anon_sym_description] = ACTIONS(163),
    [anon_sym_global] = ACTIONS(163),
    [anon_sym_lane] = ACTIONS(163),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_longum] = ACTIONS(163),
    [anon_sym_name] = ACTIONS(163),
    [anon_sym_nomen] = ACTIONS(163),
    [anon_sym_short] = ACTIONS(163),
    [anon_sym_ubique] = ACTIONS(163),
    [anon_sym_ascii] = ACTIONS(163),
    [anon_sym_bivalens] = ACTIONS(163),
    [anon_sym_bool] = ACTIONS(163),
    [anon_sym_byte] = ACTIONS(163),
    [anon_sym_bytes] = ACTIONS(163),
    [anon_sym_char] = ACTIONS(163),
    [anon_sym_copia] = ACTIONS(163),
    [anon_sym_cursor_t] = ACTIONS(163),
    [anon_sym_exactus] = ACTIONS(163),
    [anon_sym_f16] = ACTIONS(163),
    [anon_sym_f32] = ACTIONS(163),
    [anon_sym_f64] = ACTIONS(163),
    [anon_sym_float] = ACTIONS(163),
    [anon_sym_fractus] = ACTIONS(163),
    [anon_sym_i16] = ACTIONS(163),
    [anon_sym_i32] = ACTIONS(163),
    [anon_sym_i64] = ACTIONS(163),
    [anon_sym_i8] = ACTIONS(163),
    [anon_sym_ignotum] = ACTIONS(163),
    [anon_sym_instans] = ACTIONS(163),
    [anon_sym_instant] = ACTIONS(163),
    [anon_sym_int] = ACTIONS(163),
    [anon_sym_intervallum] = ACTIONS(163),
    [anon_sym_iterator] = ACTIONS(163),
    [anon_sym_lf16] = ACTIONS(163),
    [anon_sym_lf32] = ACTIONS(163),
    [anon_sym_lf64] = ACTIONS(163),
    [anon_sym_li16] = ACTIONS(163),
    [anon_sym_li32] = ACTIONS(163),
    [anon_sym_li64] = ACTIONS(163),
    [anon_sym_li8] = ACTIONS(163),
    [anon_sym_list] = ACTIONS(163),
    [anon_sym_lista] = ACTIONS(163),
    [anon_sym_littera] = ACTIONS(163),
    [anon_sym_lu16] = ACTIONS(163),
    [anon_sym_lu32] = ACTIONS(163),
    [anon_sym_lu64] = ACTIONS(163),
    [anon_sym_lu8] = ACTIONS(163),
    [anon_sym_map] = ACTIONS(163),
    [anon_sym_matrix] = ACTIONS(163),
    [anon_sym_mf16] = ACTIONS(163),
    [anon_sym_mf32] = ACTIONS(163),
    [anon_sym_mf64] = ACTIONS(163),
    [anon_sym_mi16] = ACTIONS(163),
    [anon_sym_mi32] = ACTIONS(163),
    [anon_sym_mi64] = ACTIONS(163),
    [anon_sym_mi8] = ACTIONS(163),
    [anon_sym_mu16] = ACTIONS(163),
    [anon_sym_mu32] = ACTIONS(163),
    [anon_sym_mu64] = ACTIONS(163),
    [anon_sym_mu8] = ACTIONS(163),
    [anon_sym_never] = ACTIONS(163),
    [anon_sym_numerus] = ACTIONS(163),
    [anon_sym_numquam] = ACTIONS(163),
    [anon_sym_octeti] = ACTIONS(163),
    [anon_sym_octetus] = ACTIONS(163),
    [anon_sym_promise] = ACTIONS(163),
    [anon_sym_promissum] = ACTIONS(163),
    [anon_sym_queue] = ACTIONS(163),
    [anon_sym_ratio] = ACTIONS(163),
    [anon_sym_record] = ACTIONS(163),
    [anon_sym_regex] = ACTIONS(163),
    [anon_sym_saturating] = ACTIONS(163),
    [anon_sym_saturatus] = ACTIONS(163),
    [anon_sym_series] = ACTIONS(163),
    [anon_sym_set] = ACTIONS(163),
    [anon_sym_sf16] = ACTIONS(163),
    [anon_sym_sf32] = ACTIONS(163),
    [anon_sym_sf64] = ACTIONS(163),
    [anon_sym_si16] = ACTIONS(163),
    [anon_sym_si32] = ACTIONS(163),
    [anon_sym_si64] = ACTIONS(163),
    [anon_sym_si8] = ACTIONS(163),
    [anon_sym_sparsa] = ACTIONS(163),
    [anon_sym_stack] = ACTIONS(163),
    [anon_sym_string] = ACTIONS(163),
    [anon_sym_su16] = ACTIONS(163),
    [anon_sym_su32] = ACTIONS(163),
    [anon_sym_su64] = ACTIONS(163),
    [anon_sym_su8] = ACTIONS(163),
    [anon_sym_tabula] = ACTIONS(163),
    [anon_sym_tensor] = ACTIONS(163),
    [anon_sym_textus] = ACTIONS(163),
    [anon_sym_tf16] = ACTIONS(163),
    [anon_sym_tf32] = ACTIONS(163),
    [anon_sym_tf64] = ACTIONS(163),
    [anon_sym_ti16] = ACTIONS(163),
    [anon_sym_ti32] = ACTIONS(163),
    [anon_sym_ti64] = ACTIONS(163),
    [anon_sym_ti8] = ACTIONS(163),
    [anon_sym_trapping] = ACTIONS(163),
    [anon_sym_tu16] = ACTIONS(163),
    [anon_sym_tu32] = ACTIONS(163),
    [anon_sym_tu64] = ACTIONS(163),
    [anon_sym_tu8] = ACTIONS(163),
    [anon_sym_u16] = ACTIONS(163),
    [anon_sym_u32] = ACTIONS(163),
    [anon_sym_u64] = ACTIONS(163),
    [anon_sym_u8] = ACTIONS(163),
    [anon_sym_unio] = ACTIONS(163),
    [anon_sym_unknown] = ACTIONS(163),
    [anon_sym_vacua] = ACTIONS(163),
    [anon_sym_vacuum] = ACTIONS(163),
    [anon_sym_valor] = ACTIONS(163),
    [anon_sym_vector] = ACTIONS(163),
    [anon_sym_vf16] = ACTIONS(163),
    [anon_sym_vf32] = ACTIONS(163),
    [anon_sym_vf64] = ACTIONS(163),
    [anon_sym_vi16] = ACTIONS(163),
    [anon_sym_vi32] = ACTIONS(163),
    [anon_sym_vi64] = ACTIONS(163),
    [anon_sym_vi8] = ACTIONS(163),
    [anon_sym_void] = ACTIONS(163),
    [anon_sym_vu16] = ACTIONS(163),
    [anon_sym_vu32] = ACTIONS(163),
    [anon_sym_vu64] = ACTIONS(163),
    [anon_sym_vu8] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_QMARK_DOT] = ACTIONS(161),
    [anon_sym_BANG_DOT] = ACTIONS(161),
    [anon_sym_ad] = ACTIONS(163),
    [anon_sym_adfirma] = ACTIONS(163),
    [anon_sym_apud] = ACTIONS(163),
    [anon_sym_args] = ACTIONS(163),
    [anon_sym_argumenta] = ACTIONS(163),
    [anon_sym_assert] = ACTIONS(163),
    [anon_sym_async_main] = ACTIONS(163),
    [anon_sym_at] = ACTIONS(163),
    [anon_sym_break] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(163),
    [anon_sym_cape] = ACTIONS(163),
    [anon_sym_capta] = ACTIONS(163),
    [anon_sym_case] = ACTIONS(163),
    [anon_sym_casu] = ACTIONS(163),
    [anon_sym_catch] = ACTIONS(163),
    [anon_sym_ceterum] = ACTIONS(163),
    [anon_sym_continue] = ACTIONS(163),
    [anon_sym_custodi] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
    [anon_sym_discerne] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(163),
    [anon_sym_dum] = ACTIONS(163),
    [anon_sym_elif] = ACTIONS(163),
    [anon_sym_elige] = ACTIONS(163),
    [anon_sym_else] = ACTIONS(163),
    [anon_sym_ergo] = ACTIONS(163),
    [anon_sym_fac] = ACTIONS(163),
    [anon_sym_for] = ACTIONS(163),
    [anon_sym_guard] = ACTIONS(163),
    [anon_sym_iace] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_incipiet] = ACTIONS(163),
    [anon_sym_incipit] = ACTIONS(163),
    [anon_sym_itera] = ACTIONS(163),
    [anon_sym_main] = ACTIONS(163),
    [anon_sym_match] = ACTIONS(163),
    [anon_sym_mori] = ACTIONS(163),
    [anon_sym_panic] = ACTIONS(163),
    [anon_sym_pass] = ACTIONS(163),
    [anon_sym_perge] = ACTIONS(163),
    [anon_sym_redde] = ACTIONS(163),
    [anon_sym_reice] = ACTIONS(163),
    [anon_sym_reject] = ACTIONS(163),
    [anon_sym_require] = ACTIONS(163),
    [anon_sym_requirit] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(163),
    [anon_sym_rumpe] = ACTIONS(163),
    [anon_sym_secus] = ACTIONS(163),
    [anon_sym_si] = ACTIONS(163),
    [anon_sym_sic] = ACTIONS(163),
    [anon_sym_sin] = ACTIONS(163),
    [anon_sym_switch] = ACTIONS(163),
    [anon_sym_tacet] = ACTIONS(163),
    [anon_sym_then] = ACTIONS(163),
    [anon_sym_throw] = ACTIONS(163),
    [anon_sym_trap] = ACTIONS(163),
    [anon_sym_while] = ACTIONS(163),
    [anon_sym_yields] = ACTIONS(163),
    [anon_sym_ceteri] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_column] = ACTIONS(163),
    [anon_sym_columna] = ACTIONS(163),
    [anon_sym_const] = ACTIONS(163),
    [anon_sym_discretio] = ACTIONS(163),
    [anon_sym_enum] = ACTIONS(163),
    [anon_sym_errata] = ACTIONS(163),
    [anon_sym_errors] = ACTIONS(163),
    [anon_sym_exit] = ACTIONS(163),
    [anon_sym_exitus] = ACTIONS(163),
    [anon_sym_fixum] = ACTIONS(163),
    [anon_sym_fn] = ACTIONS(163),
    [anon_sym_functio] = ACTIONS(163),
    [anon_sym_generis] = ACTIONS(163),
    [anon_sym_genus] = ACTIONS(163),
    [anon_sym_iacit] = ACTIONS(163),
    [anon_sym_immutata] = ACTIONS(163),
    [anon_sym_implendum] = ACTIONS(163),
    [anon_sym_import] = ACTIONS(163),
    [anon_sym_importa] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_interna] = ACTIONS(163),
    [anon_sym_internal] = ACTIONS(163),
    [anon_sym_iuncta] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(163),
    [anon_sym_magnitudo] = ACTIONS(163),
    [anon_sym_optional] = ACTIONS(163),
    [anon_sym_optiones] = ACTIONS(163),
    [anon_sym_options] = ACTIONS(163),
    [anon_sym_ordo] = ACTIONS(163),
    [anon_sym_prae] = ACTIONS(163),
    [anon_sym_readonly] = ACTIONS(163),
    [anon_sym_rest] = ACTIONS(163),
    [anon_sym_schema] = ACTIONS(163),
    [anon_sym_sit] = ACTIONS(163),
    [anon_sym_size] = ACTIONS(163),
    [anon_sym_sponte] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_throws] = ACTIONS(163),
    [anon_sym_tuple] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_typus] = ACTIONS(163),
    [anon_sym_union] = ACTIONS(163),
    [anon_sym_var] = ACTIONS(163),
    [anon_sym_varia] = ACTIONS(163),
    [anon_sym_ab] = ACTIONS(163),
    [anon_sym_all] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_ante] = ACTIONS(163),
    [anon_sym_as] = ACTIONS(163),
    [anon_sym_async] = ACTIONS(163),
    [anon_sym_async_generator] = ACTIONS(163),
    [anon_sym_async_setup] = ACTIONS(163),
    [anon_sym_async_teardown] = ACTIONS(163),
    [anon_sym_aut] = ACTIONS(163),
    [anon_sym_await] = ACTIONS(163),
    [anon_sym_await_const] = ACTIONS(163),
    [anon_sym_await_var] = ACTIONS(163),
    [anon_sym_before] = ACTIONS(163),
    [anon_sym_bench] = ACTIONS(163),
    [anon_sym_cede] = ACTIONS(163),
    [anon_sym_clausura] = ACTIONS(163),
    [anon_sym_coalesce] = ACTIONS(163),
    [anon_sym_comptime] = ACTIONS(163),
    [anon_sym_copy] = ACTIONS(163),
    [anon_sym_de] = ACTIONS(163),
    [anon_sym_debug] = ACTIONS(163),
    [anon_sym_describe] = ACTIONS(163),
    [anon_sym_ego] = ACTIONS(163),
    [anon_sym_embed] = ACTIONS(163),
    [anon_sym_erratur] = ACTIONS(163),
    [anon_sym_est] = ACTIONS(163),
    [anon_sym_et] = ACTIONS(163),
    [anon_sym_ex] = ACTIONS(163),
    [anon_sym_exemplum] = ACTIONS(163),
    [anon_sym_expect_failure] = ACTIONS(163),
    [anon_sym_fient] = ACTIONS(163),
    [anon_sym_fiet] = ACTIONS(163),
    [anon_sym_figendum] = ACTIONS(163),
    [anon_sym_finge] = ACTIONS(163),
    [anon_sym_fiunt] = ACTIONS(163),
    [anon_sym_flaky] = ACTIONS(163),
    [anon_sym_format] = ACTIONS(163),
    [anon_sym_fragilis] = ACTIONS(163),
    [anon_sym_from] = ACTIONS(163),
    [anon_sym_futurum] = ACTIONS(163),
    [anon_sym_generator] = ACTIONS(163),
    [anon_sym_implements] = ACTIONS(163),
    [anon_sym_implet] = ACTIONS(163),
    [anon_sym_in] = ACTIONS(163),
    [anon_sym_insere] = ACTIONS(163),
    [anon_sym_is] = ACTIONS(163),
    [anon_sym_lambda] = ACTIONS(163),
    [anon_sym_lege] = ACTIONS(163),
    [anon_sym_line] = ACTIONS(163),
    [anon_sym_lineam] = ACTIONS(163),
    [anon_sym_metior] = ACTIONS(163),
    [anon_sym_modulus] = ACTIONS(163),
    [anon_sym_mone] = ACTIONS(163),
    [anon_sym_mut] = ACTIONS(163),
    [anon_sym_negative] = ACTIONS(163),
    [anon_sym_negativum] = ACTIONS(163),
    [anon_sym_nihil] = ACTIONS(163),
    [anon_sym_non] = ACTIONS(163),
    [anon_sym_none] = ACTIONS(163),
    [anon_sym_nonnihil] = ACTIONS(163),
    [anon_sym_nonnulla] = ACTIONS(163),
    [anon_sym_not] = ACTIONS(163),
    [anon_sym_nota] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(163),
    [anon_sym_nulla] = ACTIONS(163),
    [anon_sym_omitte] = ACTIONS(163),
    [anon_sym_omnia] = ACTIONS(163),
    [anon_sym_only] = ACTIONS(163),
    [anon_sym_only_in] = ACTIONS(163),
    [anon_sym_or] = ACTIONS(163),
    [anon_sym_own] = ACTIONS(163),
    [anon_sym_penes] = ACTIONS(163),
    [anon_sym_per] = ACTIONS(163),
    [anon_sym_positive] = ACTIONS(163),
    [anon_sym_positivum] = ACTIONS(163),
    [anon_sym_postpara] = ACTIONS(163),
    [anon_sym_postparabit] = ACTIONS(163),
    [anon_sym_praefixum] = ACTIONS(163),
    [anon_sym_praepara] = ACTIONS(163),
    [anon_sym_praeparabit] = ACTIONS(163),
    [anon_sym_print] = ACTIONS(163),
    [anon_sym_proba] = ACTIONS(163),
    [anon_sym_probandum] = ACTIONS(163),
    [anon_sym_range] = ACTIONS(163),
    [anon_sym_read] = ACTIONS(163),
    [anon_sym_reddet] = ACTIONS(163),
    [anon_sym_ref] = ACTIONS(163),
    [anon_sym_repeat] = ACTIONS(163),
    [anon_sym_repete] = ACTIONS(163),
    [anon_sym_return_await] = ACTIONS(163),
    [anon_sym_scribe] = ACTIONS(163),
    [anon_sym_scriptum] = ACTIONS(163),
    [anon_sym_self] = ACTIONS(163),
    [anon_sym_setup] = ACTIONS(163),
    [anon_sym_skip] = ACTIONS(163),
    [anon_sym_solum] = ACTIONS(163),
    [anon_sym_solum_in] = ACTIONS(163),
    [anon_sym_some] = ACTIONS(163),
    [anon_sym_sparge] = ACTIONS(163),
    [anon_sym_spread] = ACTIONS(163),
    [anon_sym_step] = ACTIONS(163),
    [anon_sym_tacebit] = ACTIONS(163),
    [anon_sym_tag] = ACTIONS(163),
    [anon_sym_teardown] = ACTIONS(163),
    [anon_sym_temporis] = ACTIONS(163),
    [anon_sym_test] = ACTIONS(163),
    [anon_sym_timeout] = ACTIONS(163),
    [anon_sym_todo] = ACTIONS(163),
    [anon_sym_until] = ACTIONS(163),
    [anon_sym_usque] = ACTIONS(163),
    [anon_sym_ut] = ACTIONS(163),
    [anon_sym_variandum] = ACTIONS(163),
    [anon_sym_variant] = ACTIONS(163),
    [anon_sym_vel] = ACTIONS(163),
    [anon_sym_via] = ACTIONS(163),
    [anon_sym_vide] = ACTIONS(163),
    [anon_sym_warn] = ACTIONS(163),
    [anon_sym_wrapping] = ACTIONS(163),
    [anon_sym_write] = ACTIONS(163),
    [anon_sym_yield] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_falsum] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_verum] = ACTIONS(163),
    [sym_guillemet_string] = ACTIONS(161),
    [sym_octeti_string] = ACTIONS(161),
    [sym_backtick_string] = ACTIONS(161),
    [sym_ascii_string] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_number] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_operator] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [sym_hash] = ACTIONS(161),
    [sym_line_comment] = ACTIONS(161),
    [sym_faber_newline] = ACTIONS(161),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_at_sign] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_cli] = ACTIONS(167),
    [anon_sym_conversio] = ACTIONS(167),
    [anon_sym_conversion] = ACTIONS(167),
    [anon_sym_cursor] = ACTIONS(167),
    [anon_sym_fragment] = ACTIONS(167),
    [anon_sym_futura] = ACTIONS(167),
    [anon_sym_imperium] = ACTIONS(167),
    [anon_sym_json] = ACTIONS(167),
    [anon_sym_nondum] = ACTIONS(167),
    [anon_sym_nucleum] = ACTIONS(167),
    [anon_sym_operandus] = ACTIONS(167),
    [anon_sym_optio] = ACTIONS(167),
    [anon_sym_privata] = ACTIONS(167),
    [anon_sym_private] = ACTIONS(167),
    [anon_sym_protecta] = ACTIONS(167),
    [anon_sym_protected] = ACTIONS(167),
    [anon_sym_public] = ACTIONS(167),
    [anon_sym_publica] = ACTIONS(167),
    [anon_sym_radix] = ACTIONS(167),
    [anon_sym_verte] = ACTIONS(167),
    [anon_sym_vertex] = ACTIONS(167),
    [anon_sym_brevis] = ACTIONS(167),
    [anon_sym_descriptio] = ACTIONS(167),
    [anon_sym_description] = ACTIONS(167),
    [anon_sym_global] = ACTIONS(167),
    [anon_sym_lane] = ACTIONS(167),
    [anon_sym_long] = ACTIONS(167),
    [anon_sym_longum] = ACTIONS(167),
    [anon_sym_name] = ACTIONS(167),
    [anon_sym_nomen] = ACTIONS(167),
    [anon_sym_short] = ACTIONS(167),
    [anon_sym_ubique] = ACTIONS(167),
    [anon_sym_ascii] = ACTIONS(167),
    [anon_sym_bivalens] = ACTIONS(167),
    [anon_sym_bool] = ACTIONS(167),
    [anon_sym_byte] = ACTIONS(167),
    [anon_sym_bytes] = ACTIONS(167),
    [anon_sym_char] = ACTIONS(167),
    [anon_sym_copia] = ACTIONS(167),
    [anon_sym_cursor_t] = ACTIONS(167),
    [anon_sym_exactus] = ACTIONS(167),
    [anon_sym_f16] = ACTIONS(167),
    [anon_sym_f32] = ACTIONS(167),
    [anon_sym_f64] = ACTIONS(167),
    [anon_sym_float] = ACTIONS(167),
    [anon_sym_fractus] = ACTIONS(167),
    [anon_sym_i16] = ACTIONS(167),
    [anon_sym_i32] = ACTIONS(167),
    [anon_sym_i64] = ACTIONS(167),
    [anon_sym_i8] = ACTIONS(167),
    [anon_sym_ignotum] = ACTIONS(167),
    [anon_sym_instans] = ACTIONS(167),
    [anon_sym_instant] = ACTIONS(167),
    [anon_sym_int] = ACTIONS(167),
    [anon_sym_intervallum] = ACTIONS(167),
    [anon_sym_iterator] = ACTIONS(167),
    [anon_sym_lf16] = ACTIONS(167),
    [anon_sym_lf32] = ACTIONS(167),
    [anon_sym_lf64] = ACTIONS(167),
    [anon_sym_li16] = ACTIONS(167),
    [anon_sym_li32] = ACTIONS(167),
    [anon_sym_li64] = ACTIONS(167),
    [anon_sym_li8] = ACTIONS(167),
    [anon_sym_list] = ACTIONS(167),
    [anon_sym_lista] = ACTIONS(167),
    [anon_sym_littera] = ACTIONS(167),
    [anon_sym_lu16] = ACTIONS(167),
    [anon_sym_lu32] = ACTIONS(167),
    [anon_sym_lu64] = ACTIONS(167),
    [anon_sym_lu8] = ACTIONS(167),
    [anon_sym_map] = ACTIONS(167),
    [anon_sym_matrix] = ACTIONS(167),
    [anon_sym_mf16] = ACTIONS(167),
    [anon_sym_mf32] = ACTIONS(167),
    [anon_sym_mf64] = ACTIONS(167),
    [anon_sym_mi16] = ACTIONS(167),
    [anon_sym_mi32] = ACTIONS(167),
    [anon_sym_mi64] = ACTIONS(167),
    [anon_sym_mi8] = ACTIONS(167),
    [anon_sym_mu16] = ACTIONS(167),
    [anon_sym_mu32] = ACTIONS(167),
    [anon_sym_mu64] = ACTIONS(167),
    [anon_sym_mu8] = ACTIONS(167),
    [anon_sym_never] = ACTIONS(167),
    [anon_sym_numerus] = ACTIONS(167),
    [anon_sym_numquam] = ACTIONS(167),
    [anon_sym_octeti] = ACTIONS(167),
    [anon_sym_octetus] = ACTIONS(167),
    [anon_sym_promise] = ACTIONS(167),
    [anon_sym_promissum] = ACTIONS(167),
    [anon_sym_queue] = ACTIONS(167),
    [anon_sym_ratio] = ACTIONS(167),
    [anon_sym_record] = ACTIONS(167),
    [anon_sym_regex] = ACTIONS(167),
    [anon_sym_saturating] = ACTIONS(167),
    [anon_sym_saturatus] = ACTIONS(167),
    [anon_sym_series] = ACTIONS(167),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_sf16] = ACTIONS(167),
    [anon_sym_sf32] = ACTIONS(167),
    [anon_sym_sf64] = ACTIONS(167),
    [anon_sym_si16] = ACTIONS(167),
    [anon_sym_si32] = ACTIONS(167),
    [anon_sym_si64] = ACTIONS(167),
    [anon_sym_si8] = ACTIONS(167),
    [anon_sym_sparsa] = ACTIONS(167),
    [anon_sym_stack] = ACTIONS(167),
    [anon_sym_string] = ACTIONS(167),
    [anon_sym_su16] = ACTIONS(167),
    [anon_sym_su32] = ACTIONS(167),
    [anon_sym_su64] = ACTIONS(167),
    [anon_sym_su8] = ACTIONS(167),
    [anon_sym_tabula] = ACTIONS(167),
    [anon_sym_tensor] = ACTIONS(167),
    [anon_sym_textus] = ACTIONS(167),
    [anon_sym_tf16] = ACTIONS(167),
    [anon_sym_tf32] = ACTIONS(167),
    [anon_sym_tf64] = ACTIONS(167),
    [anon_sym_ti16] = ACTIONS(167),
    [anon_sym_ti32] = ACTIONS(167),
    [anon_sym_ti64] = ACTIONS(167),
    [anon_sym_ti8] = ACTIONS(167),
    [anon_sym_trapping] = ACTIONS(167),
    [anon_sym_tu16] = ACTIONS(167),
    [anon_sym_tu32] = ACTIONS(167),
    [anon_sym_tu64] = ACTIONS(167),
    [anon_sym_tu8] = ACTIONS(167),
    [anon_sym_u16] = ACTIONS(167),
    [anon_sym_u32] = ACTIONS(167),
    [anon_sym_u64] = ACTIONS(167),
    [anon_sym_u8] = ACTIONS(167),
    [anon_sym_unio] = ACTIONS(167),
    [anon_sym_unknown] = ACTIONS(167),
    [anon_sym_vacua] = ACTIONS(167),
    [anon_sym_vacuum] = ACTIONS(167),
    [anon_sym_valor] = ACTIONS(167),
    [anon_sym_vector] = ACTIONS(167),
    [anon_sym_vf16] = ACTIONS(167),
    [anon_sym_vf32] = ACTIONS(167),
    [anon_sym_vf64] = ACTIONS(167),
    [anon_sym_vi16] = ACTIONS(167),
    [anon_sym_vi32] = ACTIONS(167),
    [anon_sym_vi64] = ACTIONS(167),
    [anon_sym_vi8] = ACTIONS(167),
    [anon_sym_void] = ACTIONS(167),
    [anon_sym_vu16] = ACTIONS(167),
    [anon_sym_vu32] = ACTIONS(167),
    [anon_sym_vu64] = ACTIONS(167),
    [anon_sym_vu8] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_QMARK_DOT] = ACTIONS(165),
    [anon_sym_BANG_DOT] = ACTIONS(165),
    [anon_sym_ad] = ACTIONS(167),
    [anon_sym_adfirma] = ACTIONS(167),
    [anon_sym_apud] = ACTIONS(167),
    [anon_sym_args] = ACTIONS(167),
    [anon_sym_argumenta] = ACTIONS(167),
    [anon_sym_assert] = ACTIONS(167),
    [anon_sym_async_main] = ACTIONS(167),
    [anon_sym_at] = ACTIONS(167),
    [anon_sym_break] = ACTIONS(167),
    [anon_sym_call] = ACTIONS(167),
    [anon_sym_cape] = ACTIONS(167),
    [anon_sym_capta] = ACTIONS(167),
    [anon_sym_case] = ACTIONS(167),
    [anon_sym_casu] = ACTIONS(167),
    [anon_sym_catch] = ACTIONS(167),
    [anon_sym_ceterum] = ACTIONS(167),
    [anon_sym_continue] = ACTIONS(167),
    [anon_sym_custodi] = ACTIONS(167),
    [anon_sym_default] = ACTIONS(167),
    [anon_sym_discerne] = ACTIONS(167),
    [anon_sym_do] = ACTIONS(167),
    [anon_sym_dum] = ACTIONS(167),
    [anon_sym_elif] = ACTIONS(167),
    [anon_sym_elige] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(167),
    [anon_sym_ergo] = ACTIONS(167),
    [anon_sym_fac] = ACTIONS(167),
    [anon_sym_for] = ACTIONS(167),
    [anon_sym_guard] = ACTIONS(167),
    [anon_sym_iace] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_incipiet] = ACTIONS(167),
    [anon_sym_incipit] = ACTIONS(167),
    [anon_sym_itera] = ACTIONS(167),
    [anon_sym_main] = ACTIONS(167),
    [anon_sym_match] = ACTIONS(167),
    [anon_sym_mori] = ACTIONS(167),
    [anon_sym_panic] = ACTIONS(167),
    [anon_sym_pass] = ACTIONS(167),
    [anon_sym_perge] = ACTIONS(167),
    [anon_sym_redde] = ACTIONS(167),
    [anon_sym_reice] = ACTIONS(167),
    [anon_sym_reject] = ACTIONS(167),
    [anon_sym_require] = ACTIONS(167),
    [anon_sym_requirit] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_rumpe] = ACTIONS(167),
    [anon_sym_secus] = ACTIONS(167),
    [anon_sym_si] = ACTIONS(167),
    [anon_sym_sic] = ACTIONS(167),
    [anon_sym_sin] = ACTIONS(167),
    [anon_sym_switch] = ACTIONS(167),
    [anon_sym_tacet] = ACTIONS(167),
    [anon_sym_then] = ACTIONS(167),
    [anon_sym_throw] = ACTIONS(167),
    [anon_sym_trap] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(167),
    [anon_sym_yields] = ACTIONS(167),
    [anon_sym_ceteri] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_column] = ACTIONS(167),
    [anon_sym_columna] = ACTIONS(167),
    [anon_sym_const] = ACTIONS(167),
    [anon_sym_discretio] = ACTIONS(167),
    [anon_sym_enum] = ACTIONS(167),
    [anon_sym_errata] = ACTIONS(167),
    [anon_sym_errors] = ACTIONS(167),
    [anon_sym_exit] = ACTIONS(167),
    [anon_sym_exitus] = ACTIONS(167),
    [anon_sym_fixum] = ACTIONS(167),
    [anon_sym_fn] = ACTIONS(167),
    [anon_sym_functio] = ACTIONS(167),
    [anon_sym_generis] = ACTIONS(167),
    [anon_sym_genus] = ACTIONS(167),
    [anon_sym_iacit] = ACTIONS(167),
    [anon_sym_immutata] = ACTIONS(167),
    [anon_sym_implendum] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_importa] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(167),
    [anon_sym_interna] = ACTIONS(167),
    [anon_sym_internal] = ACTIONS(167),
    [anon_sym_iuncta] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(167),
    [anon_sym_magnitudo] = ACTIONS(167),
    [anon_sym_optional] = ACTIONS(167),
    [anon_sym_optiones] = ACTIONS(167),
    [anon_sym_options] = ACTIONS(167),
    [anon_sym_ordo] = ACTIONS(167),
    [anon_sym_prae] = ACTIONS(167),
    [anon_sym_readonly] = ACTIONS(167),
    [anon_sym_rest] = ACTIONS(167),
    [anon_sym_schema] = ACTIONS(167),
    [anon_sym_sit] = ACTIONS(167),
    [anon_sym_size] = ACTIONS(167),
    [anon_sym_sponte] = ACTIONS(167),
    [anon_sym_static] = ACTIONS(167),
    [anon_sym_throws] = ACTIONS(167),
    [anon_sym_tuple] = ACTIONS(167),
    [anon_sym_type] = ACTIONS(167),
    [anon_sym_typus] = ACTIONS(167),
    [anon_sym_union] = ACTIONS(167),
    [anon_sym_var] = ACTIONS(167),
    [anon_sym_varia] = ACTIONS(167),
    [anon_sym_ab] = ACTIONS(167),
    [anon_sym_all] = ACTIONS(167),
    [anon_sym_and] = ACTIONS(167),
    [anon_sym_ante] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_async] = ACTIONS(167),
    [anon_sym_async_generator] = ACTIONS(167),
    [anon_sym_async_setup] = ACTIONS(167),
    [anon_sym_async_teardown] = ACTIONS(167),
    [anon_sym_aut] = ACTIONS(167),
    [anon_sym_await] = ACTIONS(167),
    [anon_sym_await_const] = ACTIONS(167),
    [anon_sym_await_var] = ACTIONS(167),
    [anon_sym_before] = ACTIONS(167),
    [anon_sym_bench] = ACTIONS(167),
    [anon_sym_cede] = ACTIONS(167),
    [anon_sym_clausura] = ACTIONS(167),
    [anon_sym_coalesce] = ACTIONS(167),
    [anon_sym_comptime] = ACTIONS(167),
    [anon_sym_copy] = ACTIONS(167),
    [anon_sym_de] = ACTIONS(167),
    [anon_sym_debug] = ACTIONS(167),
    [anon_sym_describe] = ACTIONS(167),
    [anon_sym_ego] = ACTIONS(167),
    [anon_sym_embed] = ACTIONS(167),
    [anon_sym_erratur] = ACTIONS(167),
    [anon_sym_est] = ACTIONS(167),
    [anon_sym_et] = ACTIONS(167),
    [anon_sym_ex] = ACTIONS(167),
    [anon_sym_exemplum] = ACTIONS(167),
    [anon_sym_expect_failure] = ACTIONS(167),
    [anon_sym_fient] = ACTIONS(167),
    [anon_sym_fiet] = ACTIONS(167),
    [anon_sym_figendum] = ACTIONS(167),
    [anon_sym_finge] = ACTIONS(167),
    [anon_sym_fiunt] = ACTIONS(167),
    [anon_sym_flaky] = ACTIONS(167),
    [anon_sym_format] = ACTIONS(167),
    [anon_sym_fragilis] = ACTIONS(167),
    [anon_sym_from] = ACTIONS(167),
    [anon_sym_futurum] = ACTIONS(167),
    [anon_sym_generator] = ACTIONS(167),
    [anon_sym_implements] = ACTIONS(167),
    [anon_sym_implet] = ACTIONS(167),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_insere] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_lambda] = ACTIONS(167),
    [anon_sym_lege] = ACTIONS(167),
    [anon_sym_line] = ACTIONS(167),
    [anon_sym_lineam] = ACTIONS(167),
    [anon_sym_metior] = ACTIONS(167),
    [anon_sym_modulus] = ACTIONS(167),
    [anon_sym_mone] = ACTIONS(167),
    [anon_sym_mut] = ACTIONS(167),
    [anon_sym_negative] = ACTIONS(167),
    [anon_sym_negativum] = ACTIONS(167),
    [anon_sym_nihil] = ACTIONS(167),
    [anon_sym_non] = ACTIONS(167),
    [anon_sym_none] = ACTIONS(167),
    [anon_sym_nonnihil] = ACTIONS(167),
    [anon_sym_nonnulla] = ACTIONS(167),
    [anon_sym_not] = ACTIONS(167),
    [anon_sym_nota] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(167),
    [anon_sym_nulla] = ACTIONS(167),
    [anon_sym_omitte] = ACTIONS(167),
    [anon_sym_omnia] = ACTIONS(167),
    [anon_sym_only] = ACTIONS(167),
    [anon_sym_only_in] = ACTIONS(167),
    [anon_sym_or] = ACTIONS(167),
    [anon_sym_own] = ACTIONS(167),
    [anon_sym_penes] = ACTIONS(167),
    [anon_sym_per] = ACTIONS(167),
    [anon_sym_positive] = ACTIONS(167),
    [anon_sym_positivum] = ACTIONS(167),
    [anon_sym_postpara] = ACTIONS(167),
    [anon_sym_postparabit] = ACTIONS(167),
    [anon_sym_praefixum] = ACTIONS(167),
    [anon_sym_praepara] = ACTIONS(167),
    [anon_sym_praeparabit] = ACTIONS(167),
    [anon_sym_print] = ACTIONS(167),
    [anon_sym_proba] = ACTIONS(167),
    [anon_sym_probandum] = ACTIONS(167),
    [anon_sym_range] = ACTIONS(167),
    [anon_sym_read] = ACTIONS(167),
    [anon_sym_reddet] = ACTIONS(167),
    [anon_sym_ref] = ACTIONS(167),
    [anon_sym_repeat] = ACTIONS(167),
    [anon_sym_repete] = ACTIONS(167),
    [anon_sym_return_await] = ACTIONS(167),
    [anon_sym_scribe] = ACTIONS(167),
    [anon_sym_scriptum] = ACTIONS(167),
    [anon_sym_self] = ACTIONS(167),
    [anon_sym_setup] = ACTIONS(167),
    [anon_sym_skip] = ACTIONS(167),
    [anon_sym_solum] = ACTIONS(167),
    [anon_sym_solum_in] = ACTIONS(167),
    [anon_sym_some] = ACTIONS(167),
    [anon_sym_sparge] = ACTIONS(167),
    [anon_sym_spread] = ACTIONS(167),
    [anon_sym_step] = ACTIONS(167),
    [anon_sym_tacebit] = ACTIONS(167),
    [anon_sym_tag] = ACTIONS(167),
    [anon_sym_teardown] = ACTIONS(167),
    [anon_sym_temporis] = ACTIONS(167),
    [anon_sym_test] = ACTIONS(167),
    [anon_sym_timeout] = ACTIONS(167),
    [anon_sym_todo] = ACTIONS(167),
    [anon_sym_until] = ACTIONS(167),
    [anon_sym_usque] = ACTIONS(167),
    [anon_sym_ut] = ACTIONS(167),
    [anon_sym_variandum] = ACTIONS(167),
    [anon_sym_variant] = ACTIONS(167),
    [anon_sym_vel] = ACTIONS(167),
    [anon_sym_via] = ACTIONS(167),
    [anon_sym_vide] = ACTIONS(167),
    [anon_sym_warn] = ACTIONS(167),
    [anon_sym_wrapping] = ACTIONS(167),
    [anon_sym_write] = ACTIONS(167),
    [anon_sym_yield] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_falsum] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_verum] = ACTIONS(167),
    [sym_guillemet_string] = ACTIONS(165),
    [sym_octeti_string] = ACTIONS(165),
    [sym_backtick_string] = ACTIONS(165),
    [sym_ascii_string] = ACTIONS(165),
    [sym_string] = ACTIONS(165),
    [sym_number] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [sym_operator] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [sym_hash] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(165),
    [sym_faber_newline] = ACTIONS(165),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_at_sign] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_cli] = ACTIONS(171),
    [anon_sym_conversio] = ACTIONS(171),
    [anon_sym_conversion] = ACTIONS(171),
    [anon_sym_cursor] = ACTIONS(171),
    [anon_sym_fragment] = ACTIONS(171),
    [anon_sym_futura] = ACTIONS(171),
    [anon_sym_imperium] = ACTIONS(171),
    [anon_sym_json] = ACTIONS(171),
    [anon_sym_nondum] = ACTIONS(171),
    [anon_sym_nucleum] = ACTIONS(171),
    [anon_sym_operandus] = ACTIONS(171),
    [anon_sym_optio] = ACTIONS(171),
    [anon_sym_privata] = ACTIONS(171),
    [anon_sym_private] = ACTIONS(171),
    [anon_sym_protecta] = ACTIONS(171),
    [anon_sym_protected] = ACTIONS(171),
    [anon_sym_public] = ACTIONS(171),
    [anon_sym_publica] = ACTIONS(171),
    [anon_sym_radix] = ACTIONS(171),
    [anon_sym_verte] = ACTIONS(171),
    [anon_sym_vertex] = ACTIONS(171),
    [anon_sym_brevis] = ACTIONS(171),
    [anon_sym_descriptio] = ACTIONS(171),
    [anon_sym_description] = ACTIONS(171),
    [anon_sym_global] = ACTIONS(171),
    [anon_sym_lane] = ACTIONS(171),
    [anon_sym_long] = ACTIONS(171),
    [anon_sym_longum] = ACTIONS(171),
    [anon_sym_name] = ACTIONS(171),
    [anon_sym_nomen] = ACTIONS(171),
    [anon_sym_short] = ACTIONS(171),
    [anon_sym_ubique] = ACTIONS(171),
    [anon_sym_ascii] = ACTIONS(171),
    [anon_sym_bivalens] = ACTIONS(171),
    [anon_sym_bool] = ACTIONS(171),
    [anon_sym_byte] = ACTIONS(171),
    [anon_sym_bytes] = ACTIONS(171),
    [anon_sym_char] = ACTIONS(171),
    [anon_sym_copia] = ACTIONS(171),
    [anon_sym_cursor_t] = ACTIONS(171),
    [anon_sym_exactus] = ACTIONS(171),
    [anon_sym_f16] = ACTIONS(171),
    [anon_sym_f32] = ACTIONS(171),
    [anon_sym_f64] = ACTIONS(171),
    [anon_sym_float] = ACTIONS(171),
    [anon_sym_fractus] = ACTIONS(171),
    [anon_sym_i16] = ACTIONS(171),
    [anon_sym_i32] = ACTIONS(171),
    [anon_sym_i64] = ACTIONS(171),
    [anon_sym_i8] = ACTIONS(171),
    [anon_sym_ignotum] = ACTIONS(171),
    [anon_sym_instans] = ACTIONS(171),
    [anon_sym_instant] = ACTIONS(171),
    [anon_sym_int] = ACTIONS(171),
    [anon_sym_intervallum] = ACTIONS(171),
    [anon_sym_iterator] = ACTIONS(171),
    [anon_sym_lf16] = ACTIONS(171),
    [anon_sym_lf32] = ACTIONS(171),
    [anon_sym_lf64] = ACTIONS(171),
    [anon_sym_li16] = ACTIONS(171),
    [anon_sym_li32] = ACTIONS(171),
    [anon_sym_li64] = ACTIONS(171),
    [anon_sym_li8] = ACTIONS(171),
    [anon_sym_list] = ACTIONS(171),
    [anon_sym_lista] = ACTIONS(171),
    [anon_sym_littera] = ACTIONS(171),
    [anon_sym_lu16] = ACTIONS(171),
    [anon_sym_lu32] = ACTIONS(171),
    [anon_sym_lu64] = ACTIONS(171),
    [anon_sym_lu8] = ACTIONS(171),
    [anon_sym_map] = ACTIONS(171),
    [anon_sym_matrix] = ACTIONS(171),
    [anon_sym_mf16] = ACTIONS(171),
    [anon_sym_mf32] = ACTIONS(171),
    [anon_sym_mf64] = ACTIONS(171),
    [anon_sym_mi16] = ACTIONS(171),
    [anon_sym_mi32] = ACTIONS(171),
    [anon_sym_mi64] = ACTIONS(171),
    [anon_sym_mi8] = ACTIONS(171),
    [anon_sym_mu16] = ACTIONS(171),
    [anon_sym_mu32] = ACTIONS(171),
    [anon_sym_mu64] = ACTIONS(171),
    [anon_sym_mu8] = ACTIONS(171),
    [anon_sym_never] = ACTIONS(171),
    [anon_sym_numerus] = ACTIONS(171),
    [anon_sym_numquam] = ACTIONS(171),
    [anon_sym_octeti] = ACTIONS(171),
    [anon_sym_octetus] = ACTIONS(171),
    [anon_sym_promise] = ACTIONS(171),
    [anon_sym_promissum] = ACTIONS(171),
    [anon_sym_queue] = ACTIONS(171),
    [anon_sym_ratio] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(171),
    [anon_sym_regex] = ACTIONS(171),
    [anon_sym_saturating] = ACTIONS(171),
    [anon_sym_saturatus] = ACTIONS(171),
    [anon_sym_series] = ACTIONS(171),
    [anon_sym_set] = ACTIONS(171),
    [anon_sym_sf16] = ACTIONS(171),
    [anon_sym_sf32] = ACTIONS(171),
    [anon_sym_sf64] = ACTIONS(171),
    [anon_sym_si16] = ACTIONS(171),
    [anon_sym_si32] = ACTIONS(171),
    [anon_sym_si64] = ACTIONS(171),
    [anon_sym_si8] = ACTIONS(171),
    [anon_sym_sparsa] = ACTIONS(171),
    [anon_sym_stack] = ACTIONS(171),
    [anon_sym_string] = ACTIONS(171),
    [anon_sym_su16] = ACTIONS(171),
    [anon_sym_su32] = ACTIONS(171),
    [anon_sym_su64] = ACTIONS(171),
    [anon_sym_su8] = ACTIONS(171),
    [anon_sym_tabula] = ACTIONS(171),
    [anon_sym_tensor] = ACTIONS(171),
    [anon_sym_textus] = ACTIONS(171),
    [anon_sym_tf16] = ACTIONS(171),
    [anon_sym_tf32] = ACTIONS(171),
    [anon_sym_tf64] = ACTIONS(171),
    [anon_sym_ti16] = ACTIONS(171),
    [anon_sym_ti32] = ACTIONS(171),
    [anon_sym_ti64] = ACTIONS(171),
    [anon_sym_ti8] = ACTIONS(171),
    [anon_sym_trapping] = ACTIONS(171),
    [anon_sym_tu16] = ACTIONS(171),
    [anon_sym_tu32] = ACTIONS(171),
    [anon_sym_tu64] = ACTIONS(171),
    [anon_sym_tu8] = ACTIONS(171),
    [anon_sym_u16] = ACTIONS(171),
    [anon_sym_u32] = ACTIONS(171),
    [anon_sym_u64] = ACTIONS(171),
    [anon_sym_u8] = ACTIONS(171),
    [anon_sym_unio] = ACTIONS(171),
    [anon_sym_unknown] = ACTIONS(171),
    [anon_sym_vacua] = ACTIONS(171),
    [anon_sym_vacuum] = ACTIONS(171),
    [anon_sym_valor] = ACTIONS(171),
    [anon_sym_vector] = ACTIONS(171),
    [anon_sym_vf16] = ACTIONS(171),
    [anon_sym_vf32] = ACTIONS(171),
    [anon_sym_vf64] = ACTIONS(171),
    [anon_sym_vi16] = ACTIONS(171),
    [anon_sym_vi32] = ACTIONS(171),
    [anon_sym_vi64] = ACTIONS(171),
    [anon_sym_vi8] = ACTIONS(171),
    [anon_sym_void] = ACTIONS(171),
    [anon_sym_vu16] = ACTIONS(171),
    [anon_sym_vu32] = ACTIONS(171),
    [anon_sym_vu64] = ACTIONS(171),
    [anon_sym_vu8] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_QMARK_DOT] = ACTIONS(169),
    [anon_sym_BANG_DOT] = ACTIONS(169),
    [anon_sym_ad] = ACTIONS(171),
    [anon_sym_adfirma] = ACTIONS(171),
    [anon_sym_apud] = ACTIONS(171),
    [anon_sym_args] = ACTIONS(171),
    [anon_sym_argumenta] = ACTIONS(171),
    [anon_sym_assert] = ACTIONS(171),
    [anon_sym_async_main] = ACTIONS(171),
    [anon_sym_at] = ACTIONS(171),
    [anon_sym_break] = ACTIONS(171),
    [anon_sym_call] = ACTIONS(171),
    [anon_sym_cape] = ACTIONS(171),
    [anon_sym_capta] = ACTIONS(171),
    [anon_sym_case] = ACTIONS(171),
    [anon_sym_casu] = ACTIONS(171),
    [anon_sym_catch] = ACTIONS(171),
    [anon_sym_ceterum] = ACTIONS(171),
    [anon_sym_continue] = ACTIONS(171),
    [anon_sym_custodi] = ACTIONS(171),
    [anon_sym_default] = ACTIONS(171),
    [anon_sym_discerne] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_dum] = ACTIONS(171),
    [anon_sym_elif] = ACTIONS(171),
    [anon_sym_elige] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_ergo] = ACTIONS(171),
    [anon_sym_fac] = ACTIONS(171),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_guard] = ACTIONS(171),
    [anon_sym_iace] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_incipiet] = ACTIONS(171),
    [anon_sym_incipit] = ACTIONS(171),
    [anon_sym_itera] = ACTIONS(171),
    [anon_sym_main] = ACTIONS(171),
    [anon_sym_match] = ACTIONS(171),
    [anon_sym_mori] = ACTIONS(171),
    [anon_sym_panic] = ACTIONS(171),
    [anon_sym_pass] = ACTIONS(171),
    [anon_sym_perge] = ACTIONS(171),
    [anon_sym_redde] = ACTIONS(171),
    [anon_sym_reice] = ACTIONS(171),
    [anon_sym_reject] = ACTIONS(171),
    [anon_sym_require] = ACTIONS(171),
    [anon_sym_requirit] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_rumpe] = ACTIONS(171),
    [anon_sym_secus] = ACTIONS(171),
    [anon_sym_si] = ACTIONS(171),
    [anon_sym_sic] = ACTIONS(171),
    [anon_sym_sin] = ACTIONS(171),
    [anon_sym_switch] = ACTIONS(171),
    [anon_sym_tacet] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [anon_sym_throw] = ACTIONS(171),
    [anon_sym_trap] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_yields] = ACTIONS(171),
    [anon_sym_ceteri] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(171),
    [anon_sym_column] = ACTIONS(171),
    [anon_sym_columna] = ACTIONS(171),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_discretio] = ACTIONS(171),
    [anon_sym_enum] = ACTIONS(171),
    [anon_sym_errata] = ACTIONS(171),
    [anon_sym_errors] = ACTIONS(171),
    [anon_sym_exit] = ACTIONS(171),
    [anon_sym_exitus] = ACTIONS(171),
    [anon_sym_fixum] = ACTIONS(171),
    [anon_sym_fn] = ACTIONS(171),
    [anon_sym_functio] = ACTIONS(171),
    [anon_sym_generis] = ACTIONS(171),
    [anon_sym_genus] = ACTIONS(171),
    [anon_sym_iacit] = ACTIONS(171),
    [anon_sym_immutata] = ACTIONS(171),
    [anon_sym_implendum] = ACTIONS(171),
    [anon_sym_import] = ACTIONS(171),
    [anon_sym_importa] = ACTIONS(171),
    [anon_sym_interface] = ACTIONS(171),
    [anon_sym_interna] = ACTIONS(171),
    [anon_sym_internal] = ACTIONS(171),
    [anon_sym_iuncta] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(171),
    [anon_sym_magnitudo] = ACTIONS(171),
    [anon_sym_optional] = ACTIONS(171),
    [anon_sym_optiones] = ACTIONS(171),
    [anon_sym_options] = ACTIONS(171),
    [anon_sym_ordo] = ACTIONS(171),
    [anon_sym_prae] = ACTIONS(171),
    [anon_sym_readonly] = ACTIONS(171),
    [anon_sym_rest] = ACTIONS(171),
    [anon_sym_schema] = ACTIONS(171),
    [anon_sym_sit] = ACTIONS(171),
    [anon_sym_size] = ACTIONS(171),
    [anon_sym_sponte] = ACTIONS(171),
    [anon_sym_static] = ACTIONS(171),
    [anon_sym_throws] = ACTIONS(171),
    [anon_sym_tuple] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(171),
    [anon_sym_typus] = ACTIONS(171),
    [anon_sym_union] = ACTIONS(171),
    [anon_sym_var] = ACTIONS(171),
    [anon_sym_varia] = ACTIONS(171),
    [anon_sym_ab] = ACTIONS(171),
    [anon_sym_all] = ACTIONS(171),
    [anon_sym_and] = ACTIONS(171),
    [anon_sym_ante] = ACTIONS(171),
    [anon_sym_as] = ACTIONS(171),
    [anon_sym_async] = ACTIONS(171),
    [anon_sym_async_generator] = ACTIONS(171),
    [anon_sym_async_setup] = ACTIONS(171),
    [anon_sym_async_teardown] = ACTIONS(171),
    [anon_sym_aut] = ACTIONS(171),
    [anon_sym_await] = ACTIONS(171),
    [anon_sym_await_const] = ACTIONS(171),
    [anon_sym_await_var] = ACTIONS(171),
    [anon_sym_before] = ACTIONS(171),
    [anon_sym_bench] = ACTIONS(171),
    [anon_sym_cede] = ACTIONS(171),
    [anon_sym_clausura] = ACTIONS(171),
    [anon_sym_coalesce] = ACTIONS(171),
    [anon_sym_comptime] = ACTIONS(171),
    [anon_sym_copy] = ACTIONS(171),
    [anon_sym_de] = ACTIONS(171),
    [anon_sym_debug] = ACTIONS(171),
    [anon_sym_describe] = ACTIONS(171),
    [anon_sym_ego] = ACTIONS(171),
    [anon_sym_embed] = ACTIONS(171),
    [anon_sym_erratur] = ACTIONS(171),
    [anon_sym_est] = ACTIONS(171),
    [anon_sym_et] = ACTIONS(171),
    [anon_sym_ex] = ACTIONS(171),
    [anon_sym_exemplum] = ACTIONS(171),
    [anon_sym_expect_failure] = ACTIONS(171),
    [anon_sym_fient] = ACTIONS(171),
    [anon_sym_fiet] = ACTIONS(171),
    [anon_sym_figendum] = ACTIONS(171),
    [anon_sym_finge] = ACTIONS(171),
    [anon_sym_fiunt] = ACTIONS(171),
    [anon_sym_flaky] = ACTIONS(171),
    [anon_sym_format] = ACTIONS(171),
    [anon_sym_fragilis] = ACTIONS(171),
    [anon_sym_from] = ACTIONS(171),
    [anon_sym_futurum] = ACTIONS(171),
    [anon_sym_generator] = ACTIONS(171),
    [anon_sym_implements] = ACTIONS(171),
    [anon_sym_implet] = ACTIONS(171),
    [anon_sym_in] = ACTIONS(171),
    [anon_sym_insere] = ACTIONS(171),
    [anon_sym_is] = ACTIONS(171),
    [anon_sym_lambda] = ACTIONS(171),
    [anon_sym_lege] = ACTIONS(171),
    [anon_sym_line] = ACTIONS(171),
    [anon_sym_lineam] = ACTIONS(171),
    [anon_sym_metior] = ACTIONS(171),
    [anon_sym_modulus] = ACTIONS(171),
    [anon_sym_mone] = ACTIONS(171),
    [anon_sym_mut] = ACTIONS(171),
    [anon_sym_negative] = ACTIONS(171),
    [anon_sym_negativum] = ACTIONS(171),
    [anon_sym_nihil] = ACTIONS(171),
    [anon_sym_non] = ACTIONS(171),
    [anon_sym_none] = ACTIONS(171),
    [anon_sym_nonnihil] = ACTIONS(171),
    [anon_sym_nonnulla] = ACTIONS(171),
    [anon_sym_not] = ACTIONS(171),
    [anon_sym_nota] = ACTIONS(171),
    [anon_sym_null] = ACTIONS(171),
    [anon_sym_nulla] = ACTIONS(171),
    [anon_sym_omitte] = ACTIONS(171),
    [anon_sym_omnia] = ACTIONS(171),
    [anon_sym_only] = ACTIONS(171),
    [anon_sym_only_in] = ACTIONS(171),
    [anon_sym_or] = ACTIONS(171),
    [anon_sym_own] = ACTIONS(171),
    [anon_sym_penes] = ACTIONS(171),
    [anon_sym_per] = ACTIONS(171),
    [anon_sym_positive] = ACTIONS(171),
    [anon_sym_positivum] = ACTIONS(171),
    [anon_sym_postpara] = ACTIONS(171),
    [anon_sym_postparabit] = ACTIONS(171),
    [anon_sym_praefixum] = ACTIONS(171),
    [anon_sym_praepara] = ACTIONS(171),
    [anon_sym_praeparabit] = ACTIONS(171),
    [anon_sym_print] = ACTIONS(171),
    [anon_sym_proba] = ACTIONS(171),
    [anon_sym_probandum] = ACTIONS(171),
    [anon_sym_range] = ACTIONS(171),
    [anon_sym_read] = ACTIONS(171),
    [anon_sym_reddet] = ACTIONS(171),
    [anon_sym_ref] = ACTIONS(171),
    [anon_sym_repeat] = ACTIONS(171),
    [anon_sym_repete] = ACTIONS(171),
    [anon_sym_return_await] = ACTIONS(171),
    [anon_sym_scribe] = ACTIONS(171),
    [anon_sym_scriptum] = ACTIONS(171),
    [anon_sym_self] = ACTIONS(171),
    [anon_sym_setup] = ACTIONS(171),
    [anon_sym_skip] = ACTIONS(171),
    [anon_sym_solum] = ACTIONS(171),
    [anon_sym_solum_in] = ACTIONS(171),
    [anon_sym_some] = ACTIONS(171),
    [anon_sym_sparge] = ACTIONS(171),
    [anon_sym_spread] = ACTIONS(171),
    [anon_sym_step] = ACTIONS(171),
    [anon_sym_tacebit] = ACTIONS(171),
    [anon_sym_tag] = ACTIONS(171),
    [anon_sym_teardown] = ACTIONS(171),
    [anon_sym_temporis] = ACTIONS(171),
    [anon_sym_test] = ACTIONS(171),
    [anon_sym_timeout] = ACTIONS(171),
    [anon_sym_todo] = ACTIONS(171),
    [anon_sym_until] = ACTIONS(171),
    [anon_sym_usque] = ACTIONS(171),
    [anon_sym_ut] = ACTIONS(171),
    [anon_sym_variandum] = ACTIONS(171),
    [anon_sym_variant] = ACTIONS(171),
    [anon_sym_vel] = ACTIONS(171),
    [anon_sym_via] = ACTIONS(171),
    [anon_sym_vide] = ACTIONS(171),
    [anon_sym_warn] = ACTIONS(171),
    [anon_sym_wrapping] = ACTIONS(171),
    [anon_sym_write] = ACTIONS(171),
    [anon_sym_yield] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_falsum] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_verum] = ACTIONS(171),
    [sym_guillemet_string] = ACTIONS(169),
    [sym_octeti_string] = ACTIONS(169),
    [sym_backtick_string] = ACTIONS(169),
    [sym_ascii_string] = ACTIONS(169),
    [sym_string] = ACTIONS(169),
    [sym_number] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [sym_operator] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym_hash] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(169),
    [sym_faber_newline] = ACTIONS(169),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_at_sign] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_cli] = ACTIONS(175),
    [anon_sym_conversio] = ACTIONS(175),
    [anon_sym_conversion] = ACTIONS(175),
    [anon_sym_cursor] = ACTIONS(175),
    [anon_sym_fragment] = ACTIONS(175),
    [anon_sym_futura] = ACTIONS(175),
    [anon_sym_imperium] = ACTIONS(175),
    [anon_sym_json] = ACTIONS(175),
    [anon_sym_nondum] = ACTIONS(175),
    [anon_sym_nucleum] = ACTIONS(175),
    [anon_sym_operandus] = ACTIONS(175),
    [anon_sym_optio] = ACTIONS(175),
    [anon_sym_privata] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_protecta] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_publica] = ACTIONS(175),
    [anon_sym_radix] = ACTIONS(175),
    [anon_sym_verte] = ACTIONS(175),
    [anon_sym_vertex] = ACTIONS(175),
    [anon_sym_ascii] = ACTIONS(175),
    [anon_sym_bivalens] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(175),
    [anon_sym_byte] = ACTIONS(175),
    [anon_sym_bytes] = ACTIONS(175),
    [anon_sym_char] = ACTIONS(175),
    [anon_sym_copia] = ACTIONS(175),
    [anon_sym_cursor_t] = ACTIONS(175),
    [anon_sym_exactus] = ACTIONS(175),
    [anon_sym_f16] = ACTIONS(175),
    [anon_sym_f32] = ACTIONS(175),
    [anon_sym_f64] = ACTIONS(175),
    [anon_sym_float] = ACTIONS(175),
    [anon_sym_fractus] = ACTIONS(175),
    [anon_sym_i16] = ACTIONS(175),
    [anon_sym_i32] = ACTIONS(175),
    [anon_sym_i64] = ACTIONS(175),
    [anon_sym_i8] = ACTIONS(175),
    [anon_sym_ignotum] = ACTIONS(175),
    [anon_sym_instans] = ACTIONS(175),
    [anon_sym_instant] = ACTIONS(175),
    [anon_sym_int] = ACTIONS(175),
    [anon_sym_intervallum] = ACTIONS(175),
    [anon_sym_iterator] = ACTIONS(175),
    [anon_sym_lf16] = ACTIONS(175),
    [anon_sym_lf32] = ACTIONS(175),
    [anon_sym_lf64] = ACTIONS(175),
    [anon_sym_li16] = ACTIONS(175),
    [anon_sym_li32] = ACTIONS(175),
    [anon_sym_li64] = ACTIONS(175),
    [anon_sym_li8] = ACTIONS(175),
    [anon_sym_list] = ACTIONS(175),
    [anon_sym_lista] = ACTIONS(175),
    [anon_sym_littera] = ACTIONS(175),
    [anon_sym_lu16] = ACTIONS(175),
    [anon_sym_lu32] = ACTIONS(175),
    [anon_sym_lu64] = ACTIONS(175),
    [anon_sym_lu8] = ACTIONS(175),
    [anon_sym_map] = ACTIONS(175),
    [anon_sym_matrix] = ACTIONS(175),
    [anon_sym_mf16] = ACTIONS(175),
    [anon_sym_mf32] = ACTIONS(175),
    [anon_sym_mf64] = ACTIONS(175),
    [anon_sym_mi16] = ACTIONS(175),
    [anon_sym_mi32] = ACTIONS(175),
    [anon_sym_mi64] = ACTIONS(175),
    [anon_sym_mi8] = ACTIONS(175),
    [anon_sym_mu16] = ACTIONS(175),
    [anon_sym_mu32] = ACTIONS(175),
    [anon_sym_mu64] = ACTIONS(175),
    [anon_sym_mu8] = ACTIONS(175),
    [anon_sym_never] = ACTIONS(175),
    [anon_sym_numerus] = ACTIONS(175),
    [anon_sym_numquam] = ACTIONS(175),
    [anon_sym_octeti] = ACTIONS(175),
    [anon_sym_octetus] = ACTIONS(175),
    [anon_sym_promise] = ACTIONS(175),
    [anon_sym_promissum] = ACTIONS(175),
    [anon_sym_queue] = ACTIONS(175),
    [anon_sym_ratio] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(175),
    [anon_sym_regex] = ACTIONS(175),
    [anon_sym_saturating] = ACTIONS(175),
    [anon_sym_saturatus] = ACTIONS(175),
    [anon_sym_series] = ACTIONS(175),
    [anon_sym_set] = ACTIONS(175),
    [anon_sym_sf16] = ACTIONS(175),
    [anon_sym_sf32] = ACTIONS(175),
    [anon_sym_sf64] = ACTIONS(175),
    [anon_sym_si16] = ACTIONS(175),
    [anon_sym_si32] = ACTIONS(175),
    [anon_sym_si64] = ACTIONS(175),
    [anon_sym_si8] = ACTIONS(175),
    [anon_sym_sparsa] = ACTIONS(175),
    [anon_sym_stack] = ACTIONS(175),
    [anon_sym_string] = ACTIONS(175),
    [anon_sym_su16] = ACTIONS(175),
    [anon_sym_su32] = ACTIONS(175),
    [anon_sym_su64] = ACTIONS(175),
    [anon_sym_su8] = ACTIONS(175),
    [anon_sym_tabula] = ACTIONS(175),
    [anon_sym_tensor] = ACTIONS(175),
    [anon_sym_textus] = ACTIONS(175),
    [anon_sym_tf16] = ACTIONS(175),
    [anon_sym_tf32] = ACTIONS(175),
    [anon_sym_tf64] = ACTIONS(175),
    [anon_sym_ti16] = ACTIONS(175),
    [anon_sym_ti32] = ACTIONS(175),
    [anon_sym_ti64] = ACTIONS(175),
    [anon_sym_ti8] = ACTIONS(175),
    [anon_sym_trapping] = ACTIONS(175),
    [anon_sym_tu16] = ACTIONS(175),
    [anon_sym_tu32] = ACTIONS(175),
    [anon_sym_tu64] = ACTIONS(175),
    [anon_sym_tu8] = ACTIONS(175),
    [anon_sym_u16] = ACTIONS(175),
    [anon_sym_u32] = ACTIONS(175),
    [anon_sym_u64] = ACTIONS(175),
    [anon_sym_u8] = ACTIONS(175),
    [anon_sym_unio] = ACTIONS(175),
    [anon_sym_unknown] = ACTIONS(175),
    [anon_sym_vacua] = ACTIONS(175),
    [anon_sym_vacuum] = ACTIONS(175),
    [anon_sym_valor] = ACTIONS(175),
    [anon_sym_vector] = ACTIONS(175),
    [anon_sym_vf16] = ACTIONS(175),
    [anon_sym_vf32] = ACTIONS(175),
    [anon_sym_vf64] = ACTIONS(175),
    [anon_sym_vi16] = ACTIONS(175),
    [anon_sym_vi32] = ACTIONS(175),
    [anon_sym_vi64] = ACTIONS(175),
    [anon_sym_vi8] = ACTIONS(175),
    [anon_sym_void] = ACTIONS(175),
    [anon_sym_vu16] = ACTIONS(175),
    [anon_sym_vu32] = ACTIONS(175),
    [anon_sym_vu64] = ACTIONS(175),
    [anon_sym_vu8] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_QMARK_DOT] = ACTIONS(173),
    [anon_sym_BANG_DOT] = ACTIONS(173),
    [anon_sym_ad] = ACTIONS(175),
    [anon_sym_adfirma] = ACTIONS(175),
    [anon_sym_apud] = ACTIONS(175),
    [anon_sym_args] = ACTIONS(175),
    [anon_sym_argumenta] = ACTIONS(175),
    [anon_sym_assert] = ACTIONS(175),
    [anon_sym_async_main] = ACTIONS(175),
    [anon_sym_at] = ACTIONS(175),
    [anon_sym_break] = ACTIONS(175),
    [anon_sym_call] = ACTIONS(175),
    [anon_sym_cape] = ACTIONS(175),
    [anon_sym_capta] = ACTIONS(175),
    [anon_sym_case] = ACTIONS(175),
    [anon_sym_casu] = ACTIONS(175),
    [anon_sym_catch] = ACTIONS(175),
    [anon_sym_ceterum] = ACTIONS(175),
    [anon_sym_continue] = ACTIONS(175),
    [anon_sym_custodi] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
    [anon_sym_discerne] = ACTIONS(175),
    [anon_sym_do] = ACTIONS(175),
    [anon_sym_dum] = ACTIONS(175),
    [anon_sym_elif] = ACTIONS(175),
    [anon_sym_elige] = ACTIONS(175),
    [anon_sym_else] = ACTIONS(175),
    [anon_sym_ergo] = ACTIONS(175),
    [anon_sym_fac] = ACTIONS(175),
    [anon_sym_for] = ACTIONS(175),
    [anon_sym_guard] = ACTIONS(175),
    [anon_sym_iace] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_incipiet] = ACTIONS(175),
    [anon_sym_incipit] = ACTIONS(175),
    [anon_sym_itera] = ACTIONS(175),
    [anon_sym_main] = ACTIONS(175),
    [anon_sym_match] = ACTIONS(175),
    [anon_sym_mori] = ACTIONS(175),
    [anon_sym_panic] = ACTIONS(175),
    [anon_sym_pass] = ACTIONS(175),
    [anon_sym_perge] = ACTIONS(175),
    [anon_sym_redde] = ACTIONS(175),
    [anon_sym_reice] = ACTIONS(175),
    [anon_sym_reject] = ACTIONS(175),
    [anon_sym_require] = ACTIONS(175),
    [anon_sym_requirit] = ACTIONS(175),
    [anon_sym_return] = ACTIONS(175),
    [anon_sym_rumpe] = ACTIONS(175),
    [anon_sym_secus] = ACTIONS(175),
    [anon_sym_si] = ACTIONS(175),
    [anon_sym_sic] = ACTIONS(175),
    [anon_sym_sin] = ACTIONS(175),
    [anon_sym_switch] = ACTIONS(175),
    [anon_sym_tacet] = ACTIONS(175),
    [anon_sym_then] = ACTIONS(175),
    [anon_sym_throw] = ACTIONS(175),
    [anon_sym_trap] = ACTIONS(175),
    [anon_sym_while] = ACTIONS(175),
    [anon_sym_yields] = ACTIONS(175),
    [anon_sym_ceteri] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(175),
    [anon_sym_column] = ACTIONS(175),
    [anon_sym_columna] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_discretio] = ACTIONS(175),
    [anon_sym_enum] = ACTIONS(175),
    [anon_sym_errata] = ACTIONS(175),
    [anon_sym_errors] = ACTIONS(175),
    [anon_sym_exit] = ACTIONS(175),
    [anon_sym_exitus] = ACTIONS(175),
    [anon_sym_fixum] = ACTIONS(175),
    [anon_sym_fn] = ACTIONS(175),
    [anon_sym_functio] = ACTIONS(175),
    [anon_sym_generis] = ACTIONS(175),
    [anon_sym_genus] = ACTIONS(175),
    [anon_sym_iacit] = ACTIONS(175),
    [anon_sym_immutata] = ACTIONS(175),
    [anon_sym_implendum] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(175),
    [anon_sym_importa] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(175),
    [anon_sym_interna] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_iuncta] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(175),
    [anon_sym_magnitudo] = ACTIONS(175),
    [anon_sym_optional] = ACTIONS(175),
    [anon_sym_optiones] = ACTIONS(175),
    [anon_sym_options] = ACTIONS(175),
    [anon_sym_ordo] = ACTIONS(175),
    [anon_sym_prae] = ACTIONS(175),
    [anon_sym_readonly] = ACTIONS(175),
    [anon_sym_rest] = ACTIONS(175),
    [anon_sym_schema] = ACTIONS(175),
    [anon_sym_sit] = ACTIONS(175),
    [anon_sym_size] = ACTIONS(175),
    [anon_sym_sponte] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_throws] = ACTIONS(175),
    [anon_sym_tuple] = ACTIONS(175),
    [anon_sym_type] = ACTIONS(175),
    [anon_sym_typus] = ACTIONS(175),
    [anon_sym_union] = ACTIONS(175),
    [anon_sym_var] = ACTIONS(175),
    [anon_sym_varia] = ACTIONS(175),
    [anon_sym_ab] = ACTIONS(175),
    [anon_sym_all] = ACTIONS(175),
    [anon_sym_and] = ACTIONS(175),
    [anon_sym_ante] = ACTIONS(175),
    [anon_sym_as] = ACTIONS(175),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_async_generator] = ACTIONS(175),
    [anon_sym_async_setup] = ACTIONS(175),
    [anon_sym_async_teardown] = ACTIONS(175),
    [anon_sym_aut] = ACTIONS(175),
    [anon_sym_await] = ACTIONS(175),
    [anon_sym_await_const] = ACTIONS(175),
    [anon_sym_await_var] = ACTIONS(175),
    [anon_sym_before] = ACTIONS(175),
    [anon_sym_bench] = ACTIONS(175),
    [anon_sym_cede] = ACTIONS(175),
    [anon_sym_clausura] = ACTIONS(175),
    [anon_sym_coalesce] = ACTIONS(175),
    [anon_sym_comptime] = ACTIONS(175),
    [anon_sym_copy] = ACTIONS(175),
    [anon_sym_de] = ACTIONS(175),
    [anon_sym_debug] = ACTIONS(175),
    [anon_sym_describe] = ACTIONS(175),
    [anon_sym_ego] = ACTIONS(175),
    [anon_sym_embed] = ACTIONS(175),
    [anon_sym_erratur] = ACTIONS(175),
    [anon_sym_est] = ACTIONS(175),
    [anon_sym_et] = ACTIONS(175),
    [anon_sym_ex] = ACTIONS(175),
    [anon_sym_exemplum] = ACTIONS(175),
    [anon_sym_expect_failure] = ACTIONS(175),
    [anon_sym_fient] = ACTIONS(175),
    [anon_sym_fiet] = ACTIONS(175),
    [anon_sym_figendum] = ACTIONS(175),
    [anon_sym_finge] = ACTIONS(175),
    [anon_sym_fiunt] = ACTIONS(175),
    [anon_sym_flaky] = ACTIONS(175),
    [anon_sym_format] = ACTIONS(175),
    [anon_sym_fragilis] = ACTIONS(175),
    [anon_sym_from] = ACTIONS(175),
    [anon_sym_futurum] = ACTIONS(175),
    [anon_sym_generator] = ACTIONS(175),
    [anon_sym_implements] = ACTIONS(175),
    [anon_sym_implet] = ACTIONS(175),
    [anon_sym_in] = ACTIONS(175),
    [anon_sym_insere] = ACTIONS(175),
    [anon_sym_is] = ACTIONS(175),
    [anon_sym_lambda] = ACTIONS(175),
    [anon_sym_lege] = ACTIONS(175),
    [anon_sym_line] = ACTIONS(175),
    [anon_sym_lineam] = ACTIONS(175),
    [anon_sym_metior] = ACTIONS(175),
    [anon_sym_modulus] = ACTIONS(175),
    [anon_sym_mone] = ACTIONS(175),
    [anon_sym_mut] = ACTIONS(175),
    [anon_sym_negative] = ACTIONS(175),
    [anon_sym_negativum] = ACTIONS(175),
    [anon_sym_nihil] = ACTIONS(175),
    [anon_sym_non] = ACTIONS(175),
    [anon_sym_none] = ACTIONS(175),
    [anon_sym_nonnihil] = ACTIONS(175),
    [anon_sym_nonnulla] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(175),
    [anon_sym_nota] = ACTIONS(175),
    [anon_sym_null] = ACTIONS(175),
    [anon_sym_nulla] = ACTIONS(175),
    [anon_sym_omitte] = ACTIONS(175),
    [anon_sym_omnia] = ACTIONS(175),
    [anon_sym_only] = ACTIONS(175),
    [anon_sym_only_in] = ACTIONS(175),
    [anon_sym_or] = ACTIONS(175),
    [anon_sym_own] = ACTIONS(175),
    [anon_sym_penes] = ACTIONS(175),
    [anon_sym_per] = ACTIONS(175),
    [anon_sym_positive] = ACTIONS(175),
    [anon_sym_positivum] = ACTIONS(175),
    [anon_sym_postpara] = ACTIONS(175),
    [anon_sym_postparabit] = ACTIONS(175),
    [anon_sym_praefixum] = ACTIONS(175),
    [anon_sym_praepara] = ACTIONS(175),
    [anon_sym_praeparabit] = ACTIONS(175),
    [anon_sym_print] = ACTIONS(175),
    [anon_sym_proba] = ACTIONS(175),
    [anon_sym_probandum] = ACTIONS(175),
    [anon_sym_range] = ACTIONS(175),
    [anon_sym_read] = ACTIONS(175),
    [anon_sym_reddet] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_repeat] = ACTIONS(175),
    [anon_sym_repete] = ACTIONS(175),
    [anon_sym_return_await] = ACTIONS(175),
    [anon_sym_scribe] = ACTIONS(175),
    [anon_sym_scriptum] = ACTIONS(175),
    [anon_sym_self] = ACTIONS(175),
    [anon_sym_setup] = ACTIONS(175),
    [anon_sym_skip] = ACTIONS(175),
    [anon_sym_solum] = ACTIONS(175),
    [anon_sym_solum_in] = ACTIONS(175),
    [anon_sym_some] = ACTIONS(175),
    [anon_sym_sparge] = ACTIONS(175),
    [anon_sym_spread] = ACTIONS(175),
    [anon_sym_step] = ACTIONS(175),
    [anon_sym_tacebit] = ACTIONS(175),
    [anon_sym_tag] = ACTIONS(175),
    [anon_sym_teardown] = ACTIONS(175),
    [anon_sym_temporis] = ACTIONS(175),
    [anon_sym_test] = ACTIONS(175),
    [anon_sym_timeout] = ACTIONS(175),
    [anon_sym_todo] = ACTIONS(175),
    [anon_sym_until] = ACTIONS(175),
    [anon_sym_usque] = ACTIONS(175),
    [anon_sym_ut] = ACTIONS(175),
    [anon_sym_variandum] = ACTIONS(175),
    [anon_sym_variant] = ACTIONS(175),
    [anon_sym_vel] = ACTIONS(175),
    [anon_sym_via] = ACTIONS(175),
    [anon_sym_vide] = ACTIONS(175),
    [anon_sym_warn] = ACTIONS(175),
    [anon_sym_wrapping] = ACTIONS(175),
    [anon_sym_write] = ACTIONS(175),
    [anon_sym_yield] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_falsum] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_verum] = ACTIONS(175),
    [sym_guillemet_string] = ACTIONS(173),
    [sym_octeti_string] = ACTIONS(173),
    [sym_backtick_string] = ACTIONS(173),
    [sym_ascii_string] = ACTIONS(173),
    [sym_string] = ACTIONS(173),
    [sym_number] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [sym_operator] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym_hash] = ACTIONS(173),
    [sym_line_comment] = ACTIONS(173),
    [sym_faber_newline] = ACTIONS(173),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_at_sign] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_cli] = ACTIONS(179),
    [anon_sym_conversio] = ACTIONS(179),
    [anon_sym_conversion] = ACTIONS(179),
    [anon_sym_cursor] = ACTIONS(179),
    [anon_sym_fragment] = ACTIONS(179),
    [anon_sym_futura] = ACTIONS(179),
    [anon_sym_imperium] = ACTIONS(179),
    [anon_sym_json] = ACTIONS(179),
    [anon_sym_nondum] = ACTIONS(179),
    [anon_sym_nucleum] = ACTIONS(179),
    [anon_sym_operandus] = ACTIONS(179),
    [anon_sym_optio] = ACTIONS(179),
    [anon_sym_privata] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_protecta] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_publica] = ACTIONS(179),
    [anon_sym_radix] = ACTIONS(179),
    [anon_sym_verte] = ACTIONS(179),
    [anon_sym_vertex] = ACTIONS(179),
    [anon_sym_ascii] = ACTIONS(179),
    [anon_sym_bivalens] = ACTIONS(179),
    [anon_sym_bool] = ACTIONS(179),
    [anon_sym_byte] = ACTIONS(179),
    [anon_sym_bytes] = ACTIONS(179),
    [anon_sym_char] = ACTIONS(179),
    [anon_sym_copia] = ACTIONS(179),
    [anon_sym_cursor_t] = ACTIONS(179),
    [anon_sym_exactus] = ACTIONS(179),
    [anon_sym_f16] = ACTIONS(179),
    [anon_sym_f32] = ACTIONS(179),
    [anon_sym_f64] = ACTIONS(179),
    [anon_sym_float] = ACTIONS(179),
    [anon_sym_fractus] = ACTIONS(179),
    [anon_sym_i16] = ACTIONS(179),
    [anon_sym_i32] = ACTIONS(179),
    [anon_sym_i64] = ACTIONS(179),
    [anon_sym_i8] = ACTIONS(179),
    [anon_sym_ignotum] = ACTIONS(179),
    [anon_sym_instans] = ACTIONS(179),
    [anon_sym_instant] = ACTIONS(179),
    [anon_sym_int] = ACTIONS(179),
    [anon_sym_intervallum] = ACTIONS(179),
    [anon_sym_iterator] = ACTIONS(179),
    [anon_sym_lf16] = ACTIONS(179),
    [anon_sym_lf32] = ACTIONS(179),
    [anon_sym_lf64] = ACTIONS(179),
    [anon_sym_li16] = ACTIONS(179),
    [anon_sym_li32] = ACTIONS(179),
    [anon_sym_li64] = ACTIONS(179),
    [anon_sym_li8] = ACTIONS(179),
    [anon_sym_list] = ACTIONS(179),
    [anon_sym_lista] = ACTIONS(179),
    [anon_sym_littera] = ACTIONS(179),
    [anon_sym_lu16] = ACTIONS(179),
    [anon_sym_lu32] = ACTIONS(179),
    [anon_sym_lu64] = ACTIONS(179),
    [anon_sym_lu8] = ACTIONS(179),
    [anon_sym_map] = ACTIONS(179),
    [anon_sym_matrix] = ACTIONS(179),
    [anon_sym_mf16] = ACTIONS(179),
    [anon_sym_mf32] = ACTIONS(179),
    [anon_sym_mf64] = ACTIONS(179),
    [anon_sym_mi16] = ACTIONS(179),
    [anon_sym_mi32] = ACTIONS(179),
    [anon_sym_mi64] = ACTIONS(179),
    [anon_sym_mi8] = ACTIONS(179),
    [anon_sym_mu16] = ACTIONS(179),
    [anon_sym_mu32] = ACTIONS(179),
    [anon_sym_mu64] = ACTIONS(179),
    [anon_sym_mu8] = ACTIONS(179),
    [anon_sym_never] = ACTIONS(179),
    [anon_sym_numerus] = ACTIONS(179),
    [anon_sym_numquam] = ACTIONS(179),
    [anon_sym_octeti] = ACTIONS(179),
    [anon_sym_octetus] = ACTIONS(179),
    [anon_sym_promise] = ACTIONS(179),
    [anon_sym_promissum] = ACTIONS(179),
    [anon_sym_queue] = ACTIONS(179),
    [anon_sym_ratio] = ACTIONS(179),
    [anon_sym_record] = ACTIONS(179),
    [anon_sym_regex] = ACTIONS(179),
    [anon_sym_saturating] = ACTIONS(179),
    [anon_sym_saturatus] = ACTIONS(179),
    [anon_sym_series] = ACTIONS(179),
    [anon_sym_set] = ACTIONS(179),
    [anon_sym_sf16] = ACTIONS(179),
    [anon_sym_sf32] = ACTIONS(179),
    [anon_sym_sf64] = ACTIONS(179),
    [anon_sym_si16] = ACTIONS(179),
    [anon_sym_si32] = ACTIONS(179),
    [anon_sym_si64] = ACTIONS(179),
    [anon_sym_si8] = ACTIONS(179),
    [anon_sym_sparsa] = ACTIONS(179),
    [anon_sym_stack] = ACTIONS(179),
    [anon_sym_string] = ACTIONS(179),
    [anon_sym_su16] = ACTIONS(179),
    [anon_sym_su32] = ACTIONS(179),
    [anon_sym_su64] = ACTIONS(179),
    [anon_sym_su8] = ACTIONS(179),
    [anon_sym_tabula] = ACTIONS(179),
    [anon_sym_tensor] = ACTIONS(179),
    [anon_sym_textus] = ACTIONS(179),
    [anon_sym_tf16] = ACTIONS(179),
    [anon_sym_tf32] = ACTIONS(179),
    [anon_sym_tf64] = ACTIONS(179),
    [anon_sym_ti16] = ACTIONS(179),
    [anon_sym_ti32] = ACTIONS(179),
    [anon_sym_ti64] = ACTIONS(179),
    [anon_sym_ti8] = ACTIONS(179),
    [anon_sym_trapping] = ACTIONS(179),
    [anon_sym_tu16] = ACTIONS(179),
    [anon_sym_tu32] = ACTIONS(179),
    [anon_sym_tu64] = ACTIONS(179),
    [anon_sym_tu8] = ACTIONS(179),
    [anon_sym_u16] = ACTIONS(179),
    [anon_sym_u32] = ACTIONS(179),
    [anon_sym_u64] = ACTIONS(179),
    [anon_sym_u8] = ACTIONS(179),
    [anon_sym_unio] = ACTIONS(179),
    [anon_sym_unknown] = ACTIONS(179),
    [anon_sym_vacua] = ACTIONS(179),
    [anon_sym_vacuum] = ACTIONS(179),
    [anon_sym_valor] = ACTIONS(179),
    [anon_sym_vector] = ACTIONS(179),
    [anon_sym_vf16] = ACTIONS(179),
    [anon_sym_vf32] = ACTIONS(179),
    [anon_sym_vf64] = ACTIONS(179),
    [anon_sym_vi16] = ACTIONS(179),
    [anon_sym_vi32] = ACTIONS(179),
    [anon_sym_vi64] = ACTIONS(179),
    [anon_sym_vi8] = ACTIONS(179),
    [anon_sym_void] = ACTIONS(179),
    [anon_sym_vu16] = ACTIONS(179),
    [anon_sym_vu32] = ACTIONS(179),
    [anon_sym_vu64] = ACTIONS(179),
    [anon_sym_vu8] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_QMARK_DOT] = ACTIONS(177),
    [anon_sym_BANG_DOT] = ACTIONS(177),
    [anon_sym_ad] = ACTIONS(179),
    [anon_sym_adfirma] = ACTIONS(179),
    [anon_sym_apud] = ACTIONS(179),
    [anon_sym_args] = ACTIONS(179),
    [anon_sym_argumenta] = ACTIONS(179),
    [anon_sym_assert] = ACTIONS(179),
    [anon_sym_async_main] = ACTIONS(179),
    [anon_sym_at] = ACTIONS(179),
    [anon_sym_break] = ACTIONS(179),
    [anon_sym_call] = ACTIONS(179),
    [anon_sym_cape] = ACTIONS(179),
    [anon_sym_capta] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(179),
    [anon_sym_casu] = ACTIONS(179),
    [anon_sym_catch] = ACTIONS(179),
    [anon_sym_ceterum] = ACTIONS(179),
    [anon_sym_continue] = ACTIONS(179),
    [anon_sym_custodi] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_discerne] = ACTIONS(179),
    [anon_sym_do] = ACTIONS(179),
    [anon_sym_dum] = ACTIONS(179),
    [anon_sym_elif] = ACTIONS(179),
    [anon_sym_elige] = ACTIONS(179),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_ergo] = ACTIONS(179),
    [anon_sym_fac] = ACTIONS(179),
    [anon_sym_for] = ACTIONS(179),
    [anon_sym_guard] = ACTIONS(179),
    [anon_sym_iace] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_incipiet] = ACTIONS(179),
    [anon_sym_incipit] = ACTIONS(179),
    [anon_sym_itera] = ACTIONS(179),
    [anon_sym_main] = ACTIONS(179),
    [anon_sym_match] = ACTIONS(179),
    [anon_sym_mori] = ACTIONS(179),
    [anon_sym_panic] = ACTIONS(179),
    [anon_sym_pass] = ACTIONS(179),
    [anon_sym_perge] = ACTIONS(179),
    [anon_sym_redde] = ACTIONS(179),
    [anon_sym_reice] = ACTIONS(179),
    [anon_sym_reject] = ACTIONS(179),
    [anon_sym_require] = ACTIONS(179),
    [anon_sym_requirit] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(179),
    [anon_sym_rumpe] = ACTIONS(179),
    [anon_sym_secus] = ACTIONS(179),
    [anon_sym_si] = ACTIONS(179),
    [anon_sym_sic] = ACTIONS(179),
    [anon_sym_sin] = ACTIONS(179),
    [anon_sym_switch] = ACTIONS(179),
    [anon_sym_tacet] = ACTIONS(179),
    [anon_sym_then] = ACTIONS(179),
    [anon_sym_throw] = ACTIONS(179),
    [anon_sym_trap] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_yields] = ACTIONS(179),
    [anon_sym_ceteri] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_column] = ACTIONS(179),
    [anon_sym_columna] = ACTIONS(179),
    [anon_sym_const] = ACTIONS(179),
    [anon_sym_discretio] = ACTIONS(179),
    [anon_sym_enum] = ACTIONS(179),
    [anon_sym_errata] = ACTIONS(179),
    [anon_sym_errors] = ACTIONS(179),
    [anon_sym_exit] = ACTIONS(179),
    [anon_sym_exitus] = ACTIONS(179),
    [anon_sym_fixum] = ACTIONS(179),
    [anon_sym_fn] = ACTIONS(179),
    [anon_sym_functio] = ACTIONS(179),
    [anon_sym_generis] = ACTIONS(179),
    [anon_sym_genus] = ACTIONS(179),
    [anon_sym_iacit] = ACTIONS(179),
    [anon_sym_immutata] = ACTIONS(179),
    [anon_sym_implendum] = ACTIONS(179),
    [anon_sym_import] = ACTIONS(179),
    [anon_sym_importa] = ACTIONS(179),
    [anon_sym_interface] = ACTIONS(179),
    [anon_sym_interna] = ACTIONS(179),
    [anon_sym_internal] = ACTIONS(179),
    [anon_sym_iuncta] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_magnitudo] = ACTIONS(179),
    [anon_sym_optional] = ACTIONS(179),
    [anon_sym_optiones] = ACTIONS(179),
    [anon_sym_options] = ACTIONS(179),
    [anon_sym_ordo] = ACTIONS(179),
    [anon_sym_prae] = ACTIONS(179),
    [anon_sym_readonly] = ACTIONS(179),
    [anon_sym_rest] = ACTIONS(179),
    [anon_sym_schema] = ACTIONS(179),
    [anon_sym_sit] = ACTIONS(179),
    [anon_sym_size] = ACTIONS(179),
    [anon_sym_sponte] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_throws] = ACTIONS(179),
    [anon_sym_tuple] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_typus] = ACTIONS(179),
    [anon_sym_union] = ACTIONS(179),
    [anon_sym_var] = ACTIONS(179),
    [anon_sym_varia] = ACTIONS(179),
    [anon_sym_ab] = ACTIONS(179),
    [anon_sym_all] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_ante] = ACTIONS(179),
    [anon_sym_as] = ACTIONS(179),
    [anon_sym_async] = ACTIONS(179),
    [anon_sym_async_generator] = ACTIONS(179),
    [anon_sym_async_setup] = ACTIONS(179),
    [anon_sym_async_teardown] = ACTIONS(179),
    [anon_sym_aut] = ACTIONS(179),
    [anon_sym_await] = ACTIONS(179),
    [anon_sym_await_const] = ACTIONS(179),
    [anon_sym_await_var] = ACTIONS(179),
    [anon_sym_before] = ACTIONS(179),
    [anon_sym_bench] = ACTIONS(179),
    [anon_sym_cede] = ACTIONS(179),
    [anon_sym_clausura] = ACTIONS(179),
    [anon_sym_coalesce] = ACTIONS(179),
    [anon_sym_comptime] = ACTIONS(179),
    [anon_sym_copy] = ACTIONS(179),
    [anon_sym_de] = ACTIONS(179),
    [anon_sym_debug] = ACTIONS(179),
    [anon_sym_describe] = ACTIONS(179),
    [anon_sym_ego] = ACTIONS(179),
    [anon_sym_embed] = ACTIONS(179),
    [anon_sym_erratur] = ACTIONS(179),
    [anon_sym_est] = ACTIONS(179),
    [anon_sym_et] = ACTIONS(179),
    [anon_sym_ex] = ACTIONS(179),
    [anon_sym_exemplum] = ACTIONS(179),
    [anon_sym_expect_failure] = ACTIONS(179),
    [anon_sym_fient] = ACTIONS(179),
    [anon_sym_fiet] = ACTIONS(179),
    [anon_sym_figendum] = ACTIONS(179),
    [anon_sym_finge] = ACTIONS(179),
    [anon_sym_fiunt] = ACTIONS(179),
    [anon_sym_flaky] = ACTIONS(179),
    [anon_sym_format] = ACTIONS(179),
    [anon_sym_fragilis] = ACTIONS(179),
    [anon_sym_from] = ACTIONS(179),
    [anon_sym_futurum] = ACTIONS(179),
    [anon_sym_generator] = ACTIONS(179),
    [anon_sym_implements] = ACTIONS(179),
    [anon_sym_implet] = ACTIONS(179),
    [anon_sym_in] = ACTIONS(179),
    [anon_sym_insere] = ACTIONS(179),
    [anon_sym_is] = ACTIONS(179),
    [anon_sym_lambda] = ACTIONS(179),
    [anon_sym_lege] = ACTIONS(179),
    [anon_sym_line] = ACTIONS(179),
    [anon_sym_lineam] = ACTIONS(179),
    [anon_sym_metior] = ACTIONS(179),
    [anon_sym_modulus] = ACTIONS(179),
    [anon_sym_mone] = ACTIONS(179),
    [anon_sym_mut] = ACTIONS(179),
    [anon_sym_negative] = ACTIONS(179),
    [anon_sym_negativum] = ACTIONS(179),
    [anon_sym_nihil] = ACTIONS(179),
    [anon_sym_non] = ACTIONS(179),
    [anon_sym_none] = ACTIONS(179),
    [anon_sym_nonnihil] = ACTIONS(179),
    [anon_sym_nonnulla] = ACTIONS(179),
    [anon_sym_not] = ACTIONS(179),
    [anon_sym_nota] = ACTIONS(179),
    [anon_sym_null] = ACTIONS(179),
    [anon_sym_nulla] = ACTIONS(179),
    [anon_sym_omitte] = ACTIONS(179),
    [anon_sym_omnia] = ACTIONS(179),
    [anon_sym_only] = ACTIONS(179),
    [anon_sym_only_in] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_own] = ACTIONS(179),
    [anon_sym_penes] = ACTIONS(179),
    [anon_sym_per] = ACTIONS(179),
    [anon_sym_positive] = ACTIONS(179),
    [anon_sym_positivum] = ACTIONS(179),
    [anon_sym_postpara] = ACTIONS(179),
    [anon_sym_postparabit] = ACTIONS(179),
    [anon_sym_praefixum] = ACTIONS(179),
    [anon_sym_praepara] = ACTIONS(179),
    [anon_sym_praeparabit] = ACTIONS(179),
    [anon_sym_print] = ACTIONS(179),
    [anon_sym_proba] = ACTIONS(179),
    [anon_sym_probandum] = ACTIONS(179),
    [anon_sym_range] = ACTIONS(179),
    [anon_sym_read] = ACTIONS(179),
    [anon_sym_reddet] = ACTIONS(179),
    [anon_sym_ref] = ACTIONS(179),
    [anon_sym_repeat] = ACTIONS(179),
    [anon_sym_repete] = ACTIONS(179),
    [anon_sym_return_await] = ACTIONS(179),
    [anon_sym_scribe] = ACTIONS(179),
    [anon_sym_scriptum] = ACTIONS(179),
    [anon_sym_self] = ACTIONS(179),
    [anon_sym_setup] = ACTIONS(179),
    [anon_sym_skip] = ACTIONS(179),
    [anon_sym_solum] = ACTIONS(179),
    [anon_sym_solum_in] = ACTIONS(179),
    [anon_sym_some] = ACTIONS(179),
    [anon_sym_sparge] = ACTIONS(179),
    [anon_sym_spread] = ACTIONS(179),
    [anon_sym_step] = ACTIONS(179),
    [anon_sym_tacebit] = ACTIONS(179),
    [anon_sym_tag] = ACTIONS(179),
    [anon_sym_teardown] = ACTIONS(179),
    [anon_sym_temporis] = ACTIONS(179),
    [anon_sym_test] = ACTIONS(179),
    [anon_sym_timeout] = ACTIONS(179),
    [anon_sym_todo] = ACTIONS(179),
    [anon_sym_until] = ACTIONS(179),
    [anon_sym_usque] = ACTIONS(179),
    [anon_sym_ut] = ACTIONS(179),
    [anon_sym_variandum] = ACTIONS(179),
    [anon_sym_variant] = ACTIONS(179),
    [anon_sym_vel] = ACTIONS(179),
    [anon_sym_via] = ACTIONS(179),
    [anon_sym_vide] = ACTIONS(179),
    [anon_sym_warn] = ACTIONS(179),
    [anon_sym_wrapping] = ACTIONS(179),
    [anon_sym_write] = ACTIONS(179),
    [anon_sym_yield] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_falsum] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_verum] = ACTIONS(179),
    [sym_guillemet_string] = ACTIONS(177),
    [sym_octeti_string] = ACTIONS(177),
    [sym_backtick_string] = ACTIONS(177),
    [sym_ascii_string] = ACTIONS(177),
    [sym_string] = ACTIONS(177),
    [sym_number] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [sym_operator] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_hash] = ACTIONS(177),
    [sym_line_comment] = ACTIONS(177),
    [sym_faber_newline] = ACTIONS(177),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_at_sign] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_cli] = ACTIONS(183),
    [anon_sym_conversio] = ACTIONS(183),
    [anon_sym_conversion] = ACTIONS(183),
    [anon_sym_cursor] = ACTIONS(183),
    [anon_sym_fragment] = ACTIONS(183),
    [anon_sym_futura] = ACTIONS(183),
    [anon_sym_imperium] = ACTIONS(183),
    [anon_sym_json] = ACTIONS(183),
    [anon_sym_nondum] = ACTIONS(183),
    [anon_sym_nucleum] = ACTIONS(183),
    [anon_sym_operandus] = ACTIONS(183),
    [anon_sym_optio] = ACTIONS(183),
    [anon_sym_privata] = ACTIONS(183),
    [anon_sym_private] = ACTIONS(183),
    [anon_sym_protecta] = ACTIONS(183),
    [anon_sym_protected] = ACTIONS(183),
    [anon_sym_public] = ACTIONS(183),
    [anon_sym_publica] = ACTIONS(183),
    [anon_sym_radix] = ACTIONS(183),
    [anon_sym_verte] = ACTIONS(183),
    [anon_sym_vertex] = ACTIONS(183),
    [anon_sym_ascii] = ACTIONS(183),
    [anon_sym_bivalens] = ACTIONS(183),
    [anon_sym_bool] = ACTIONS(183),
    [anon_sym_byte] = ACTIONS(183),
    [anon_sym_bytes] = ACTIONS(183),
    [anon_sym_char] = ACTIONS(183),
    [anon_sym_copia] = ACTIONS(183),
    [anon_sym_cursor_t] = ACTIONS(183),
    [anon_sym_exactus] = ACTIONS(183),
    [anon_sym_f16] = ACTIONS(183),
    [anon_sym_f32] = ACTIONS(183),
    [anon_sym_f64] = ACTIONS(183),
    [anon_sym_float] = ACTIONS(183),
    [anon_sym_fractus] = ACTIONS(183),
    [anon_sym_i16] = ACTIONS(183),
    [anon_sym_i32] = ACTIONS(183),
    [anon_sym_i64] = ACTIONS(183),
    [anon_sym_i8] = ACTIONS(183),
    [anon_sym_ignotum] = ACTIONS(183),
    [anon_sym_instans] = ACTIONS(183),
    [anon_sym_instant] = ACTIONS(183),
    [anon_sym_int] = ACTIONS(183),
    [anon_sym_intervallum] = ACTIONS(183),
    [anon_sym_iterator] = ACTIONS(183),
    [anon_sym_lf16] = ACTIONS(183),
    [anon_sym_lf32] = ACTIONS(183),
    [anon_sym_lf64] = ACTIONS(183),
    [anon_sym_li16] = ACTIONS(183),
    [anon_sym_li32] = ACTIONS(183),
    [anon_sym_li64] = ACTIONS(183),
    [anon_sym_li8] = ACTIONS(183),
    [anon_sym_list] = ACTIONS(183),
    [anon_sym_lista] = ACTIONS(183),
    [anon_sym_littera] = ACTIONS(183),
    [anon_sym_lu16] = ACTIONS(183),
    [anon_sym_lu32] = ACTIONS(183),
    [anon_sym_lu64] = ACTIONS(183),
    [anon_sym_lu8] = ACTIONS(183),
    [anon_sym_map] = ACTIONS(183),
    [anon_sym_matrix] = ACTIONS(183),
    [anon_sym_mf16] = ACTIONS(183),
    [anon_sym_mf32] = ACTIONS(183),
    [anon_sym_mf64] = ACTIONS(183),
    [anon_sym_mi16] = ACTIONS(183),
    [anon_sym_mi32] = ACTIONS(183),
    [anon_sym_mi64] = ACTIONS(183),
    [anon_sym_mi8] = ACTIONS(183),
    [anon_sym_mu16] = ACTIONS(183),
    [anon_sym_mu32] = ACTIONS(183),
    [anon_sym_mu64] = ACTIONS(183),
    [anon_sym_mu8] = ACTIONS(183),
    [anon_sym_never] = ACTIONS(183),
    [anon_sym_numerus] = ACTIONS(183),
    [anon_sym_numquam] = ACTIONS(183),
    [anon_sym_octeti] = ACTIONS(183),
    [anon_sym_octetus] = ACTIONS(183),
    [anon_sym_promise] = ACTIONS(183),
    [anon_sym_promissum] = ACTIONS(183),
    [anon_sym_queue] = ACTIONS(183),
    [anon_sym_ratio] = ACTIONS(183),
    [anon_sym_record] = ACTIONS(183),
    [anon_sym_regex] = ACTIONS(183),
    [anon_sym_saturating] = ACTIONS(183),
    [anon_sym_saturatus] = ACTIONS(183),
    [anon_sym_series] = ACTIONS(183),
    [anon_sym_set] = ACTIONS(183),
    [anon_sym_sf16] = ACTIONS(183),
    [anon_sym_sf32] = ACTIONS(183),
    [anon_sym_sf64] = ACTIONS(183),
    [anon_sym_si16] = ACTIONS(183),
    [anon_sym_si32] = ACTIONS(183),
    [anon_sym_si64] = ACTIONS(183),
    [anon_sym_si8] = ACTIONS(183),
    [anon_sym_sparsa] = ACTIONS(183),
    [anon_sym_stack] = ACTIONS(183),
    [anon_sym_string] = ACTIONS(183),
    [anon_sym_su16] = ACTIONS(183),
    [anon_sym_su32] = ACTIONS(183),
    [anon_sym_su64] = ACTIONS(183),
    [anon_sym_su8] = ACTIONS(183),
    [anon_sym_tabula] = ACTIONS(183),
    [anon_sym_tensor] = ACTIONS(183),
    [anon_sym_textus] = ACTIONS(183),
    [anon_sym_tf16] = ACTIONS(183),
    [anon_sym_tf32] = ACTIONS(183),
    [anon_sym_tf64] = ACTIONS(183),
    [anon_sym_ti16] = ACTIONS(183),
    [anon_sym_ti32] = ACTIONS(183),
    [anon_sym_ti64] = ACTIONS(183),
    [anon_sym_ti8] = ACTIONS(183),
    [anon_sym_trapping] = ACTIONS(183),
    [anon_sym_tu16] = ACTIONS(183),
    [anon_sym_tu32] = ACTIONS(183),
    [anon_sym_tu64] = ACTIONS(183),
    [anon_sym_tu8] = ACTIONS(183),
    [anon_sym_u16] = ACTIONS(183),
    [anon_sym_u32] = ACTIONS(183),
    [anon_sym_u64] = ACTIONS(183),
    [anon_sym_u8] = ACTIONS(183),
    [anon_sym_unio] = ACTIONS(183),
    [anon_sym_unknown] = ACTIONS(183),
    [anon_sym_vacua] = ACTIONS(183),
    [anon_sym_vacuum] = ACTIONS(183),
    [anon_sym_valor] = ACTIONS(183),
    [anon_sym_vector] = ACTIONS(183),
    [anon_sym_vf16] = ACTIONS(183),
    [anon_sym_vf32] = ACTIONS(183),
    [anon_sym_vf64] = ACTIONS(183),
    [anon_sym_vi16] = ACTIONS(183),
    [anon_sym_vi32] = ACTIONS(183),
    [anon_sym_vi64] = ACTIONS(183),
    [anon_sym_vi8] = ACTIONS(183),
    [anon_sym_void] = ACTIONS(183),
    [anon_sym_vu16] = ACTIONS(183),
    [anon_sym_vu32] = ACTIONS(183),
    [anon_sym_vu64] = ACTIONS(183),
    [anon_sym_vu8] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_QMARK_DOT] = ACTIONS(181),
    [anon_sym_BANG_DOT] = ACTIONS(181),
    [anon_sym_ad] = ACTIONS(183),
    [anon_sym_adfirma] = ACTIONS(183),
    [anon_sym_apud] = ACTIONS(183),
    [anon_sym_args] = ACTIONS(183),
    [anon_sym_argumenta] = ACTIONS(183),
    [anon_sym_assert] = ACTIONS(183),
    [anon_sym_async_main] = ACTIONS(183),
    [anon_sym_at] = ACTIONS(183),
    [anon_sym_break] = ACTIONS(183),
    [anon_sym_call] = ACTIONS(183),
    [anon_sym_cape] = ACTIONS(183),
    [anon_sym_capta] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_casu] = ACTIONS(183),
    [anon_sym_catch] = ACTIONS(183),
    [anon_sym_ceterum] = ACTIONS(183),
    [anon_sym_continue] = ACTIONS(183),
    [anon_sym_custodi] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(183),
    [anon_sym_discerne] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [anon_sym_dum] = ACTIONS(183),
    [anon_sym_elif] = ACTIONS(183),
    [anon_sym_elige] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_ergo] = ACTIONS(183),
    [anon_sym_fac] = ACTIONS(183),
    [anon_sym_for] = ACTIONS(183),
    [anon_sym_guard] = ACTIONS(183),
    [anon_sym_iace] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_incipiet] = ACTIONS(183),
    [anon_sym_incipit] = ACTIONS(183),
    [anon_sym_itera] = ACTIONS(183),
    [anon_sym_main] = ACTIONS(183),
    [anon_sym_match] = ACTIONS(183),
    [anon_sym_mori] = ACTIONS(183),
    [anon_sym_panic] = ACTIONS(183),
    [anon_sym_pass] = ACTIONS(183),
    [anon_sym_perge] = ACTIONS(183),
    [anon_sym_redde] = ACTIONS(183),
    [anon_sym_reice] = ACTIONS(183),
    [anon_sym_reject] = ACTIONS(183),
    [anon_sym_require] = ACTIONS(183),
    [anon_sym_requirit] = ACTIONS(183),
    [anon_sym_return] = ACTIONS(183),
    [anon_sym_rumpe] = ACTIONS(183),
    [anon_sym_secus] = ACTIONS(183),
    [anon_sym_si] = ACTIONS(183),
    [anon_sym_sic] = ACTIONS(183),
    [anon_sym_sin] = ACTIONS(183),
    [anon_sym_switch] = ACTIONS(183),
    [anon_sym_tacet] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym_throw] = ACTIONS(183),
    [anon_sym_trap] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_yields] = ACTIONS(183),
    [anon_sym_ceteri] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_column] = ACTIONS(183),
    [anon_sym_columna] = ACTIONS(183),
    [anon_sym_const] = ACTIONS(183),
    [anon_sym_discretio] = ACTIONS(183),
    [anon_sym_enum] = ACTIONS(183),
    [anon_sym_errata] = ACTIONS(183),
    [anon_sym_errors] = ACTIONS(183),
    [anon_sym_exit] = ACTIONS(183),
    [anon_sym_exitus] = ACTIONS(183),
    [anon_sym_fixum] = ACTIONS(183),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_functio] = ACTIONS(183),
    [anon_sym_generis] = ACTIONS(183),
    [anon_sym_genus] = ACTIONS(183),
    [anon_sym_iacit] = ACTIONS(183),
    [anon_sym_immutata] = ACTIONS(183),
    [anon_sym_implendum] = ACTIONS(183),
    [anon_sym_import] = ACTIONS(183),
    [anon_sym_importa] = ACTIONS(183),
    [anon_sym_interface] = ACTIONS(183),
    [anon_sym_interna] = ACTIONS(183),
    [anon_sym_internal] = ACTIONS(183),
    [anon_sym_iuncta] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_magnitudo] = ACTIONS(183),
    [anon_sym_optional] = ACTIONS(183),
    [anon_sym_optiones] = ACTIONS(183),
    [anon_sym_options] = ACTIONS(183),
    [anon_sym_ordo] = ACTIONS(183),
    [anon_sym_prae] = ACTIONS(183),
    [anon_sym_readonly] = ACTIONS(183),
    [anon_sym_rest] = ACTIONS(183),
    [anon_sym_schema] = ACTIONS(183),
    [anon_sym_sit] = ACTIONS(183),
    [anon_sym_size] = ACTIONS(183),
    [anon_sym_sponte] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(183),
    [anon_sym_throws] = ACTIONS(183),
    [anon_sym_tuple] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [anon_sym_typus] = ACTIONS(183),
    [anon_sym_union] = ACTIONS(183),
    [anon_sym_var] = ACTIONS(183),
    [anon_sym_varia] = ACTIONS(183),
    [anon_sym_ab] = ACTIONS(183),
    [anon_sym_all] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_ante] = ACTIONS(183),
    [anon_sym_as] = ACTIONS(183),
    [anon_sym_async] = ACTIONS(183),
    [anon_sym_async_generator] = ACTIONS(183),
    [anon_sym_async_setup] = ACTIONS(183),
    [anon_sym_async_teardown] = ACTIONS(183),
    [anon_sym_aut] = ACTIONS(183),
    [anon_sym_await] = ACTIONS(183),
    [anon_sym_await_const] = ACTIONS(183),
    [anon_sym_await_var] = ACTIONS(183),
    [anon_sym_before] = ACTIONS(183),
    [anon_sym_bench] = ACTIONS(183),
    [anon_sym_cede] = ACTIONS(183),
    [anon_sym_clausura] = ACTIONS(183),
    [anon_sym_coalesce] = ACTIONS(183),
    [anon_sym_comptime] = ACTIONS(183),
    [anon_sym_copy] = ACTIONS(183),
    [anon_sym_de] = ACTIONS(183),
    [anon_sym_debug] = ACTIONS(183),
    [anon_sym_describe] = ACTIONS(183),
    [anon_sym_ego] = ACTIONS(183),
    [anon_sym_embed] = ACTIONS(183),
    [anon_sym_erratur] = ACTIONS(183),
    [anon_sym_est] = ACTIONS(183),
    [anon_sym_et] = ACTIONS(183),
    [anon_sym_ex] = ACTIONS(183),
    [anon_sym_exemplum] = ACTIONS(183),
    [anon_sym_expect_failure] = ACTIONS(183),
    [anon_sym_fient] = ACTIONS(183),
    [anon_sym_fiet] = ACTIONS(183),
    [anon_sym_figendum] = ACTIONS(183),
    [anon_sym_finge] = ACTIONS(183),
    [anon_sym_fiunt] = ACTIONS(183),
    [anon_sym_flaky] = ACTIONS(183),
    [anon_sym_format] = ACTIONS(183),
    [anon_sym_fragilis] = ACTIONS(183),
    [anon_sym_from] = ACTIONS(183),
    [anon_sym_futurum] = ACTIONS(183),
    [anon_sym_generator] = ACTIONS(183),
    [anon_sym_implements] = ACTIONS(183),
    [anon_sym_implet] = ACTIONS(183),
    [anon_sym_in] = ACTIONS(183),
    [anon_sym_insere] = ACTIONS(183),
    [anon_sym_is] = ACTIONS(183),
    [anon_sym_lambda] = ACTIONS(183),
    [anon_sym_lege] = ACTIONS(183),
    [anon_sym_line] = ACTIONS(183),
    [anon_sym_lineam] = ACTIONS(183),
    [anon_sym_metior] = ACTIONS(183),
    [anon_sym_modulus] = ACTIONS(183),
    [anon_sym_mone] = ACTIONS(183),
    [anon_sym_mut] = ACTIONS(183),
    [anon_sym_negative] = ACTIONS(183),
    [anon_sym_negativum] = ACTIONS(183),
    [anon_sym_nihil] = ACTIONS(183),
    [anon_sym_non] = ACTIONS(183),
    [anon_sym_none] = ACTIONS(183),
    [anon_sym_nonnihil] = ACTIONS(183),
    [anon_sym_nonnulla] = ACTIONS(183),
    [anon_sym_not] = ACTIONS(183),
    [anon_sym_nota] = ACTIONS(183),
    [anon_sym_null] = ACTIONS(183),
    [anon_sym_nulla] = ACTIONS(183),
    [anon_sym_omitte] = ACTIONS(183),
    [anon_sym_omnia] = ACTIONS(183),
    [anon_sym_only] = ACTIONS(183),
    [anon_sym_only_in] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [anon_sym_own] = ACTIONS(183),
    [anon_sym_penes] = ACTIONS(183),
    [anon_sym_per] = ACTIONS(183),
    [anon_sym_positive] = ACTIONS(183),
    [anon_sym_positivum] = ACTIONS(183),
    [anon_sym_postpara] = ACTIONS(183),
    [anon_sym_postparabit] = ACTIONS(183),
    [anon_sym_praefixum] = ACTIONS(183),
    [anon_sym_praepara] = ACTIONS(183),
    [anon_sym_praeparabit] = ACTIONS(183),
    [anon_sym_print] = ACTIONS(183),
    [anon_sym_proba] = ACTIONS(183),
    [anon_sym_probandum] = ACTIONS(183),
    [anon_sym_range] = ACTIONS(183),
    [anon_sym_read] = ACTIONS(183),
    [anon_sym_reddet] = ACTIONS(183),
    [anon_sym_ref] = ACTIONS(183),
    [anon_sym_repeat] = ACTIONS(183),
    [anon_sym_repete] = ACTIONS(183),
    [anon_sym_return_await] = ACTIONS(183),
    [anon_sym_scribe] = ACTIONS(183),
    [anon_sym_scriptum] = ACTIONS(183),
    [anon_sym_self] = ACTIONS(183),
    [anon_sym_setup] = ACTIONS(183),
    [anon_sym_skip] = ACTIONS(183),
    [anon_sym_solum] = ACTIONS(183),
    [anon_sym_solum_in] = ACTIONS(183),
    [anon_sym_some] = ACTIONS(183),
    [anon_sym_sparge] = ACTIONS(183),
    [anon_sym_spread] = ACTIONS(183),
    [anon_sym_step] = ACTIONS(183),
    [anon_sym_tacebit] = ACTIONS(183),
    [anon_sym_tag] = ACTIONS(183),
    [anon_sym_teardown] = ACTIONS(183),
    [anon_sym_temporis] = ACTIONS(183),
    [anon_sym_test] = ACTIONS(183),
    [anon_sym_timeout] = ACTIONS(183),
    [anon_sym_todo] = ACTIONS(183),
    [anon_sym_until] = ACTIONS(183),
    [anon_sym_usque] = ACTIONS(183),
    [anon_sym_ut] = ACTIONS(183),
    [anon_sym_variandum] = ACTIONS(183),
    [anon_sym_variant] = ACTIONS(183),
    [anon_sym_vel] = ACTIONS(183),
    [anon_sym_via] = ACTIONS(183),
    [anon_sym_vide] = ACTIONS(183),
    [anon_sym_warn] = ACTIONS(183),
    [anon_sym_wrapping] = ACTIONS(183),
    [anon_sym_write] = ACTIONS(183),
    [anon_sym_yield] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [anon_sym_falsum] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_verum] = ACTIONS(183),
    [sym_guillemet_string] = ACTIONS(181),
    [sym_octeti_string] = ACTIONS(181),
    [sym_backtick_string] = ACTIONS(181),
    [sym_ascii_string] = ACTIONS(181),
    [sym_string] = ACTIONS(181),
    [sym_number] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_operator] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [sym_hash] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(181),
    [sym_faber_newline] = ACTIONS(181),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_at_sign] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_cli] = ACTIONS(171),
    [anon_sym_conversio] = ACTIONS(171),
    [anon_sym_conversion] = ACTIONS(171),
    [anon_sym_cursor] = ACTIONS(171),
    [anon_sym_fragment] = ACTIONS(171),
    [anon_sym_futura] = ACTIONS(171),
    [anon_sym_imperium] = ACTIONS(171),
    [anon_sym_json] = ACTIONS(171),
    [anon_sym_nondum] = ACTIONS(171),
    [anon_sym_nucleum] = ACTIONS(171),
    [anon_sym_operandus] = ACTIONS(171),
    [anon_sym_optio] = ACTIONS(171),
    [anon_sym_privata] = ACTIONS(171),
    [anon_sym_private] = ACTIONS(171),
    [anon_sym_protecta] = ACTIONS(171),
    [anon_sym_protected] = ACTIONS(171),
    [anon_sym_public] = ACTIONS(171),
    [anon_sym_publica] = ACTIONS(171),
    [anon_sym_radix] = ACTIONS(171),
    [anon_sym_verte] = ACTIONS(171),
    [anon_sym_vertex] = ACTIONS(171),
    [anon_sym_ascii] = ACTIONS(171),
    [anon_sym_bivalens] = ACTIONS(171),
    [anon_sym_bool] = ACTIONS(171),
    [anon_sym_byte] = ACTIONS(171),
    [anon_sym_bytes] = ACTIONS(171),
    [anon_sym_char] = ACTIONS(171),
    [anon_sym_copia] = ACTIONS(171),
    [anon_sym_cursor_t] = ACTIONS(171),
    [anon_sym_exactus] = ACTIONS(171),
    [anon_sym_f16] = ACTIONS(171),
    [anon_sym_f32] = ACTIONS(171),
    [anon_sym_f64] = ACTIONS(171),
    [anon_sym_float] = ACTIONS(171),
    [anon_sym_fractus] = ACTIONS(171),
    [anon_sym_i16] = ACTIONS(171),
    [anon_sym_i32] = ACTIONS(171),
    [anon_sym_i64] = ACTIONS(171),
    [anon_sym_i8] = ACTIONS(171),
    [anon_sym_ignotum] = ACTIONS(171),
    [anon_sym_instans] = ACTIONS(171),
    [anon_sym_instant] = ACTIONS(171),
    [anon_sym_int] = ACTIONS(171),
    [anon_sym_intervallum] = ACTIONS(171),
    [anon_sym_iterator] = ACTIONS(171),
    [anon_sym_lf16] = ACTIONS(171),
    [anon_sym_lf32] = ACTIONS(171),
    [anon_sym_lf64] = ACTIONS(171),
    [anon_sym_li16] = ACTIONS(171),
    [anon_sym_li32] = ACTIONS(171),
    [anon_sym_li64] = ACTIONS(171),
    [anon_sym_li8] = ACTIONS(171),
    [anon_sym_list] = ACTIONS(171),
    [anon_sym_lista] = ACTIONS(171),
    [anon_sym_littera] = ACTIONS(171),
    [anon_sym_lu16] = ACTIONS(171),
    [anon_sym_lu32] = ACTIONS(171),
    [anon_sym_lu64] = ACTIONS(171),
    [anon_sym_lu8] = ACTIONS(171),
    [anon_sym_map] = ACTIONS(171),
    [anon_sym_matrix] = ACTIONS(171),
    [anon_sym_mf16] = ACTIONS(171),
    [anon_sym_mf32] = ACTIONS(171),
    [anon_sym_mf64] = ACTIONS(171),
    [anon_sym_mi16] = ACTIONS(171),
    [anon_sym_mi32] = ACTIONS(171),
    [anon_sym_mi64] = ACTIONS(171),
    [anon_sym_mi8] = ACTIONS(171),
    [anon_sym_mu16] = ACTIONS(171),
    [anon_sym_mu32] = ACTIONS(171),
    [anon_sym_mu64] = ACTIONS(171),
    [anon_sym_mu8] = ACTIONS(171),
    [anon_sym_never] = ACTIONS(171),
    [anon_sym_numerus] = ACTIONS(171),
    [anon_sym_numquam] = ACTIONS(171),
    [anon_sym_octeti] = ACTIONS(171),
    [anon_sym_octetus] = ACTIONS(171),
    [anon_sym_promise] = ACTIONS(171),
    [anon_sym_promissum] = ACTIONS(171),
    [anon_sym_queue] = ACTIONS(171),
    [anon_sym_ratio] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(171),
    [anon_sym_regex] = ACTIONS(171),
    [anon_sym_saturating] = ACTIONS(171),
    [anon_sym_saturatus] = ACTIONS(171),
    [anon_sym_series] = ACTIONS(171),
    [anon_sym_set] = ACTIONS(171),
    [anon_sym_sf16] = ACTIONS(171),
    [anon_sym_sf32] = ACTIONS(171),
    [anon_sym_sf64] = ACTIONS(171),
    [anon_sym_si16] = ACTIONS(171),
    [anon_sym_si32] = ACTIONS(171),
    [anon_sym_si64] = ACTIONS(171),
    [anon_sym_si8] = ACTIONS(171),
    [anon_sym_sparsa] = ACTIONS(171),
    [anon_sym_stack] = ACTIONS(171),
    [anon_sym_string] = ACTIONS(171),
    [anon_sym_su16] = ACTIONS(171),
    [anon_sym_su32] = ACTIONS(171),
    [anon_sym_su64] = ACTIONS(171),
    [anon_sym_su8] = ACTIONS(171),
    [anon_sym_tabula] = ACTIONS(171),
    [anon_sym_tensor] = ACTIONS(171),
    [anon_sym_textus] = ACTIONS(171),
    [anon_sym_tf16] = ACTIONS(171),
    [anon_sym_tf32] = ACTIONS(171),
    [anon_sym_tf64] = ACTIONS(171),
    [anon_sym_ti16] = ACTIONS(171),
    [anon_sym_ti32] = ACTIONS(171),
    [anon_sym_ti64] = ACTIONS(171),
    [anon_sym_ti8] = ACTIONS(171),
    [anon_sym_trapping] = ACTIONS(171),
    [anon_sym_tu16] = ACTIONS(171),
    [anon_sym_tu32] = ACTIONS(171),
    [anon_sym_tu64] = ACTIONS(171),
    [anon_sym_tu8] = ACTIONS(171),
    [anon_sym_u16] = ACTIONS(171),
    [anon_sym_u32] = ACTIONS(171),
    [anon_sym_u64] = ACTIONS(171),
    [anon_sym_u8] = ACTIONS(171),
    [anon_sym_unio] = ACTIONS(171),
    [anon_sym_unknown] = ACTIONS(171),
    [anon_sym_vacua] = ACTIONS(171),
    [anon_sym_vacuum] = ACTIONS(171),
    [anon_sym_valor] = ACTIONS(171),
    [anon_sym_vector] = ACTIONS(171),
    [anon_sym_vf16] = ACTIONS(171),
    [anon_sym_vf32] = ACTIONS(171),
    [anon_sym_vf64] = ACTIONS(171),
    [anon_sym_vi16] = ACTIONS(171),
    [anon_sym_vi32] = ACTIONS(171),
    [anon_sym_vi64] = ACTIONS(171),
    [anon_sym_vi8] = ACTIONS(171),
    [anon_sym_void] = ACTIONS(171),
    [anon_sym_vu16] = ACTIONS(171),
    [anon_sym_vu32] = ACTIONS(171),
    [anon_sym_vu64] = ACTIONS(171),
    [anon_sym_vu8] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_QMARK_DOT] = ACTIONS(169),
    [anon_sym_BANG_DOT] = ACTIONS(169),
    [anon_sym_ad] = ACTIONS(171),
    [anon_sym_adfirma] = ACTIONS(171),
    [anon_sym_apud] = ACTIONS(171),
    [anon_sym_args] = ACTIONS(171),
    [anon_sym_argumenta] = ACTIONS(171),
    [anon_sym_assert] = ACTIONS(171),
    [anon_sym_async_main] = ACTIONS(171),
    [anon_sym_at] = ACTIONS(171),
    [anon_sym_break] = ACTIONS(171),
    [anon_sym_call] = ACTIONS(171),
    [anon_sym_cape] = ACTIONS(171),
    [anon_sym_capta] = ACTIONS(171),
    [anon_sym_case] = ACTIONS(171),
    [anon_sym_casu] = ACTIONS(171),
    [anon_sym_catch] = ACTIONS(171),
    [anon_sym_ceterum] = ACTIONS(171),
    [anon_sym_continue] = ACTIONS(171),
    [anon_sym_custodi] = ACTIONS(171),
    [anon_sym_default] = ACTIONS(171),
    [anon_sym_discerne] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_dum] = ACTIONS(171),
    [anon_sym_elif] = ACTIONS(171),
    [anon_sym_elige] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_ergo] = ACTIONS(171),
    [anon_sym_fac] = ACTIONS(171),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_guard] = ACTIONS(171),
    [anon_sym_iace] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_incipiet] = ACTIONS(171),
    [anon_sym_incipit] = ACTIONS(171),
    [anon_sym_itera] = ACTIONS(171),
    [anon_sym_main] = ACTIONS(171),
    [anon_sym_match] = ACTIONS(171),
    [anon_sym_mori] = ACTIONS(171),
    [anon_sym_panic] = ACTIONS(171),
    [anon_sym_pass] = ACTIONS(171),
    [anon_sym_perge] = ACTIONS(171),
    [anon_sym_redde] = ACTIONS(171),
    [anon_sym_reice] = ACTIONS(171),
    [anon_sym_reject] = ACTIONS(171),
    [anon_sym_require] = ACTIONS(171),
    [anon_sym_requirit] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_rumpe] = ACTIONS(171),
    [anon_sym_secus] = ACTIONS(171),
    [anon_sym_si] = ACTIONS(171),
    [anon_sym_sic] = ACTIONS(171),
    [anon_sym_sin] = ACTIONS(171),
    [anon_sym_switch] = ACTIONS(171),
    [anon_sym_tacet] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [anon_sym_throw] = ACTIONS(171),
    [anon_sym_trap] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_yields] = ACTIONS(171),
    [anon_sym_ceteri] = ACTIONS(171),
    [anon_sym_class] = ACTIONS(171),
    [anon_sym_column] = ACTIONS(171),
    [anon_sym_columna] = ACTIONS(171),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_discretio] = ACTIONS(171),
    [anon_sym_enum] = ACTIONS(171),
    [anon_sym_errata] = ACTIONS(171),
    [anon_sym_errors] = ACTIONS(171),
    [anon_sym_exit] = ACTIONS(171),
    [anon_sym_exitus] = ACTIONS(171),
    [anon_sym_fixum] = ACTIONS(171),
    [anon_sym_fn] = ACTIONS(171),
    [anon_sym_functio] = ACTIONS(171),
    [anon_sym_generis] = ACTIONS(171),
    [anon_sym_genus] = ACTIONS(171),
    [anon_sym_iacit] = ACTIONS(171),
    [anon_sym_immutata] = ACTIONS(171),
    [anon_sym_implendum] = ACTIONS(171),
    [anon_sym_import] = ACTIONS(171),
    [anon_sym_importa] = ACTIONS(171),
    [anon_sym_interface] = ACTIONS(171),
    [anon_sym_interna] = ACTIONS(171),
    [anon_sym_internal] = ACTIONS(171),
    [anon_sym_iuncta] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(171),
    [anon_sym_magnitudo] = ACTIONS(171),
    [anon_sym_optional] = ACTIONS(171),
    [anon_sym_optiones] = ACTIONS(171),
    [anon_sym_options] = ACTIONS(171),
    [anon_sym_ordo] = ACTIONS(171),
    [anon_sym_prae] = ACTIONS(171),
    [anon_sym_readonly] = ACTIONS(171),
    [anon_sym_rest] = ACTIONS(171),
    [anon_sym_schema] = ACTIONS(171),
    [anon_sym_sit] = ACTIONS(171),
    [anon_sym_size] = ACTIONS(171),
    [anon_sym_sponte] = ACTIONS(171),
    [anon_sym_static] = ACTIONS(171),
    [anon_sym_throws] = ACTIONS(171),
    [anon_sym_tuple] = ACTIONS(171),
    [anon_sym_type] = ACTIONS(171),
    [anon_sym_typus] = ACTIONS(171),
    [anon_sym_union] = ACTIONS(171),
    [anon_sym_var] = ACTIONS(171),
    [anon_sym_varia] = ACTIONS(171),
    [anon_sym_ab] = ACTIONS(171),
    [anon_sym_all] = ACTIONS(171),
    [anon_sym_and] = ACTIONS(171),
    [anon_sym_ante] = ACTIONS(171),
    [anon_sym_as] = ACTIONS(171),
    [anon_sym_async] = ACTIONS(171),
    [anon_sym_async_generator] = ACTIONS(171),
    [anon_sym_async_setup] = ACTIONS(171),
    [anon_sym_async_teardown] = ACTIONS(171),
    [anon_sym_aut] = ACTIONS(171),
    [anon_sym_await] = ACTIONS(171),
    [anon_sym_await_const] = ACTIONS(171),
    [anon_sym_await_var] = ACTIONS(171),
    [anon_sym_before] = ACTIONS(171),
    [anon_sym_bench] = ACTIONS(171),
    [anon_sym_cede] = ACTIONS(171),
    [anon_sym_clausura] = ACTIONS(171),
    [anon_sym_coalesce] = ACTIONS(171),
    [anon_sym_comptime] = ACTIONS(171),
    [anon_sym_copy] = ACTIONS(171),
    [anon_sym_de] = ACTIONS(171),
    [anon_sym_debug] = ACTIONS(171),
    [anon_sym_describe] = ACTIONS(171),
    [anon_sym_ego] = ACTIONS(171),
    [anon_sym_embed] = ACTIONS(171),
    [anon_sym_erratur] = ACTIONS(171),
    [anon_sym_est] = ACTIONS(171),
    [anon_sym_et] = ACTIONS(171),
    [anon_sym_ex] = ACTIONS(171),
    [anon_sym_exemplum] = ACTIONS(171),
    [anon_sym_expect_failure] = ACTIONS(171),
    [anon_sym_fient] = ACTIONS(171),
    [anon_sym_fiet] = ACTIONS(171),
    [anon_sym_figendum] = ACTIONS(171),
    [anon_sym_finge] = ACTIONS(171),
    [anon_sym_fiunt] = ACTIONS(171),
    [anon_sym_flaky] = ACTIONS(171),
    [anon_sym_format] = ACTIONS(171),
    [anon_sym_fragilis] = ACTIONS(171),
    [anon_sym_from] = ACTIONS(171),
    [anon_sym_futurum] = ACTIONS(171),
    [anon_sym_generator] = ACTIONS(171),
    [anon_sym_implements] = ACTIONS(171),
    [anon_sym_implet] = ACTIONS(171),
    [anon_sym_in] = ACTIONS(171),
    [anon_sym_insere] = ACTIONS(171),
    [anon_sym_is] = ACTIONS(171),
    [anon_sym_lambda] = ACTIONS(171),
    [anon_sym_lege] = ACTIONS(171),
    [anon_sym_line] = ACTIONS(171),
    [anon_sym_lineam] = ACTIONS(171),
    [anon_sym_metior] = ACTIONS(171),
    [anon_sym_modulus] = ACTIONS(171),
    [anon_sym_mone] = ACTIONS(171),
    [anon_sym_mut] = ACTIONS(171),
    [anon_sym_negative] = ACTIONS(171),
    [anon_sym_negativum] = ACTIONS(171),
    [anon_sym_nihil] = ACTIONS(171),
    [anon_sym_non] = ACTIONS(171),
    [anon_sym_none] = ACTIONS(171),
    [anon_sym_nonnihil] = ACTIONS(171),
    [anon_sym_nonnulla] = ACTIONS(171),
    [anon_sym_not] = ACTIONS(171),
    [anon_sym_nota] = ACTIONS(171),
    [anon_sym_null] = ACTIONS(171),
    [anon_sym_nulla] = ACTIONS(171),
    [anon_sym_omitte] = ACTIONS(171),
    [anon_sym_omnia] = ACTIONS(171),
    [anon_sym_only] = ACTIONS(171),
    [anon_sym_only_in] = ACTIONS(171),
    [anon_sym_or] = ACTIONS(171),
    [anon_sym_own] = ACTIONS(171),
    [anon_sym_penes] = ACTIONS(171),
    [anon_sym_per] = ACTIONS(171),
    [anon_sym_positive] = ACTIONS(171),
    [anon_sym_positivum] = ACTIONS(171),
    [anon_sym_postpara] = ACTIONS(171),
    [anon_sym_postparabit] = ACTIONS(171),
    [anon_sym_praefixum] = ACTIONS(171),
    [anon_sym_praepara] = ACTIONS(171),
    [anon_sym_praeparabit] = ACTIONS(171),
    [anon_sym_print] = ACTIONS(171),
    [anon_sym_proba] = ACTIONS(171),
    [anon_sym_probandum] = ACTIONS(171),
    [anon_sym_range] = ACTIONS(171),
    [anon_sym_read] = ACTIONS(171),
    [anon_sym_reddet] = ACTIONS(171),
    [anon_sym_ref] = ACTIONS(171),
    [anon_sym_repeat] = ACTIONS(171),
    [anon_sym_repete] = ACTIONS(171),
    [anon_sym_return_await] = ACTIONS(171),
    [anon_sym_scribe] = ACTIONS(171),
    [anon_sym_scriptum] = ACTIONS(171),
    [anon_sym_self] = ACTIONS(171),
    [anon_sym_setup] = ACTIONS(171),
    [anon_sym_skip] = ACTIONS(171),
    [anon_sym_solum] = ACTIONS(171),
    [anon_sym_solum_in] = ACTIONS(171),
    [anon_sym_some] = ACTIONS(171),
    [anon_sym_sparge] = ACTIONS(171),
    [anon_sym_spread] = ACTIONS(171),
    [anon_sym_step] = ACTIONS(171),
    [anon_sym_tacebit] = ACTIONS(171),
    [anon_sym_tag] = ACTIONS(171),
    [anon_sym_teardown] = ACTIONS(171),
    [anon_sym_temporis] = ACTIONS(171),
    [anon_sym_test] = ACTIONS(171),
    [anon_sym_timeout] = ACTIONS(171),
    [anon_sym_todo] = ACTIONS(171),
    [anon_sym_until] = ACTIONS(171),
    [anon_sym_usque] = ACTIONS(171),
    [anon_sym_ut] = ACTIONS(171),
    [anon_sym_variandum] = ACTIONS(171),
    [anon_sym_variant] = ACTIONS(171),
    [anon_sym_vel] = ACTIONS(171),
    [anon_sym_via] = ACTIONS(171),
    [anon_sym_vide] = ACTIONS(171),
    [anon_sym_warn] = ACTIONS(171),
    [anon_sym_wrapping] = ACTIONS(171),
    [anon_sym_write] = ACTIONS(171),
    [anon_sym_yield] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_falsum] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_verum] = ACTIONS(171),
    [sym_guillemet_string] = ACTIONS(169),
    [sym_octeti_string] = ACTIONS(169),
    [sym_backtick_string] = ACTIONS(169),
    [sym_ascii_string] = ACTIONS(169),
    [sym_string] = ACTIONS(169),
    [sym_number] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [sym_operator] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym_hash] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(169),
    [sym_faber_newline] = ACTIONS(169),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_at_sign] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_cli] = ACTIONS(187),
    [anon_sym_conversio] = ACTIONS(187),
    [anon_sym_conversion] = ACTIONS(187),
    [anon_sym_cursor] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(187),
    [anon_sym_futura] = ACTIONS(187),
    [anon_sym_imperium] = ACTIONS(187),
    [anon_sym_json] = ACTIONS(187),
    [anon_sym_nondum] = ACTIONS(187),
    [anon_sym_nucleum] = ACTIONS(187),
    [anon_sym_operandus] = ACTIONS(187),
    [anon_sym_optio] = ACTIONS(187),
    [anon_sym_privata] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_protecta] = ACTIONS(187),
    [anon_sym_protected] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_publica] = ACTIONS(187),
    [anon_sym_radix] = ACTIONS(187),
    [anon_sym_verte] = ACTIONS(187),
    [anon_sym_vertex] = ACTIONS(187),
    [anon_sym_ascii] = ACTIONS(187),
    [anon_sym_bivalens] = ACTIONS(187),
    [anon_sym_bool] = ACTIONS(187),
    [anon_sym_byte] = ACTIONS(187),
    [anon_sym_bytes] = ACTIONS(187),
    [anon_sym_char] = ACTIONS(187),
    [anon_sym_copia] = ACTIONS(187),
    [anon_sym_cursor_t] = ACTIONS(187),
    [anon_sym_exactus] = ACTIONS(187),
    [anon_sym_f16] = ACTIONS(187),
    [anon_sym_f32] = ACTIONS(187),
    [anon_sym_f64] = ACTIONS(187),
    [anon_sym_float] = ACTIONS(187),
    [anon_sym_fractus] = ACTIONS(187),
    [anon_sym_i16] = ACTIONS(187),
    [anon_sym_i32] = ACTIONS(187),
    [anon_sym_i64] = ACTIONS(187),
    [anon_sym_i8] = ACTIONS(187),
    [anon_sym_ignotum] = ACTIONS(187),
    [anon_sym_instans] = ACTIONS(187),
    [anon_sym_instant] = ACTIONS(187),
    [anon_sym_int] = ACTIONS(187),
    [anon_sym_intervallum] = ACTIONS(187),
    [anon_sym_iterator] = ACTIONS(187),
    [anon_sym_lf16] = ACTIONS(187),
    [anon_sym_lf32] = ACTIONS(187),
    [anon_sym_lf64] = ACTIONS(187),
    [anon_sym_li16] = ACTIONS(187),
    [anon_sym_li32] = ACTIONS(187),
    [anon_sym_li64] = ACTIONS(187),
    [anon_sym_li8] = ACTIONS(187),
    [anon_sym_list] = ACTIONS(187),
    [anon_sym_lista] = ACTIONS(187),
    [anon_sym_littera] = ACTIONS(187),
    [anon_sym_lu16] = ACTIONS(187),
    [anon_sym_lu32] = ACTIONS(187),
    [anon_sym_lu64] = ACTIONS(187),
    [anon_sym_lu8] = ACTIONS(187),
    [anon_sym_map] = ACTIONS(187),
    [anon_sym_matrix] = ACTIONS(187),
    [anon_sym_mf16] = ACTIONS(187),
    [anon_sym_mf32] = ACTIONS(187),
    [anon_sym_mf64] = ACTIONS(187),
    [anon_sym_mi16] = ACTIONS(187),
    [anon_sym_mi32] = ACTIONS(187),
    [anon_sym_mi64] = ACTIONS(187),
    [anon_sym_mi8] = ACTIONS(187),
    [anon_sym_mu16] = ACTIONS(187),
    [anon_sym_mu32] = ACTIONS(187),
    [anon_sym_mu64] = ACTIONS(187),
    [anon_sym_mu8] = ACTIONS(187),
    [anon_sym_never] = ACTIONS(187),
    [anon_sym_numerus] = ACTIONS(187),
    [anon_sym_numquam] = ACTIONS(187),
    [anon_sym_octeti] = ACTIONS(187),
    [anon_sym_octetus] = ACTIONS(187),
    [anon_sym_promise] = ACTIONS(187),
    [anon_sym_promissum] = ACTIONS(187),
    [anon_sym_queue] = ACTIONS(187),
    [anon_sym_ratio] = ACTIONS(187),
    [anon_sym_record] = ACTIONS(187),
    [anon_sym_regex] = ACTIONS(187),
    [anon_sym_saturating] = ACTIONS(187),
    [anon_sym_saturatus] = ACTIONS(187),
    [anon_sym_series] = ACTIONS(187),
    [anon_sym_set] = ACTIONS(187),
    [anon_sym_sf16] = ACTIONS(187),
    [anon_sym_sf32] = ACTIONS(187),
    [anon_sym_sf64] = ACTIONS(187),
    [anon_sym_si16] = ACTIONS(187),
    [anon_sym_si32] = ACTIONS(187),
    [anon_sym_si64] = ACTIONS(187),
    [anon_sym_si8] = ACTIONS(187),
    [anon_sym_sparsa] = ACTIONS(187),
    [anon_sym_stack] = ACTIONS(187),
    [anon_sym_string] = ACTIONS(187),
    [anon_sym_su16] = ACTIONS(187),
    [anon_sym_su32] = ACTIONS(187),
    [anon_sym_su64] = ACTIONS(187),
    [anon_sym_su8] = ACTIONS(187),
    [anon_sym_tabula] = ACTIONS(187),
    [anon_sym_tensor] = ACTIONS(187),
    [anon_sym_textus] = ACTIONS(187),
    [anon_sym_tf16] = ACTIONS(187),
    [anon_sym_tf32] = ACTIONS(187),
    [anon_sym_tf64] = ACTIONS(187),
    [anon_sym_ti16] = ACTIONS(187),
    [anon_sym_ti32] = ACTIONS(187),
    [anon_sym_ti64] = ACTIONS(187),
    [anon_sym_ti8] = ACTIONS(187),
    [anon_sym_trapping] = ACTIONS(187),
    [anon_sym_tu16] = ACTIONS(187),
    [anon_sym_tu32] = ACTIONS(187),
    [anon_sym_tu64] = ACTIONS(187),
    [anon_sym_tu8] = ACTIONS(187),
    [anon_sym_u16] = ACTIONS(187),
    [anon_sym_u32] = ACTIONS(187),
    [anon_sym_u64] = ACTIONS(187),
    [anon_sym_u8] = ACTIONS(187),
    [anon_sym_unio] = ACTIONS(187),
    [anon_sym_unknown] = ACTIONS(187),
    [anon_sym_vacua] = ACTIONS(187),
    [anon_sym_vacuum] = ACTIONS(187),
    [anon_sym_valor] = ACTIONS(187),
    [anon_sym_vector] = ACTIONS(187),
    [anon_sym_vf16] = ACTIONS(187),
    [anon_sym_vf32] = ACTIONS(187),
    [anon_sym_vf64] = ACTIONS(187),
    [anon_sym_vi16] = ACTIONS(187),
    [anon_sym_vi32] = ACTIONS(187),
    [anon_sym_vi64] = ACTIONS(187),
    [anon_sym_vi8] = ACTIONS(187),
    [anon_sym_void] = ACTIONS(187),
    [anon_sym_vu16] = ACTIONS(187),
    [anon_sym_vu32] = ACTIONS(187),
    [anon_sym_vu64] = ACTIONS(187),
    [anon_sym_vu8] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_QMARK_DOT] = ACTIONS(185),
    [anon_sym_BANG_DOT] = ACTIONS(185),
    [anon_sym_ad] = ACTIONS(187),
    [anon_sym_adfirma] = ACTIONS(187),
    [anon_sym_apud] = ACTIONS(187),
    [anon_sym_args] = ACTIONS(187),
    [anon_sym_argumenta] = ACTIONS(187),
    [anon_sym_assert] = ACTIONS(187),
    [anon_sym_async_main] = ACTIONS(187),
    [anon_sym_at] = ACTIONS(187),
    [anon_sym_break] = ACTIONS(187),
    [anon_sym_call] = ACTIONS(187),
    [anon_sym_cape] = ACTIONS(187),
    [anon_sym_capta] = ACTIONS(187),
    [anon_sym_case] = ACTIONS(187),
    [anon_sym_casu] = ACTIONS(187),
    [anon_sym_catch] = ACTIONS(187),
    [anon_sym_ceterum] = ACTIONS(187),
    [anon_sym_continue] = ACTIONS(187),
    [anon_sym_custodi] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_discerne] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(187),
    [anon_sym_dum] = ACTIONS(187),
    [anon_sym_elif] = ACTIONS(187),
    [anon_sym_elige] = ACTIONS(187),
    [anon_sym_else] = ACTIONS(187),
    [anon_sym_ergo] = ACTIONS(187),
    [anon_sym_fac] = ACTIONS(187),
    [anon_sym_for] = ACTIONS(187),
    [anon_sym_guard] = ACTIONS(187),
    [anon_sym_iace] = ACTIONS(187),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_incipiet] = ACTIONS(187),
    [anon_sym_incipit] = ACTIONS(187),
    [anon_sym_itera] = ACTIONS(187),
    [anon_sym_main] = ACTIONS(187),
    [anon_sym_match] = ACTIONS(187),
    [anon_sym_mori] = ACTIONS(187),
    [anon_sym_panic] = ACTIONS(187),
    [anon_sym_pass] = ACTIONS(187),
    [anon_sym_perge] = ACTIONS(187),
    [anon_sym_redde] = ACTIONS(187),
    [anon_sym_reice] = ACTIONS(187),
    [anon_sym_reject] = ACTIONS(187),
    [anon_sym_require] = ACTIONS(187),
    [anon_sym_requirit] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(187),
    [anon_sym_rumpe] = ACTIONS(187),
    [anon_sym_secus] = ACTIONS(187),
    [anon_sym_si] = ACTIONS(187),
    [anon_sym_sic] = ACTIONS(187),
    [anon_sym_sin] = ACTIONS(187),
    [anon_sym_switch] = ACTIONS(187),
    [anon_sym_tacet] = ACTIONS(187),
    [anon_sym_then] = ACTIONS(187),
    [anon_sym_throw] = ACTIONS(187),
    [anon_sym_trap] = ACTIONS(187),
    [anon_sym_while] = ACTIONS(187),
    [anon_sym_yields] = ACTIONS(187),
    [anon_sym_ceteri] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(187),
    [anon_sym_column] = ACTIONS(187),
    [anon_sym_columna] = ACTIONS(187),
    [anon_sym_const] = ACTIONS(187),
    [anon_sym_discretio] = ACTIONS(187),
    [anon_sym_enum] = ACTIONS(187),
    [anon_sym_errata] = ACTIONS(187),
    [anon_sym_errors] = ACTIONS(187),
    [anon_sym_exit] = ACTIONS(187),
    [anon_sym_exitus] = ACTIONS(187),
    [anon_sym_fixum] = ACTIONS(187),
    [anon_sym_fn] = ACTIONS(187),
    [anon_sym_functio] = ACTIONS(187),
    [anon_sym_generis] = ACTIONS(187),
    [anon_sym_genus] = ACTIONS(187),
    [anon_sym_iacit] = ACTIONS(187),
    [anon_sym_immutata] = ACTIONS(187),
    [anon_sym_implendum] = ACTIONS(187),
    [anon_sym_import] = ACTIONS(187),
    [anon_sym_importa] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [anon_sym_interna] = ACTIONS(187),
    [anon_sym_internal] = ACTIONS(187),
    [anon_sym_iuncta] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(187),
    [anon_sym_magnitudo] = ACTIONS(187),
    [anon_sym_optional] = ACTIONS(187),
    [anon_sym_optiones] = ACTIONS(187),
    [anon_sym_options] = ACTIONS(187),
    [anon_sym_ordo] = ACTIONS(187),
    [anon_sym_prae] = ACTIONS(187),
    [anon_sym_readonly] = ACTIONS(187),
    [anon_sym_rest] = ACTIONS(187),
    [anon_sym_schema] = ACTIONS(187),
    [anon_sym_sit] = ACTIONS(187),
    [anon_sym_size] = ACTIONS(187),
    [anon_sym_sponte] = ACTIONS(187),
    [anon_sym_static] = ACTIONS(187),
    [anon_sym_throws] = ACTIONS(187),
    [anon_sym_tuple] = ACTIONS(187),
    [anon_sym_type] = ACTIONS(187),
    [anon_sym_typus] = ACTIONS(187),
    [anon_sym_union] = ACTIONS(187),
    [anon_sym_var] = ACTIONS(187),
    [anon_sym_varia] = ACTIONS(187),
    [anon_sym_ab] = ACTIONS(187),
    [anon_sym_all] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_ante] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(187),
    [anon_sym_async] = ACTIONS(187),
    [anon_sym_async_generator] = ACTIONS(187),
    [anon_sym_async_setup] = ACTIONS(187),
    [anon_sym_async_teardown] = ACTIONS(187),
    [anon_sym_aut] = ACTIONS(187),
    [anon_sym_await] = ACTIONS(187),
    [anon_sym_await_const] = ACTIONS(187),
    [anon_sym_await_var] = ACTIONS(187),
    [anon_sym_before] = ACTIONS(187),
    [anon_sym_bench] = ACTIONS(187),
    [anon_sym_cede] = ACTIONS(187),
    [anon_sym_clausura] = ACTIONS(187),
    [anon_sym_coalesce] = ACTIONS(187),
    [anon_sym_comptime] = ACTIONS(187),
    [anon_sym_copy] = ACTIONS(187),
    [anon_sym_de] = ACTIONS(187),
    [anon_sym_debug] = ACTIONS(187),
    [anon_sym_describe] = ACTIONS(187),
    [anon_sym_ego] = ACTIONS(187),
    [anon_sym_embed] = ACTIONS(187),
    [anon_sym_erratur] = ACTIONS(187),
    [anon_sym_est] = ACTIONS(187),
    [anon_sym_et] = ACTIONS(187),
    [anon_sym_ex] = ACTIONS(187),
    [anon_sym_exemplum] = ACTIONS(187),
    [anon_sym_expect_failure] = ACTIONS(187),
    [anon_sym_fient] = ACTIONS(187),
    [anon_sym_fiet] = ACTIONS(187),
    [anon_sym_figendum] = ACTIONS(187),
    [anon_sym_finge] = ACTIONS(187),
    [anon_sym_fiunt] = ACTIONS(187),
    [anon_sym_flaky] = ACTIONS(187),
    [anon_sym_format] = ACTIONS(187),
    [anon_sym_fragilis] = ACTIONS(187),
    [anon_sym_from] = ACTIONS(187),
    [anon_sym_futurum] = ACTIONS(187),
    [anon_sym_generator] = ACTIONS(187),
    [anon_sym_implements] = ACTIONS(187),
    [anon_sym_implet] = ACTIONS(187),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_insere] = ACTIONS(187),
    [anon_sym_is] = ACTIONS(187),
    [anon_sym_lambda] = ACTIONS(187),
    [anon_sym_lege] = ACTIONS(187),
    [anon_sym_line] = ACTIONS(187),
    [anon_sym_lineam] = ACTIONS(187),
    [anon_sym_metior] = ACTIONS(187),
    [anon_sym_modulus] = ACTIONS(187),
    [anon_sym_mone] = ACTIONS(187),
    [anon_sym_mut] = ACTIONS(187),
    [anon_sym_negative] = ACTIONS(187),
    [anon_sym_negativum] = ACTIONS(187),
    [anon_sym_nihil] = ACTIONS(187),
    [anon_sym_non] = ACTIONS(187),
    [anon_sym_none] = ACTIONS(187),
    [anon_sym_nonnihil] = ACTIONS(187),
    [anon_sym_nonnulla] = ACTIONS(187),
    [anon_sym_not] = ACTIONS(187),
    [anon_sym_nota] = ACTIONS(187),
    [anon_sym_null] = ACTIONS(187),
    [anon_sym_nulla] = ACTIONS(187),
    [anon_sym_omitte] = ACTIONS(187),
    [anon_sym_omnia] = ACTIONS(187),
    [anon_sym_only] = ACTIONS(187),
    [anon_sym_only_in] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(187),
    [anon_sym_own] = ACTIONS(187),
    [anon_sym_penes] = ACTIONS(187),
    [anon_sym_per] = ACTIONS(187),
    [anon_sym_positive] = ACTIONS(187),
    [anon_sym_positivum] = ACTIONS(187),
    [anon_sym_postpara] = ACTIONS(187),
    [anon_sym_postparabit] = ACTIONS(187),
    [anon_sym_praefixum] = ACTIONS(187),
    [anon_sym_praepara] = ACTIONS(187),
    [anon_sym_praeparabit] = ACTIONS(187),
    [anon_sym_print] = ACTIONS(187),
    [anon_sym_proba] = ACTIONS(187),
    [anon_sym_probandum] = ACTIONS(187),
    [anon_sym_range] = ACTIONS(187),
    [anon_sym_read] = ACTIONS(187),
    [anon_sym_reddet] = ACTIONS(187),
    [anon_sym_ref] = ACTIONS(187),
    [anon_sym_repeat] = ACTIONS(187),
    [anon_sym_repete] = ACTIONS(187),
    [anon_sym_return_await] = ACTIONS(187),
    [anon_sym_scribe] = ACTIONS(187),
    [anon_sym_scriptum] = ACTIONS(187),
    [anon_sym_self] = ACTIONS(187),
    [anon_sym_setup] = ACTIONS(187),
    [anon_sym_skip] = ACTIONS(187),
    [anon_sym_solum] = ACTIONS(187),
    [anon_sym_solum_in] = ACTIONS(187),
    [anon_sym_some] = ACTIONS(187),
    [anon_sym_sparge] = ACTIONS(187),
    [anon_sym_spread] = ACTIONS(187),
    [anon_sym_step] = ACTIONS(187),
    [anon_sym_tacebit] = ACTIONS(187),
    [anon_sym_tag] = ACTIONS(187),
    [anon_sym_teardown] = ACTIONS(187),
    [anon_sym_temporis] = ACTIONS(187),
    [anon_sym_test] = ACTIONS(187),
    [anon_sym_timeout] = ACTIONS(187),
    [anon_sym_todo] = ACTIONS(187),
    [anon_sym_until] = ACTIONS(187),
    [anon_sym_usque] = ACTIONS(187),
    [anon_sym_ut] = ACTIONS(187),
    [anon_sym_variandum] = ACTIONS(187),
    [anon_sym_variant] = ACTIONS(187),
    [anon_sym_vel] = ACTIONS(187),
    [anon_sym_via] = ACTIONS(187),
    [anon_sym_vide] = ACTIONS(187),
    [anon_sym_warn] = ACTIONS(187),
    [anon_sym_wrapping] = ACTIONS(187),
    [anon_sym_write] = ACTIONS(187),
    [anon_sym_yield] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [anon_sym_falsum] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_verum] = ACTIONS(187),
    [sym_guillemet_string] = ACTIONS(185),
    [sym_octeti_string] = ACTIONS(185),
    [sym_backtick_string] = ACTIONS(185),
    [sym_ascii_string] = ACTIONS(185),
    [sym_string] = ACTIONS(185),
    [sym_number] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_operator] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [sym_hash] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(185),
    [sym_faber_newline] = ACTIONS(185),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_at_sign] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_cli] = ACTIONS(191),
    [anon_sym_conversio] = ACTIONS(191),
    [anon_sym_conversion] = ACTIONS(191),
    [anon_sym_cursor] = ACTIONS(191),
    [anon_sym_fragment] = ACTIONS(191),
    [anon_sym_futura] = ACTIONS(191),
    [anon_sym_imperium] = ACTIONS(191),
    [anon_sym_json] = ACTIONS(191),
    [anon_sym_nondum] = ACTIONS(191),
    [anon_sym_nucleum] = ACTIONS(191),
    [anon_sym_operandus] = ACTIONS(191),
    [anon_sym_optio] = ACTIONS(191),
    [anon_sym_privata] = ACTIONS(191),
    [anon_sym_private] = ACTIONS(191),
    [anon_sym_protecta] = ACTIONS(191),
    [anon_sym_protected] = ACTIONS(191),
    [anon_sym_public] = ACTIONS(191),
    [anon_sym_publica] = ACTIONS(191),
    [anon_sym_radix] = ACTIONS(191),
    [anon_sym_verte] = ACTIONS(191),
    [anon_sym_vertex] = ACTIONS(191),
    [anon_sym_ascii] = ACTIONS(191),
    [anon_sym_bivalens] = ACTIONS(191),
    [anon_sym_bool] = ACTIONS(191),
    [anon_sym_byte] = ACTIONS(191),
    [anon_sym_bytes] = ACTIONS(191),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_copia] = ACTIONS(191),
    [anon_sym_cursor_t] = ACTIONS(191),
    [anon_sym_exactus] = ACTIONS(191),
    [anon_sym_f16] = ACTIONS(191),
    [anon_sym_f32] = ACTIONS(191),
    [anon_sym_f64] = ACTIONS(191),
    [anon_sym_float] = ACTIONS(191),
    [anon_sym_fractus] = ACTIONS(191),
    [anon_sym_i16] = ACTIONS(191),
    [anon_sym_i32] = ACTIONS(191),
    [anon_sym_i64] = ACTIONS(191),
    [anon_sym_i8] = ACTIONS(191),
    [anon_sym_ignotum] = ACTIONS(191),
    [anon_sym_instans] = ACTIONS(191),
    [anon_sym_instant] = ACTIONS(191),
    [anon_sym_int] = ACTIONS(191),
    [anon_sym_intervallum] = ACTIONS(191),
    [anon_sym_iterator] = ACTIONS(191),
    [anon_sym_lf16] = ACTIONS(191),
    [anon_sym_lf32] = ACTIONS(191),
    [anon_sym_lf64] = ACTIONS(191),
    [anon_sym_li16] = ACTIONS(191),
    [anon_sym_li32] = ACTIONS(191),
    [anon_sym_li64] = ACTIONS(191),
    [anon_sym_li8] = ACTIONS(191),
    [anon_sym_list] = ACTIONS(191),
    [anon_sym_lista] = ACTIONS(191),
    [anon_sym_littera] = ACTIONS(191),
    [anon_sym_lu16] = ACTIONS(191),
    [anon_sym_lu32] = ACTIONS(191),
    [anon_sym_lu64] = ACTIONS(191),
    [anon_sym_lu8] = ACTIONS(191),
    [anon_sym_map] = ACTIONS(191),
    [anon_sym_matrix] = ACTIONS(191),
    [anon_sym_mf16] = ACTIONS(191),
    [anon_sym_mf32] = ACTIONS(191),
    [anon_sym_mf64] = ACTIONS(191),
    [anon_sym_mi16] = ACTIONS(191),
    [anon_sym_mi32] = ACTIONS(191),
    [anon_sym_mi64] = ACTIONS(191),
    [anon_sym_mi8] = ACTIONS(191),
    [anon_sym_mu16] = ACTIONS(191),
    [anon_sym_mu32] = ACTIONS(191),
    [anon_sym_mu64] = ACTIONS(191),
    [anon_sym_mu8] = ACTIONS(191),
    [anon_sym_never] = ACTIONS(191),
    [anon_sym_numerus] = ACTIONS(191),
    [anon_sym_numquam] = ACTIONS(191),
    [anon_sym_octeti] = ACTIONS(191),
    [anon_sym_octetus] = ACTIONS(191),
    [anon_sym_promise] = ACTIONS(191),
    [anon_sym_promissum] = ACTIONS(191),
    [anon_sym_queue] = ACTIONS(191),
    [anon_sym_ratio] = ACTIONS(191),
    [anon_sym_record] = ACTIONS(191),
    [anon_sym_regex] = ACTIONS(191),
    [anon_sym_saturating] = ACTIONS(191),
    [anon_sym_saturatus] = ACTIONS(191),
    [anon_sym_series] = ACTIONS(191),
    [anon_sym_set] = ACTIONS(191),
    [anon_sym_sf16] = ACTIONS(191),
    [anon_sym_sf32] = ACTIONS(191),
    [anon_sym_sf64] = ACTIONS(191),
    [anon_sym_si16] = ACTIONS(191),
    [anon_sym_si32] = ACTIONS(191),
    [anon_sym_si64] = ACTIONS(191),
    [anon_sym_si8] = ACTIONS(191),
    [anon_sym_sparsa] = ACTIONS(191),
    [anon_sym_stack] = ACTIONS(191),
    [anon_sym_string] = ACTIONS(191),
    [anon_sym_su16] = ACTIONS(191),
    [anon_sym_su32] = ACTIONS(191),
    [anon_sym_su64] = ACTIONS(191),
    [anon_sym_su8] = ACTIONS(191),
    [anon_sym_tabula] = ACTIONS(191),
    [anon_sym_tensor] = ACTIONS(191),
    [anon_sym_textus] = ACTIONS(191),
    [anon_sym_tf16] = ACTIONS(191),
    [anon_sym_tf32] = ACTIONS(191),
    [anon_sym_tf64] = ACTIONS(191),
    [anon_sym_ti16] = ACTIONS(191),
    [anon_sym_ti32] = ACTIONS(191),
    [anon_sym_ti64] = ACTIONS(191),
    [anon_sym_ti8] = ACTIONS(191),
    [anon_sym_trapping] = ACTIONS(191),
    [anon_sym_tu16] = ACTIONS(191),
    [anon_sym_tu32] = ACTIONS(191),
    [anon_sym_tu64] = ACTIONS(191),
    [anon_sym_tu8] = ACTIONS(191),
    [anon_sym_u16] = ACTIONS(191),
    [anon_sym_u32] = ACTIONS(191),
    [anon_sym_u64] = ACTIONS(191),
    [anon_sym_u8] = ACTIONS(191),
    [anon_sym_unio] = ACTIONS(191),
    [anon_sym_unknown] = ACTIONS(191),
    [anon_sym_vacua] = ACTIONS(191),
    [anon_sym_vacuum] = ACTIONS(191),
    [anon_sym_valor] = ACTIONS(191),
    [anon_sym_vector] = ACTIONS(191),
    [anon_sym_vf16] = ACTIONS(191),
    [anon_sym_vf32] = ACTIONS(191),
    [anon_sym_vf64] = ACTIONS(191),
    [anon_sym_vi16] = ACTIONS(191),
    [anon_sym_vi32] = ACTIONS(191),
    [anon_sym_vi64] = ACTIONS(191),
    [anon_sym_vi8] = ACTIONS(191),
    [anon_sym_void] = ACTIONS(191),
    [anon_sym_vu16] = ACTIONS(191),
    [anon_sym_vu32] = ACTIONS(191),
    [anon_sym_vu64] = ACTIONS(191),
    [anon_sym_vu8] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_QMARK_DOT] = ACTIONS(189),
    [anon_sym_BANG_DOT] = ACTIONS(189),
    [anon_sym_ad] = ACTIONS(191),
    [anon_sym_adfirma] = ACTIONS(191),
    [anon_sym_apud] = ACTIONS(191),
    [anon_sym_args] = ACTIONS(191),
    [anon_sym_argumenta] = ACTIONS(191),
    [anon_sym_assert] = ACTIONS(191),
    [anon_sym_async_main] = ACTIONS(191),
    [anon_sym_at] = ACTIONS(191),
    [anon_sym_break] = ACTIONS(191),
    [anon_sym_call] = ACTIONS(191),
    [anon_sym_cape] = ACTIONS(191),
    [anon_sym_capta] = ACTIONS(191),
    [anon_sym_case] = ACTIONS(191),
    [anon_sym_casu] = ACTIONS(191),
    [anon_sym_catch] = ACTIONS(191),
    [anon_sym_ceterum] = ACTIONS(191),
    [anon_sym_continue] = ACTIONS(191),
    [anon_sym_custodi] = ACTIONS(191),
    [anon_sym_default] = ACTIONS(191),
    [anon_sym_discerne] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_dum] = ACTIONS(191),
    [anon_sym_elif] = ACTIONS(191),
    [anon_sym_elige] = ACTIONS(191),
    [anon_sym_else] = ACTIONS(191),
    [anon_sym_ergo] = ACTIONS(191),
    [anon_sym_fac] = ACTIONS(191),
    [anon_sym_for] = ACTIONS(191),
    [anon_sym_guard] = ACTIONS(191),
    [anon_sym_iace] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_incipiet] = ACTIONS(191),
    [anon_sym_incipit] = ACTIONS(191),
    [anon_sym_itera] = ACTIONS(191),
    [anon_sym_main] = ACTIONS(191),
    [anon_sym_match] = ACTIONS(191),
    [anon_sym_mori] = ACTIONS(191),
    [anon_sym_panic] = ACTIONS(191),
    [anon_sym_pass] = ACTIONS(191),
    [anon_sym_perge] = ACTIONS(191),
    [anon_sym_redde] = ACTIONS(191),
    [anon_sym_reice] = ACTIONS(191),
    [anon_sym_reject] = ACTIONS(191),
    [anon_sym_require] = ACTIONS(191),
    [anon_sym_requirit] = ACTIONS(191),
    [anon_sym_return] = ACTIONS(191),
    [anon_sym_rumpe] = ACTIONS(191),
    [anon_sym_secus] = ACTIONS(191),
    [anon_sym_si] = ACTIONS(191),
    [anon_sym_sic] = ACTIONS(191),
    [anon_sym_sin] = ACTIONS(191),
    [anon_sym_switch] = ACTIONS(191),
    [anon_sym_tacet] = ACTIONS(191),
    [anon_sym_then] = ACTIONS(191),
    [anon_sym_throw] = ACTIONS(191),
    [anon_sym_trap] = ACTIONS(191),
    [anon_sym_while] = ACTIONS(191),
    [anon_sym_yields] = ACTIONS(191),
    [anon_sym_ceteri] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(191),
    [anon_sym_column] = ACTIONS(191),
    [anon_sym_columna] = ACTIONS(191),
    [anon_sym_const] = ACTIONS(191),
    [anon_sym_discretio] = ACTIONS(191),
    [anon_sym_enum] = ACTIONS(191),
    [anon_sym_errata] = ACTIONS(191),
    [anon_sym_errors] = ACTIONS(191),
    [anon_sym_exit] = ACTIONS(191),
    [anon_sym_exitus] = ACTIONS(191),
    [anon_sym_fixum] = ACTIONS(191),
    [anon_sym_fn] = ACTIONS(191),
    [anon_sym_functio] = ACTIONS(191),
    [anon_sym_generis] = ACTIONS(191),
    [anon_sym_genus] = ACTIONS(191),
    [anon_sym_iacit] = ACTIONS(191),
    [anon_sym_immutata] = ACTIONS(191),
    [anon_sym_implendum] = ACTIONS(191),
    [anon_sym_import] = ACTIONS(191),
    [anon_sym_importa] = ACTIONS(191),
    [anon_sym_interface] = ACTIONS(191),
    [anon_sym_interna] = ACTIONS(191),
    [anon_sym_internal] = ACTIONS(191),
    [anon_sym_iuncta] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(191),
    [anon_sym_magnitudo] = ACTIONS(191),
    [anon_sym_optional] = ACTIONS(191),
    [anon_sym_optiones] = ACTIONS(191),
    [anon_sym_options] = ACTIONS(191),
    [anon_sym_ordo] = ACTIONS(191),
    [anon_sym_prae] = ACTIONS(191),
    [anon_sym_readonly] = ACTIONS(191),
    [anon_sym_rest] = ACTIONS(191),
    [anon_sym_schema] = ACTIONS(191),
    [anon_sym_sit] = ACTIONS(191),
    [anon_sym_size] = ACTIONS(191),
    [anon_sym_sponte] = ACTIONS(191),
    [anon_sym_static] = ACTIONS(191),
    [anon_sym_throws] = ACTIONS(191),
    [anon_sym_tuple] = ACTIONS(191),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_typus] = ACTIONS(191),
    [anon_sym_union] = ACTIONS(191),
    [anon_sym_var] = ACTIONS(191),
    [anon_sym_varia] = ACTIONS(191),
    [anon_sym_ab] = ACTIONS(191),
    [anon_sym_all] = ACTIONS(191),
    [anon_sym_and] = ACTIONS(191),
    [anon_sym_ante] = ACTIONS(191),
    [anon_sym_as] = ACTIONS(191),
    [anon_sym_async] = ACTIONS(191),
    [anon_sym_async_generator] = ACTIONS(191),
    [anon_sym_async_setup] = ACTIONS(191),
    [anon_sym_async_teardown] = ACTIONS(191),
    [anon_sym_aut] = ACTIONS(191),
    [anon_sym_await] = ACTIONS(191),
    [anon_sym_await_const] = ACTIONS(191),
    [anon_sym_await_var] = ACTIONS(191),
    [anon_sym_before] = ACTIONS(191),
    [anon_sym_bench] = ACTIONS(191),
    [anon_sym_cede] = ACTIONS(191),
    [anon_sym_clausura] = ACTIONS(191),
    [anon_sym_coalesce] = ACTIONS(191),
    [anon_sym_comptime] = ACTIONS(191),
    [anon_sym_copy] = ACTIONS(191),
    [anon_sym_de] = ACTIONS(191),
    [anon_sym_debug] = ACTIONS(191),
    [anon_sym_describe] = ACTIONS(191),
    [anon_sym_ego] = ACTIONS(191),
    [anon_sym_embed] = ACTIONS(191),
    [anon_sym_erratur] = ACTIONS(191),
    [anon_sym_est] = ACTIONS(191),
    [anon_sym_et] = ACTIONS(191),
    [anon_sym_ex] = ACTIONS(191),
    [anon_sym_exemplum] = ACTIONS(191),
    [anon_sym_expect_failure] = ACTIONS(191),
    [anon_sym_fient] = ACTIONS(191),
    [anon_sym_fiet] = ACTIONS(191),
    [anon_sym_figendum] = ACTIONS(191),
    [anon_sym_finge] = ACTIONS(191),
    [anon_sym_fiunt] = ACTIONS(191),
    [anon_sym_flaky] = ACTIONS(191),
    [anon_sym_format] = ACTIONS(191),
    [anon_sym_fragilis] = ACTIONS(191),
    [anon_sym_from] = ACTIONS(191),
    [anon_sym_futurum] = ACTIONS(191),
    [anon_sym_generator] = ACTIONS(191),
    [anon_sym_implements] = ACTIONS(191),
    [anon_sym_implet] = ACTIONS(191),
    [anon_sym_in] = ACTIONS(191),
    [anon_sym_insere] = ACTIONS(191),
    [anon_sym_is] = ACTIONS(191),
    [anon_sym_lambda] = ACTIONS(191),
    [anon_sym_lege] = ACTIONS(191),
    [anon_sym_line] = ACTIONS(191),
    [anon_sym_lineam] = ACTIONS(191),
    [anon_sym_metior] = ACTIONS(191),
    [anon_sym_modulus] = ACTIONS(191),
    [anon_sym_mone] = ACTIONS(191),
    [anon_sym_mut] = ACTIONS(191),
    [anon_sym_negative] = ACTIONS(191),
    [anon_sym_negativum] = ACTIONS(191),
    [anon_sym_nihil] = ACTIONS(191),
    [anon_sym_non] = ACTIONS(191),
    [anon_sym_none] = ACTIONS(191),
    [anon_sym_nonnihil] = ACTIONS(191),
    [anon_sym_nonnulla] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(191),
    [anon_sym_nota] = ACTIONS(191),
    [anon_sym_null] = ACTIONS(191),
    [anon_sym_nulla] = ACTIONS(191),
    [anon_sym_omitte] = ACTIONS(191),
    [anon_sym_omnia] = ACTIONS(191),
    [anon_sym_only] = ACTIONS(191),
    [anon_sym_only_in] = ACTIONS(191),
    [anon_sym_or] = ACTIONS(191),
    [anon_sym_own] = ACTIONS(191),
    [anon_sym_penes] = ACTIONS(191),
    [anon_sym_per] = ACTIONS(191),
    [anon_sym_positive] = ACTIONS(191),
    [anon_sym_positivum] = ACTIONS(191),
    [anon_sym_postpara] = ACTIONS(191),
    [anon_sym_postparabit] = ACTIONS(191),
    [anon_sym_praefixum] = ACTIONS(191),
    [anon_sym_praepara] = ACTIONS(191),
    [anon_sym_praeparabit] = ACTIONS(191),
    [anon_sym_print] = ACTIONS(191),
    [anon_sym_proba] = ACTIONS(191),
    [anon_sym_probandum] = ACTIONS(191),
    [anon_sym_range] = ACTIONS(191),
    [anon_sym_read] = ACTIONS(191),
    [anon_sym_reddet] = ACTIONS(191),
    [anon_sym_ref] = ACTIONS(191),
    [anon_sym_repeat] = ACTIONS(191),
    [anon_sym_repete] = ACTIONS(191),
    [anon_sym_return_await] = ACTIONS(191),
    [anon_sym_scribe] = ACTIONS(191),
    [anon_sym_scriptum] = ACTIONS(191),
    [anon_sym_self] = ACTIONS(191),
    [anon_sym_setup] = ACTIONS(191),
    [anon_sym_skip] = ACTIONS(191),
    [anon_sym_solum] = ACTIONS(191),
    [anon_sym_solum_in] = ACTIONS(191),
    [anon_sym_some] = ACTIONS(191),
    [anon_sym_sparge] = ACTIONS(191),
    [anon_sym_spread] = ACTIONS(191),
    [anon_sym_step] = ACTIONS(191),
    [anon_sym_tacebit] = ACTIONS(191),
    [anon_sym_tag] = ACTIONS(191),
    [anon_sym_teardown] = ACTIONS(191),
    [anon_sym_temporis] = ACTIONS(191),
    [anon_sym_test] = ACTIONS(191),
    [anon_sym_timeout] = ACTIONS(191),
    [anon_sym_todo] = ACTIONS(191),
    [anon_sym_until] = ACTIONS(191),
    [anon_sym_usque] = ACTIONS(191),
    [anon_sym_ut] = ACTIONS(191),
    [anon_sym_variandum] = ACTIONS(191),
    [anon_sym_variant] = ACTIONS(191),
    [anon_sym_vel] = ACTIONS(191),
    [anon_sym_via] = ACTIONS(191),
    [anon_sym_vide] = ACTIONS(191),
    [anon_sym_warn] = ACTIONS(191),
    [anon_sym_wrapping] = ACTIONS(191),
    [anon_sym_write] = ACTIONS(191),
    [anon_sym_yield] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_falsum] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_verum] = ACTIONS(191),
    [sym_guillemet_string] = ACTIONS(189),
    [sym_octeti_string] = ACTIONS(189),
    [sym_backtick_string] = ACTIONS(189),
    [sym_ascii_string] = ACTIONS(189),
    [sym_string] = ACTIONS(189),
    [sym_number] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [sym_operator] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [sym_hash] = ACTIONS(189),
    [sym_line_comment] = ACTIONS(189),
    [sym_faber_newline] = ACTIONS(189),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_at_sign] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_cli] = ACTIONS(195),
    [anon_sym_conversio] = ACTIONS(195),
    [anon_sym_conversion] = ACTIONS(195),
    [anon_sym_cursor] = ACTIONS(195),
    [anon_sym_fragment] = ACTIONS(195),
    [anon_sym_futura] = ACTIONS(195),
    [anon_sym_imperium] = ACTIONS(195),
    [anon_sym_json] = ACTIONS(195),
    [anon_sym_nondum] = ACTIONS(195),
    [anon_sym_nucleum] = ACTIONS(195),
    [anon_sym_operandus] = ACTIONS(195),
    [anon_sym_optio] = ACTIONS(195),
    [anon_sym_privata] = ACTIONS(195),
    [anon_sym_private] = ACTIONS(195),
    [anon_sym_protecta] = ACTIONS(195),
    [anon_sym_protected] = ACTIONS(195),
    [anon_sym_public] = ACTIONS(195),
    [anon_sym_publica] = ACTIONS(195),
    [anon_sym_radix] = ACTIONS(195),
    [anon_sym_verte] = ACTIONS(195),
    [anon_sym_vertex] = ACTIONS(195),
    [anon_sym_ascii] = ACTIONS(195),
    [anon_sym_bivalens] = ACTIONS(195),
    [anon_sym_bool] = ACTIONS(195),
    [anon_sym_byte] = ACTIONS(195),
    [anon_sym_bytes] = ACTIONS(195),
    [anon_sym_char] = ACTIONS(195),
    [anon_sym_copia] = ACTIONS(195),
    [anon_sym_cursor_t] = ACTIONS(195),
    [anon_sym_exactus] = ACTIONS(195),
    [anon_sym_f16] = ACTIONS(195),
    [anon_sym_f32] = ACTIONS(195),
    [anon_sym_f64] = ACTIONS(195),
    [anon_sym_float] = ACTIONS(195),
    [anon_sym_fractus] = ACTIONS(195),
    [anon_sym_i16] = ACTIONS(195),
    [anon_sym_i32] = ACTIONS(195),
    [anon_sym_i64] = ACTIONS(195),
    [anon_sym_i8] = ACTIONS(195),
    [anon_sym_ignotum] = ACTIONS(195),
    [anon_sym_instans] = ACTIONS(195),
    [anon_sym_instant] = ACTIONS(195),
    [anon_sym_int] = ACTIONS(195),
    [anon_sym_intervallum] = ACTIONS(195),
    [anon_sym_iterator] = ACTIONS(195),
    [anon_sym_lf16] = ACTIONS(195),
    [anon_sym_lf32] = ACTIONS(195),
    [anon_sym_lf64] = ACTIONS(195),
    [anon_sym_li16] = ACTIONS(195),
    [anon_sym_li32] = ACTIONS(195),
    [anon_sym_li64] = ACTIONS(195),
    [anon_sym_li8] = ACTIONS(195),
    [anon_sym_list] = ACTIONS(195),
    [anon_sym_lista] = ACTIONS(195),
    [anon_sym_littera] = ACTIONS(195),
    [anon_sym_lu16] = ACTIONS(195),
    [anon_sym_lu32] = ACTIONS(195),
    [anon_sym_lu64] = ACTIONS(195),
    [anon_sym_lu8] = ACTIONS(195),
    [anon_sym_map] = ACTIONS(195),
    [anon_sym_matrix] = ACTIONS(195),
    [anon_sym_mf16] = ACTIONS(195),
    [anon_sym_mf32] = ACTIONS(195),
    [anon_sym_mf64] = ACTIONS(195),
    [anon_sym_mi16] = ACTIONS(195),
    [anon_sym_mi32] = ACTIONS(195),
    [anon_sym_mi64] = ACTIONS(195),
    [anon_sym_mi8] = ACTIONS(195),
    [anon_sym_mu16] = ACTIONS(195),
    [anon_sym_mu32] = ACTIONS(195),
    [anon_sym_mu64] = ACTIONS(195),
    [anon_sym_mu8] = ACTIONS(195),
    [anon_sym_never] = ACTIONS(195),
    [anon_sym_numerus] = ACTIONS(195),
    [anon_sym_numquam] = ACTIONS(195),
    [anon_sym_octeti] = ACTIONS(195),
    [anon_sym_octetus] = ACTIONS(195),
    [anon_sym_promise] = ACTIONS(195),
    [anon_sym_promissum] = ACTIONS(195),
    [anon_sym_queue] = ACTIONS(195),
    [anon_sym_ratio] = ACTIONS(195),
    [anon_sym_record] = ACTIONS(195),
    [anon_sym_regex] = ACTIONS(195),
    [anon_sym_saturating] = ACTIONS(195),
    [anon_sym_saturatus] = ACTIONS(195),
    [anon_sym_series] = ACTIONS(195),
    [anon_sym_set] = ACTIONS(195),
    [anon_sym_sf16] = ACTIONS(195),
    [anon_sym_sf32] = ACTIONS(195),
    [anon_sym_sf64] = ACTIONS(195),
    [anon_sym_si16] = ACTIONS(195),
    [anon_sym_si32] = ACTIONS(195),
    [anon_sym_si64] = ACTIONS(195),
    [anon_sym_si8] = ACTIONS(195),
    [anon_sym_sparsa] = ACTIONS(195),
    [anon_sym_stack] = ACTIONS(195),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_su16] = ACTIONS(195),
    [anon_sym_su32] = ACTIONS(195),
    [anon_sym_su64] = ACTIONS(195),
    [anon_sym_su8] = ACTIONS(195),
    [anon_sym_tabula] = ACTIONS(195),
    [anon_sym_tensor] = ACTIONS(195),
    [anon_sym_textus] = ACTIONS(195),
    [anon_sym_tf16] = ACTIONS(195),
    [anon_sym_tf32] = ACTIONS(195),
    [anon_sym_tf64] = ACTIONS(195),
    [anon_sym_ti16] = ACTIONS(195),
    [anon_sym_ti32] = ACTIONS(195),
    [anon_sym_ti64] = ACTIONS(195),
    [anon_sym_ti8] = ACTIONS(195),
    [anon_sym_trapping] = ACTIONS(195),
    [anon_sym_tu16] = ACTIONS(195),
    [anon_sym_tu32] = ACTIONS(195),
    [anon_sym_tu64] = ACTIONS(195),
    [anon_sym_tu8] = ACTIONS(195),
    [anon_sym_u16] = ACTIONS(195),
    [anon_sym_u32] = ACTIONS(195),
    [anon_sym_u64] = ACTIONS(195),
    [anon_sym_u8] = ACTIONS(195),
    [anon_sym_unio] = ACTIONS(195),
    [anon_sym_unknown] = ACTIONS(195),
    [anon_sym_vacua] = ACTIONS(195),
    [anon_sym_vacuum] = ACTIONS(195),
    [anon_sym_valor] = ACTIONS(195),
    [anon_sym_vector] = ACTIONS(195),
    [anon_sym_vf16] = ACTIONS(195),
    [anon_sym_vf32] = ACTIONS(195),
    [anon_sym_vf64] = ACTIONS(195),
    [anon_sym_vi16] = ACTIONS(195),
    [anon_sym_vi32] = ACTIONS(195),
    [anon_sym_vi64] = ACTIONS(195),
    [anon_sym_vi8] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(195),
    [anon_sym_vu16] = ACTIONS(195),
    [anon_sym_vu32] = ACTIONS(195),
    [anon_sym_vu64] = ACTIONS(195),
    [anon_sym_vu8] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_QMARK_DOT] = ACTIONS(193),
    [anon_sym_BANG_DOT] = ACTIONS(193),
    [anon_sym_ad] = ACTIONS(195),
    [anon_sym_adfirma] = ACTIONS(195),
    [anon_sym_apud] = ACTIONS(195),
    [anon_sym_args] = ACTIONS(195),
    [anon_sym_argumenta] = ACTIONS(195),
    [anon_sym_assert] = ACTIONS(195),
    [anon_sym_async_main] = ACTIONS(195),
    [anon_sym_at] = ACTIONS(195),
    [anon_sym_break] = ACTIONS(195),
    [anon_sym_call] = ACTIONS(195),
    [anon_sym_cape] = ACTIONS(195),
    [anon_sym_capta] = ACTIONS(195),
    [anon_sym_case] = ACTIONS(195),
    [anon_sym_casu] = ACTIONS(195),
    [anon_sym_catch] = ACTIONS(195),
    [anon_sym_ceterum] = ACTIONS(195),
    [anon_sym_continue] = ACTIONS(195),
    [anon_sym_custodi] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(195),
    [anon_sym_discerne] = ACTIONS(195),
    [anon_sym_do] = ACTIONS(195),
    [anon_sym_dum] = ACTIONS(195),
    [anon_sym_elif] = ACTIONS(195),
    [anon_sym_elige] = ACTIONS(195),
    [anon_sym_else] = ACTIONS(195),
    [anon_sym_ergo] = ACTIONS(195),
    [anon_sym_fac] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(195),
    [anon_sym_guard] = ACTIONS(195),
    [anon_sym_iace] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_incipiet] = ACTIONS(195),
    [anon_sym_incipit] = ACTIONS(195),
    [anon_sym_itera] = ACTIONS(195),
    [anon_sym_main] = ACTIONS(195),
    [anon_sym_match] = ACTIONS(195),
    [anon_sym_mori] = ACTIONS(195),
    [anon_sym_panic] = ACTIONS(195),
    [anon_sym_pass] = ACTIONS(195),
    [anon_sym_perge] = ACTIONS(195),
    [anon_sym_redde] = ACTIONS(195),
    [anon_sym_reice] = ACTIONS(195),
    [anon_sym_reject] = ACTIONS(195),
    [anon_sym_require] = ACTIONS(195),
    [anon_sym_requirit] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(195),
    [anon_sym_rumpe] = ACTIONS(195),
    [anon_sym_secus] = ACTIONS(195),
    [anon_sym_si] = ACTIONS(195),
    [anon_sym_sic] = ACTIONS(195),
    [anon_sym_sin] = ACTIONS(195),
    [anon_sym_switch] = ACTIONS(195),
    [anon_sym_tacet] = ACTIONS(195),
    [anon_sym_then] = ACTIONS(195),
    [anon_sym_throw] = ACTIONS(195),
    [anon_sym_trap] = ACTIONS(195),
    [anon_sym_while] = ACTIONS(195),
    [anon_sym_yields] = ACTIONS(195),
    [anon_sym_ceteri] = ACTIONS(195),
    [anon_sym_class] = ACTIONS(195),
    [anon_sym_column] = ACTIONS(195),
    [anon_sym_columna] = ACTIONS(195),
    [anon_sym_const] = ACTIONS(195),
    [anon_sym_discretio] = ACTIONS(195),
    [anon_sym_enum] = ACTIONS(195),
    [anon_sym_errata] = ACTIONS(195),
    [anon_sym_errors] = ACTIONS(195),
    [anon_sym_exit] = ACTIONS(195),
    [anon_sym_exitus] = ACTIONS(195),
    [anon_sym_fixum] = ACTIONS(195),
    [anon_sym_fn] = ACTIONS(195),
    [anon_sym_functio] = ACTIONS(195),
    [anon_sym_generis] = ACTIONS(195),
    [anon_sym_genus] = ACTIONS(195),
    [anon_sym_iacit] = ACTIONS(195),
    [anon_sym_immutata] = ACTIONS(195),
    [anon_sym_implendum] = ACTIONS(195),
    [anon_sym_import] = ACTIONS(195),
    [anon_sym_importa] = ACTIONS(195),
    [anon_sym_interface] = ACTIONS(195),
    [anon_sym_interna] = ACTIONS(195),
    [anon_sym_internal] = ACTIONS(195),
    [anon_sym_iuncta] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_magnitudo] = ACTIONS(195),
    [anon_sym_optional] = ACTIONS(195),
    [anon_sym_optiones] = ACTIONS(195),
    [anon_sym_options] = ACTIONS(195),
    [anon_sym_ordo] = ACTIONS(195),
    [anon_sym_prae] = ACTIONS(195),
    [anon_sym_readonly] = ACTIONS(195),
    [anon_sym_rest] = ACTIONS(195),
    [anon_sym_schema] = ACTIONS(195),
    [anon_sym_sit] = ACTIONS(195),
    [anon_sym_size] = ACTIONS(195),
    [anon_sym_sponte] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(195),
    [anon_sym_tuple] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_typus] = ACTIONS(195),
    [anon_sym_union] = ACTIONS(195),
    [anon_sym_var] = ACTIONS(195),
    [anon_sym_varia] = ACTIONS(195),
    [anon_sym_ab] = ACTIONS(195),
    [anon_sym_all] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_ante] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(195),
    [anon_sym_async] = ACTIONS(195),
    [anon_sym_async_generator] = ACTIONS(195),
    [anon_sym_async_setup] = ACTIONS(195),
    [anon_sym_async_teardown] = ACTIONS(195),
    [anon_sym_aut] = ACTIONS(195),
    [anon_sym_await] = ACTIONS(195),
    [anon_sym_await_const] = ACTIONS(195),
    [anon_sym_await_var] = ACTIONS(195),
    [anon_sym_before] = ACTIONS(195),
    [anon_sym_bench] = ACTIONS(195),
    [anon_sym_cede] = ACTIONS(195),
    [anon_sym_clausura] = ACTIONS(195),
    [anon_sym_coalesce] = ACTIONS(195),
    [anon_sym_comptime] = ACTIONS(195),
    [anon_sym_copy] = ACTIONS(195),
    [anon_sym_de] = ACTIONS(195),
    [anon_sym_debug] = ACTIONS(195),
    [anon_sym_describe] = ACTIONS(195),
    [anon_sym_ego] = ACTIONS(195),
    [anon_sym_embed] = ACTIONS(195),
    [anon_sym_erratur] = ACTIONS(195),
    [anon_sym_est] = ACTIONS(195),
    [anon_sym_et] = ACTIONS(195),
    [anon_sym_ex] = ACTIONS(195),
    [anon_sym_exemplum] = ACTIONS(195),
    [anon_sym_expect_failure] = ACTIONS(195),
    [anon_sym_fient] = ACTIONS(195),
    [anon_sym_fiet] = ACTIONS(195),
    [anon_sym_figendum] = ACTIONS(195),
    [anon_sym_finge] = ACTIONS(195),
    [anon_sym_fiunt] = ACTIONS(195),
    [anon_sym_flaky] = ACTIONS(195),
    [anon_sym_format] = ACTIONS(195),
    [anon_sym_fragilis] = ACTIONS(195),
    [anon_sym_from] = ACTIONS(195),
    [anon_sym_futurum] = ACTIONS(195),
    [anon_sym_generator] = ACTIONS(195),
    [anon_sym_implements] = ACTIONS(195),
    [anon_sym_implet] = ACTIONS(195),
    [anon_sym_in] = ACTIONS(195),
    [anon_sym_insere] = ACTIONS(195),
    [anon_sym_is] = ACTIONS(195),
    [anon_sym_lambda] = ACTIONS(195),
    [anon_sym_lege] = ACTIONS(195),
    [anon_sym_line] = ACTIONS(195),
    [anon_sym_lineam] = ACTIONS(195),
    [anon_sym_metior] = ACTIONS(195),
    [anon_sym_modulus] = ACTIONS(195),
    [anon_sym_mone] = ACTIONS(195),
    [anon_sym_mut] = ACTIONS(195),
    [anon_sym_negative] = ACTIONS(195),
    [anon_sym_negativum] = ACTIONS(195),
    [anon_sym_nihil] = ACTIONS(195),
    [anon_sym_non] = ACTIONS(195),
    [anon_sym_none] = ACTIONS(195),
    [anon_sym_nonnihil] = ACTIONS(195),
    [anon_sym_nonnulla] = ACTIONS(195),
    [anon_sym_not] = ACTIONS(195),
    [anon_sym_nota] = ACTIONS(195),
    [anon_sym_null] = ACTIONS(195),
    [anon_sym_nulla] = ACTIONS(195),
    [anon_sym_omitte] = ACTIONS(195),
    [anon_sym_omnia] = ACTIONS(195),
    [anon_sym_only] = ACTIONS(195),
    [anon_sym_only_in] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [anon_sym_own] = ACTIONS(195),
    [anon_sym_penes] = ACTIONS(195),
    [anon_sym_per] = ACTIONS(195),
    [anon_sym_positive] = ACTIONS(195),
    [anon_sym_positivum] = ACTIONS(195),
    [anon_sym_postpara] = ACTIONS(195),
    [anon_sym_postparabit] = ACTIONS(195),
    [anon_sym_praefixum] = ACTIONS(195),
    [anon_sym_praepara] = ACTIONS(195),
    [anon_sym_praeparabit] = ACTIONS(195),
    [anon_sym_print] = ACTIONS(195),
    [anon_sym_proba] = ACTIONS(195),
    [anon_sym_probandum] = ACTIONS(195),
    [anon_sym_range] = ACTIONS(195),
    [anon_sym_read] = ACTIONS(195),
    [anon_sym_reddet] = ACTIONS(195),
    [anon_sym_ref] = ACTIONS(195),
    [anon_sym_repeat] = ACTIONS(195),
    [anon_sym_repete] = ACTIONS(195),
    [anon_sym_return_await] = ACTIONS(195),
    [anon_sym_scribe] = ACTIONS(195),
    [anon_sym_scriptum] = ACTIONS(195),
    [anon_sym_self] = ACTIONS(195),
    [anon_sym_setup] = ACTIONS(195),
    [anon_sym_skip] = ACTIONS(195),
    [anon_sym_solum] = ACTIONS(195),
    [anon_sym_solum_in] = ACTIONS(195),
    [anon_sym_some] = ACTIONS(195),
    [anon_sym_sparge] = ACTIONS(195),
    [anon_sym_spread] = ACTIONS(195),
    [anon_sym_step] = ACTIONS(195),
    [anon_sym_tacebit] = ACTIONS(195),
    [anon_sym_tag] = ACTIONS(195),
    [anon_sym_teardown] = ACTIONS(195),
    [anon_sym_temporis] = ACTIONS(195),
    [anon_sym_test] = ACTIONS(195),
    [anon_sym_timeout] = ACTIONS(195),
    [anon_sym_todo] = ACTIONS(195),
    [anon_sym_until] = ACTIONS(195),
    [anon_sym_usque] = ACTIONS(195),
    [anon_sym_ut] = ACTIONS(195),
    [anon_sym_variandum] = ACTIONS(195),
    [anon_sym_variant] = ACTIONS(195),
    [anon_sym_vel] = ACTIONS(195),
    [anon_sym_via] = ACTIONS(195),
    [anon_sym_vide] = ACTIONS(195),
    [anon_sym_warn] = ACTIONS(195),
    [anon_sym_wrapping] = ACTIONS(195),
    [anon_sym_write] = ACTIONS(195),
    [anon_sym_yield] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_falsum] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_verum] = ACTIONS(195),
    [sym_guillemet_string] = ACTIONS(193),
    [sym_octeti_string] = ACTIONS(193),
    [sym_backtick_string] = ACTIONS(193),
    [sym_ascii_string] = ACTIONS(193),
    [sym_string] = ACTIONS(193),
    [sym_number] = ACTIONS(193),
    [sym_identifier] = ACTIONS(195),
    [sym_operator] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_hash] = ACTIONS(193),
    [sym_line_comment] = ACTIONS(193),
    [sym_faber_newline] = ACTIONS(193),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_at_sign] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_cli] = ACTIONS(199),
    [anon_sym_conversio] = ACTIONS(199),
    [anon_sym_conversion] = ACTIONS(199),
    [anon_sym_cursor] = ACTIONS(199),
    [anon_sym_fragment] = ACTIONS(199),
    [anon_sym_futura] = ACTIONS(199),
    [anon_sym_imperium] = ACTIONS(199),
    [anon_sym_json] = ACTIONS(199),
    [anon_sym_nondum] = ACTIONS(199),
    [anon_sym_nucleum] = ACTIONS(199),
    [anon_sym_operandus] = ACTIONS(199),
    [anon_sym_optio] = ACTIONS(199),
    [anon_sym_privata] = ACTIONS(199),
    [anon_sym_private] = ACTIONS(199),
    [anon_sym_protecta] = ACTIONS(199),
    [anon_sym_protected] = ACTIONS(199),
    [anon_sym_public] = ACTIONS(199),
    [anon_sym_publica] = ACTIONS(199),
    [anon_sym_radix] = ACTIONS(199),
    [anon_sym_verte] = ACTIONS(199),
    [anon_sym_vertex] = ACTIONS(199),
    [anon_sym_ascii] = ACTIONS(199),
    [anon_sym_bivalens] = ACTIONS(199),
    [anon_sym_bool] = ACTIONS(199),
    [anon_sym_byte] = ACTIONS(199),
    [anon_sym_bytes] = ACTIONS(199),
    [anon_sym_char] = ACTIONS(199),
    [anon_sym_copia] = ACTIONS(199),
    [anon_sym_cursor_t] = ACTIONS(199),
    [anon_sym_exactus] = ACTIONS(199),
    [anon_sym_f16] = ACTIONS(199),
    [anon_sym_f32] = ACTIONS(199),
    [anon_sym_f64] = ACTIONS(199),
    [anon_sym_float] = ACTIONS(199),
    [anon_sym_fractus] = ACTIONS(199),
    [anon_sym_i16] = ACTIONS(199),
    [anon_sym_i32] = ACTIONS(199),
    [anon_sym_i64] = ACTIONS(199),
    [anon_sym_i8] = ACTIONS(199),
    [anon_sym_ignotum] = ACTIONS(199),
    [anon_sym_instans] = ACTIONS(199),
    [anon_sym_instant] = ACTIONS(199),
    [anon_sym_int] = ACTIONS(199),
    [anon_sym_intervallum] = ACTIONS(199),
    [anon_sym_iterator] = ACTIONS(199),
    [anon_sym_lf16] = ACTIONS(199),
    [anon_sym_lf32] = ACTIONS(199),
    [anon_sym_lf64] = ACTIONS(199),
    [anon_sym_li16] = ACTIONS(199),
    [anon_sym_li32] = ACTIONS(199),
    [anon_sym_li64] = ACTIONS(199),
    [anon_sym_li8] = ACTIONS(199),
    [anon_sym_list] = ACTIONS(199),
    [anon_sym_lista] = ACTIONS(199),
    [anon_sym_littera] = ACTIONS(199),
    [anon_sym_lu16] = ACTIONS(199),
    [anon_sym_lu32] = ACTIONS(199),
    [anon_sym_lu64] = ACTIONS(199),
    [anon_sym_lu8] = ACTIONS(199),
    [anon_sym_map] = ACTIONS(199),
    [anon_sym_matrix] = ACTIONS(199),
    [anon_sym_mf16] = ACTIONS(199),
    [anon_sym_mf32] = ACTIONS(199),
    [anon_sym_mf64] = ACTIONS(199),
    [anon_sym_mi16] = ACTIONS(199),
    [anon_sym_mi32] = ACTIONS(199),
    [anon_sym_mi64] = ACTIONS(199),
    [anon_sym_mi8] = ACTIONS(199),
    [anon_sym_mu16] = ACTIONS(199),
    [anon_sym_mu32] = ACTIONS(199),
    [anon_sym_mu64] = ACTIONS(199),
    [anon_sym_mu8] = ACTIONS(199),
    [anon_sym_never] = ACTIONS(199),
    [anon_sym_numerus] = ACTIONS(199),
    [anon_sym_numquam] = ACTIONS(199),
    [anon_sym_octeti] = ACTIONS(199),
    [anon_sym_octetus] = ACTIONS(199),
    [anon_sym_promise] = ACTIONS(199),
    [anon_sym_promissum] = ACTIONS(199),
    [anon_sym_queue] = ACTIONS(199),
    [anon_sym_ratio] = ACTIONS(199),
    [anon_sym_record] = ACTIONS(199),
    [anon_sym_regex] = ACTIONS(199),
    [anon_sym_saturating] = ACTIONS(199),
    [anon_sym_saturatus] = ACTIONS(199),
    [anon_sym_series] = ACTIONS(199),
    [anon_sym_set] = ACTIONS(199),
    [anon_sym_sf16] = ACTIONS(199),
    [anon_sym_sf32] = ACTIONS(199),
    [anon_sym_sf64] = ACTIONS(199),
    [anon_sym_si16] = ACTIONS(199),
    [anon_sym_si32] = ACTIONS(199),
    [anon_sym_si64] = ACTIONS(199),
    [anon_sym_si8] = ACTIONS(199),
    [anon_sym_sparsa] = ACTIONS(199),
    [anon_sym_stack] = ACTIONS(199),
    [anon_sym_string] = ACTIONS(199),
    [anon_sym_su16] = ACTIONS(199),
    [anon_sym_su32] = ACTIONS(199),
    [anon_sym_su64] = ACTIONS(199),
    [anon_sym_su8] = ACTIONS(199),
    [anon_sym_tabula] = ACTIONS(199),
    [anon_sym_tensor] = ACTIONS(199),
    [anon_sym_textus] = ACTIONS(199),
    [anon_sym_tf16] = ACTIONS(199),
    [anon_sym_tf32] = ACTIONS(199),
    [anon_sym_tf64] = ACTIONS(199),
    [anon_sym_ti16] = ACTIONS(199),
    [anon_sym_ti32] = ACTIONS(199),
    [anon_sym_ti64] = ACTIONS(199),
    [anon_sym_ti8] = ACTIONS(199),
    [anon_sym_trapping] = ACTIONS(199),
    [anon_sym_tu16] = ACTIONS(199),
    [anon_sym_tu32] = ACTIONS(199),
    [anon_sym_tu64] = ACTIONS(199),
    [anon_sym_tu8] = ACTIONS(199),
    [anon_sym_u16] = ACTIONS(199),
    [anon_sym_u32] = ACTIONS(199),
    [anon_sym_u64] = ACTIONS(199),
    [anon_sym_u8] = ACTIONS(199),
    [anon_sym_unio] = ACTIONS(199),
    [anon_sym_unknown] = ACTIONS(199),
    [anon_sym_vacua] = ACTIONS(199),
    [anon_sym_vacuum] = ACTIONS(199),
    [anon_sym_valor] = ACTIONS(199),
    [anon_sym_vector] = ACTIONS(199),
    [anon_sym_vf16] = ACTIONS(199),
    [anon_sym_vf32] = ACTIONS(199),
    [anon_sym_vf64] = ACTIONS(199),
    [anon_sym_vi16] = ACTIONS(199),
    [anon_sym_vi32] = ACTIONS(199),
    [anon_sym_vi64] = ACTIONS(199),
    [anon_sym_vi8] = ACTIONS(199),
    [anon_sym_void] = ACTIONS(199),
    [anon_sym_vu16] = ACTIONS(199),
    [anon_sym_vu32] = ACTIONS(199),
    [anon_sym_vu64] = ACTIONS(199),
    [anon_sym_vu8] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_QMARK_DOT] = ACTIONS(197),
    [anon_sym_BANG_DOT] = ACTIONS(197),
    [anon_sym_ad] = ACTIONS(199),
    [anon_sym_adfirma] = ACTIONS(199),
    [anon_sym_apud] = ACTIONS(199),
    [anon_sym_args] = ACTIONS(199),
    [anon_sym_argumenta] = ACTIONS(199),
    [anon_sym_assert] = ACTIONS(199),
    [anon_sym_async_main] = ACTIONS(199),
    [anon_sym_at] = ACTIONS(199),
    [anon_sym_break] = ACTIONS(199),
    [anon_sym_call] = ACTIONS(199),
    [anon_sym_cape] = ACTIONS(199),
    [anon_sym_capta] = ACTIONS(199),
    [anon_sym_case] = ACTIONS(199),
    [anon_sym_casu] = ACTIONS(199),
    [anon_sym_catch] = ACTIONS(199),
    [anon_sym_ceterum] = ACTIONS(199),
    [anon_sym_continue] = ACTIONS(199),
    [anon_sym_custodi] = ACTIONS(199),
    [anon_sym_default] = ACTIONS(199),
    [anon_sym_discerne] = ACTIONS(199),
    [anon_sym_do] = ACTIONS(199),
    [anon_sym_dum] = ACTIONS(199),
    [anon_sym_elif] = ACTIONS(199),
    [anon_sym_elige] = ACTIONS(199),
    [anon_sym_else] = ACTIONS(199),
    [anon_sym_ergo] = ACTIONS(199),
    [anon_sym_fac] = ACTIONS(199),
    [anon_sym_for] = ACTIONS(199),
    [anon_sym_guard] = ACTIONS(199),
    [anon_sym_iace] = ACTIONS(199),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_incipiet] = ACTIONS(199),
    [anon_sym_incipit] = ACTIONS(199),
    [anon_sym_itera] = ACTIONS(199),
    [anon_sym_main] = ACTIONS(199),
    [anon_sym_match] = ACTIONS(199),
    [anon_sym_mori] = ACTIONS(199),
    [anon_sym_panic] = ACTIONS(199),
    [anon_sym_pass] = ACTIONS(199),
    [anon_sym_perge] = ACTIONS(199),
    [anon_sym_redde] = ACTIONS(199),
    [anon_sym_reice] = ACTIONS(199),
    [anon_sym_reject] = ACTIONS(199),
    [anon_sym_require] = ACTIONS(199),
    [anon_sym_requirit] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(199),
    [anon_sym_rumpe] = ACTIONS(199),
    [anon_sym_secus] = ACTIONS(199),
    [anon_sym_si] = ACTIONS(199),
    [anon_sym_sic] = ACTIONS(199),
    [anon_sym_sin] = ACTIONS(199),
    [anon_sym_switch] = ACTIONS(199),
    [anon_sym_tacet] = ACTIONS(199),
    [anon_sym_then] = ACTIONS(199),
    [anon_sym_throw] = ACTIONS(199),
    [anon_sym_trap] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_yields] = ACTIONS(199),
    [anon_sym_ceteri] = ACTIONS(199),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_column] = ACTIONS(199),
    [anon_sym_columna] = ACTIONS(199),
    [anon_sym_const] = ACTIONS(199),
    [anon_sym_discretio] = ACTIONS(199),
    [anon_sym_enum] = ACTIONS(199),
    [anon_sym_errata] = ACTIONS(199),
    [anon_sym_errors] = ACTIONS(199),
    [anon_sym_exit] = ACTIONS(199),
    [anon_sym_exitus] = ACTIONS(199),
    [anon_sym_fixum] = ACTIONS(199),
    [anon_sym_fn] = ACTIONS(199),
    [anon_sym_functio] = ACTIONS(199),
    [anon_sym_generis] = ACTIONS(199),
    [anon_sym_genus] = ACTIONS(199),
    [anon_sym_iacit] = ACTIONS(199),
    [anon_sym_immutata] = ACTIONS(199),
    [anon_sym_implendum] = ACTIONS(199),
    [anon_sym_import] = ACTIONS(199),
    [anon_sym_importa] = ACTIONS(199),
    [anon_sym_interface] = ACTIONS(199),
    [anon_sym_interna] = ACTIONS(199),
    [anon_sym_internal] = ACTIONS(199),
    [anon_sym_iuncta] = ACTIONS(199),
    [anon_sym_let] = ACTIONS(199),
    [anon_sym_magnitudo] = ACTIONS(199),
    [anon_sym_optional] = ACTIONS(199),
    [anon_sym_optiones] = ACTIONS(199),
    [anon_sym_options] = ACTIONS(199),
    [anon_sym_ordo] = ACTIONS(199),
    [anon_sym_prae] = ACTIONS(199),
    [anon_sym_readonly] = ACTIONS(199),
    [anon_sym_rest] = ACTIONS(199),
    [anon_sym_schema] = ACTIONS(199),
    [anon_sym_sit] = ACTIONS(199),
    [anon_sym_size] = ACTIONS(199),
    [anon_sym_sponte] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(199),
    [anon_sym_throws] = ACTIONS(199),
    [anon_sym_tuple] = ACTIONS(199),
    [anon_sym_type] = ACTIONS(199),
    [anon_sym_typus] = ACTIONS(199),
    [anon_sym_union] = ACTIONS(199),
    [anon_sym_var] = ACTIONS(199),
    [anon_sym_varia] = ACTIONS(199),
    [anon_sym_ab] = ACTIONS(199),
    [anon_sym_all] = ACTIONS(199),
    [anon_sym_and] = ACTIONS(199),
    [anon_sym_ante] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(199),
    [anon_sym_async] = ACTIONS(199),
    [anon_sym_async_generator] = ACTIONS(199),
    [anon_sym_async_setup] = ACTIONS(199),
    [anon_sym_async_teardown] = ACTIONS(199),
    [anon_sym_aut] = ACTIONS(199),
    [anon_sym_await] = ACTIONS(199),
    [anon_sym_await_const] = ACTIONS(199),
    [anon_sym_await_var] = ACTIONS(199),
    [anon_sym_before] = ACTIONS(199),
    [anon_sym_bench] = ACTIONS(199),
    [anon_sym_cede] = ACTIONS(199),
    [anon_sym_clausura] = ACTIONS(199),
    [anon_sym_coalesce] = ACTIONS(199),
    [anon_sym_comptime] = ACTIONS(199),
    [anon_sym_copy] = ACTIONS(199),
    [anon_sym_de] = ACTIONS(199),
    [anon_sym_debug] = ACTIONS(199),
    [anon_sym_describe] = ACTIONS(199),
    [anon_sym_ego] = ACTIONS(199),
    [anon_sym_embed] = ACTIONS(199),
    [anon_sym_erratur] = ACTIONS(199),
    [anon_sym_est] = ACTIONS(199),
    [anon_sym_et] = ACTIONS(199),
    [anon_sym_ex] = ACTIONS(199),
    [anon_sym_exemplum] = ACTIONS(199),
    [anon_sym_expect_failure] = ACTIONS(199),
    [anon_sym_fient] = ACTIONS(199),
    [anon_sym_fiet] = ACTIONS(199),
    [anon_sym_figendum] = ACTIONS(199),
    [anon_sym_finge] = ACTIONS(199),
    [anon_sym_fiunt] = ACTIONS(199),
    [anon_sym_flaky] = ACTIONS(199),
    [anon_sym_format] = ACTIONS(199),
    [anon_sym_fragilis] = ACTIONS(199),
    [anon_sym_from] = ACTIONS(199),
    [anon_sym_futurum] = ACTIONS(199),
    [anon_sym_generator] = ACTIONS(199),
    [anon_sym_implements] = ACTIONS(199),
    [anon_sym_implet] = ACTIONS(199),
    [anon_sym_in] = ACTIONS(199),
    [anon_sym_insere] = ACTIONS(199),
    [anon_sym_is] = ACTIONS(199),
    [anon_sym_lambda] = ACTIONS(199),
    [anon_sym_lege] = ACTIONS(199),
    [anon_sym_line] = ACTIONS(199),
    [anon_sym_lineam] = ACTIONS(199),
    [anon_sym_metior] = ACTIONS(199),
    [anon_sym_modulus] = ACTIONS(199),
    [anon_sym_mone] = ACTIONS(199),
    [anon_sym_mut] = ACTIONS(199),
    [anon_sym_negative] = ACTIONS(199),
    [anon_sym_negativum] = ACTIONS(199),
    [anon_sym_nihil] = ACTIONS(199),
    [anon_sym_non] = ACTIONS(199),
    [anon_sym_none] = ACTIONS(199),
    [anon_sym_nonnihil] = ACTIONS(199),
    [anon_sym_nonnulla] = ACTIONS(199),
    [anon_sym_not] = ACTIONS(199),
    [anon_sym_nota] = ACTIONS(199),
    [anon_sym_null] = ACTIONS(199),
    [anon_sym_nulla] = ACTIONS(199),
    [anon_sym_omitte] = ACTIONS(199),
    [anon_sym_omnia] = ACTIONS(199),
    [anon_sym_only] = ACTIONS(199),
    [anon_sym_only_in] = ACTIONS(199),
    [anon_sym_or] = ACTIONS(199),
    [anon_sym_own] = ACTIONS(199),
    [anon_sym_penes] = ACTIONS(199),
    [anon_sym_per] = ACTIONS(199),
    [anon_sym_positive] = ACTIONS(199),
    [anon_sym_positivum] = ACTIONS(199),
    [anon_sym_postpara] = ACTIONS(199),
    [anon_sym_postparabit] = ACTIONS(199),
    [anon_sym_praefixum] = ACTIONS(199),
    [anon_sym_praepara] = ACTIONS(199),
    [anon_sym_praeparabit] = ACTIONS(199),
    [anon_sym_print] = ACTIONS(199),
    [anon_sym_proba] = ACTIONS(199),
    [anon_sym_probandum] = ACTIONS(199),
    [anon_sym_range] = ACTIONS(199),
    [anon_sym_read] = ACTIONS(199),
    [anon_sym_reddet] = ACTIONS(199),
    [anon_sym_ref] = ACTIONS(199),
    [anon_sym_repeat] = ACTIONS(199),
    [anon_sym_repete] = ACTIONS(199),
    [anon_sym_return_await] = ACTIONS(199),
    [anon_sym_scribe] = ACTIONS(199),
    [anon_sym_scriptum] = ACTIONS(199),
    [anon_sym_self] = ACTIONS(199),
    [anon_sym_setup] = ACTIONS(199),
    [anon_sym_skip] = ACTIONS(199),
    [anon_sym_solum] = ACTIONS(199),
    [anon_sym_solum_in] = ACTIONS(199),
    [anon_sym_some] = ACTIONS(199),
    [anon_sym_sparge] = ACTIONS(199),
    [anon_sym_spread] = ACTIONS(199),
    [anon_sym_step] = ACTIONS(199),
    [anon_sym_tacebit] = ACTIONS(199),
    [anon_sym_tag] = ACTIONS(199),
    [anon_sym_teardown] = ACTIONS(199),
    [anon_sym_temporis] = ACTIONS(199),
    [anon_sym_test] = ACTIONS(199),
    [anon_sym_timeout] = ACTIONS(199),
    [anon_sym_todo] = ACTIONS(199),
    [anon_sym_until] = ACTIONS(199),
    [anon_sym_usque] = ACTIONS(199),
    [anon_sym_ut] = ACTIONS(199),
    [anon_sym_variandum] = ACTIONS(199),
    [anon_sym_variant] = ACTIONS(199),
    [anon_sym_vel] = ACTIONS(199),
    [anon_sym_via] = ACTIONS(199),
    [anon_sym_vide] = ACTIONS(199),
    [anon_sym_warn] = ACTIONS(199),
    [anon_sym_wrapping] = ACTIONS(199),
    [anon_sym_write] = ACTIONS(199),
    [anon_sym_yield] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [anon_sym_falsum] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_verum] = ACTIONS(199),
    [sym_guillemet_string] = ACTIONS(197),
    [sym_octeti_string] = ACTIONS(197),
    [sym_backtick_string] = ACTIONS(197),
    [sym_ascii_string] = ACTIONS(197),
    [sym_string] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [sym_identifier] = ACTIONS(199),
    [sym_operator] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_hash] = ACTIONS(197),
    [sym_line_comment] = ACTIONS(197),
    [sym_faber_newline] = ACTIONS(197),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_at_sign] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_cli] = ACTIONS(203),
    [anon_sym_conversio] = ACTIONS(203),
    [anon_sym_conversion] = ACTIONS(203),
    [anon_sym_cursor] = ACTIONS(203),
    [anon_sym_fragment] = ACTIONS(203),
    [anon_sym_futura] = ACTIONS(203),
    [anon_sym_imperium] = ACTIONS(203),
    [anon_sym_json] = ACTIONS(203),
    [anon_sym_nondum] = ACTIONS(203),
    [anon_sym_nucleum] = ACTIONS(203),
    [anon_sym_operandus] = ACTIONS(203),
    [anon_sym_optio] = ACTIONS(203),
    [anon_sym_privata] = ACTIONS(203),
    [anon_sym_private] = ACTIONS(203),
    [anon_sym_protecta] = ACTIONS(203),
    [anon_sym_protected] = ACTIONS(203),
    [anon_sym_public] = ACTIONS(203),
    [anon_sym_publica] = ACTIONS(203),
    [anon_sym_radix] = ACTIONS(203),
    [anon_sym_verte] = ACTIONS(203),
    [anon_sym_vertex] = ACTIONS(203),
    [anon_sym_ascii] = ACTIONS(203),
    [anon_sym_bivalens] = ACTIONS(203),
    [anon_sym_bool] = ACTIONS(203),
    [anon_sym_byte] = ACTIONS(203),
    [anon_sym_bytes] = ACTIONS(203),
    [anon_sym_char] = ACTIONS(203),
    [anon_sym_copia] = ACTIONS(203),
    [anon_sym_cursor_t] = ACTIONS(203),
    [anon_sym_exactus] = ACTIONS(203),
    [anon_sym_f16] = ACTIONS(203),
    [anon_sym_f32] = ACTIONS(203),
    [anon_sym_f64] = ACTIONS(203),
    [anon_sym_float] = ACTIONS(203),
    [anon_sym_fractus] = ACTIONS(203),
    [anon_sym_i16] = ACTIONS(203),
    [anon_sym_i32] = ACTIONS(203),
    [anon_sym_i64] = ACTIONS(203),
    [anon_sym_i8] = ACTIONS(203),
    [anon_sym_ignotum] = ACTIONS(203),
    [anon_sym_instans] = ACTIONS(203),
    [anon_sym_instant] = ACTIONS(203),
    [anon_sym_int] = ACTIONS(203),
    [anon_sym_intervallum] = ACTIONS(203),
    [anon_sym_iterator] = ACTIONS(203),
    [anon_sym_lf16] = ACTIONS(203),
    [anon_sym_lf32] = ACTIONS(203),
    [anon_sym_lf64] = ACTIONS(203),
    [anon_sym_li16] = ACTIONS(203),
    [anon_sym_li32] = ACTIONS(203),
    [anon_sym_li64] = ACTIONS(203),
    [anon_sym_li8] = ACTIONS(203),
    [anon_sym_list] = ACTIONS(203),
    [anon_sym_lista] = ACTIONS(203),
    [anon_sym_littera] = ACTIONS(203),
    [anon_sym_lu16] = ACTIONS(203),
    [anon_sym_lu32] = ACTIONS(203),
    [anon_sym_lu64] = ACTIONS(203),
    [anon_sym_lu8] = ACTIONS(203),
    [anon_sym_map] = ACTIONS(203),
    [anon_sym_matrix] = ACTIONS(203),
    [anon_sym_mf16] = ACTIONS(203),
    [anon_sym_mf32] = ACTIONS(203),
    [anon_sym_mf64] = ACTIONS(203),
    [anon_sym_mi16] = ACTIONS(203),
    [anon_sym_mi32] = ACTIONS(203),
    [anon_sym_mi64] = ACTIONS(203),
    [anon_sym_mi8] = ACTIONS(203),
    [anon_sym_mu16] = ACTIONS(203),
    [anon_sym_mu32] = ACTIONS(203),
    [anon_sym_mu64] = ACTIONS(203),
    [anon_sym_mu8] = ACTIONS(203),
    [anon_sym_never] = ACTIONS(203),
    [anon_sym_numerus] = ACTIONS(203),
    [anon_sym_numquam] = ACTIONS(203),
    [anon_sym_octeti] = ACTIONS(203),
    [anon_sym_octetus] = ACTIONS(203),
    [anon_sym_promise] = ACTIONS(203),
    [anon_sym_promissum] = ACTIONS(203),
    [anon_sym_queue] = ACTIONS(203),
    [anon_sym_ratio] = ACTIONS(203),
    [anon_sym_record] = ACTIONS(203),
    [anon_sym_regex] = ACTIONS(203),
    [anon_sym_saturating] = ACTIONS(203),
    [anon_sym_saturatus] = ACTIONS(203),
    [anon_sym_series] = ACTIONS(203),
    [anon_sym_set] = ACTIONS(203),
    [anon_sym_sf16] = ACTIONS(203),
    [anon_sym_sf32] = ACTIONS(203),
    [anon_sym_sf64] = ACTIONS(203),
    [anon_sym_si16] = ACTIONS(203),
    [anon_sym_si32] = ACTIONS(203),
    [anon_sym_si64] = ACTIONS(203),
    [anon_sym_si8] = ACTIONS(203),
    [anon_sym_sparsa] = ACTIONS(203),
    [anon_sym_stack] = ACTIONS(203),
    [anon_sym_string] = ACTIONS(203),
    [anon_sym_su16] = ACTIONS(203),
    [anon_sym_su32] = ACTIONS(203),
    [anon_sym_su64] = ACTIONS(203),
    [anon_sym_su8] = ACTIONS(203),
    [anon_sym_tabula] = ACTIONS(203),
    [anon_sym_tensor] = ACTIONS(203),
    [anon_sym_textus] = ACTIONS(203),
    [anon_sym_tf16] = ACTIONS(203),
    [anon_sym_tf32] = ACTIONS(203),
    [anon_sym_tf64] = ACTIONS(203),
    [anon_sym_ti16] = ACTIONS(203),
    [anon_sym_ti32] = ACTIONS(203),
    [anon_sym_ti64] = ACTIONS(203),
    [anon_sym_ti8] = ACTIONS(203),
    [anon_sym_trapping] = ACTIONS(203),
    [anon_sym_tu16] = ACTIONS(203),
    [anon_sym_tu32] = ACTIONS(203),
    [anon_sym_tu64] = ACTIONS(203),
    [anon_sym_tu8] = ACTIONS(203),
    [anon_sym_u16] = ACTIONS(203),
    [anon_sym_u32] = ACTIONS(203),
    [anon_sym_u64] = ACTIONS(203),
    [anon_sym_u8] = ACTIONS(203),
    [anon_sym_unio] = ACTIONS(203),
    [anon_sym_unknown] = ACTIONS(203),
    [anon_sym_vacua] = ACTIONS(203),
    [anon_sym_vacuum] = ACTIONS(203),
    [anon_sym_valor] = ACTIONS(203),
    [anon_sym_vector] = ACTIONS(203),
    [anon_sym_vf16] = ACTIONS(203),
    [anon_sym_vf32] = ACTIONS(203),
    [anon_sym_vf64] = ACTIONS(203),
    [anon_sym_vi16] = ACTIONS(203),
    [anon_sym_vi32] = ACTIONS(203),
    [anon_sym_vi64] = ACTIONS(203),
    [anon_sym_vi8] = ACTIONS(203),
    [anon_sym_void] = ACTIONS(203),
    [anon_sym_vu16] = ACTIONS(203),
    [anon_sym_vu32] = ACTIONS(203),
    [anon_sym_vu64] = ACTIONS(203),
    [anon_sym_vu8] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_QMARK_DOT] = ACTIONS(201),
    [anon_sym_BANG_DOT] = ACTIONS(201),
    [anon_sym_ad] = ACTIONS(203),
    [anon_sym_adfirma] = ACTIONS(203),
    [anon_sym_apud] = ACTIONS(203),
    [anon_sym_args] = ACTIONS(203),
    [anon_sym_argumenta] = ACTIONS(203),
    [anon_sym_assert] = ACTIONS(203),
    [anon_sym_async_main] = ACTIONS(203),
    [anon_sym_at] = ACTIONS(203),
    [anon_sym_break] = ACTIONS(203),
    [anon_sym_call] = ACTIONS(203),
    [anon_sym_cape] = ACTIONS(203),
    [anon_sym_capta] = ACTIONS(203),
    [anon_sym_case] = ACTIONS(203),
    [anon_sym_casu] = ACTIONS(203),
    [anon_sym_catch] = ACTIONS(203),
    [anon_sym_ceterum] = ACTIONS(203),
    [anon_sym_continue] = ACTIONS(203),
    [anon_sym_custodi] = ACTIONS(203),
    [anon_sym_default] = ACTIONS(203),
    [anon_sym_discerne] = ACTIONS(203),
    [anon_sym_do] = ACTIONS(203),
    [anon_sym_dum] = ACTIONS(203),
    [anon_sym_elif] = ACTIONS(203),
    [anon_sym_elige] = ACTIONS(203),
    [anon_sym_else] = ACTIONS(203),
    [anon_sym_ergo] = ACTIONS(203),
    [anon_sym_fac] = ACTIONS(203),
    [anon_sym_for] = ACTIONS(203),
    [anon_sym_guard] = ACTIONS(203),
    [anon_sym_iace] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_incipiet] = ACTIONS(203),
    [anon_sym_incipit] = ACTIONS(203),
    [anon_sym_itera] = ACTIONS(203),
    [anon_sym_main] = ACTIONS(203),
    [anon_sym_match] = ACTIONS(203),
    [anon_sym_mori] = ACTIONS(203),
    [anon_sym_panic] = ACTIONS(203),
    [anon_sym_pass] = ACTIONS(203),
    [anon_sym_perge] = ACTIONS(203),
    [anon_sym_redde] = ACTIONS(203),
    [anon_sym_reice] = ACTIONS(203),
    [anon_sym_reject] = ACTIONS(203),
    [anon_sym_require] = ACTIONS(203),
    [anon_sym_requirit] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(203),
    [anon_sym_rumpe] = ACTIONS(203),
    [anon_sym_secus] = ACTIONS(203),
    [anon_sym_si] = ACTIONS(203),
    [anon_sym_sic] = ACTIONS(203),
    [anon_sym_sin] = ACTIONS(203),
    [anon_sym_switch] = ACTIONS(203),
    [anon_sym_tacet] = ACTIONS(203),
    [anon_sym_then] = ACTIONS(203),
    [anon_sym_throw] = ACTIONS(203),
    [anon_sym_trap] = ACTIONS(203),
    [anon_sym_while] = ACTIONS(203),
    [anon_sym_yields] = ACTIONS(203),
    [anon_sym_ceteri] = ACTIONS(203),
    [anon_sym_class] = ACTIONS(203),
    [anon_sym_column] = ACTIONS(203),
    [anon_sym_columna] = ACTIONS(203),
    [anon_sym_const] = ACTIONS(203),
    [anon_sym_discretio] = ACTIONS(203),
    [anon_sym_enum] = ACTIONS(203),
    [anon_sym_errata] = ACTIONS(203),
    [anon_sym_errors] = ACTIONS(203),
    [anon_sym_exit] = ACTIONS(203),
    [anon_sym_exitus] = ACTIONS(203),
    [anon_sym_fixum] = ACTIONS(203),
    [anon_sym_fn] = ACTIONS(203),
    [anon_sym_functio] = ACTIONS(203),
    [anon_sym_generis] = ACTIONS(203),
    [anon_sym_genus] = ACTIONS(203),
    [anon_sym_iacit] = ACTIONS(203),
    [anon_sym_immutata] = ACTIONS(203),
    [anon_sym_implendum] = ACTIONS(203),
    [anon_sym_import] = ACTIONS(203),
    [anon_sym_importa] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(203),
    [anon_sym_interna] = ACTIONS(203),
    [anon_sym_internal] = ACTIONS(203),
    [anon_sym_iuncta] = ACTIONS(203),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_magnitudo] = ACTIONS(203),
    [anon_sym_optional] = ACTIONS(203),
    [anon_sym_optiones] = ACTIONS(203),
    [anon_sym_options] = ACTIONS(203),
    [anon_sym_ordo] = ACTIONS(203),
    [anon_sym_prae] = ACTIONS(203),
    [anon_sym_readonly] = ACTIONS(203),
    [anon_sym_rest] = ACTIONS(203),
    [anon_sym_schema] = ACTIONS(203),
    [anon_sym_sit] = ACTIONS(203),
    [anon_sym_size] = ACTIONS(203),
    [anon_sym_sponte] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(203),
    [anon_sym_throws] = ACTIONS(203),
    [anon_sym_tuple] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(203),
    [anon_sym_typus] = ACTIONS(203),
    [anon_sym_union] = ACTIONS(203),
    [anon_sym_var] = ACTIONS(203),
    [anon_sym_varia] = ACTIONS(203),
    [anon_sym_ab] = ACTIONS(203),
    [anon_sym_all] = ACTIONS(203),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_ante] = ACTIONS(203),
    [anon_sym_as] = ACTIONS(203),
    [anon_sym_async] = ACTIONS(203),
    [anon_sym_async_generator] = ACTIONS(203),
    [anon_sym_async_setup] = ACTIONS(203),
    [anon_sym_async_teardown] = ACTIONS(203),
    [anon_sym_aut] = ACTIONS(203),
    [anon_sym_await] = ACTIONS(203),
    [anon_sym_await_const] = ACTIONS(203),
    [anon_sym_await_var] = ACTIONS(203),
    [anon_sym_before] = ACTIONS(203),
    [anon_sym_bench] = ACTIONS(203),
    [anon_sym_cede] = ACTIONS(203),
    [anon_sym_clausura] = ACTIONS(203),
    [anon_sym_coalesce] = ACTIONS(203),
    [anon_sym_comptime] = ACTIONS(203),
    [anon_sym_copy] = ACTIONS(203),
    [anon_sym_de] = ACTIONS(203),
    [anon_sym_debug] = ACTIONS(203),
    [anon_sym_describe] = ACTIONS(203),
    [anon_sym_ego] = ACTIONS(203),
    [anon_sym_embed] = ACTIONS(203),
    [anon_sym_erratur] = ACTIONS(203),
    [anon_sym_est] = ACTIONS(203),
    [anon_sym_et] = ACTIONS(203),
    [anon_sym_ex] = ACTIONS(203),
    [anon_sym_exemplum] = ACTIONS(203),
    [anon_sym_expect_failure] = ACTIONS(203),
    [anon_sym_fient] = ACTIONS(203),
    [anon_sym_fiet] = ACTIONS(203),
    [anon_sym_figendum] = ACTIONS(203),
    [anon_sym_finge] = ACTIONS(203),
    [anon_sym_fiunt] = ACTIONS(203),
    [anon_sym_flaky] = ACTIONS(203),
    [anon_sym_format] = ACTIONS(203),
    [anon_sym_fragilis] = ACTIONS(203),
    [anon_sym_from] = ACTIONS(203),
    [anon_sym_futurum] = ACTIONS(203),
    [anon_sym_generator] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(203),
    [anon_sym_implet] = ACTIONS(203),
    [anon_sym_in] = ACTIONS(203),
    [anon_sym_insere] = ACTIONS(203),
    [anon_sym_is] = ACTIONS(203),
    [anon_sym_lambda] = ACTIONS(203),
    [anon_sym_lege] = ACTIONS(203),
    [anon_sym_line] = ACTIONS(203),
    [anon_sym_lineam] = ACTIONS(203),
    [anon_sym_metior] = ACTIONS(203),
    [anon_sym_modulus] = ACTIONS(203),
    [anon_sym_mone] = ACTIONS(203),
    [anon_sym_mut] = ACTIONS(203),
    [anon_sym_negative] = ACTIONS(203),
    [anon_sym_negativum] = ACTIONS(203),
    [anon_sym_nihil] = ACTIONS(203),
    [anon_sym_non] = ACTIONS(203),
    [anon_sym_none] = ACTIONS(203),
    [anon_sym_nonnihil] = ACTIONS(203),
    [anon_sym_nonnulla] = ACTIONS(203),
    [anon_sym_not] = ACTIONS(203),
    [anon_sym_nota] = ACTIONS(203),
    [anon_sym_null] = ACTIONS(203),
    [anon_sym_nulla] = ACTIONS(203),
    [anon_sym_omitte] = ACTIONS(203),
    [anon_sym_omnia] = ACTIONS(203),
    [anon_sym_only] = ACTIONS(203),
    [anon_sym_only_in] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(203),
    [anon_sym_own] = ACTIONS(203),
    [anon_sym_penes] = ACTIONS(203),
    [anon_sym_per] = ACTIONS(203),
    [anon_sym_positive] = ACTIONS(203),
    [anon_sym_positivum] = ACTIONS(203),
    [anon_sym_postpara] = ACTIONS(203),
    [anon_sym_postparabit] = ACTIONS(203),
    [anon_sym_praefixum] = ACTIONS(203),
    [anon_sym_praepara] = ACTIONS(203),
    [anon_sym_praeparabit] = ACTIONS(203),
    [anon_sym_print] = ACTIONS(203),
    [anon_sym_proba] = ACTIONS(203),
    [anon_sym_probandum] = ACTIONS(203),
    [anon_sym_range] = ACTIONS(203),
    [anon_sym_read] = ACTIONS(203),
    [anon_sym_reddet] = ACTIONS(203),
    [anon_sym_ref] = ACTIONS(203),
    [anon_sym_repeat] = ACTIONS(203),
    [anon_sym_repete] = ACTIONS(203),
    [anon_sym_return_await] = ACTIONS(203),
    [anon_sym_scribe] = ACTIONS(203),
    [anon_sym_scriptum] = ACTIONS(203),
    [anon_sym_self] = ACTIONS(203),
    [anon_sym_setup] = ACTIONS(203),
    [anon_sym_skip] = ACTIONS(203),
    [anon_sym_solum] = ACTIONS(203),
    [anon_sym_solum_in] = ACTIONS(203),
    [anon_sym_some] = ACTIONS(203),
    [anon_sym_sparge] = ACTIONS(203),
    [anon_sym_spread] = ACTIONS(203),
    [anon_sym_step] = ACTIONS(203),
    [anon_sym_tacebit] = ACTIONS(203),
    [anon_sym_tag] = ACTIONS(203),
    [anon_sym_teardown] = ACTIONS(203),
    [anon_sym_temporis] = ACTIONS(203),
    [anon_sym_test] = ACTIONS(203),
    [anon_sym_timeout] = ACTIONS(203),
    [anon_sym_todo] = ACTIONS(203),
    [anon_sym_until] = ACTIONS(203),
    [anon_sym_usque] = ACTIONS(203),
    [anon_sym_ut] = ACTIONS(203),
    [anon_sym_variandum] = ACTIONS(203),
    [anon_sym_variant] = ACTIONS(203),
    [anon_sym_vel] = ACTIONS(203),
    [anon_sym_via] = ACTIONS(203),
    [anon_sym_vide] = ACTIONS(203),
    [anon_sym_warn] = ACTIONS(203),
    [anon_sym_wrapping] = ACTIONS(203),
    [anon_sym_write] = ACTIONS(203),
    [anon_sym_yield] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [anon_sym_falsum] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_verum] = ACTIONS(203),
    [sym_guillemet_string] = ACTIONS(201),
    [sym_octeti_string] = ACTIONS(201),
    [sym_backtick_string] = ACTIONS(201),
    [sym_ascii_string] = ACTIONS(201),
    [sym_string] = ACTIONS(201),
    [sym_number] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [sym_operator] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [sym_hash] = ACTIONS(201),
    [sym_line_comment] = ACTIONS(201),
    [sym_faber_newline] = ACTIONS(201),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_at_sign] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_cli] = ACTIONS(207),
    [anon_sym_conversio] = ACTIONS(207),
    [anon_sym_conversion] = ACTIONS(207),
    [anon_sym_cursor] = ACTIONS(207),
    [anon_sym_fragment] = ACTIONS(207),
    [anon_sym_futura] = ACTIONS(207),
    [anon_sym_imperium] = ACTIONS(207),
    [anon_sym_json] = ACTIONS(207),
    [anon_sym_nondum] = ACTIONS(207),
    [anon_sym_nucleum] = ACTIONS(207),
    [anon_sym_operandus] = ACTIONS(207),
    [anon_sym_optio] = ACTIONS(207),
    [anon_sym_privata] = ACTIONS(207),
    [anon_sym_private] = ACTIONS(207),
    [anon_sym_protecta] = ACTIONS(207),
    [anon_sym_protected] = ACTIONS(207),
    [anon_sym_public] = ACTIONS(207),
    [anon_sym_publica] = ACTIONS(207),
    [anon_sym_radix] = ACTIONS(207),
    [anon_sym_verte] = ACTIONS(207),
    [anon_sym_vertex] = ACTIONS(207),
    [anon_sym_ascii] = ACTIONS(207),
    [anon_sym_bivalens] = ACTIONS(207),
    [anon_sym_bool] = ACTIONS(207),
    [anon_sym_byte] = ACTIONS(207),
    [anon_sym_bytes] = ACTIONS(207),
    [anon_sym_char] = ACTIONS(207),
    [anon_sym_copia] = ACTIONS(207),
    [anon_sym_cursor_t] = ACTIONS(207),
    [anon_sym_exactus] = ACTIONS(207),
    [anon_sym_f16] = ACTIONS(207),
    [anon_sym_f32] = ACTIONS(207),
    [anon_sym_f64] = ACTIONS(207),
    [anon_sym_float] = ACTIONS(207),
    [anon_sym_fractus] = ACTIONS(207),
    [anon_sym_i16] = ACTIONS(207),
    [anon_sym_i32] = ACTIONS(207),
    [anon_sym_i64] = ACTIONS(207),
    [anon_sym_i8] = ACTIONS(207),
    [anon_sym_ignotum] = ACTIONS(207),
    [anon_sym_instans] = ACTIONS(207),
    [anon_sym_instant] = ACTIONS(207),
    [anon_sym_int] = ACTIONS(207),
    [anon_sym_intervallum] = ACTIONS(207),
    [anon_sym_iterator] = ACTIONS(207),
    [anon_sym_lf16] = ACTIONS(207),
    [anon_sym_lf32] = ACTIONS(207),
    [anon_sym_lf64] = ACTIONS(207),
    [anon_sym_li16] = ACTIONS(207),
    [anon_sym_li32] = ACTIONS(207),
    [anon_sym_li64] = ACTIONS(207),
    [anon_sym_li8] = ACTIONS(207),
    [anon_sym_list] = ACTIONS(207),
    [anon_sym_lista] = ACTIONS(207),
    [anon_sym_littera] = ACTIONS(207),
    [anon_sym_lu16] = ACTIONS(207),
    [anon_sym_lu32] = ACTIONS(207),
    [anon_sym_lu64] = ACTIONS(207),
    [anon_sym_lu8] = ACTIONS(207),
    [anon_sym_map] = ACTIONS(207),
    [anon_sym_matrix] = ACTIONS(207),
    [anon_sym_mf16] = ACTIONS(207),
    [anon_sym_mf32] = ACTIONS(207),
    [anon_sym_mf64] = ACTIONS(207),
    [anon_sym_mi16] = ACTIONS(207),
    [anon_sym_mi32] = ACTIONS(207),
    [anon_sym_mi64] = ACTIONS(207),
    [anon_sym_mi8] = ACTIONS(207),
    [anon_sym_mu16] = ACTIONS(207),
    [anon_sym_mu32] = ACTIONS(207),
    [anon_sym_mu64] = ACTIONS(207),
    [anon_sym_mu8] = ACTIONS(207),
    [anon_sym_never] = ACTIONS(207),
    [anon_sym_numerus] = ACTIONS(207),
    [anon_sym_numquam] = ACTIONS(207),
    [anon_sym_octeti] = ACTIONS(207),
    [anon_sym_octetus] = ACTIONS(207),
    [anon_sym_promise] = ACTIONS(207),
    [anon_sym_promissum] = ACTIONS(207),
    [anon_sym_queue] = ACTIONS(207),
    [anon_sym_ratio] = ACTIONS(207),
    [anon_sym_record] = ACTIONS(207),
    [anon_sym_regex] = ACTIONS(207),
    [anon_sym_saturating] = ACTIONS(207),
    [anon_sym_saturatus] = ACTIONS(207),
    [anon_sym_series] = ACTIONS(207),
    [anon_sym_set] = ACTIONS(207),
    [anon_sym_sf16] = ACTIONS(207),
    [anon_sym_sf32] = ACTIONS(207),
    [anon_sym_sf64] = ACTIONS(207),
    [anon_sym_si16] = ACTIONS(207),
    [anon_sym_si32] = ACTIONS(207),
    [anon_sym_si64] = ACTIONS(207),
    [anon_sym_si8] = ACTIONS(207),
    [anon_sym_sparsa] = ACTIONS(207),
    [anon_sym_stack] = ACTIONS(207),
    [anon_sym_string] = ACTIONS(207),
    [anon_sym_su16] = ACTIONS(207),
    [anon_sym_su32] = ACTIONS(207),
    [anon_sym_su64] = ACTIONS(207),
    [anon_sym_su8] = ACTIONS(207),
    [anon_sym_tabula] = ACTIONS(207),
    [anon_sym_tensor] = ACTIONS(207),
    [anon_sym_textus] = ACTIONS(207),
    [anon_sym_tf16] = ACTIONS(207),
    [anon_sym_tf32] = ACTIONS(207),
    [anon_sym_tf64] = ACTIONS(207),
    [anon_sym_ti16] = ACTIONS(207),
    [anon_sym_ti32] = ACTIONS(207),
    [anon_sym_ti64] = ACTIONS(207),
    [anon_sym_ti8] = ACTIONS(207),
    [anon_sym_trapping] = ACTIONS(207),
    [anon_sym_tu16] = ACTIONS(207),
    [anon_sym_tu32] = ACTIONS(207),
    [anon_sym_tu64] = ACTIONS(207),
    [anon_sym_tu8] = ACTIONS(207),
    [anon_sym_u16] = ACTIONS(207),
    [anon_sym_u32] = ACTIONS(207),
    [anon_sym_u64] = ACTIONS(207),
    [anon_sym_u8] = ACTIONS(207),
    [anon_sym_unio] = ACTIONS(207),
    [anon_sym_unknown] = ACTIONS(207),
    [anon_sym_vacua] = ACTIONS(207),
    [anon_sym_vacuum] = ACTIONS(207),
    [anon_sym_valor] = ACTIONS(207),
    [anon_sym_vector] = ACTIONS(207),
    [anon_sym_vf16] = ACTIONS(207),
    [anon_sym_vf32] = ACTIONS(207),
    [anon_sym_vf64] = ACTIONS(207),
    [anon_sym_vi16] = ACTIONS(207),
    [anon_sym_vi32] = ACTIONS(207),
    [anon_sym_vi64] = ACTIONS(207),
    [anon_sym_vi8] = ACTIONS(207),
    [anon_sym_void] = ACTIONS(207),
    [anon_sym_vu16] = ACTIONS(207),
    [anon_sym_vu32] = ACTIONS(207),
    [anon_sym_vu64] = ACTIONS(207),
    [anon_sym_vu8] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_QMARK_DOT] = ACTIONS(205),
    [anon_sym_BANG_DOT] = ACTIONS(205),
    [anon_sym_ad] = ACTIONS(207),
    [anon_sym_adfirma] = ACTIONS(207),
    [anon_sym_apud] = ACTIONS(207),
    [anon_sym_args] = ACTIONS(207),
    [anon_sym_argumenta] = ACTIONS(207),
    [anon_sym_assert] = ACTIONS(207),
    [anon_sym_async_main] = ACTIONS(207),
    [anon_sym_at] = ACTIONS(207),
    [anon_sym_break] = ACTIONS(207),
    [anon_sym_call] = ACTIONS(207),
    [anon_sym_cape] = ACTIONS(207),
    [anon_sym_capta] = ACTIONS(207),
    [anon_sym_case] = ACTIONS(207),
    [anon_sym_casu] = ACTIONS(207),
    [anon_sym_catch] = ACTIONS(207),
    [anon_sym_ceterum] = ACTIONS(207),
    [anon_sym_continue] = ACTIONS(207),
    [anon_sym_custodi] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_discerne] = ACTIONS(207),
    [anon_sym_do] = ACTIONS(207),
    [anon_sym_dum] = ACTIONS(207),
    [anon_sym_elif] = ACTIONS(207),
    [anon_sym_elige] = ACTIONS(207),
    [anon_sym_else] = ACTIONS(207),
    [anon_sym_ergo] = ACTIONS(207),
    [anon_sym_fac] = ACTIONS(207),
    [anon_sym_for] = ACTIONS(207),
    [anon_sym_guard] = ACTIONS(207),
    [anon_sym_iace] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_incipiet] = ACTIONS(207),
    [anon_sym_incipit] = ACTIONS(207),
    [anon_sym_itera] = ACTIONS(207),
    [anon_sym_main] = ACTIONS(207),
    [anon_sym_match] = ACTIONS(207),
    [anon_sym_mori] = ACTIONS(207),
    [anon_sym_panic] = ACTIONS(207),
    [anon_sym_pass] = ACTIONS(207),
    [anon_sym_perge] = ACTIONS(207),
    [anon_sym_redde] = ACTIONS(207),
    [anon_sym_reice] = ACTIONS(207),
    [anon_sym_reject] = ACTIONS(207),
    [anon_sym_require] = ACTIONS(207),
    [anon_sym_requirit] = ACTIONS(207),
    [anon_sym_return] = ACTIONS(207),
    [anon_sym_rumpe] = ACTIONS(207),
    [anon_sym_secus] = ACTIONS(207),
    [anon_sym_si] = ACTIONS(207),
    [anon_sym_sic] = ACTIONS(207),
    [anon_sym_sin] = ACTIONS(207),
    [anon_sym_switch] = ACTIONS(207),
    [anon_sym_tacet] = ACTIONS(207),
    [anon_sym_then] = ACTIONS(207),
    [anon_sym_throw] = ACTIONS(207),
    [anon_sym_trap] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(207),
    [anon_sym_yields] = ACTIONS(207),
    [anon_sym_ceteri] = ACTIONS(207),
    [anon_sym_class] = ACTIONS(207),
    [anon_sym_column] = ACTIONS(207),
    [anon_sym_columna] = ACTIONS(207),
    [anon_sym_const] = ACTIONS(207),
    [anon_sym_discretio] = ACTIONS(207),
    [anon_sym_enum] = ACTIONS(207),
    [anon_sym_errata] = ACTIONS(207),
    [anon_sym_errors] = ACTIONS(207),
    [anon_sym_exit] = ACTIONS(207),
    [anon_sym_exitus] = ACTIONS(207),
    [anon_sym_fixum] = ACTIONS(207),
    [anon_sym_fn] = ACTIONS(207),
    [anon_sym_functio] = ACTIONS(207),
    [anon_sym_generis] = ACTIONS(207),
    [anon_sym_genus] = ACTIONS(207),
    [anon_sym_iacit] = ACTIONS(207),
    [anon_sym_immutata] = ACTIONS(207),
    [anon_sym_implendum] = ACTIONS(207),
    [anon_sym_import] = ACTIONS(207),
    [anon_sym_importa] = ACTIONS(207),
    [anon_sym_interface] = ACTIONS(207),
    [anon_sym_interna] = ACTIONS(207),
    [anon_sym_internal] = ACTIONS(207),
    [anon_sym_iuncta] = ACTIONS(207),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_magnitudo] = ACTIONS(207),
    [anon_sym_optional] = ACTIONS(207),
    [anon_sym_optiones] = ACTIONS(207),
    [anon_sym_options] = ACTIONS(207),
    [anon_sym_ordo] = ACTIONS(207),
    [anon_sym_prae] = ACTIONS(207),
    [anon_sym_readonly] = ACTIONS(207),
    [anon_sym_rest] = ACTIONS(207),
    [anon_sym_schema] = ACTIONS(207),
    [anon_sym_sit] = ACTIONS(207),
    [anon_sym_size] = ACTIONS(207),
    [anon_sym_sponte] = ACTIONS(207),
    [anon_sym_static] = ACTIONS(207),
    [anon_sym_throws] = ACTIONS(207),
    [anon_sym_tuple] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_typus] = ACTIONS(207),
    [anon_sym_union] = ACTIONS(207),
    [anon_sym_var] = ACTIONS(207),
    [anon_sym_varia] = ACTIONS(207),
    [anon_sym_ab] = ACTIONS(207),
    [anon_sym_all] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_ante] = ACTIONS(207),
    [anon_sym_as] = ACTIONS(207),
    [anon_sym_async] = ACTIONS(207),
    [anon_sym_async_generator] = ACTIONS(207),
    [anon_sym_async_setup] = ACTIONS(207),
    [anon_sym_async_teardown] = ACTIONS(207),
    [anon_sym_aut] = ACTIONS(207),
    [anon_sym_await] = ACTIONS(207),
    [anon_sym_await_const] = ACTIONS(207),
    [anon_sym_await_var] = ACTIONS(207),
    [anon_sym_before] = ACTIONS(207),
    [anon_sym_bench] = ACTIONS(207),
    [anon_sym_cede] = ACTIONS(207),
    [anon_sym_clausura] = ACTIONS(207),
    [anon_sym_coalesce] = ACTIONS(207),
    [anon_sym_comptime] = ACTIONS(207),
    [anon_sym_copy] = ACTIONS(207),
    [anon_sym_de] = ACTIONS(207),
    [anon_sym_debug] = ACTIONS(207),
    [anon_sym_describe] = ACTIONS(207),
    [anon_sym_ego] = ACTIONS(207),
    [anon_sym_embed] = ACTIONS(207),
    [anon_sym_erratur] = ACTIONS(207),
    [anon_sym_est] = ACTIONS(207),
    [anon_sym_et] = ACTIONS(207),
    [anon_sym_ex] = ACTIONS(207),
    [anon_sym_exemplum] = ACTIONS(207),
    [anon_sym_expect_failure] = ACTIONS(207),
    [anon_sym_fient] = ACTIONS(207),
    [anon_sym_fiet] = ACTIONS(207),
    [anon_sym_figendum] = ACTIONS(207),
    [anon_sym_finge] = ACTIONS(207),
    [anon_sym_fiunt] = ACTIONS(207),
    [anon_sym_flaky] = ACTIONS(207),
    [anon_sym_format] = ACTIONS(207),
    [anon_sym_fragilis] = ACTIONS(207),
    [anon_sym_from] = ACTIONS(207),
    [anon_sym_futurum] = ACTIONS(207),
    [anon_sym_generator] = ACTIONS(207),
    [anon_sym_implements] = ACTIONS(207),
    [anon_sym_implet] = ACTIONS(207),
    [anon_sym_in] = ACTIONS(207),
    [anon_sym_insere] = ACTIONS(207),
    [anon_sym_is] = ACTIONS(207),
    [anon_sym_lambda] = ACTIONS(207),
    [anon_sym_lege] = ACTIONS(207),
    [anon_sym_line] = ACTIONS(207),
    [anon_sym_lineam] = ACTIONS(207),
    [anon_sym_metior] = ACTIONS(207),
    [anon_sym_modulus] = ACTIONS(207),
    [anon_sym_mone] = ACTIONS(207),
    [anon_sym_mut] = ACTIONS(207),
    [anon_sym_negative] = ACTIONS(207),
    [anon_sym_negativum] = ACTIONS(207),
    [anon_sym_nihil] = ACTIONS(207),
    [anon_sym_non] = ACTIONS(207),
    [anon_sym_none] = ACTIONS(207),
    [anon_sym_nonnihil] = ACTIONS(207),
    [anon_sym_nonnulla] = ACTIONS(207),
    [anon_sym_not] = ACTIONS(207),
    [anon_sym_nota] = ACTIONS(207),
    [anon_sym_null] = ACTIONS(207),
    [anon_sym_nulla] = ACTIONS(207),
    [anon_sym_omitte] = ACTIONS(207),
    [anon_sym_omnia] = ACTIONS(207),
    [anon_sym_only] = ACTIONS(207),
    [anon_sym_only_in] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(207),
    [anon_sym_own] = ACTIONS(207),
    [anon_sym_penes] = ACTIONS(207),
    [anon_sym_per] = ACTIONS(207),
    [anon_sym_positive] = ACTIONS(207),
    [anon_sym_positivum] = ACTIONS(207),
    [anon_sym_postpara] = ACTIONS(207),
    [anon_sym_postparabit] = ACTIONS(207),
    [anon_sym_praefixum] = ACTIONS(207),
    [anon_sym_praepara] = ACTIONS(207),
    [anon_sym_praeparabit] = ACTIONS(207),
    [anon_sym_print] = ACTIONS(207),
    [anon_sym_proba] = ACTIONS(207),
    [anon_sym_probandum] = ACTIONS(207),
    [anon_sym_range] = ACTIONS(207),
    [anon_sym_read] = ACTIONS(207),
    [anon_sym_reddet] = ACTIONS(207),
    [anon_sym_ref] = ACTIONS(207),
    [anon_sym_repeat] = ACTIONS(207),
    [anon_sym_repete] = ACTIONS(207),
    [anon_sym_return_await] = ACTIONS(207),
    [anon_sym_scribe] = ACTIONS(207),
    [anon_sym_scriptum] = ACTIONS(207),
    [anon_sym_self] = ACTIONS(207),
    [anon_sym_setup] = ACTIONS(207),
    [anon_sym_skip] = ACTIONS(207),
    [anon_sym_solum] = ACTIONS(207),
    [anon_sym_solum_in] = ACTIONS(207),
    [anon_sym_some] = ACTIONS(207),
    [anon_sym_sparge] = ACTIONS(207),
    [anon_sym_spread] = ACTIONS(207),
    [anon_sym_step] = ACTIONS(207),
    [anon_sym_tacebit] = ACTIONS(207),
    [anon_sym_tag] = ACTIONS(207),
    [anon_sym_teardown] = ACTIONS(207),
    [anon_sym_temporis] = ACTIONS(207),
    [anon_sym_test] = ACTIONS(207),
    [anon_sym_timeout] = ACTIONS(207),
    [anon_sym_todo] = ACTIONS(207),
    [anon_sym_until] = ACTIONS(207),
    [anon_sym_usque] = ACTIONS(207),
    [anon_sym_ut] = ACTIONS(207),
    [anon_sym_variandum] = ACTIONS(207),
    [anon_sym_variant] = ACTIONS(207),
    [anon_sym_vel] = ACTIONS(207),
    [anon_sym_via] = ACTIONS(207),
    [anon_sym_vide] = ACTIONS(207),
    [anon_sym_warn] = ACTIONS(207),
    [anon_sym_wrapping] = ACTIONS(207),
    [anon_sym_write] = ACTIONS(207),
    [anon_sym_yield] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_falsum] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_verum] = ACTIONS(207),
    [sym_guillemet_string] = ACTIONS(205),
    [sym_octeti_string] = ACTIONS(205),
    [sym_backtick_string] = ACTIONS(205),
    [sym_ascii_string] = ACTIONS(205),
    [sym_string] = ACTIONS(205),
    [sym_number] = ACTIONS(205),
    [sym_identifier] = ACTIONS(207),
    [sym_operator] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [sym_hash] = ACTIONS(205),
    [sym_line_comment] = ACTIONS(205),
    [sym_faber_newline] = ACTIONS(205),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_at_sign] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_cli] = ACTIONS(211),
    [anon_sym_conversio] = ACTIONS(211),
    [anon_sym_conversion] = ACTIONS(211),
    [anon_sym_cursor] = ACTIONS(211),
    [anon_sym_fragment] = ACTIONS(211),
    [anon_sym_futura] = ACTIONS(211),
    [anon_sym_imperium] = ACTIONS(211),
    [anon_sym_json] = ACTIONS(211),
    [anon_sym_nondum] = ACTIONS(211),
    [anon_sym_nucleum] = ACTIONS(211),
    [anon_sym_operandus] = ACTIONS(211),
    [anon_sym_optio] = ACTIONS(211),
    [anon_sym_privata] = ACTIONS(211),
    [anon_sym_private] = ACTIONS(211),
    [anon_sym_protecta] = ACTIONS(211),
    [anon_sym_protected] = ACTIONS(211),
    [anon_sym_public] = ACTIONS(211),
    [anon_sym_publica] = ACTIONS(211),
    [anon_sym_radix] = ACTIONS(211),
    [anon_sym_verte] = ACTIONS(211),
    [anon_sym_vertex] = ACTIONS(211),
    [anon_sym_ascii] = ACTIONS(211),
    [anon_sym_bivalens] = ACTIONS(211),
    [anon_sym_bool] = ACTIONS(211),
    [anon_sym_byte] = ACTIONS(211),
    [anon_sym_bytes] = ACTIONS(211),
    [anon_sym_char] = ACTIONS(211),
    [anon_sym_copia] = ACTIONS(211),
    [anon_sym_cursor_t] = ACTIONS(211),
    [anon_sym_exactus] = ACTIONS(211),
    [anon_sym_f16] = ACTIONS(211),
    [anon_sym_f32] = ACTIONS(211),
    [anon_sym_f64] = ACTIONS(211),
    [anon_sym_float] = ACTIONS(211),
    [anon_sym_fractus] = ACTIONS(211),
    [anon_sym_i16] = ACTIONS(211),
    [anon_sym_i32] = ACTIONS(211),
    [anon_sym_i64] = ACTIONS(211),
    [anon_sym_i8] = ACTIONS(211),
    [anon_sym_ignotum] = ACTIONS(211),
    [anon_sym_instans] = ACTIONS(211),
    [anon_sym_instant] = ACTIONS(211),
    [anon_sym_int] = ACTIONS(211),
    [anon_sym_intervallum] = ACTIONS(211),
    [anon_sym_iterator] = ACTIONS(211),
    [anon_sym_lf16] = ACTIONS(211),
    [anon_sym_lf32] = ACTIONS(211),
    [anon_sym_lf64] = ACTIONS(211),
    [anon_sym_li16] = ACTIONS(211),
    [anon_sym_li32] = ACTIONS(211),
    [anon_sym_li64] = ACTIONS(211),
    [anon_sym_li8] = ACTIONS(211),
    [anon_sym_list] = ACTIONS(211),
    [anon_sym_lista] = ACTIONS(211),
    [anon_sym_littera] = ACTIONS(211),
    [anon_sym_lu16] = ACTIONS(211),
    [anon_sym_lu32] = ACTIONS(211),
    [anon_sym_lu64] = ACTIONS(211),
    [anon_sym_lu8] = ACTIONS(211),
    [anon_sym_map] = ACTIONS(211),
    [anon_sym_matrix] = ACTIONS(211),
    [anon_sym_mf16] = ACTIONS(211),
    [anon_sym_mf32] = ACTIONS(211),
    [anon_sym_mf64] = ACTIONS(211),
    [anon_sym_mi16] = ACTIONS(211),
    [anon_sym_mi32] = ACTIONS(211),
    [anon_sym_mi64] = ACTIONS(211),
    [anon_sym_mi8] = ACTIONS(211),
    [anon_sym_mu16] = ACTIONS(211),
    [anon_sym_mu32] = ACTIONS(211),
    [anon_sym_mu64] = ACTIONS(211),
    [anon_sym_mu8] = ACTIONS(211),
    [anon_sym_never] = ACTIONS(211),
    [anon_sym_numerus] = ACTIONS(211),
    [anon_sym_numquam] = ACTIONS(211),
    [anon_sym_octeti] = ACTIONS(211),
    [anon_sym_octetus] = ACTIONS(211),
    [anon_sym_promise] = ACTIONS(211),
    [anon_sym_promissum] = ACTIONS(211),
    [anon_sym_queue] = ACTIONS(211),
    [anon_sym_ratio] = ACTIONS(211),
    [anon_sym_record] = ACTIONS(211),
    [anon_sym_regex] = ACTIONS(211),
    [anon_sym_saturating] = ACTIONS(211),
    [anon_sym_saturatus] = ACTIONS(211),
    [anon_sym_series] = ACTIONS(211),
    [anon_sym_set] = ACTIONS(211),
    [anon_sym_sf16] = ACTIONS(211),
    [anon_sym_sf32] = ACTIONS(211),
    [anon_sym_sf64] = ACTIONS(211),
    [anon_sym_si16] = ACTIONS(211),
    [anon_sym_si32] = ACTIONS(211),
    [anon_sym_si64] = ACTIONS(211),
    [anon_sym_si8] = ACTIONS(211),
    [anon_sym_sparsa] = ACTIONS(211),
    [anon_sym_stack] = ACTIONS(211),
    [anon_sym_string] = ACTIONS(211),
    [anon_sym_su16] = ACTIONS(211),
    [anon_sym_su32] = ACTIONS(211),
    [anon_sym_su64] = ACTIONS(211),
    [anon_sym_su8] = ACTIONS(211),
    [anon_sym_tabula] = ACTIONS(211),
    [anon_sym_tensor] = ACTIONS(211),
    [anon_sym_textus] = ACTIONS(211),
    [anon_sym_tf16] = ACTIONS(211),
    [anon_sym_tf32] = ACTIONS(211),
    [anon_sym_tf64] = ACTIONS(211),
    [anon_sym_ti16] = ACTIONS(211),
    [anon_sym_ti32] = ACTIONS(211),
    [anon_sym_ti64] = ACTIONS(211),
    [anon_sym_ti8] = ACTIONS(211),
    [anon_sym_trapping] = ACTIONS(211),
    [anon_sym_tu16] = ACTIONS(211),
    [anon_sym_tu32] = ACTIONS(211),
    [anon_sym_tu64] = ACTIONS(211),
    [anon_sym_tu8] = ACTIONS(211),
    [anon_sym_u16] = ACTIONS(211),
    [anon_sym_u32] = ACTIONS(211),
    [anon_sym_u64] = ACTIONS(211),
    [anon_sym_u8] = ACTIONS(211),
    [anon_sym_unio] = ACTIONS(211),
    [anon_sym_unknown] = ACTIONS(211),
    [anon_sym_vacua] = ACTIONS(211),
    [anon_sym_vacuum] = ACTIONS(211),
    [anon_sym_valor] = ACTIONS(211),
    [anon_sym_vector] = ACTIONS(211),
    [anon_sym_vf16] = ACTIONS(211),
    [anon_sym_vf32] = ACTIONS(211),
    [anon_sym_vf64] = ACTIONS(211),
    [anon_sym_vi16] = ACTIONS(211),
    [anon_sym_vi32] = ACTIONS(211),
    [anon_sym_vi64] = ACTIONS(211),
    [anon_sym_vi8] = ACTIONS(211),
    [anon_sym_void] = ACTIONS(211),
    [anon_sym_vu16] = ACTIONS(211),
    [anon_sym_vu32] = ACTIONS(211),
    [anon_sym_vu64] = ACTIONS(211),
    [anon_sym_vu8] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_QMARK_DOT] = ACTIONS(209),
    [anon_sym_BANG_DOT] = ACTIONS(209),
    [anon_sym_ad] = ACTIONS(211),
    [anon_sym_adfirma] = ACTIONS(211),
    [anon_sym_apud] = ACTIONS(211),
    [anon_sym_args] = ACTIONS(211),
    [anon_sym_argumenta] = ACTIONS(211),
    [anon_sym_assert] = ACTIONS(211),
    [anon_sym_async_main] = ACTIONS(211),
    [anon_sym_at] = ACTIONS(211),
    [anon_sym_break] = ACTIONS(211),
    [anon_sym_call] = ACTIONS(211),
    [anon_sym_cape] = ACTIONS(211),
    [anon_sym_capta] = ACTIONS(211),
    [anon_sym_case] = ACTIONS(211),
    [anon_sym_casu] = ACTIONS(211),
    [anon_sym_catch] = ACTIONS(211),
    [anon_sym_ceterum] = ACTIONS(211),
    [anon_sym_continue] = ACTIONS(211),
    [anon_sym_custodi] = ACTIONS(211),
    [anon_sym_default] = ACTIONS(211),
    [anon_sym_discerne] = ACTIONS(211),
    [anon_sym_do] = ACTIONS(211),
    [anon_sym_dum] = ACTIONS(211),
    [anon_sym_elif] = ACTIONS(211),
    [anon_sym_elige] = ACTIONS(211),
    [anon_sym_else] = ACTIONS(211),
    [anon_sym_ergo] = ACTIONS(211),
    [anon_sym_fac] = ACTIONS(211),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_guard] = ACTIONS(211),
    [anon_sym_iace] = ACTIONS(211),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_incipiet] = ACTIONS(211),
    [anon_sym_incipit] = ACTIONS(211),
    [anon_sym_itera] = ACTIONS(211),
    [anon_sym_main] = ACTIONS(211),
    [anon_sym_match] = ACTIONS(211),
    [anon_sym_mori] = ACTIONS(211),
    [anon_sym_panic] = ACTIONS(211),
    [anon_sym_pass] = ACTIONS(211),
    [anon_sym_perge] = ACTIONS(211),
    [anon_sym_redde] = ACTIONS(211),
    [anon_sym_reice] = ACTIONS(211),
    [anon_sym_reject] = ACTIONS(211),
    [anon_sym_require] = ACTIONS(211),
    [anon_sym_requirit] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(211),
    [anon_sym_rumpe] = ACTIONS(211),
    [anon_sym_secus] = ACTIONS(211),
    [anon_sym_si] = ACTIONS(211),
    [anon_sym_sic] = ACTIONS(211),
    [anon_sym_sin] = ACTIONS(211),
    [anon_sym_switch] = ACTIONS(211),
    [anon_sym_tacet] = ACTIONS(211),
    [anon_sym_then] = ACTIONS(211),
    [anon_sym_throw] = ACTIONS(211),
    [anon_sym_trap] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(211),
    [anon_sym_yields] = ACTIONS(211),
    [anon_sym_ceteri] = ACTIONS(211),
    [anon_sym_class] = ACTIONS(211),
    [anon_sym_column] = ACTIONS(211),
    [anon_sym_columna] = ACTIONS(211),
    [anon_sym_const] = ACTIONS(211),
    [anon_sym_discretio] = ACTIONS(211),
    [anon_sym_enum] = ACTIONS(211),
    [anon_sym_errata] = ACTIONS(211),
    [anon_sym_errors] = ACTIONS(211),
    [anon_sym_exit] = ACTIONS(211),
    [anon_sym_exitus] = ACTIONS(211),
    [anon_sym_fixum] = ACTIONS(211),
    [anon_sym_fn] = ACTIONS(211),
    [anon_sym_functio] = ACTIONS(211),
    [anon_sym_generis] = ACTIONS(211),
    [anon_sym_genus] = ACTIONS(211),
    [anon_sym_iacit] = ACTIONS(211),
    [anon_sym_immutata] = ACTIONS(211),
    [anon_sym_implendum] = ACTIONS(211),
    [anon_sym_import] = ACTIONS(211),
    [anon_sym_importa] = ACTIONS(211),
    [anon_sym_interface] = ACTIONS(211),
    [anon_sym_interna] = ACTIONS(211),
    [anon_sym_internal] = ACTIONS(211),
    [anon_sym_iuncta] = ACTIONS(211),
    [anon_sym_let] = ACTIONS(211),
    [anon_sym_magnitudo] = ACTIONS(211),
    [anon_sym_optional] = ACTIONS(211),
    [anon_sym_optiones] = ACTIONS(211),
    [anon_sym_options] = ACTIONS(211),
    [anon_sym_ordo] = ACTIONS(211),
    [anon_sym_prae] = ACTIONS(211),
    [anon_sym_readonly] = ACTIONS(211),
    [anon_sym_rest] = ACTIONS(211),
    [anon_sym_schema] = ACTIONS(211),
    [anon_sym_sit] = ACTIONS(211),
    [anon_sym_size] = ACTIONS(211),
    [anon_sym_sponte] = ACTIONS(211),
    [anon_sym_static] = ACTIONS(211),
    [anon_sym_throws] = ACTIONS(211),
    [anon_sym_tuple] = ACTIONS(211),
    [anon_sym_type] = ACTIONS(211),
    [anon_sym_typus] = ACTIONS(211),
    [anon_sym_union] = ACTIONS(211),
    [anon_sym_var] = ACTIONS(211),
    [anon_sym_varia] = ACTIONS(211),
    [anon_sym_ab] = ACTIONS(211),
    [anon_sym_all] = ACTIONS(211),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_ante] = ACTIONS(211),
    [anon_sym_as] = ACTIONS(211),
    [anon_sym_async] = ACTIONS(211),
    [anon_sym_async_generator] = ACTIONS(211),
    [anon_sym_async_setup] = ACTIONS(211),
    [anon_sym_async_teardown] = ACTIONS(211),
    [anon_sym_aut] = ACTIONS(211),
    [anon_sym_await] = ACTIONS(211),
    [anon_sym_await_const] = ACTIONS(211),
    [anon_sym_await_var] = ACTIONS(211),
    [anon_sym_before] = ACTIONS(211),
    [anon_sym_bench] = ACTIONS(211),
    [anon_sym_cede] = ACTIONS(211),
    [anon_sym_clausura] = ACTIONS(211),
    [anon_sym_coalesce] = ACTIONS(211),
    [anon_sym_comptime] = ACTIONS(211),
    [anon_sym_copy] = ACTIONS(211),
    [anon_sym_de] = ACTIONS(211),
    [anon_sym_debug] = ACTIONS(211),
    [anon_sym_describe] = ACTIONS(211),
    [anon_sym_ego] = ACTIONS(211),
    [anon_sym_embed] = ACTIONS(211),
    [anon_sym_erratur] = ACTIONS(211),
    [anon_sym_est] = ACTIONS(211),
    [anon_sym_et] = ACTIONS(211),
    [anon_sym_ex] = ACTIONS(211),
    [anon_sym_exemplum] = ACTIONS(211),
    [anon_sym_expect_failure] = ACTIONS(211),
    [anon_sym_fient] = ACTIONS(211),
    [anon_sym_fiet] = ACTIONS(211),
    [anon_sym_figendum] = ACTIONS(211),
    [anon_sym_finge] = ACTIONS(211),
    [anon_sym_fiunt] = ACTIONS(211),
    [anon_sym_flaky] = ACTIONS(211),
    [anon_sym_format] = ACTIONS(211),
    [anon_sym_fragilis] = ACTIONS(211),
    [anon_sym_from] = ACTIONS(211),
    [anon_sym_futurum] = ACTIONS(211),
    [anon_sym_generator] = ACTIONS(211),
    [anon_sym_implements] = ACTIONS(211),
    [anon_sym_implet] = ACTIONS(211),
    [anon_sym_in] = ACTIONS(211),
    [anon_sym_insere] = ACTIONS(211),
    [anon_sym_is] = ACTIONS(211),
    [anon_sym_lambda] = ACTIONS(211),
    [anon_sym_lege] = ACTIONS(211),
    [anon_sym_line] = ACTIONS(211),
    [anon_sym_lineam] = ACTIONS(211),
    [anon_sym_metior] = ACTIONS(211),
    [anon_sym_modulus] = ACTIONS(211),
    [anon_sym_mone] = ACTIONS(211),
    [anon_sym_mut] = ACTIONS(211),
    [anon_sym_negative] = ACTIONS(211),
    [anon_sym_negativum] = ACTIONS(211),
    [anon_sym_nihil] = ACTIONS(211),
    [anon_sym_non] = ACTIONS(211),
    [anon_sym_none] = ACTIONS(211),
    [anon_sym_nonnihil] = ACTIONS(211),
    [anon_sym_nonnulla] = ACTIONS(211),
    [anon_sym_not] = ACTIONS(211),
    [anon_sym_nota] = ACTIONS(211),
    [anon_sym_null] = ACTIONS(211),
    [anon_sym_nulla] = ACTIONS(211),
    [anon_sym_omitte] = ACTIONS(211),
    [anon_sym_omnia] = ACTIONS(211),
    [anon_sym_only] = ACTIONS(211),
    [anon_sym_only_in] = ACTIONS(211),
    [anon_sym_or] = ACTIONS(211),
    [anon_sym_own] = ACTIONS(211),
    [anon_sym_penes] = ACTIONS(211),
    [anon_sym_per] = ACTIONS(211),
    [anon_sym_positive] = ACTIONS(211),
    [anon_sym_positivum] = ACTIONS(211),
    [anon_sym_postpara] = ACTIONS(211),
    [anon_sym_postparabit] = ACTIONS(211),
    [anon_sym_praefixum] = ACTIONS(211),
    [anon_sym_praepara] = ACTIONS(211),
    [anon_sym_praeparabit] = ACTIONS(211),
    [anon_sym_print] = ACTIONS(211),
    [anon_sym_proba] = ACTIONS(211),
    [anon_sym_probandum] = ACTIONS(211),
    [anon_sym_range] = ACTIONS(211),
    [anon_sym_read] = ACTIONS(211),
    [anon_sym_reddet] = ACTIONS(211),
    [anon_sym_ref] = ACTIONS(211),
    [anon_sym_repeat] = ACTIONS(211),
    [anon_sym_repete] = ACTIONS(211),
    [anon_sym_return_await] = ACTIONS(211),
    [anon_sym_scribe] = ACTIONS(211),
    [anon_sym_scriptum] = ACTIONS(211),
    [anon_sym_self] = ACTIONS(211),
    [anon_sym_setup] = ACTIONS(211),
    [anon_sym_skip] = ACTIONS(211),
    [anon_sym_solum] = ACTIONS(211),
    [anon_sym_solum_in] = ACTIONS(211),
    [anon_sym_some] = ACTIONS(211),
    [anon_sym_sparge] = ACTIONS(211),
    [anon_sym_spread] = ACTIONS(211),
    [anon_sym_step] = ACTIONS(211),
    [anon_sym_tacebit] = ACTIONS(211),
    [anon_sym_tag] = ACTIONS(211),
    [anon_sym_teardown] = ACTIONS(211),
    [anon_sym_temporis] = ACTIONS(211),
    [anon_sym_test] = ACTIONS(211),
    [anon_sym_timeout] = ACTIONS(211),
    [anon_sym_todo] = ACTIONS(211),
    [anon_sym_until] = ACTIONS(211),
    [anon_sym_usque] = ACTIONS(211),
    [anon_sym_ut] = ACTIONS(211),
    [anon_sym_variandum] = ACTIONS(211),
    [anon_sym_variant] = ACTIONS(211),
    [anon_sym_vel] = ACTIONS(211),
    [anon_sym_via] = ACTIONS(211),
    [anon_sym_vide] = ACTIONS(211),
    [anon_sym_warn] = ACTIONS(211),
    [anon_sym_wrapping] = ACTIONS(211),
    [anon_sym_write] = ACTIONS(211),
    [anon_sym_yield] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [anon_sym_falsum] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_verum] = ACTIONS(211),
    [sym_guillemet_string] = ACTIONS(209),
    [sym_octeti_string] = ACTIONS(209),
    [sym_backtick_string] = ACTIONS(209),
    [sym_ascii_string] = ACTIONS(209),
    [sym_string] = ACTIONS(209),
    [sym_number] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_operator] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [sym_hash] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(209),
    [sym_faber_newline] = ACTIONS(209),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_at_sign] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_cli] = ACTIONS(163),
    [anon_sym_conversio] = ACTIONS(163),
    [anon_sym_conversion] = ACTIONS(163),
    [anon_sym_cursor] = ACTIONS(163),
    [anon_sym_fragment] = ACTIONS(163),
    [anon_sym_futura] = ACTIONS(163),
    [anon_sym_imperium] = ACTIONS(163),
    [anon_sym_json] = ACTIONS(163),
    [anon_sym_nondum] = ACTIONS(163),
    [anon_sym_nucleum] = ACTIONS(163),
    [anon_sym_operandus] = ACTIONS(163),
    [anon_sym_optio] = ACTIONS(163),
    [anon_sym_privata] = ACTIONS(163),
    [anon_sym_private] = ACTIONS(163),
    [anon_sym_protecta] = ACTIONS(163),
    [anon_sym_protected] = ACTIONS(163),
    [anon_sym_public] = ACTIONS(163),
    [anon_sym_publica] = ACTIONS(163),
    [anon_sym_radix] = ACTIONS(163),
    [anon_sym_verte] = ACTIONS(163),
    [anon_sym_vertex] = ACTIONS(163),
    [anon_sym_ascii] = ACTIONS(163),
    [anon_sym_bivalens] = ACTIONS(163),
    [anon_sym_bool] = ACTIONS(163),
    [anon_sym_byte] = ACTIONS(163),
    [anon_sym_bytes] = ACTIONS(163),
    [anon_sym_char] = ACTIONS(163),
    [anon_sym_copia] = ACTIONS(163),
    [anon_sym_cursor_t] = ACTIONS(163),
    [anon_sym_exactus] = ACTIONS(163),
    [anon_sym_f16] = ACTIONS(163),
    [anon_sym_f32] = ACTIONS(163),
    [anon_sym_f64] = ACTIONS(163),
    [anon_sym_float] = ACTIONS(163),
    [anon_sym_fractus] = ACTIONS(163),
    [anon_sym_i16] = ACTIONS(163),
    [anon_sym_i32] = ACTIONS(163),
    [anon_sym_i64] = ACTIONS(163),
    [anon_sym_i8] = ACTIONS(163),
    [anon_sym_ignotum] = ACTIONS(163),
    [anon_sym_instans] = ACTIONS(163),
    [anon_sym_instant] = ACTIONS(163),
    [anon_sym_int] = ACTIONS(163),
    [anon_sym_intervallum] = ACTIONS(163),
    [anon_sym_iterator] = ACTIONS(163),
    [anon_sym_lf16] = ACTIONS(163),
    [anon_sym_lf32] = ACTIONS(163),
    [anon_sym_lf64] = ACTIONS(163),
    [anon_sym_li16] = ACTIONS(163),
    [anon_sym_li32] = ACTIONS(163),
    [anon_sym_li64] = ACTIONS(163),
    [anon_sym_li8] = ACTIONS(163),
    [anon_sym_list] = ACTIONS(163),
    [anon_sym_lista] = ACTIONS(163),
    [anon_sym_littera] = ACTIONS(163),
    [anon_sym_lu16] = ACTIONS(163),
    [anon_sym_lu32] = ACTIONS(163),
    [anon_sym_lu64] = ACTIONS(163),
    [anon_sym_lu8] = ACTIONS(163),
    [anon_sym_map] = ACTIONS(163),
    [anon_sym_matrix] = ACTIONS(163),
    [anon_sym_mf16] = ACTIONS(163),
    [anon_sym_mf32] = ACTIONS(163),
    [anon_sym_mf64] = ACTIONS(163),
    [anon_sym_mi16] = ACTIONS(163),
    [anon_sym_mi32] = ACTIONS(163),
    [anon_sym_mi64] = ACTIONS(163),
    [anon_sym_mi8] = ACTIONS(163),
    [anon_sym_mu16] = ACTIONS(163),
    [anon_sym_mu32] = ACTIONS(163),
    [anon_sym_mu64] = ACTIONS(163),
    [anon_sym_mu8] = ACTIONS(163),
    [anon_sym_never] = ACTIONS(163),
    [anon_sym_numerus] = ACTIONS(163),
    [anon_sym_numquam] = ACTIONS(163),
    [anon_sym_octeti] = ACTIONS(163),
    [anon_sym_octetus] = ACTIONS(163),
    [anon_sym_promise] = ACTIONS(163),
    [anon_sym_promissum] = ACTIONS(163),
    [anon_sym_queue] = ACTIONS(163),
    [anon_sym_ratio] = ACTIONS(163),
    [anon_sym_record] = ACTIONS(163),
    [anon_sym_regex] = ACTIONS(163),
    [anon_sym_saturating] = ACTIONS(163),
    [anon_sym_saturatus] = ACTIONS(163),
    [anon_sym_series] = ACTIONS(163),
    [anon_sym_set] = ACTIONS(163),
    [anon_sym_sf16] = ACTIONS(163),
    [anon_sym_sf32] = ACTIONS(163),
    [anon_sym_sf64] = ACTIONS(163),
    [anon_sym_si16] = ACTIONS(163),
    [anon_sym_si32] = ACTIONS(163),
    [anon_sym_si64] = ACTIONS(163),
    [anon_sym_si8] = ACTIONS(163),
    [anon_sym_sparsa] = ACTIONS(163),
    [anon_sym_stack] = ACTIONS(163),
    [anon_sym_string] = ACTIONS(163),
    [anon_sym_su16] = ACTIONS(163),
    [anon_sym_su32] = ACTIONS(163),
    [anon_sym_su64] = ACTIONS(163),
    [anon_sym_su8] = ACTIONS(163),
    [anon_sym_tabula] = ACTIONS(163),
    [anon_sym_tensor] = ACTIONS(163),
    [anon_sym_textus] = ACTIONS(163),
    [anon_sym_tf16] = ACTIONS(163),
    [anon_sym_tf32] = ACTIONS(163),
    [anon_sym_tf64] = ACTIONS(163),
    [anon_sym_ti16] = ACTIONS(163),
    [anon_sym_ti32] = ACTIONS(163),
    [anon_sym_ti64] = ACTIONS(163),
    [anon_sym_ti8] = ACTIONS(163),
    [anon_sym_trapping] = ACTIONS(163),
    [anon_sym_tu16] = ACTIONS(163),
    [anon_sym_tu32] = ACTIONS(163),
    [anon_sym_tu64] = ACTIONS(163),
    [anon_sym_tu8] = ACTIONS(163),
    [anon_sym_u16] = ACTIONS(163),
    [anon_sym_u32] = ACTIONS(163),
    [anon_sym_u64] = ACTIONS(163),
    [anon_sym_u8] = ACTIONS(163),
    [anon_sym_unio] = ACTIONS(163),
    [anon_sym_unknown] = ACTIONS(163),
    [anon_sym_vacua] = ACTIONS(163),
    [anon_sym_vacuum] = ACTIONS(163),
    [anon_sym_valor] = ACTIONS(163),
    [anon_sym_vector] = ACTIONS(163),
    [anon_sym_vf16] = ACTIONS(163),
    [anon_sym_vf32] = ACTIONS(163),
    [anon_sym_vf64] = ACTIONS(163),
    [anon_sym_vi16] = ACTIONS(163),
    [anon_sym_vi32] = ACTIONS(163),
    [anon_sym_vi64] = ACTIONS(163),
    [anon_sym_vi8] = ACTIONS(163),
    [anon_sym_void] = ACTIONS(163),
    [anon_sym_vu16] = ACTIONS(163),
    [anon_sym_vu32] = ACTIONS(163),
    [anon_sym_vu64] = ACTIONS(163),
    [anon_sym_vu8] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_QMARK_DOT] = ACTIONS(161),
    [anon_sym_BANG_DOT] = ACTIONS(161),
    [anon_sym_ad] = ACTIONS(163),
    [anon_sym_adfirma] = ACTIONS(163),
    [anon_sym_apud] = ACTIONS(163),
    [anon_sym_args] = ACTIONS(163),
    [anon_sym_argumenta] = ACTIONS(163),
    [anon_sym_assert] = ACTIONS(163),
    [anon_sym_async_main] = ACTIONS(163),
    [anon_sym_at] = ACTIONS(163),
    [anon_sym_break] = ACTIONS(163),
    [anon_sym_call] = ACTIONS(163),
    [anon_sym_cape] = ACTIONS(163),
    [anon_sym_capta] = ACTIONS(163),
    [anon_sym_case] = ACTIONS(163),
    [anon_sym_casu] = ACTIONS(163),
    [anon_sym_catch] = ACTIONS(163),
    [anon_sym_ceterum] = ACTIONS(163),
    [anon_sym_continue] = ACTIONS(163),
    [anon_sym_custodi] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
    [anon_sym_discerne] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(163),
    [anon_sym_dum] = ACTIONS(163),
    [anon_sym_elif] = ACTIONS(163),
    [anon_sym_elige] = ACTIONS(163),
    [anon_sym_else] = ACTIONS(163),
    [anon_sym_ergo] = ACTIONS(163),
    [anon_sym_fac] = ACTIONS(163),
    [anon_sym_for] = ACTIONS(163),
    [anon_sym_guard] = ACTIONS(163),
    [anon_sym_iace] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_incipiet] = ACTIONS(163),
    [anon_sym_incipit] = ACTIONS(163),
    [anon_sym_itera] = ACTIONS(163),
    [anon_sym_main] = ACTIONS(163),
    [anon_sym_match] = ACTIONS(163),
    [anon_sym_mori] = ACTIONS(163),
    [anon_sym_panic] = ACTIONS(163),
    [anon_sym_pass] = ACTIONS(163),
    [anon_sym_perge] = ACTIONS(163),
    [anon_sym_redde] = ACTIONS(163),
    [anon_sym_reice] = ACTIONS(163),
    [anon_sym_reject] = ACTIONS(163),
    [anon_sym_require] = ACTIONS(163),
    [anon_sym_requirit] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(163),
    [anon_sym_rumpe] = ACTIONS(163),
    [anon_sym_secus] = ACTIONS(163),
    [anon_sym_si] = ACTIONS(163),
    [anon_sym_sic] = ACTIONS(163),
    [anon_sym_sin] = ACTIONS(163),
    [anon_sym_switch] = ACTIONS(163),
    [anon_sym_tacet] = ACTIONS(163),
    [anon_sym_then] = ACTIONS(163),
    [anon_sym_throw] = ACTIONS(163),
    [anon_sym_trap] = ACTIONS(163),
    [anon_sym_while] = ACTIONS(163),
    [anon_sym_yields] = ACTIONS(163),
    [anon_sym_ceteri] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_column] = ACTIONS(163),
    [anon_sym_columna] = ACTIONS(163),
    [anon_sym_const] = ACTIONS(163),
    [anon_sym_discretio] = ACTIONS(163),
    [anon_sym_enum] = ACTIONS(163),
    [anon_sym_errata] = ACTIONS(163),
    [anon_sym_errors] = ACTIONS(163),
    [anon_sym_exit] = ACTIONS(163),
    [anon_sym_exitus] = ACTIONS(163),
    [anon_sym_fixum] = ACTIONS(163),
    [anon_sym_fn] = ACTIONS(163),
    [anon_sym_functio] = ACTIONS(163),
    [anon_sym_generis] = ACTIONS(163),
    [anon_sym_genus] = ACTIONS(163),
    [anon_sym_iacit] = ACTIONS(163),
    [anon_sym_immutata] = ACTIONS(163),
    [anon_sym_implendum] = ACTIONS(163),
    [anon_sym_import] = ACTIONS(163),
    [anon_sym_importa] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_interna] = ACTIONS(163),
    [anon_sym_internal] = ACTIONS(163),
    [anon_sym_iuncta] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(163),
    [anon_sym_magnitudo] = ACTIONS(163),
    [anon_sym_optional] = ACTIONS(163),
    [anon_sym_optiones] = ACTIONS(163),
    [anon_sym_options] = ACTIONS(163),
    [anon_sym_ordo] = ACTIONS(163),
    [anon_sym_prae] = ACTIONS(163),
    [anon_sym_readonly] = ACTIONS(163),
    [anon_sym_rest] = ACTIONS(163),
    [anon_sym_schema] = ACTIONS(163),
    [anon_sym_sit] = ACTIONS(163),
    [anon_sym_size] = ACTIONS(163),
    [anon_sym_sponte] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_throws] = ACTIONS(163),
    [anon_sym_tuple] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_typus] = ACTIONS(163),
    [anon_sym_union] = ACTIONS(163),
    [anon_sym_var] = ACTIONS(163),
    [anon_sym_varia] = ACTIONS(163),
    [anon_sym_ab] = ACTIONS(163),
    [anon_sym_all] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_ante] = ACTIONS(163),
    [anon_sym_as] = ACTIONS(163),
    [anon_sym_async] = ACTIONS(163),
    [anon_sym_async_generator] = ACTIONS(163),
    [anon_sym_async_setup] = ACTIONS(163),
    [anon_sym_async_teardown] = ACTIONS(163),
    [anon_sym_aut] = ACTIONS(163),
    [anon_sym_await] = ACTIONS(163),
    [anon_sym_await_const] = ACTIONS(163),
    [anon_sym_await_var] = ACTIONS(163),
    [anon_sym_before] = ACTIONS(163),
    [anon_sym_bench] = ACTIONS(163),
    [anon_sym_cede] = ACTIONS(163),
    [anon_sym_clausura] = ACTIONS(163),
    [anon_sym_coalesce] = ACTIONS(163),
    [anon_sym_comptime] = ACTIONS(163),
    [anon_sym_copy] = ACTIONS(163),
    [anon_sym_de] = ACTIONS(163),
    [anon_sym_debug] = ACTIONS(163),
    [anon_sym_describe] = ACTIONS(163),
    [anon_sym_ego] = ACTIONS(163),
    [anon_sym_embed] = ACTIONS(163),
    [anon_sym_erratur] = ACTIONS(163),
    [anon_sym_est] = ACTIONS(163),
    [anon_sym_et] = ACTIONS(163),
    [anon_sym_ex] = ACTIONS(163),
    [anon_sym_exemplum] = ACTIONS(163),
    [anon_sym_expect_failure] = ACTIONS(163),
    [anon_sym_fient] = ACTIONS(163),
    [anon_sym_fiet] = ACTIONS(163),
    [anon_sym_figendum] = ACTIONS(163),
    [anon_sym_finge] = ACTIONS(163),
    [anon_sym_fiunt] = ACTIONS(163),
    [anon_sym_flaky] = ACTIONS(163),
    [anon_sym_format] = ACTIONS(163),
    [anon_sym_fragilis] = ACTIONS(163),
    [anon_sym_from] = ACTIONS(163),
    [anon_sym_futurum] = ACTIONS(163),
    [anon_sym_generator] = ACTIONS(163),
    [anon_sym_implements] = ACTIONS(163),
    [anon_sym_implet] = ACTIONS(163),
    [anon_sym_in] = ACTIONS(163),
    [anon_sym_insere] = ACTIONS(163),
    [anon_sym_is] = ACTIONS(163),
    [anon_sym_lambda] = ACTIONS(163),
    [anon_sym_lege] = ACTIONS(163),
    [anon_sym_line] = ACTIONS(163),
    [anon_sym_lineam] = ACTIONS(163),
    [anon_sym_metior] = ACTIONS(163),
    [anon_sym_modulus] = ACTIONS(163),
    [anon_sym_mone] = ACTIONS(163),
    [anon_sym_mut] = ACTIONS(163),
    [anon_sym_negative] = ACTIONS(163),
    [anon_sym_negativum] = ACTIONS(163),
    [anon_sym_nihil] = ACTIONS(163),
    [anon_sym_non] = ACTIONS(163),
    [anon_sym_none] = ACTIONS(163),
    [anon_sym_nonnihil] = ACTIONS(163),
    [anon_sym_nonnulla] = ACTIONS(163),
    [anon_sym_not] = ACTIONS(163),
    [anon_sym_nota] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(163),
    [anon_sym_nulla] = ACTIONS(163),
    [anon_sym_omitte] = ACTIONS(163),
    [anon_sym_omnia] = ACTIONS(163),
    [anon_sym_only] = ACTIONS(163),
    [anon_sym_only_in] = ACTIONS(163),
    [anon_sym_or] = ACTIONS(163),
    [anon_sym_own] = ACTIONS(163),
    [anon_sym_penes] = ACTIONS(163),
    [anon_sym_per] = ACTIONS(163),
    [anon_sym_positive] = ACTIONS(163),
    [anon_sym_positivum] = ACTIONS(163),
    [anon_sym_postpara] = ACTIONS(163),
    [anon_sym_postparabit] = ACTIONS(163),
    [anon_sym_praefixum] = ACTIONS(163),
    [anon_sym_praepara] = ACTIONS(163),
    [anon_sym_praeparabit] = ACTIONS(163),
    [anon_sym_print] = ACTIONS(163),
    [anon_sym_proba] = ACTIONS(163),
    [anon_sym_probandum] = ACTIONS(163),
    [anon_sym_range] = ACTIONS(163),
    [anon_sym_read] = ACTIONS(163),
    [anon_sym_reddet] = ACTIONS(163),
    [anon_sym_ref] = ACTIONS(163),
    [anon_sym_repeat] = ACTIONS(163),
    [anon_sym_repete] = ACTIONS(163),
    [anon_sym_return_await] = ACTIONS(163),
    [anon_sym_scribe] = ACTIONS(163),
    [anon_sym_scriptum] = ACTIONS(163),
    [anon_sym_self] = ACTIONS(163),
    [anon_sym_setup] = ACTIONS(163),
    [anon_sym_skip] = ACTIONS(163),
    [anon_sym_solum] = ACTIONS(163),
    [anon_sym_solum_in] = ACTIONS(163),
    [anon_sym_some] = ACTIONS(163),
    [anon_sym_sparge] = ACTIONS(163),
    [anon_sym_spread] = ACTIONS(163),
    [anon_sym_step] = ACTIONS(163),
    [anon_sym_tacebit] = ACTIONS(163),
    [anon_sym_tag] = ACTIONS(163),
    [anon_sym_teardown] = ACTIONS(163),
    [anon_sym_temporis] = ACTIONS(163),
    [anon_sym_test] = ACTIONS(163),
    [anon_sym_timeout] = ACTIONS(163),
    [anon_sym_todo] = ACTIONS(163),
    [anon_sym_until] = ACTIONS(163),
    [anon_sym_usque] = ACTIONS(163),
    [anon_sym_ut] = ACTIONS(163),
    [anon_sym_variandum] = ACTIONS(163),
    [anon_sym_variant] = ACTIONS(163),
    [anon_sym_vel] = ACTIONS(163),
    [anon_sym_via] = ACTIONS(163),
    [anon_sym_vide] = ACTIONS(163),
    [anon_sym_warn] = ACTIONS(163),
    [anon_sym_wrapping] = ACTIONS(163),
    [anon_sym_write] = ACTIONS(163),
    [anon_sym_yield] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_falsum] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_verum] = ACTIONS(163),
    [sym_guillemet_string] = ACTIONS(161),
    [sym_octeti_string] = ACTIONS(161),
    [sym_backtick_string] = ACTIONS(161),
    [sym_ascii_string] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [sym_number] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_operator] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
    [sym_hash] = ACTIONS(161),
    [sym_line_comment] = ACTIONS(161),
    [sym_faber_newline] = ACTIONS(161),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_at_sign] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_cli] = ACTIONS(215),
    [anon_sym_conversio] = ACTIONS(215),
    [anon_sym_conversion] = ACTIONS(215),
    [anon_sym_cursor] = ACTIONS(215),
    [anon_sym_fragment] = ACTIONS(215),
    [anon_sym_futura] = ACTIONS(215),
    [anon_sym_imperium] = ACTIONS(215),
    [anon_sym_json] = ACTIONS(215),
    [anon_sym_nondum] = ACTIONS(215),
    [anon_sym_nucleum] = ACTIONS(215),
    [anon_sym_operandus] = ACTIONS(215),
    [anon_sym_optio] = ACTIONS(215),
    [anon_sym_privata] = ACTIONS(215),
    [anon_sym_private] = ACTIONS(215),
    [anon_sym_protecta] = ACTIONS(215),
    [anon_sym_protected] = ACTIONS(215),
    [anon_sym_public] = ACTIONS(215),
    [anon_sym_publica] = ACTIONS(215),
    [anon_sym_radix] = ACTIONS(215),
    [anon_sym_verte] = ACTIONS(215),
    [anon_sym_vertex] = ACTIONS(215),
    [anon_sym_ascii] = ACTIONS(215),
    [anon_sym_bivalens] = ACTIONS(215),
    [anon_sym_bool] = ACTIONS(215),
    [anon_sym_byte] = ACTIONS(215),
    [anon_sym_bytes] = ACTIONS(215),
    [anon_sym_char] = ACTIONS(215),
    [anon_sym_copia] = ACTIONS(215),
    [anon_sym_cursor_t] = ACTIONS(215),
    [anon_sym_exactus] = ACTIONS(215),
    [anon_sym_f16] = ACTIONS(215),
    [anon_sym_f32] = ACTIONS(215),
    [anon_sym_f64] = ACTIONS(215),
    [anon_sym_float] = ACTIONS(215),
    [anon_sym_fractus] = ACTIONS(215),
    [anon_sym_i16] = ACTIONS(215),
    [anon_sym_i32] = ACTIONS(215),
    [anon_sym_i64] = ACTIONS(215),
    [anon_sym_i8] = ACTIONS(215),
    [anon_sym_ignotum] = ACTIONS(215),
    [anon_sym_instans] = ACTIONS(215),
    [anon_sym_instant] = ACTIONS(215),
    [anon_sym_int] = ACTIONS(215),
    [anon_sym_intervallum] = ACTIONS(215),
    [anon_sym_iterator] = ACTIONS(215),
    [anon_sym_lf16] = ACTIONS(215),
    [anon_sym_lf32] = ACTIONS(215),
    [anon_sym_lf64] = ACTIONS(215),
    [anon_sym_li16] = ACTIONS(215),
    [anon_sym_li32] = ACTIONS(215),
    [anon_sym_li64] = ACTIONS(215),
    [anon_sym_li8] = ACTIONS(215),
    [anon_sym_list] = ACTIONS(215),
    [anon_sym_lista] = ACTIONS(215),
    [anon_sym_littera] = ACTIONS(215),
    [anon_sym_lu16] = ACTIONS(215),
    [anon_sym_lu32] = ACTIONS(215),
    [anon_sym_lu64] = ACTIONS(215),
    [anon_sym_lu8] = ACTIONS(215),
    [anon_sym_map] = ACTIONS(215),
    [anon_sym_matrix] = ACTIONS(215),
    [anon_sym_mf16] = ACTIONS(215),
    [anon_sym_mf32] = ACTIONS(215),
    [anon_sym_mf64] = ACTIONS(215),
    [anon_sym_mi16] = ACTIONS(215),
    [anon_sym_mi32] = ACTIONS(215),
    [anon_sym_mi64] = ACTIONS(215),
    [anon_sym_mi8] = ACTIONS(215),
    [anon_sym_mu16] = ACTIONS(215),
    [anon_sym_mu32] = ACTIONS(215),
    [anon_sym_mu64] = ACTIONS(215),
    [anon_sym_mu8] = ACTIONS(215),
    [anon_sym_never] = ACTIONS(215),
    [anon_sym_numerus] = ACTIONS(215),
    [anon_sym_numquam] = ACTIONS(215),
    [anon_sym_octeti] = ACTIONS(215),
    [anon_sym_octetus] = ACTIONS(215),
    [anon_sym_promise] = ACTIONS(215),
    [anon_sym_promissum] = ACTIONS(215),
    [anon_sym_queue] = ACTIONS(215),
    [anon_sym_ratio] = ACTIONS(215),
    [anon_sym_record] = ACTIONS(215),
    [anon_sym_regex] = ACTIONS(215),
    [anon_sym_saturating] = ACTIONS(215),
    [anon_sym_saturatus] = ACTIONS(215),
    [anon_sym_series] = ACTIONS(215),
    [anon_sym_set] = ACTIONS(215),
    [anon_sym_sf16] = ACTIONS(215),
    [anon_sym_sf32] = ACTIONS(215),
    [anon_sym_sf64] = ACTIONS(215),
    [anon_sym_si16] = ACTIONS(215),
    [anon_sym_si32] = ACTIONS(215),
    [anon_sym_si64] = ACTIONS(215),
    [anon_sym_si8] = ACTIONS(215),
    [anon_sym_sparsa] = ACTIONS(215),
    [anon_sym_stack] = ACTIONS(215),
    [anon_sym_string] = ACTIONS(215),
    [anon_sym_su16] = ACTIONS(215),
    [anon_sym_su32] = ACTIONS(215),
    [anon_sym_su64] = ACTIONS(215),
    [anon_sym_su8] = ACTIONS(215),
    [anon_sym_tabula] = ACTIONS(215),
    [anon_sym_tensor] = ACTIONS(215),
    [anon_sym_textus] = ACTIONS(215),
    [anon_sym_tf16] = ACTIONS(215),
    [anon_sym_tf32] = ACTIONS(215),
    [anon_sym_tf64] = ACTIONS(215),
    [anon_sym_ti16] = ACTIONS(215),
    [anon_sym_ti32] = ACTIONS(215),
    [anon_sym_ti64] = ACTIONS(215),
    [anon_sym_ti8] = ACTIONS(215),
    [anon_sym_trapping] = ACTIONS(215),
    [anon_sym_tu16] = ACTIONS(215),
    [anon_sym_tu32] = ACTIONS(215),
    [anon_sym_tu64] = ACTIONS(215),
    [anon_sym_tu8] = ACTIONS(215),
    [anon_sym_u16] = ACTIONS(215),
    [anon_sym_u32] = ACTIONS(215),
    [anon_sym_u64] = ACTIONS(215),
    [anon_sym_u8] = ACTIONS(215),
    [anon_sym_unio] = ACTIONS(215),
    [anon_sym_unknown] = ACTIONS(215),
    [anon_sym_vacua] = ACTIONS(215),
    [anon_sym_vacuum] = ACTIONS(215),
    [anon_sym_valor] = ACTIONS(215),
    [anon_sym_vector] = ACTIONS(215),
    [anon_sym_vf16] = ACTIONS(215),
    [anon_sym_vf32] = ACTIONS(215),
    [anon_sym_vf64] = ACTIONS(215),
    [anon_sym_vi16] = ACTIONS(215),
    [anon_sym_vi32] = ACTIONS(215),
    [anon_sym_vi64] = ACTIONS(215),
    [anon_sym_vi8] = ACTIONS(215),
    [anon_sym_void] = ACTIONS(215),
    [anon_sym_vu16] = ACTIONS(215),
    [anon_sym_vu32] = ACTIONS(215),
    [anon_sym_vu64] = ACTIONS(215),
    [anon_sym_vu8] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_QMARK_DOT] = ACTIONS(213),
    [anon_sym_BANG_DOT] = ACTIONS(213),
    [anon_sym_ad] = ACTIONS(215),
    [anon_sym_adfirma] = ACTIONS(215),
    [anon_sym_apud] = ACTIONS(215),
    [anon_sym_args] = ACTIONS(215),
    [anon_sym_argumenta] = ACTIONS(215),
    [anon_sym_assert] = ACTIONS(215),
    [anon_sym_async_main] = ACTIONS(215),
    [anon_sym_at] = ACTIONS(215),
    [anon_sym_break] = ACTIONS(215),
    [anon_sym_call] = ACTIONS(215),
    [anon_sym_cape] = ACTIONS(215),
    [anon_sym_capta] = ACTIONS(215),
    [anon_sym_case] = ACTIONS(215),
    [anon_sym_casu] = ACTIONS(215),
    [anon_sym_catch] = ACTIONS(215),
    [anon_sym_ceterum] = ACTIONS(215),
    [anon_sym_continue] = ACTIONS(215),
    [anon_sym_custodi] = ACTIONS(215),
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_discerne] = ACTIONS(215),
    [anon_sym_do] = ACTIONS(215),
    [anon_sym_dum] = ACTIONS(215),
    [anon_sym_elif] = ACTIONS(215),
    [anon_sym_elige] = ACTIONS(215),
    [anon_sym_else] = ACTIONS(215),
    [anon_sym_ergo] = ACTIONS(215),
    [anon_sym_fac] = ACTIONS(215),
    [anon_sym_for] = ACTIONS(215),
    [anon_sym_guard] = ACTIONS(215),
    [anon_sym_iace] = ACTIONS(215),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_incipiet] = ACTIONS(215),
    [anon_sym_incipit] = ACTIONS(215),
    [anon_sym_itera] = ACTIONS(215),
    [anon_sym_main] = ACTIONS(215),
    [anon_sym_match] = ACTIONS(215),
    [anon_sym_mori] = ACTIONS(215),
    [anon_sym_panic] = ACTIONS(215),
    [anon_sym_pass] = ACTIONS(215),
    [anon_sym_perge] = ACTIONS(215),
    [anon_sym_redde] = ACTIONS(215),
    [anon_sym_reice] = ACTIONS(215),
    [anon_sym_reject] = ACTIONS(215),
    [anon_sym_require] = ACTIONS(215),
    [anon_sym_requirit] = ACTIONS(215),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_rumpe] = ACTIONS(215),
    [anon_sym_secus] = ACTIONS(215),
    [anon_sym_si] = ACTIONS(215),
    [anon_sym_sic] = ACTIONS(215),
    [anon_sym_sin] = ACTIONS(215),
    [anon_sym_switch] = ACTIONS(215),
    [anon_sym_tacet] = ACTIONS(215),
    [anon_sym_then] = ACTIONS(215),
    [anon_sym_throw] = ACTIONS(215),
    [anon_sym_trap] = ACTIONS(215),
    [anon_sym_while] = ACTIONS(215),
    [anon_sym_yields] = ACTIONS(215),
    [anon_sym_ceteri] = ACTIONS(215),
    [anon_sym_class] = ACTIONS(215),
    [anon_sym_column] = ACTIONS(215),
    [anon_sym_columna] = ACTIONS(215),
    [anon_sym_const] = ACTIONS(215),
    [anon_sym_discretio] = ACTIONS(215),
    [anon_sym_enum] = ACTIONS(215),
    [anon_sym_errata] = ACTIONS(215),
    [anon_sym_errors] = ACTIONS(215),
    [anon_sym_exit] = ACTIONS(215),
    [anon_sym_exitus] = ACTIONS(215),
    [anon_sym_fixum] = ACTIONS(215),
    [anon_sym_fn] = ACTIONS(215),
    [anon_sym_functio] = ACTIONS(215),
    [anon_sym_generis] = ACTIONS(215),
    [anon_sym_genus] = ACTIONS(215),
    [anon_sym_iacit] = ACTIONS(215),
    [anon_sym_immutata] = ACTIONS(215),
    [anon_sym_implendum] = ACTIONS(215),
    [anon_sym_import] = ACTIONS(215),
    [anon_sym_importa] = ACTIONS(215),
    [anon_sym_interface] = ACTIONS(215),
    [anon_sym_interna] = ACTIONS(215),
    [anon_sym_internal] = ACTIONS(215),
    [anon_sym_iuncta] = ACTIONS(215),
    [anon_sym_let] = ACTIONS(215),
    [anon_sym_magnitudo] = ACTIONS(215),
    [anon_sym_optional] = ACTIONS(215),
    [anon_sym_optiones] = ACTIONS(215),
    [anon_sym_options] = ACTIONS(215),
    [anon_sym_ordo] = ACTIONS(215),
    [anon_sym_prae] = ACTIONS(215),
    [anon_sym_readonly] = ACTIONS(215),
    [anon_sym_rest] = ACTIONS(215),
    [anon_sym_schema] = ACTIONS(215),
    [anon_sym_sit] = ACTIONS(215),
    [anon_sym_size] = ACTIONS(215),
    [anon_sym_sponte] = ACTIONS(215),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_throws] = ACTIONS(215),
    [anon_sym_tuple] = ACTIONS(215),
    [anon_sym_type] = ACTIONS(215),
    [anon_sym_typus] = ACTIONS(215),
    [anon_sym_union] = ACTIONS(215),
    [anon_sym_var] = ACTIONS(215),
    [anon_sym_varia] = ACTIONS(215),
    [anon_sym_ab] = ACTIONS(215),
    [anon_sym_all] = ACTIONS(215),
    [anon_sym_and] = ACTIONS(215),
    [anon_sym_ante] = ACTIONS(215),
    [anon_sym_as] = ACTIONS(215),
    [anon_sym_async] = ACTIONS(215),
    [anon_sym_async_generator] = ACTIONS(215),
    [anon_sym_async_setup] = ACTIONS(215),
    [anon_sym_async_teardown] = ACTIONS(215),
    [anon_sym_aut] = ACTIONS(215),
    [anon_sym_await] = ACTIONS(215),
    [anon_sym_await_const] = ACTIONS(215),
    [anon_sym_await_var] = ACTIONS(215),
    [anon_sym_before] = ACTIONS(215),
    [anon_sym_bench] = ACTIONS(215),
    [anon_sym_cede] = ACTIONS(215),
    [anon_sym_clausura] = ACTIONS(215),
    [anon_sym_coalesce] = ACTIONS(215),
    [anon_sym_comptime] = ACTIONS(215),
    [anon_sym_copy] = ACTIONS(215),
    [anon_sym_de] = ACTIONS(215),
    [anon_sym_debug] = ACTIONS(215),
    [anon_sym_describe] = ACTIONS(215),
    [anon_sym_ego] = ACTIONS(215),
    [anon_sym_embed] = ACTIONS(215),
    [anon_sym_erratur] = ACTIONS(215),
    [anon_sym_est] = ACTIONS(215),
    [anon_sym_et] = ACTIONS(215),
    [anon_sym_ex] = ACTIONS(215),
    [anon_sym_exemplum] = ACTIONS(215),
    [anon_sym_expect_failure] = ACTIONS(215),
    [anon_sym_fient] = ACTIONS(215),
    [anon_sym_fiet] = ACTIONS(215),
    [anon_sym_figendum] = ACTIONS(215),
    [anon_sym_finge] = ACTIONS(215),
    [anon_sym_fiunt] = ACTIONS(215),
    [anon_sym_flaky] = ACTIONS(215),
    [anon_sym_format] = ACTIONS(215),
    [anon_sym_fragilis] = ACTIONS(215),
    [anon_sym_from] = ACTIONS(215),
    [anon_sym_futurum] = ACTIONS(215),
    [anon_sym_generator] = ACTIONS(215),
    [anon_sym_implements] = ACTIONS(215),
    [anon_sym_implet] = ACTIONS(215),
    [anon_sym_in] = ACTIONS(215),
    [anon_sym_insere] = ACTIONS(215),
    [anon_sym_is] = ACTIONS(215),
    [anon_sym_lambda] = ACTIONS(215),
    [anon_sym_lege] = ACTIONS(215),
    [anon_sym_line] = ACTIONS(215),
    [anon_sym_lineam] = ACTIONS(215),
    [anon_sym_metior] = ACTIONS(215),
    [anon_sym_modulus] = ACTIONS(215),
    [anon_sym_mone] = ACTIONS(215),
    [anon_sym_mut] = ACTIONS(215),
    [anon_sym_negative] = ACTIONS(215),
    [anon_sym_negativum] = ACTIONS(215),
    [anon_sym_nihil] = ACTIONS(215),
    [anon_sym_non] = ACTIONS(215),
    [anon_sym_none] = ACTIONS(215),
    [anon_sym_nonnihil] = ACTIONS(215),
    [anon_sym_nonnulla] = ACTIONS(215),
    [anon_sym_not] = ACTIONS(215),
    [anon_sym_nota] = ACTIONS(215),
    [anon_sym_null] = ACTIONS(215),
    [anon_sym_nulla] = ACTIONS(215),
    [anon_sym_omitte] = ACTIONS(215),
    [anon_sym_omnia] = ACTIONS(215),
    [anon_sym_only] = ACTIONS(215),
    [anon_sym_only_in] = ACTIONS(215),
    [anon_sym_or] = ACTIONS(215),
    [anon_sym_own] = ACTIONS(215),
    [anon_sym_penes] = ACTIONS(215),
    [anon_sym_per] = ACTIONS(215),
    [anon_sym_positive] = ACTIONS(215),
    [anon_sym_positivum] = ACTIONS(215),
    [anon_sym_postpara] = ACTIONS(215),
    [anon_sym_postparabit] = ACTIONS(215),
    [anon_sym_praefixum] = ACTIONS(215),
    [anon_sym_praepara] = ACTIONS(215),
    [anon_sym_praeparabit] = ACTIONS(215),
    [anon_sym_print] = ACTIONS(215),
    [anon_sym_proba] = ACTIONS(215),
    [anon_sym_probandum] = ACTIONS(215),
    [anon_sym_range] = ACTIONS(215),
    [anon_sym_read] = ACTIONS(215),
    [anon_sym_reddet] = ACTIONS(215),
    [anon_sym_ref] = ACTIONS(215),
    [anon_sym_repeat] = ACTIONS(215),
    [anon_sym_repete] = ACTIONS(215),
    [anon_sym_return_await] = ACTIONS(215),
    [anon_sym_scribe] = ACTIONS(215),
    [anon_sym_scriptum] = ACTIONS(215),
    [anon_sym_self] = ACTIONS(215),
    [anon_sym_setup] = ACTIONS(215),
    [anon_sym_skip] = ACTIONS(215),
    [anon_sym_solum] = ACTIONS(215),
    [anon_sym_solum_in] = ACTIONS(215),
    [anon_sym_some] = ACTIONS(215),
    [anon_sym_sparge] = ACTIONS(215),
    [anon_sym_spread] = ACTIONS(215),
    [anon_sym_step] = ACTIONS(215),
    [anon_sym_tacebit] = ACTIONS(215),
    [anon_sym_tag] = ACTIONS(215),
    [anon_sym_teardown] = ACTIONS(215),
    [anon_sym_temporis] = ACTIONS(215),
    [anon_sym_test] = ACTIONS(215),
    [anon_sym_timeout] = ACTIONS(215),
    [anon_sym_todo] = ACTIONS(215),
    [anon_sym_until] = ACTIONS(215),
    [anon_sym_usque] = ACTIONS(215),
    [anon_sym_ut] = ACTIONS(215),
    [anon_sym_variandum] = ACTIONS(215),
    [anon_sym_variant] = ACTIONS(215),
    [anon_sym_vel] = ACTIONS(215),
    [anon_sym_via] = ACTIONS(215),
    [anon_sym_vide] = ACTIONS(215),
    [anon_sym_warn] = ACTIONS(215),
    [anon_sym_wrapping] = ACTIONS(215),
    [anon_sym_write] = ACTIONS(215),
    [anon_sym_yield] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_falsum] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_verum] = ACTIONS(215),
    [sym_guillemet_string] = ACTIONS(213),
    [sym_octeti_string] = ACTIONS(213),
    [sym_backtick_string] = ACTIONS(213),
    [sym_ascii_string] = ACTIONS(213),
    [sym_string] = ACTIONS(213),
    [sym_number] = ACTIONS(213),
    [sym_identifier] = ACTIONS(215),
    [sym_operator] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [sym_hash] = ACTIONS(213),
    [sym_line_comment] = ACTIONS(213),
    [sym_faber_newline] = ACTIONS(213),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_at_sign] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_cli] = ACTIONS(167),
    [anon_sym_conversio] = ACTIONS(167),
    [anon_sym_conversion] = ACTIONS(167),
    [anon_sym_cursor] = ACTIONS(167),
    [anon_sym_fragment] = ACTIONS(167),
    [anon_sym_futura] = ACTIONS(167),
    [anon_sym_imperium] = ACTIONS(167),
    [anon_sym_json] = ACTIONS(167),
    [anon_sym_nondum] = ACTIONS(167),
    [anon_sym_nucleum] = ACTIONS(167),
    [anon_sym_operandus] = ACTIONS(167),
    [anon_sym_optio] = ACTIONS(167),
    [anon_sym_privata] = ACTIONS(167),
    [anon_sym_private] = ACTIONS(167),
    [anon_sym_protecta] = ACTIONS(167),
    [anon_sym_protected] = ACTIONS(167),
    [anon_sym_public] = ACTIONS(167),
    [anon_sym_publica] = ACTIONS(167),
    [anon_sym_radix] = ACTIONS(167),
    [anon_sym_verte] = ACTIONS(167),
    [anon_sym_vertex] = ACTIONS(167),
    [anon_sym_ascii] = ACTIONS(167),
    [anon_sym_bivalens] = ACTIONS(167),
    [anon_sym_bool] = ACTIONS(167),
    [anon_sym_byte] = ACTIONS(167),
    [anon_sym_bytes] = ACTIONS(167),
    [anon_sym_char] = ACTIONS(167),
    [anon_sym_copia] = ACTIONS(167),
    [anon_sym_cursor_t] = ACTIONS(167),
    [anon_sym_exactus] = ACTIONS(167),
    [anon_sym_f16] = ACTIONS(167),
    [anon_sym_f32] = ACTIONS(167),
    [anon_sym_f64] = ACTIONS(167),
    [anon_sym_float] = ACTIONS(167),
    [anon_sym_fractus] = ACTIONS(167),
    [anon_sym_i16] = ACTIONS(167),
    [anon_sym_i32] = ACTIONS(167),
    [anon_sym_i64] = ACTIONS(167),
    [anon_sym_i8] = ACTIONS(167),
    [anon_sym_ignotum] = ACTIONS(167),
    [anon_sym_instans] = ACTIONS(167),
    [anon_sym_instant] = ACTIONS(167),
    [anon_sym_int] = ACTIONS(167),
    [anon_sym_intervallum] = ACTIONS(167),
    [anon_sym_iterator] = ACTIONS(167),
    [anon_sym_lf16] = ACTIONS(167),
    [anon_sym_lf32] = ACTIONS(167),
    [anon_sym_lf64] = ACTIONS(167),
    [anon_sym_li16] = ACTIONS(167),
    [anon_sym_li32] = ACTIONS(167),
    [anon_sym_li64] = ACTIONS(167),
    [anon_sym_li8] = ACTIONS(167),
    [anon_sym_list] = ACTIONS(167),
    [anon_sym_lista] = ACTIONS(167),
    [anon_sym_littera] = ACTIONS(167),
    [anon_sym_lu16] = ACTIONS(167),
    [anon_sym_lu32] = ACTIONS(167),
    [anon_sym_lu64] = ACTIONS(167),
    [anon_sym_lu8] = ACTIONS(167),
    [anon_sym_map] = ACTIONS(167),
    [anon_sym_matrix] = ACTIONS(167),
    [anon_sym_mf16] = ACTIONS(167),
    [anon_sym_mf32] = ACTIONS(167),
    [anon_sym_mf64] = ACTIONS(167),
    [anon_sym_mi16] = ACTIONS(167),
    [anon_sym_mi32] = ACTIONS(167),
    [anon_sym_mi64] = ACTIONS(167),
    [anon_sym_mi8] = ACTIONS(167),
    [anon_sym_mu16] = ACTIONS(167),
    [anon_sym_mu32] = ACTIONS(167),
    [anon_sym_mu64] = ACTIONS(167),
    [anon_sym_mu8] = ACTIONS(167),
    [anon_sym_never] = ACTIONS(167),
    [anon_sym_numerus] = ACTIONS(167),
    [anon_sym_numquam] = ACTIONS(167),
    [anon_sym_octeti] = ACTIONS(167),
    [anon_sym_octetus] = ACTIONS(167),
    [anon_sym_promise] = ACTIONS(167),
    [anon_sym_promissum] = ACTIONS(167),
    [anon_sym_queue] = ACTIONS(167),
    [anon_sym_ratio] = ACTIONS(167),
    [anon_sym_record] = ACTIONS(167),
    [anon_sym_regex] = ACTIONS(167),
    [anon_sym_saturating] = ACTIONS(167),
    [anon_sym_saturatus] = ACTIONS(167),
    [anon_sym_series] = ACTIONS(167),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_sf16] = ACTIONS(167),
    [anon_sym_sf32] = ACTIONS(167),
    [anon_sym_sf64] = ACTIONS(167),
    [anon_sym_si16] = ACTIONS(167),
    [anon_sym_si32] = ACTIONS(167),
    [anon_sym_si64] = ACTIONS(167),
    [anon_sym_si8] = ACTIONS(167),
    [anon_sym_sparsa] = ACTIONS(167),
    [anon_sym_stack] = ACTIONS(167),
    [anon_sym_string] = ACTIONS(167),
    [anon_sym_su16] = ACTIONS(167),
    [anon_sym_su32] = ACTIONS(167),
    [anon_sym_su64] = ACTIONS(167),
    [anon_sym_su8] = ACTIONS(167),
    [anon_sym_tabula] = ACTIONS(167),
    [anon_sym_tensor] = ACTIONS(167),
    [anon_sym_textus] = ACTIONS(167),
    [anon_sym_tf16] = ACTIONS(167),
    [anon_sym_tf32] = ACTIONS(167),
    [anon_sym_tf64] = ACTIONS(167),
    [anon_sym_ti16] = ACTIONS(167),
    [anon_sym_ti32] = ACTIONS(167),
    [anon_sym_ti64] = ACTIONS(167),
    [anon_sym_ti8] = ACTIONS(167),
    [anon_sym_trapping] = ACTIONS(167),
    [anon_sym_tu16] = ACTIONS(167),
    [anon_sym_tu32] = ACTIONS(167),
    [anon_sym_tu64] = ACTIONS(167),
    [anon_sym_tu8] = ACTIONS(167),
    [anon_sym_u16] = ACTIONS(167),
    [anon_sym_u32] = ACTIONS(167),
    [anon_sym_u64] = ACTIONS(167),
    [anon_sym_u8] = ACTIONS(167),
    [anon_sym_unio] = ACTIONS(167),
    [anon_sym_unknown] = ACTIONS(167),
    [anon_sym_vacua] = ACTIONS(167),
    [anon_sym_vacuum] = ACTIONS(167),
    [anon_sym_valor] = ACTIONS(167),
    [anon_sym_vector] = ACTIONS(167),
    [anon_sym_vf16] = ACTIONS(167),
    [anon_sym_vf32] = ACTIONS(167),
    [anon_sym_vf64] = ACTIONS(167),
    [anon_sym_vi16] = ACTIONS(167),
    [anon_sym_vi32] = ACTIONS(167),
    [anon_sym_vi64] = ACTIONS(167),
    [anon_sym_vi8] = ACTIONS(167),
    [anon_sym_void] = ACTIONS(167),
    [anon_sym_vu16] = ACTIONS(167),
    [anon_sym_vu32] = ACTIONS(167),
    [anon_sym_vu64] = ACTIONS(167),
    [anon_sym_vu8] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_QMARK_DOT] = ACTIONS(165),
    [anon_sym_BANG_DOT] = ACTIONS(165),
    [anon_sym_ad] = ACTIONS(167),
    [anon_sym_adfirma] = ACTIONS(167),
    [anon_sym_apud] = ACTIONS(167),
    [anon_sym_args] = ACTIONS(167),
    [anon_sym_argumenta] = ACTIONS(167),
    [anon_sym_assert] = ACTIONS(167),
    [anon_sym_async_main] = ACTIONS(167),
    [anon_sym_at] = ACTIONS(167),
    [anon_sym_break] = ACTIONS(167),
    [anon_sym_call] = ACTIONS(167),
    [anon_sym_cape] = ACTIONS(167),
    [anon_sym_capta] = ACTIONS(167),
    [anon_sym_case] = ACTIONS(167),
    [anon_sym_casu] = ACTIONS(167),
    [anon_sym_catch] = ACTIONS(167),
    [anon_sym_ceterum] = ACTIONS(167),
    [anon_sym_continue] = ACTIONS(167),
    [anon_sym_custodi] = ACTIONS(167),
    [anon_sym_default] = ACTIONS(167),
    [anon_sym_discerne] = ACTIONS(167),
    [anon_sym_do] = ACTIONS(167),
    [anon_sym_dum] = ACTIONS(167),
    [anon_sym_elif] = ACTIONS(167),
    [anon_sym_elige] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(167),
    [anon_sym_ergo] = ACTIONS(167),
    [anon_sym_fac] = ACTIONS(167),
    [anon_sym_for] = ACTIONS(167),
    [anon_sym_guard] = ACTIONS(167),
    [anon_sym_iace] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_incipiet] = ACTIONS(167),
    [anon_sym_incipit] = ACTIONS(167),
    [anon_sym_itera] = ACTIONS(167),
    [anon_sym_main] = ACTIONS(167),
    [anon_sym_match] = ACTIONS(167),
    [anon_sym_mori] = ACTIONS(167),
    [anon_sym_panic] = ACTIONS(167),
    [anon_sym_pass] = ACTIONS(167),
    [anon_sym_perge] = ACTIONS(167),
    [anon_sym_redde] = ACTIONS(167),
    [anon_sym_reice] = ACTIONS(167),
    [anon_sym_reject] = ACTIONS(167),
    [anon_sym_require] = ACTIONS(167),
    [anon_sym_requirit] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_rumpe] = ACTIONS(167),
    [anon_sym_secus] = ACTIONS(167),
    [anon_sym_si] = ACTIONS(167),
    [anon_sym_sic] = ACTIONS(167),
    [anon_sym_sin] = ACTIONS(167),
    [anon_sym_switch] = ACTIONS(167),
    [anon_sym_tacet] = ACTIONS(167),
    [anon_sym_then] = ACTIONS(167),
    [anon_sym_throw] = ACTIONS(167),
    [anon_sym_trap] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(167),
    [anon_sym_yields] = ACTIONS(167),
    [anon_sym_ceteri] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_column] = ACTIONS(167),
    [anon_sym_columna] = ACTIONS(167),
    [anon_sym_const] = ACTIONS(167),
    [anon_sym_discretio] = ACTIONS(167),
    [anon_sym_enum] = ACTIONS(167),
    [anon_sym_errata] = ACTIONS(167),
    [anon_sym_errors] = ACTIONS(167),
    [anon_sym_exit] = ACTIONS(167),
    [anon_sym_exitus] = ACTIONS(167),
    [anon_sym_fixum] = ACTIONS(167),
    [anon_sym_fn] = ACTIONS(167),
    [anon_sym_functio] = ACTIONS(167),
    [anon_sym_generis] = ACTIONS(167),
    [anon_sym_genus] = ACTIONS(167),
    [anon_sym_iacit] = ACTIONS(167),
    [anon_sym_immutata] = ACTIONS(167),
    [anon_sym_implendum] = ACTIONS(167),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_importa] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(167),
    [anon_sym_interna] = ACTIONS(167),
    [anon_sym_internal] = ACTIONS(167),
    [anon_sym_iuncta] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(167),
    [anon_sym_magnitudo] = ACTIONS(167),
    [anon_sym_optional] = ACTIONS(167),
    [anon_sym_optiones] = ACTIONS(167),
    [anon_sym_options] = ACTIONS(167),
    [anon_sym_ordo] = ACTIONS(167),
    [anon_sym_prae] = ACTIONS(167),
    [anon_sym_readonly] = ACTIONS(167),
    [anon_sym_rest] = ACTIONS(167),
    [anon_sym_schema] = ACTIONS(167),
    [anon_sym_sit] = ACTIONS(167),
    [anon_sym_size] = ACTIONS(167),
    [anon_sym_sponte] = ACTIONS(167),
    [anon_sym_static] = ACTIONS(167),
    [anon_sym_throws] = ACTIONS(167),
    [anon_sym_tuple] = ACTIONS(167),
    [anon_sym_type] = ACTIONS(167),
    [anon_sym_typus] = ACTIONS(167),
    [anon_sym_union] = ACTIONS(167),
    [anon_sym_var] = ACTIONS(167),
    [anon_sym_varia] = ACTIONS(167),
    [anon_sym_ab] = ACTIONS(167),
    [anon_sym_all] = ACTIONS(167),
    [anon_sym_and] = ACTIONS(167),
    [anon_sym_ante] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_async] = ACTIONS(167),
    [anon_sym_async_generator] = ACTIONS(167),
    [anon_sym_async_setup] = ACTIONS(167),
    [anon_sym_async_teardown] = ACTIONS(167),
    [anon_sym_aut] = ACTIONS(167),
    [anon_sym_await] = ACTIONS(167),
    [anon_sym_await_const] = ACTIONS(167),
    [anon_sym_await_var] = ACTIONS(167),
    [anon_sym_before] = ACTIONS(167),
    [anon_sym_bench] = ACTIONS(167),
    [anon_sym_cede] = ACTIONS(167),
    [anon_sym_clausura] = ACTIONS(167),
    [anon_sym_coalesce] = ACTIONS(167),
    [anon_sym_comptime] = ACTIONS(167),
    [anon_sym_copy] = ACTIONS(167),
    [anon_sym_de] = ACTIONS(167),
    [anon_sym_debug] = ACTIONS(167),
    [anon_sym_describe] = ACTIONS(167),
    [anon_sym_ego] = ACTIONS(167),
    [anon_sym_embed] = ACTIONS(167),
    [anon_sym_erratur] = ACTIONS(167),
    [anon_sym_est] = ACTIONS(167),
    [anon_sym_et] = ACTIONS(167),
    [anon_sym_ex] = ACTIONS(167),
    [anon_sym_exemplum] = ACTIONS(167),
    [anon_sym_expect_failure] = ACTIONS(167),
    [anon_sym_fient] = ACTIONS(167),
    [anon_sym_fiet] = ACTIONS(167),
    [anon_sym_figendum] = ACTIONS(167),
    [anon_sym_finge] = ACTIONS(167),
    [anon_sym_fiunt] = ACTIONS(167),
    [anon_sym_flaky] = ACTIONS(167),
    [anon_sym_format] = ACTIONS(167),
    [anon_sym_fragilis] = ACTIONS(167),
    [anon_sym_from] = ACTIONS(167),
    [anon_sym_futurum] = ACTIONS(167),
    [anon_sym_generator] = ACTIONS(167),
    [anon_sym_implements] = ACTIONS(167),
    [anon_sym_implet] = ACTIONS(167),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_insere] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_lambda] = ACTIONS(167),
    [anon_sym_lege] = ACTIONS(167),
    [anon_sym_line] = ACTIONS(167),
    [anon_sym_lineam] = ACTIONS(167),
    [anon_sym_metior] = ACTIONS(167),
    [anon_sym_modulus] = ACTIONS(167),
    [anon_sym_mone] = ACTIONS(167),
    [anon_sym_mut] = ACTIONS(167),
    [anon_sym_negative] = ACTIONS(167),
    [anon_sym_negativum] = ACTIONS(167),
    [anon_sym_nihil] = ACTIONS(167),
    [anon_sym_non] = ACTIONS(167),
    [anon_sym_none] = ACTIONS(167),
    [anon_sym_nonnihil] = ACTIONS(167),
    [anon_sym_nonnulla] = ACTIONS(167),
    [anon_sym_not] = ACTIONS(167),
    [anon_sym_nota] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(167),
    [anon_sym_nulla] = ACTIONS(167),
    [anon_sym_omitte] = ACTIONS(167),
    [anon_sym_omnia] = ACTIONS(167),
    [anon_sym_only] = ACTIONS(167),
    [anon_sym_only_in] = ACTIONS(167),
    [anon_sym_or] = ACTIONS(167),
    [anon_sym_own] = ACTIONS(167),
    [anon_sym_penes] = ACTIONS(167),
    [anon_sym_per] = ACTIONS(167),
    [anon_sym_positive] = ACTIONS(167),
    [anon_sym_positivum] = ACTIONS(167),
    [anon_sym_postpara] = ACTIONS(167),
    [anon_sym_postparabit] = ACTIONS(167),
    [anon_sym_praefixum] = ACTIONS(167),
    [anon_sym_praepara] = ACTIONS(167),
    [anon_sym_praeparabit] = ACTIONS(167),
    [anon_sym_print] = ACTIONS(167),
    [anon_sym_proba] = ACTIONS(167),
    [anon_sym_probandum] = ACTIONS(167),
    [anon_sym_range] = ACTIONS(167),
    [anon_sym_read] = ACTIONS(167),
    [anon_sym_reddet] = ACTIONS(167),
    [anon_sym_ref] = ACTIONS(167),
    [anon_sym_repeat] = ACTIONS(167),
    [anon_sym_repete] = ACTIONS(167),
    [anon_sym_return_await] = ACTIONS(167),
    [anon_sym_scribe] = ACTIONS(167),
    [anon_sym_scriptum] = ACTIONS(167),
    [anon_sym_self] = ACTIONS(167),
    [anon_sym_setup] = ACTIONS(167),
    [anon_sym_skip] = ACTIONS(167),
    [anon_sym_solum] = ACTIONS(167),
    [anon_sym_solum_in] = ACTIONS(167),
    [anon_sym_some] = ACTIONS(167),
    [anon_sym_sparge] = ACTIONS(167),
    [anon_sym_spread] = ACTIONS(167),
    [anon_sym_step] = ACTIONS(167),
    [anon_sym_tacebit] = ACTIONS(167),
    [anon_sym_tag] = ACTIONS(167),
    [anon_sym_teardown] = ACTIONS(167),
    [anon_sym_temporis] = ACTIONS(167),
    [anon_sym_test] = ACTIONS(167),
    [anon_sym_timeout] = ACTIONS(167),
    [anon_sym_todo] = ACTIONS(167),
    [anon_sym_until] = ACTIONS(167),
    [anon_sym_usque] = ACTIONS(167),
    [anon_sym_ut] = ACTIONS(167),
    [anon_sym_variandum] = ACTIONS(167),
    [anon_sym_variant] = ACTIONS(167),
    [anon_sym_vel] = ACTIONS(167),
    [anon_sym_via] = ACTIONS(167),
    [anon_sym_vide] = ACTIONS(167),
    [anon_sym_warn] = ACTIONS(167),
    [anon_sym_wrapping] = ACTIONS(167),
    [anon_sym_write] = ACTIONS(167),
    [anon_sym_yield] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_falsum] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_verum] = ACTIONS(167),
    [sym_guillemet_string] = ACTIONS(165),
    [sym_octeti_string] = ACTIONS(165),
    [sym_backtick_string] = ACTIONS(165),
    [sym_ascii_string] = ACTIONS(165),
    [sym_string] = ACTIONS(165),
    [sym_number] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [sym_operator] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [sym_hash] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(165),
    [sym_faber_newline] = ACTIONS(165),
  },
  [30] = {
    [sym_annotation_value_type] = STATE(46),
    [sym_boolean] = STATE(46),
    [anon_sym_ascii] = ACTIONS(217),
    [anon_sym_bivalens] = ACTIONS(217),
    [anon_sym_bool] = ACTIONS(217),
    [anon_sym_byte] = ACTIONS(217),
    [anon_sym_bytes] = ACTIONS(217),
    [anon_sym_char] = ACTIONS(217),
    [anon_sym_copia] = ACTIONS(217),
    [anon_sym_cursor_t] = ACTIONS(217),
    [anon_sym_exactus] = ACTIONS(217),
    [anon_sym_f16] = ACTIONS(217),
    [anon_sym_f32] = ACTIONS(217),
    [anon_sym_f64] = ACTIONS(217),
    [anon_sym_float] = ACTIONS(217),
    [anon_sym_fractus] = ACTIONS(217),
    [anon_sym_i16] = ACTIONS(217),
    [anon_sym_i32] = ACTIONS(217),
    [anon_sym_i64] = ACTIONS(217),
    [anon_sym_i8] = ACTIONS(217),
    [anon_sym_ignotum] = ACTIONS(217),
    [anon_sym_instans] = ACTIONS(217),
    [anon_sym_instant] = ACTIONS(217),
    [anon_sym_int] = ACTIONS(217),
    [anon_sym_intervallum] = ACTIONS(217),
    [anon_sym_iterator] = ACTIONS(217),
    [anon_sym_lf16] = ACTIONS(217),
    [anon_sym_lf32] = ACTIONS(217),
    [anon_sym_lf64] = ACTIONS(217),
    [anon_sym_li16] = ACTIONS(217),
    [anon_sym_li32] = ACTIONS(217),
    [anon_sym_li64] = ACTIONS(217),
    [anon_sym_li8] = ACTIONS(217),
    [anon_sym_list] = ACTIONS(217),
    [anon_sym_lista] = ACTIONS(217),
    [anon_sym_littera] = ACTIONS(217),
    [anon_sym_lu16] = ACTIONS(217),
    [anon_sym_lu32] = ACTIONS(217),
    [anon_sym_lu64] = ACTIONS(217),
    [anon_sym_lu8] = ACTIONS(217),
    [anon_sym_map] = ACTIONS(217),
    [anon_sym_matrix] = ACTIONS(217),
    [anon_sym_mf16] = ACTIONS(217),
    [anon_sym_mf32] = ACTIONS(217),
    [anon_sym_mf64] = ACTIONS(217),
    [anon_sym_mi16] = ACTIONS(217),
    [anon_sym_mi32] = ACTIONS(217),
    [anon_sym_mi64] = ACTIONS(217),
    [anon_sym_mi8] = ACTIONS(217),
    [anon_sym_mu16] = ACTIONS(217),
    [anon_sym_mu32] = ACTIONS(217),
    [anon_sym_mu64] = ACTIONS(217),
    [anon_sym_mu8] = ACTIONS(217),
    [anon_sym_never] = ACTIONS(217),
    [anon_sym_numerus] = ACTIONS(217),
    [anon_sym_numquam] = ACTIONS(217),
    [anon_sym_octeti] = ACTIONS(217),
    [anon_sym_octetus] = ACTIONS(217),
    [anon_sym_promise] = ACTIONS(217),
    [anon_sym_promissum] = ACTIONS(217),
    [anon_sym_queue] = ACTIONS(217),
    [anon_sym_ratio] = ACTIONS(217),
    [anon_sym_record] = ACTIONS(217),
    [anon_sym_regex] = ACTIONS(217),
    [anon_sym_saturating] = ACTIONS(217),
    [anon_sym_saturatus] = ACTIONS(217),
    [anon_sym_series] = ACTIONS(217),
    [anon_sym_set] = ACTIONS(217),
    [anon_sym_sf16] = ACTIONS(217),
    [anon_sym_sf32] = ACTIONS(217),
    [anon_sym_sf64] = ACTIONS(217),
    [anon_sym_si16] = ACTIONS(217),
    [anon_sym_si32] = ACTIONS(217),
    [anon_sym_si64] = ACTIONS(217),
    [anon_sym_si8] = ACTIONS(217),
    [anon_sym_sparsa] = ACTIONS(217),
    [anon_sym_stack] = ACTIONS(217),
    [anon_sym_string] = ACTIONS(217),
    [anon_sym_su16] = ACTIONS(217),
    [anon_sym_su32] = ACTIONS(217),
    [anon_sym_su64] = ACTIONS(217),
    [anon_sym_su8] = ACTIONS(217),
    [anon_sym_tabula] = ACTIONS(217),
    [anon_sym_tensor] = ACTIONS(217),
    [anon_sym_textus] = ACTIONS(217),
    [anon_sym_tf16] = ACTIONS(217),
    [anon_sym_tf32] = ACTIONS(217),
    [anon_sym_tf64] = ACTIONS(217),
    [anon_sym_ti16] = ACTIONS(217),
    [anon_sym_ti32] = ACTIONS(217),
    [anon_sym_ti64] = ACTIONS(217),
    [anon_sym_ti8] = ACTIONS(217),
    [anon_sym_trapping] = ACTIONS(217),
    [anon_sym_tu16] = ACTIONS(217),
    [anon_sym_tu32] = ACTIONS(217),
    [anon_sym_tu64] = ACTIONS(217),
    [anon_sym_tu8] = ACTIONS(217),
    [anon_sym_u16] = ACTIONS(217),
    [anon_sym_u32] = ACTIONS(217),
    [anon_sym_u64] = ACTIONS(217),
    [anon_sym_u8] = ACTIONS(217),
    [anon_sym_unio] = ACTIONS(217),
    [anon_sym_unknown] = ACTIONS(217),
    [anon_sym_vacua] = ACTIONS(217),
    [anon_sym_vacuum] = ACTIONS(217),
    [anon_sym_valor] = ACTIONS(217),
    [anon_sym_vector] = ACTIONS(217),
    [anon_sym_vf16] = ACTIONS(217),
    [anon_sym_vf32] = ACTIONS(217),
    [anon_sym_vf64] = ACTIONS(217),
    [anon_sym_vi16] = ACTIONS(217),
    [anon_sym_vi32] = ACTIONS(217),
    [anon_sym_vi64] = ACTIONS(217),
    [anon_sym_vi8] = ACTIONS(217),
    [anon_sym_void] = ACTIONS(217),
    [anon_sym_vu16] = ACTIONS(217),
    [anon_sym_vu32] = ACTIONS(217),
    [anon_sym_vu64] = ACTIONS(217),
    [anon_sym_vu8] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_falsum] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_verum] = ACTIONS(219),
    [sym_guillemet_string] = ACTIONS(221),
    [sym_octeti_string] = ACTIONS(221),
    [sym_backtick_string] = ACTIONS(221),
    [sym_ascii_string] = ACTIONS(221),
    [sym_string] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
    [sym_identifier] = ACTIONS(223),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(2), 1,
      sym_annotation_name,
    STATE(12), 1,
      sym_known_annotation_name,
    ACTIONS(225), 30,
      anon_sym_cli,
      anon_sym_command,
      anon_sym_conversio,
      anon_sym_conversion,
      anon_sym_cursor,
      anon_sym_fragment,
      anon_sym_futura,
      anon_sym_future,
      anon_sym_imperia,
      anon_sym_imperium,
      anon_sym_json,
      anon_sym_kernel,
      anon_sym_nondum,
      anon_sym_nucleum,
      anon_sym_operand,
      anon_sym_operandus,
      anon_sym_optio,
      anon_sym_option,
      anon_sym_privata,
      anon_sym_private,
      anon_sym_protecta,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_publica,
      anon_sym_radix,
      anon_sym_rename,
      anon_sym_unstable,
      anon_sym_versio,
      anon_sym_verte,
      anon_sym_vertex,
  [42] = 9,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym_faber_newline,
    STATE(22), 1,
      sym_rbrace,
    STATE(42), 1,
      sym_annotation_field,
    STATE(53), 1,
      sym_annotation_modifier,
    STATE(38), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(233), 11,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
  [81] = 9,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym_faber_newline,
    STATE(23), 1,
      sym_rbrace,
    STATE(47), 1,
      sym_annotation_field,
    STATE(53), 1,
      sym_annotation_modifier,
    STATE(38), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(233), 11,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
  [120] = 9,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      sym_faber_newline,
    STATE(21), 1,
      sym_rbrace,
    STATE(43), 1,
      sym_annotation_field,
    STATE(53), 1,
      sym_annotation_modifier,
    STATE(32), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(233), 11,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
  [159] = 9,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym_faber_newline,
    STATE(24), 1,
      sym_rbrace,
    STATE(47), 1,
      sym_annotation_field,
    STATE(53), 1,
      sym_annotation_modifier,
    STATE(38), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(233), 11,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
  [198] = 9,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym_faber_newline,
    STATE(25), 1,
      sym_rbrace,
    STATE(47), 1,
      sym_annotation_field,
    STATE(53), 1,
      sym_annotation_modifier,
    STATE(38), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(233), 11,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
  [237] = 7,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym_faber_newline,
    STATE(47), 1,
      sym_annotation_field,
    STATE(53), 1,
      sym_annotation_modifier,
    STATE(38), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(233), 11,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
  [270] = 5,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym_faber_newline,
    STATE(38), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
    ACTIONS(246), 12,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
      sym_identifier,
  [298] = 2,
    ACTIONS(251), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(253), 12,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
      sym_identifier,
  [318] = 2,
    ACTIONS(255), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(257), 12,
      anon_sym_brevis,
      anon_sym_descriptio,
      anon_sym_description,
      anon_sym_global,
      anon_sym_lane,
      anon_sym_long,
      anon_sym_longum,
      anon_sym_name,
      anon_sym_nomen,
      anon_sym_short,
      anon_sym_ubique,
      sym_identifier,
  [338] = 6,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym_faber_newline,
    STATE(23), 1,
      sym_rbrace,
    STATE(45), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(35), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [358] = 6,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym_faber_newline,
    STATE(23), 1,
      sym_rbrace,
    STATE(44), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(35), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [378] = 6,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_faber_newline,
    STATE(22), 1,
      sym_rbrace,
    STATE(41), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(33), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [398] = 6,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      sym_faber_newline,
    STATE(24), 1,
      sym_rbrace,
    STATE(45), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(36), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [418] = 5,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      sym_faber_newline,
    STATE(45), 1,
      aux_sym_braced_annotation_repeat2,
    STATE(37), 2,
      sym_comma_sign,
      aux_sym_braced_annotation_repeat1,
  [435] = 1,
    ACTIONS(273), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [441] = 1,
    ACTIONS(265), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [447] = 1,
    ACTIONS(169), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [453] = 1,
    ACTIONS(145), 3,
      sym_faber_newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [459] = 1,
    ACTIONS(275), 2,
      sym_number,
      sym_identifier,
  [464] = 1,
    ACTIONS(277), 2,
      sym_number,
      sym_identifier,
  [469] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [473] = 1,
    ACTIONS(281), 1,
      sym_eq_sign,
  [477] = 1,
    ACTIONS(153), 1,
      sym_eq_sign,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 42,
  [SMALL_STATE(33)] = 81,
  [SMALL_STATE(34)] = 120,
  [SMALL_STATE(35)] = 159,
  [SMALL_STATE(36)] = 198,
  [SMALL_STATE(37)] = 237,
  [SMALL_STATE(38)] = 270,
  [SMALL_STATE(39)] = 298,
  [SMALL_STATE(40)] = 318,
  [SMALL_STATE(41)] = 338,
  [SMALL_STATE(42)] = 358,
  [SMALL_STATE(43)] = 378,
  [SMALL_STATE(44)] = 398,
  [SMALL_STATE(45)] = 418,
  [SMALL_STATE(46)] = 435,
  [SMALL_STATE(47)] = 441,
  [SMALL_STATE(48)] = 447,
  [SMALL_STATE(49)] = 453,
  [SMALL_STATE(50)] = 459,
  [SMALL_STATE(51)] = 464,
  [SMALL_STATE(52)] = 469,
  [SMALL_STATE(53)] = 473,
  [SMALL_STATE(54)] = 477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(39),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(9),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(15),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(3),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation, 2, 0, 1), SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arguments, 1, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(14),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(9),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(15),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(4),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_annotation_arguments, 1, 0, 0), SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_annotation_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_known_annotation_name, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_known_annotation_name, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_value_type, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_value_type, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_modifier, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_modifier, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_name, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_other, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_other, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_declaration, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_declaration, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_control, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_control, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rbrace, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rbrace, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 5, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_annotation, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_annotation, 6, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lbrace, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lbrace, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_sign, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comma_sign, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat2, 2, 0, 0),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat2, 2, 0, 0), SHIFT_REPEAT(40),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_braced_annotation_repeat2, 2, 0, 0), SHIFT_REPEAT(37),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_field, 3, 0, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_glyph, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_comment = 0,
  ts_external_token_faber_newline = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_comment] = sym_line_comment,
  [ts_external_token_faber_newline] = sym_faber_newline,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_comment] = true,
    [ts_external_token_faber_newline] = true,
  },
  [2] = {
    [ts_external_token_faber_newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_faber_external_scanner_create(void);
void tree_sitter_faber_external_scanner_destroy(void *);
bool tree_sitter_faber_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_faber_external_scanner_serialize(void *, char *);
void tree_sitter_faber_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_faber(void) {
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
      tree_sitter_faber_external_scanner_create,
      tree_sitter_faber_external_scanner_destroy,
      tree_sitter_faber_external_scanner_scan,
      tree_sitter_faber_external_scanner_serialize,
      tree_sitter_faber_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
