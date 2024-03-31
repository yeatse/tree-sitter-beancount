#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 34
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 128

enum ts_symbol_identifiers {
  aux_sym__skipped_lines_token1 = 1,
  aux_sym__skipped_lines_token2 = 2,
  aux_sym__skipped_lines_token3 = 3,
  anon_sym_COLON = 4,
  aux_sym__skipped_lines_token4 = 5,
  anon_sym_include = 6,
  anon_sym_option = 7,
  anon_sym_plugin = 8,
  anon_sym_pushtag = 9,
  anon_sym_poptag = 10,
  anon_sym_pushmeta = 11,
  anon_sym_popmeta = 12,
  anon_sym_balance = 13,
  anon_sym_close = 14,
  anon_sym_commodity = 15,
  anon_sym_custom = 16,
  anon_sym_document = 17,
  anon_sym_event = 18,
  anon_sym_note = 19,
  anon_sym_open = 20,
  anon_sym_pad = 21,
  anon_sym_price = 22,
  anon_sym_txn = 23,
  anon_sym_query = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LBRACE_LBRACE = 27,
  anon_sym_RBRACE_RBRACE = 28,
  anon_sym_COMMA = 29,
  anon_sym_STAR = 30,
  anon_sym_POUND = 31,
  anon_sym_AT = 32,
  anon_sym_AT_AT = 33,
  aux_sym_posting_token1 = 34,
  anon_sym_TILDE = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_DASH = 38,
  anon_sym_PLUS = 39,
  anon_sym_SLASH = 40,
  sym_bool = 41,
  sym_date = 42,
  sym_key = 43,
  sym_tag = 44,
  sym_link = 45,
  sym_string = 46,
  sym_currency = 47,
  sym_number = 48,
  sym_account = 49,
  sym_beancount_file = 50,
  sym__skipped_lines = 51,
  sym__undated_directives = 52,
  sym_include = 53,
  sym_option = 54,
  sym_plugin = 55,
  sym_pushtag = 56,
  sym_poptag = 57,
  sym_pushmeta = 58,
  sym_popmeta = 59,
  sym__dated_directives = 60,
  sym_balance = 61,
  sym_close = 62,
  sym_commodity = 63,
  sym_custom = 64,
  sym_document = 65,
  sym_event = 66,
  sym_note = 67,
  sym_open = 68,
  sym_pad = 69,
  sym_price = 70,
  sym_transaction = 71,
  sym_query = 72,
  sym_cost = 73,
  sym_total_cost = 74,
  sym__cost_comp_list = 75,
  sym__cost_comp = 76,
  sym_compound_amount = 77,
  sym_incomplete_amount = 78,
  sym_price_annotation = 79,
  sym_total_price_annotation = 80,
  sym_posting = 81,
  sym_postings = 82,
  sym_tags_and_links = 83,
  sym_currency_list = 84,
  sym_metadata = 85,
  sym_key_value = 86,
  sym_amount = 87,
  sym_amount_with_tolerance = 88,
  sym__num_expr = 89,
  sym_paren_num_expr = 90,
  sym_unary_num_expr = 91,
  sym_binary_num_expr = 92,
  sym_flag = 93,
  aux_sym_beancount_file_repeat1 = 94,
  aux_sym_custom_repeat1 = 95,
  aux_sym__cost_comp_list_repeat1 = 96,
  aux_sym_postings_repeat1 = 97,
  aux_sym_tags_and_links_repeat1 = 98,
  aux_sym_currency_list_repeat1 = 99,
  aux_sym_metadata_repeat1 = 100,
  alias_sym_merge = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
  [aux_sym__skipped_lines_token2] = "_skipped_lines_token2",
  [aux_sym__skipped_lines_token3] = "_skipped_lines_token3",
  [anon_sym_COLON] = ":",
  [aux_sym__skipped_lines_token4] = "_skipped_lines_token4",
  [anon_sym_include] = "INCLUDE",
  [anon_sym_option] = "OPTION",
  [anon_sym_plugin] = "PLUGIN",
  [anon_sym_pushtag] = "PUSHTAG",
  [anon_sym_poptag] = "POPTAG",
  [anon_sym_pushmeta] = "PUSHMETA",
  [anon_sym_popmeta] = "POPMETA",
  [anon_sym_balance] = "BALANCE",
  [anon_sym_close] = "CLOSE",
  [anon_sym_commodity] = "COMMODITY",
  [anon_sym_custom] = "CUSTOM",
  [anon_sym_document] = "DOCUMENT",
  [anon_sym_event] = "EVENT",
  [anon_sym_note] = "NOTE",
  [anon_sym_open] = "OPEN",
  [anon_sym_pad] = "PAD",
  [anon_sym_price] = "PRICE",
  [anon_sym_txn] = "TXN",
  [anon_sym_query] = "QUERY",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [aux_sym_posting_token1] = "posting_token1",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [sym_bool] = "bool",
  [sym_date] = "date",
  [sym_key] = "key",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_string] = "string",
  [sym_currency] = "currency",
  [sym_number] = "number",
  [sym_account] = "account",
  [sym_beancount_file] = "beancount_file",
  [sym__skipped_lines] = "_skipped_lines",
  [sym__undated_directives] = "_undated_directives",
  [sym_include] = "include",
  [sym_option] = "option",
  [sym_plugin] = "plugin",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym__dated_directives] = "_dated_directives",
  [sym_balance] = "balance",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_custom] = "custom",
  [sym_document] = "document",
  [sym_event] = "event",
  [sym_note] = "note",
  [sym_open] = "open",
  [sym_pad] = "pad",
  [sym_price] = "price",
  [sym_transaction] = "transaction",
  [sym_query] = "query",
  [sym_cost] = "cost",
  [sym_total_cost] = "total_cost",
  [sym__cost_comp_list] = "_cost_comp_list",
  [sym__cost_comp] = "_cost_comp",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_price_annotation] = "price_annotation",
  [sym_total_price_annotation] = "total_price_annotation",
  [sym_posting] = "posting",
  [sym_postings] = "postings",
  [sym_tags_and_links] = "tags_and_links",
  [sym_currency_list] = "currency_list",
  [sym_metadata] = "metadata",
  [sym_key_value] = "key_value",
  [sym_amount] = "amount",
  [sym_amount_with_tolerance] = "amount_with_tolerance",
  [sym__num_expr] = "_num_expr",
  [sym_paren_num_expr] = "paren_num_expr",
  [sym_unary_num_expr] = "unary_num_expr",
  [sym_binary_num_expr] = "binary_num_expr",
  [sym_flag] = "flag",
  [aux_sym_beancount_file_repeat1] = "beancount_file_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym__cost_comp_list_repeat1] = "_cost_comp_list_repeat1",
  [aux_sym_postings_repeat1] = "postings_repeat1",
  [aux_sym_tags_and_links_repeat1] = "tags_and_links_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [alias_sym_merge] = "merge",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skipped_lines_token1] = aux_sym__skipped_lines_token1,
  [aux_sym__skipped_lines_token2] = aux_sym__skipped_lines_token2,
  [aux_sym__skipped_lines_token3] = aux_sym__skipped_lines_token3,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__skipped_lines_token4] = aux_sym__skipped_lines_token4,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym_posting_token1] = aux_sym_posting_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_bool] = sym_bool,
  [sym_date] = sym_date,
  [sym_key] = sym_key,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_string] = sym_string,
  [sym_currency] = sym_currency,
  [sym_number] = sym_number,
  [sym_account] = sym_account,
  [sym_beancount_file] = sym_beancount_file,
  [sym__skipped_lines] = sym__skipped_lines,
  [sym__undated_directives] = sym__undated_directives,
  [sym_include] = sym_include,
  [sym_option] = sym_option,
  [sym_plugin] = sym_plugin,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym__dated_directives] = sym__dated_directives,
  [sym_balance] = sym_balance,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_custom] = sym_custom,
  [sym_document] = sym_document,
  [sym_event] = sym_event,
  [sym_note] = sym_note,
  [sym_open] = sym_open,
  [sym_pad] = sym_pad,
  [sym_price] = sym_price,
  [sym_transaction] = sym_transaction,
  [sym_query] = sym_query,
  [sym_cost] = sym_cost,
  [sym_total_cost] = sym_total_cost,
  [sym__cost_comp_list] = sym__cost_comp_list,
  [sym__cost_comp] = sym__cost_comp,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_price_annotation] = sym_price_annotation,
  [sym_total_price_annotation] = sym_total_price_annotation,
  [sym_posting] = sym_posting,
  [sym_postings] = sym_postings,
  [sym_tags_and_links] = sym_tags_and_links,
  [sym_currency_list] = sym_currency_list,
  [sym_metadata] = sym_metadata,
  [sym_key_value] = sym_key_value,
  [sym_amount] = sym_amount,
  [sym_amount_with_tolerance] = sym_amount_with_tolerance,
  [sym__num_expr] = sym__num_expr,
  [sym_paren_num_expr] = sym_paren_num_expr,
  [sym_unary_num_expr] = sym_unary_num_expr,
  [sym_binary_num_expr] = sym_binary_num_expr,
  [sym_flag] = sym_flag,
  [aux_sym_beancount_file_repeat1] = aux_sym_beancount_file_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [aux_sym__cost_comp_list_repeat1] = aux_sym__cost_comp_list_repeat1,
  [aux_sym_postings_repeat1] = aux_sym_postings_repeat1,
  [aux_sym_tags_and_links_repeat1] = aux_sym_tags_and_links_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [alias_sym_merge] = alias_sym_merge,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skipped_lines_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__skipped_lines_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__skipped_lines_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__skipped_lines_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_posting_token1] = {
    .visible = false,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_beancount_file] = {
    .visible = true,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [sym__undated_directives] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym__dated_directives] = {
    .visible = false,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_total_cost] = {
    .visible = true,
    .named = true,
  },
  [sym__cost_comp_list] = {
    .visible = false,
    .named = true,
  },
  [sym__cost_comp] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_total_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_postings] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_and_links] = {
    .visible = true,
    .named = true,
  },
  [sym_currency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_with_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym__num_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_paren_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_beancount_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_and_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_merge] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_account = 1,
  field_amount = 2,
  field_booking = 3,
  field_compound_amount = 4,
  field_config = 5,
  field_cost_comp_list = 6,
  field_cost_spec = 7,
  field_currencies = 8,
  field_currency = 9,
  field_date = 10,
  field_description = 11,
  field_filename = 12,
  field_flag = 13,
  field_from_account = 14,
  field_key = 15,
  field_key_value = 16,
  field_merge = 17,
  field_metadata = 18,
  field_name = 19,
  field_narration = 20,
  field_note = 21,
  field_number = 22,
  field_number_per = 23,
  field_number_total = 24,
  field_payee = 25,
  field_postings = 26,
  field_price_annotation = 27,
  field_query = 28,
  field_string = 29,
  field_tag = 30,
  field_tags_and_links = 31,
  field_tolerance = 32,
  field_type = 33,
  field_value = 34,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_booking] = "booking",
  [field_compound_amount] = "compound_amount",
  [field_config] = "config",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_date] = "date",
  [field_description] = "description",
  [field_filename] = "filename",
  [field_flag] = "flag",
  [field_from_account] = "from_account",
  [field_key] = "key",
  [field_key_value] = "key_value",
  [field_merge] = "merge",
  [field_metadata] = "metadata",
  [field_name] = "name",
  [field_narration] = "narration",
  [field_note] = "note",
  [field_number] = "number",
  [field_number_per] = "number_per",
  [field_number_total] = "number_total",
  [field_payee] = "payee",
  [field_postings] = "postings",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_string] = "string",
  [field_tag] = "tag",
  [field_tags_and_links] = "tags_and_links",
  [field_tolerance] = "tolerance",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 3},
  [19] = {.index = 34, .length = 3},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 3},
  [22] = {.index = 43, .length = 3},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 3},
  [25] = {.index = 52, .length = 3},
  [26] = {.index = 55, .length = 3},
  [27] = {.index = 58, .length = 1},
  [28] = {.index = 59, .length = 2},
  [29] = {.index = 61, .length = 2},
  [30] = {.index = 63, .length = 2},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 1},
  [33] = {.index = 68, .length = 2},
  [34] = {.index = 70, .length = 3},
  [35] = {.index = 73, .length = 3},
  [36] = {.index = 76, .length = 3},
  [37] = {.index = 79, .length = 3},
  [38] = {.index = 82, .length = 4},
  [39] = {.index = 86, .length = 4},
  [40] = {.index = 90, .length = 4},
  [41] = {.index = 94, .length = 4},
  [42] = {.index = 98, .length = 3},
  [43] = {.index = 101, .length = 4},
  [44] = {.index = 105, .length = 4},
  [45] = {.index = 109, .length = 4},
  [46] = {.index = 113, .length = 4},
  [47] = {.index = 117, .length = 4},
  [48] = {.index = 121, .length = 4},
  [49] = {.index = 125, .length = 4},
  [50] = {.index = 129, .length = 4},
  [51] = {.index = 133, .length = 4},
  [52] = {.index = 137, .length = 2},
  [53] = {.index = 139, .length = 1},
  [54] = {.index = 140, .length = 1},
  [55] = {.index = 141, .length = 1},
  [56] = {.index = 142, .length = 4},
  [57] = {.index = 146, .length = 1},
  [58] = {.index = 147, .length = 1},
  [59] = {.index = 148, .length = 3},
  [60] = {.index = 151, .length = 3},
  [61] = {.index = 154, .length = 3},
  [62] = {.index = 157, .length = 3},
  [63] = {.index = 160, .length = 3},
  [64] = {.index = 163, .length = 3},
  [65] = {.index = 166, .length = 3},
  [66] = {.index = 169, .length = 3},
  [67] = {.index = 172, .length = 3},
  [68] = {.index = 175, .length = 3},
  [69] = {.index = 178, .length = 4},
  [70] = {.index = 182, .length = 4},
  [71] = {.index = 186, .length = 4},
  [72] = {.index = 190, .length = 4},
  [73] = {.index = 194, .length = 4},
  [74] = {.index = 198, .length = 5},
  [75] = {.index = 203, .length = 5},
  [76] = {.index = 208, .length = 5},
  [77] = {.index = 213, .length = 5},
  [78] = {.index = 218, .length = 3},
  [79] = {.index = 221, .length = 5},
  [80] = {.index = 226, .length = 5},
  [81] = {.index = 231, .length = 1},
  [82] = {.index = 232, .length = 5},
  [83] = {.index = 237, .length = 8},
  [84] = {.index = 245, .length = 2},
  [85] = {.index = 247, .length = 3},
  [86] = {.index = 250, .length = 4},
  [87] = {.index = 254, .length = 3},
  [88] = {.index = 257, .length = 4},
  [89] = {.index = 261, .length = 4},
  [90] = {.index = 265, .length = 4},
  [91] = {.index = 269, .length = 3},
  [92] = {.index = 272, .length = 3},
  [93] = {.index = 275, .length = 4},
  [94] = {.index = 279, .length = 4},
  [95] = {.index = 283, .length = 4},
  [96] = {.index = 287, .length = 4},
  [97] = {.index = 291, .length = 4},
  [98] = {.index = 295, .length = 4},
  [99] = {.index = 299, .length = 5},
  [100] = {.index = 304, .length = 5},
  [101] = {.index = 309, .length = 5},
  [102] = {.index = 314, .length = 6},
  [103] = {.index = 320, .length = 6},
  [104] = {.index = 326, .length = 6},
  [105] = {.index = 332, .length = 2},
  [106] = {.index = 334, .length = 4},
  [107] = {.index = 338, .length = 2},
  [108] = {.index = 340, .length = 4},
  [109] = {.index = 344, .length = 4},
  [110] = {.index = 348, .length = 5},
  [111] = {.index = 353, .length = 4},
  [112] = {.index = 357, .length = 4},
  [113] = {.index = 361, .length = 5},
  [114] = {.index = 366, .length = 4},
  [115] = {.index = 370, .length = 5},
  [116] = {.index = 375, .length = 5},
  [117] = {.index = 380, .length = 5},
  [118] = {.index = 385, .length = 4},
  [119] = {.index = 389, .length = 6},
  [120] = {.index = 395, .length = 7},
  [121] = {.index = 402, .length = 3},
  [122] = {.index = 405, .length = 5},
  [123] = {.index = 410, .length = 5},
  [124] = {.index = 415, .length = 5},
  [125] = {.index = 420, .length = 6},
  [126] = {.index = 426, .length = 5},
  [127] = {.index = 431, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_tag, 1},
  [3] =
    {field_key, 0},
    {field_value, 1},
  [5] =
    {field_key_value, 1},
  [6] =
    {field_key, 1},
  [7] =
    {field_key, 1},
    {field_value, 2},
  [9] =
    {field_config, 2},
    {field_name, 1},
  [11] =
    {field_currency, 1},
    {field_number, 0},
  [13] =
    {field_account, 2},
    {field_date, 0},
  [15] =
    {field_currency, 2},
    {field_date, 0},
  [17] =
    {field_date, 0},
    {field_name, 2},
  [19] =
    {field_account, 1},
  [20] =
    {field_date, 0},
    {field_postings, 2},
  [22] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
  [25] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [28] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [31] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [34] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [37] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [40] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [43] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [46] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [49] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [52] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [55] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [58] =
    {field_currency, 0},
  [59] =
    {field_account, 1},
    {field_cost_spec, 2},
  [61] =
    {field_account, 1},
    {field_amount, 2},
  [63] =
    {field_account, 1},
    {field_price_annotation, 2},
  [65] =
    {field_account, 1},
    {field_metadata, 2},
  [67] =
    {field_number, 0},
  [68] =
    {field_account, 2},
    {field_flag, 1},
  [70] =
    {field_date, 0},
    {field_narration, 2},
    {field_postings, 3},
  [73] =
    {field_date, 0},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [76] =
    {field_date, 0},
    {field_metadata, 2},
    {field_postings, 3},
  [79] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [82] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 2},
    {field_postings, 3},
  [86] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [90] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [94] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [98] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [101] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [105] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [109] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [113] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [117] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [121] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [125] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [129] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [133] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [137] =
    {field_account, 1},
    {field_metadata, 3},
  [139] =
    {field_merge, 0},
  [140] =
    {field_date, 0},
  [141] =
    {field_string, 0},
  [142] =
    {field_compound_amount, 0, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_merge, 0, .inherited = true},
    {field_string, 0, .inherited = true},
  [146] =
    {field_compound_amount, 0},
  [147] =
    {field_number_per, 0},
  [148] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [151] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [154] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [157] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [160] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [163] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [166] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [169] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [172] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [175] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [178] =
    {field_date, 0},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 4},
  [182] =
    {field_date, 0},
    {field_narration, 2},
    {field_postings, 4},
    {field_tags_and_links, 3},
  [186] =
    {field_date, 0},
    {field_metadata, 3},
    {field_narration, 2},
    {field_postings, 4},
  [190] =
    {field_date, 0},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [194] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [198] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 4},
  [203] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 2},
    {field_postings, 4},
    {field_tags_and_links, 3},
  [208] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_narration, 2},
    {field_postings, 4},
  [213] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [218] =
    {field_currency, 3},
    {field_number, 0},
    {field_tolerance, 2},
  [221] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [226] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [231] =
    {field_currency, 1},
  [232] =
    {field_compound_amount, 1, .inherited = true},
    {field_cost_comp_list, 1},
    {field_date, 1, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [237] =
    {field_compound_amount, 0, .inherited = true},
    {field_compound_amount, 1, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_date, 1, .inherited = true},
    {field_merge, 0, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 0, .inherited = true},
    {field_string, 1, .inherited = true},
  [245] =
    {field_currency, 1},
    {field_number_per, 0},
  [247] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
  [250] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [254] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
  [257] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [261] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [265] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [269] =
    {field_account, 1},
    {field_metadata, 4},
    {field_price_annotation, 2},
  [272] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
  [275] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [279] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [283] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [287] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [291] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [295] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [299] =
    {field_date, 0},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
    {field_tags_and_links, 4},
  [304] =
    {field_date, 0},
    {field_metadata, 4},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
  [309] =
    {field_date, 0},
    {field_metadata, 4},
    {field_narration, 2},
    {field_postings, 5},
    {field_tags_and_links, 3},
  [314] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
    {field_tags_and_links, 4},
  [320] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
  [326] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_narration, 2},
    {field_postings, 5},
    {field_tags_and_links, 3},
  [332] =
    {field_currency, 2},
    {field_number_total, 1},
  [334] =
    {field_compound_amount, 1, .inherited = true},
    {field_date, 1, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [338] =
    {field_currency, 2},
    {field_number_per, 0},
  [340] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [344] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
  [348] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [353] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [357] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [361] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [366] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [370] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [375] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [380] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [385] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [389] =
    {field_date, 0},
    {field_metadata, 5},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 6},
    {field_tags_and_links, 4},
  [395] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 5},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 6},
    {field_tags_and_links, 4},
  [402] =
    {field_currency, 3},
    {field_number_per, 0},
    {field_number_total, 2},
  [405] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [410] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [415] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
  [420] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
  [426] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [431] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 7},
    {field_price_annotation, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [53] = {
    [0] = alias_sym_merge,
  },
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
  [89] = 8,
  [90] = 11,
  [91] = 10,
  [92] = 9,
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
  [114] = 110,
  [115] = 115,
  [116] = 116,
  [117] = 116,
  [118] = 115,
  [119] = 119,
  [120] = 112,
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
  [155] = 136,
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
  [211] = 205,
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
};

static TSCharacterRange aux_sym__skipped_lines_token1_character_set_1[] = {
  {'!', '!'}, {'#', '#'}, {'%', '&'}, {'*', '*'}, {'?', '?'}, {'C', 'C'}, {'M', 'M'}, {'P', 'P'},
  {'R', 'U'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 196,
        '(', 201,
        ')', 202,
        '*', 195,
        '+', 204,
        ',', 194,
        '-', 203,
        '/', 205,
        ':', 168,
        ';', 169,
        '@', 197,
        '^', 155,
        'b', 44,
        'c', 78,
        'd', 94,
        'e', 117,
        'i', 90,
        'n', 95,
        'o', 100,
        'p', 45,
        'q', 114,
        't', 118,
        '{', 189,
        '}', 191,
        '~', 200,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 196,
        '(', 201,
        ')', 202,
        '*', 195,
        '+', 204,
        ',', 194,
        '-', 203,
        '/', 205,
        ';', 169,
        '@', 197,
        '{', 189,
        '}', 191,
        '~', 200,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 156,
        '(', 201,
        '*', 195,
        '+', 204,
        '-', 203,
        '/', 205,
        'F', 31,
        'T', 32,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (lookahead > 0x7f) ADVANCE(41);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 156,
        '(', 201,
        '+', 204,
        '-', 203,
        ';', 169,
        '@', 197,
        'F', 34,
        'T', 37,
        '^', 155,
        '{', 189,
        '}', 190,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      if (lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 118:
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(264);
      END_STATE();
    case 125:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 126:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 127:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 128:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 129:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 130:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 131:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 144:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 155:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 156:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(271);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 167,
        ':', 168,
        ';', 169,
        'b', 44,
        'c', 78,
        'd', 94,
        'e', 117,
        'i', 90,
        'n', 95,
        'o', 100,
        'p', 45,
        'q', 114,
        't', 118,
        '}', 121,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (set_contains(aux_sym__skipped_lines_token1_character_set_1, 9, lookahead)) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_posting_token1);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(238);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      if (lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 158},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 158},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 158},
  [24] = {.lex_state = 158},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 158},
  [28] = {.lex_state = 158},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 158},
  [31] = {.lex_state = 158},
  [32] = {.lex_state = 158},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 158},
  [37] = {.lex_state = 158},
  [38] = {.lex_state = 158},
  [39] = {.lex_state = 158},
  [40] = {.lex_state = 158},
  [41] = {.lex_state = 158},
  [42] = {.lex_state = 158},
  [43] = {.lex_state = 158},
  [44] = {.lex_state = 158},
  [45] = {.lex_state = 158},
  [46] = {.lex_state = 158},
  [47] = {.lex_state = 158},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 158},
  [50] = {.lex_state = 158},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 158},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 158},
  [55] = {.lex_state = 158},
  [56] = {.lex_state = 158},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 158},
  [59] = {.lex_state = 158},
  [60] = {.lex_state = 158},
  [61] = {.lex_state = 158},
  [62] = {.lex_state = 158},
  [63] = {.lex_state = 158},
  [64] = {.lex_state = 158},
  [65] = {.lex_state = 158},
  [66] = {.lex_state = 158},
  [67] = {.lex_state = 158},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 158},
  [70] = {.lex_state = 158},
  [71] = {.lex_state = 158},
  [72] = {.lex_state = 158},
  [73] = {.lex_state = 158},
  [74] = {.lex_state = 158},
  [75] = {.lex_state = 158},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 158},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 158},
  [82] = {.lex_state = 158},
  [83] = {.lex_state = 158},
  [84] = {.lex_state = 158},
  [85] = {.lex_state = 158},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 158},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 158},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 43},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 43},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 163},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 158},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 3},
  [338] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skipped_lines_token1] = ACTIONS(1),
    [aux_sym__skipped_lines_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__skipped_lines_token4] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_txn] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [aux_sym_posting_token1] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
  },
  [1] = {
    [sym_beancount_file] = STATE(272),
    [sym__skipped_lines] = STATE(2),
    [sym__undated_directives] = STATE(2),
    [sym_include] = STATE(2),
    [sym_option] = STATE(2),
    [sym_plugin] = STATE(2),
    [sym_pushtag] = STATE(2),
    [sym_poptag] = STATE(2),
    [sym_pushmeta] = STATE(2),
    [sym_popmeta] = STATE(2),
    [sym__dated_directives] = STATE(2),
    [sym_balance] = STATE(2),
    [sym_close] = STATE(2),
    [sym_commodity] = STATE(2),
    [sym_custom] = STATE(2),
    [sym_document] = STATE(2),
    [sym_event] = STATE(2),
    [sym_note] = STATE(2),
    [sym_open] = STATE(2),
    [sym_pad] = STATE(2),
    [sym_price] = STATE(2),
    [sym_transaction] = STATE(2),
    [sym_query] = STATE(2),
    [aux_sym_beancount_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skipped_lines_token1] = ACTIONS(5),
    [aux_sym__skipped_lines_token3] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(5),
    [aux_sym__skipped_lines_token4] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(13),
    [anon_sym_plugin] = ACTIONS(15),
    [anon_sym_pushtag] = ACTIONS(17),
    [anon_sym_poptag] = ACTIONS(19),
    [anon_sym_pushmeta] = ACTIONS(21),
    [anon_sym_popmeta] = ACTIONS(23),
    [sym_date] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_option,
    ACTIONS(15), 1,
      anon_sym_plugin,
    ACTIONS(17), 1,
      anon_sym_pushtag,
    ACTIONS(19), 1,
      anon_sym_poptag,
    ACTIONS(21), 1,
      anon_sym_pushmeta,
    ACTIONS(23), 1,
      anon_sym_popmeta,
    ACTIONS(25), 1,
      sym_date,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(5), 2,
      aux_sym__skipped_lines_token1,
      anon_sym_COLON,
    STATE(3), 23,
      sym__skipped_lines,
      sym__undated_directives,
      sym_include,
      sym_option,
      sym_plugin,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__dated_directives,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_transaction,
      sym_query,
      aux_sym_beancount_file_repeat1,
  [63] = 13,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(39), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(42), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_option,
    ACTIONS(48), 1,
      anon_sym_plugin,
    ACTIONS(51), 1,
      anon_sym_pushtag,
    ACTIONS(54), 1,
      anon_sym_poptag,
    ACTIONS(57), 1,
      anon_sym_pushmeta,
    ACTIONS(60), 1,
      anon_sym_popmeta,
    ACTIONS(63), 1,
      sym_date,
    ACTIONS(33), 2,
      aux_sym__skipped_lines_token1,
      anon_sym_COLON,
    STATE(3), 23,
      sym__skipped_lines,
      sym__undated_directives,
      sym_include,
      sym_option,
      sym_plugin,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__dated_directives,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_transaction,
      sym_query,
      aux_sym_beancount_file_repeat1,
  [126] = 17,
    ACTIONS(66), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(68), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(78), 1,
      aux_sym_posting_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(228), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(48), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(102), 2,
      sym_cost,
      sym_total_cost,
    STATE(156), 2,
      sym_price_annotation,
      sym_total_price_annotation,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [185] = 17,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(89), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(91), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(93), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(229), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(68), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(106), 2,
      sym_cost,
      sym_total_cost,
    STATE(134), 2,
      sym_price_annotation,
      sym_total_price_annotation,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [244] = 11,
    ACTIONS(96), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_bool,
    ACTIONS(108), 1,
      sym_number,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(298), 1,
      sym_metadata,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(106), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(57), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [285] = 11,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(110), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(112), 1,
      sym_bool,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(318), 1,
      sym_metadata,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(6), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(114), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(57), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [326] = 2,
    ACTIONS(118), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(116), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [349] = 3,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(122), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(120), 12,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [374] = 2,
    ACTIONS(122), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(120), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [397] = 2,
    ACTIONS(128), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(126), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [420] = 9,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(132), 1,
      aux_sym_posting_token1,
    ACTIONS(138), 1,
      sym_number,
    STATE(224), 1,
      sym_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(134), 2,
      sym_bool,
      sym_currency,
    ACTIONS(136), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(121), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [456] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(142), 1,
      anon_sym_STAR,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym_date,
    ACTIONS(148), 1,
      sym_string,
    ACTIONS(150), 1,
      sym_currency,
    ACTIONS(152), 1,
      sym_number,
    STATE(203), 1,
      sym__cost_comp,
    STATE(207), 1,
      sym_compound_amount,
    STATE(325), 1,
      sym__cost_comp_list,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(104), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [500] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_STAR,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym_date,
    ACTIONS(148), 1,
      sym_string,
    ACTIONS(150), 1,
      sym_currency,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym__cost_comp,
    STATE(207), 1,
      sym_compound_amount,
    STATE(337), 1,
      sym__cost_comp_list,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(104), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [544] = 9,
    ACTIONS(156), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(158), 1,
      aux_sym_posting_token1,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_bool,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(169), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(57), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [579] = 2,
    ACTIONS(177), 5,
      anon_sym_LBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
      sym_bool,
      sym_number,
    ACTIONS(175), 10,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [599] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_STAR,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym_date,
    ACTIONS(148), 1,
      sym_string,
    ACTIONS(150), 1,
      sym_currency,
    ACTIONS(152), 1,
      sym_number,
    STATE(207), 1,
      sym_compound_amount,
    STATE(208), 1,
      sym__cost_comp,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(104), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [637] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(181), 1,
      aux_sym_posting_token1,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
    STATE(220), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [668] = 14,
    ACTIONS(183), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(185), 1,
      anon_sym_balance,
    ACTIONS(187), 1,
      anon_sym_close,
    ACTIONS(189), 1,
      anon_sym_commodity,
    ACTIONS(191), 1,
      anon_sym_custom,
    ACTIONS(193), 1,
      anon_sym_document,
    ACTIONS(195), 1,
      anon_sym_event,
    ACTIONS(197), 1,
      anon_sym_note,
    ACTIONS(199), 1,
      anon_sym_open,
    ACTIONS(201), 1,
      anon_sym_pad,
    ACTIONS(203), 1,
      anon_sym_price,
    ACTIONS(205), 1,
      anon_sym_txn,
    ACTIONS(207), 1,
      anon_sym_query,
    STATE(98), 1,
      sym_flag,
  [711] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(211), 1,
      aux_sym_posting_token1,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(209), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
    STATE(217), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [742] = 1,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [758] = 1,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [774] = 1,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [790] = 1,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [806] = 1,
    ACTIONS(221), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [822] = 1,
    ACTIONS(223), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [838] = 1,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [854] = 1,
    ACTIONS(227), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [870] = 1,
    ACTIONS(229), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [886] = 1,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [902] = 1,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [918] = 1,
    ACTIONS(235), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [934] = 1,
    ACTIONS(237), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [950] = 1,
    ACTIONS(239), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [966] = 1,
    ACTIONS(241), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [982] = 1,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [998] = 1,
    ACTIONS(245), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1014] = 1,
    ACTIONS(247), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1030] = 1,
    ACTIONS(249), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1046] = 1,
    ACTIONS(251), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1062] = 1,
    ACTIONS(253), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1078] = 1,
    ACTIONS(255), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1094] = 1,
    ACTIONS(257), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1110] = 1,
    ACTIONS(259), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1126] = 1,
    ACTIONS(261), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1142] = 1,
    ACTIONS(263), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1158] = 1,
    ACTIONS(265), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1174] = 11,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(267), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(269), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(271), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(225), 1,
      sym_metadata,
    STATE(105), 2,
      sym_cost,
      sym_total_cost,
    STATE(153), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1210] = 1,
    ACTIONS(274), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1226] = 1,
    ACTIONS(276), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1242] = 1,
    ACTIONS(278), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1258] = 1,
    ACTIONS(280), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1274] = 1,
    ACTIONS(282), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1290] = 1,
    ACTIONS(284), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1306] = 1,
    ACTIONS(286), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1322] = 1,
    ACTIONS(288), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1338] = 5,
    ACTIONS(298), 1,
      sym_currency,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(296), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(294), 3,
      aux_sym_posting_token1,
      sym_bool,
      sym_number,
    ACTIONS(290), 5,
      aux_sym__skipped_lines_token3,
      anon_sym_LPAREN,
      sym_date,
      sym_string,
      sym_account,
  [1362] = 1,
    ACTIONS(300), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1378] = 1,
    ACTIONS(302), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1394] = 1,
    ACTIONS(304), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1410] = 1,
    ACTIONS(306), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1426] = 1,
    ACTIONS(308), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1442] = 1,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1458] = 1,
    ACTIONS(312), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1474] = 1,
    ACTIONS(314), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1490] = 1,
    ACTIONS(316), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1506] = 1,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1522] = 11,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(320), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(322), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(324), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(240), 1,
      sym_metadata,
    STATE(109), 2,
      sym_cost,
      sym_total_cost,
    STATE(147), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1558] = 1,
    ACTIONS(327), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1574] = 1,
    ACTIONS(329), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1590] = 1,
    ACTIONS(331), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1606] = 1,
    ACTIONS(333), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1622] = 1,
    ACTIONS(335), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1638] = 1,
    ACTIONS(337), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1654] = 1,
    ACTIONS(339), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1670] = 1,
    ACTIONS(341), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1686] = 1,
    ACTIONS(343), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1702] = 1,
    ACTIONS(345), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1718] = 1,
    ACTIONS(347), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1734] = 1,
    ACTIONS(349), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1750] = 1,
    ACTIONS(351), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1766] = 1,
    ACTIONS(353), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1782] = 1,
    ACTIONS(355), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1798] = 1,
    ACTIONS(357), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1814] = 1,
    ACTIONS(359), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1830] = 1,
    ACTIONS(361), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1846] = 1,
    ACTIONS(363), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1862] = 1,
    ACTIONS(365), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1878] = 2,
    ACTIONS(118), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(116), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1896] = 2,
    ACTIONS(128), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(126), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1914] = 2,
    ACTIONS(122), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(120), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [1932] = 3,
    ACTIONS(292), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(122), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(120), 7,
      aux_sym__skipped_lines_token3,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [1952] = 1,
    ACTIONS(367), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1968] = 5,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 3,
      anon_sym_LBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(369), 4,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1991] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(381), 1,
      sym_string,
    STATE(125), 1,
      sym_tags_and_links,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(185), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(302), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2021] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(383), 1,
      sym_string,
    STATE(128), 1,
      sym_tags_and_links,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(160), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(283), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2051] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(385), 1,
      sym_string,
    STATE(127), 1,
      sym_tags_and_links,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(158), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(299), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2081] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(387), 1,
      sym_string,
    STATE(130), 1,
      sym_tags_and_links,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(171), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(289), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2111] = 8,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    STATE(124), 1,
      sym_tags_and_links,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(172), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(268), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2138] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(176), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(131), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2159] = 8,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    STATE(129), 1,
      sym_tags_and_links,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(163), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(307), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2186] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(391), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(393), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(395), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(223), 1,
      sym_metadata,
    STATE(151), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2212] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_currency,
    ACTIONS(400), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(139), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2232] = 6,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      sym_currency,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(404), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [2254] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(410), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(412), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(414), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(235), 1,
      sym_metadata,
    STATE(144), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2280] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(417), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(419), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(421), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(239), 1,
      sym_metadata,
    STATE(145), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2306] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_number,
    STATE(194), 1,
      sym_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2326] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      sym_currency,
    ACTIONS(428), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(148), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2346] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(430), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(432), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(434), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(251), 1,
      sym_metadata,
    STATE(149), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2372] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(155), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2389] = 7,
    ACTIONS(439), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(441), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(447), 1,
      sym_account,
    STATE(222), 1,
      sym_key_value,
    STATE(270), 1,
      sym_flag,
    ACTIONS(445), 2,
      sym_tag,
      sym_link,
  [2412] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(8), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2429] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(141), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2446] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(136), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2463] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(9), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2480] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(91), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2497] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(10), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2514] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2531] = 7,
    ACTIONS(463), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(465), 1,
      aux_sym_posting_token1,
    STATE(132), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(178), 1,
      sym_tags_and_links,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(312), 1,
      sym_metadata,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
  [2554] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(89), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2571] = 5,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(469), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(471), 1,
      aux_sym_posting_token1,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2589] = 7,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(473), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(475), 1,
      sym_string,
    ACTIONS(477), 1,
      sym_currency,
    STATE(133), 1,
      sym_currency_list,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(309), 1,
      sym_metadata,
  [2611] = 2,
    ACTIONS(481), 3,
      anon_sym_LBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(479), 4,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2623] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(173), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(314), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2640] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(175), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(321), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2657] = 6,
    ACTIONS(439), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(441), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(447), 1,
      sym_account,
    STATE(222), 1,
      sym_key_value,
    STATE(270), 1,
      sym_flag,
  [2676] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(167), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(324), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2693] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(174), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(275), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2710] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(169), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(292), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2727] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(162), 1,
      sym_metadata,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(278), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2744] = 4,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(485), 1,
      anon_sym_TILDE,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2759] = 4,
    ACTIONS(487), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(489), 1,
      aux_sym_posting_token1,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(492), 2,
      sym_tag,
      sym_link,
  [2773] = 5,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(494), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(496), 1,
      sym_string,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(281), 1,
      sym_metadata,
  [2789] = 5,
    ACTIONS(498), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(500), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(502), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(241), 1,
      sym_metadata,
  [2805] = 4,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      aux_sym_posting_token1,
    STATE(135), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(505), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2819] = 3,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2831] = 4,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      aux_sym_posting_token1,
    STATE(142), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(514), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2845] = 2,
    ACTIONS(522), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(520), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2855] = 3,
    ACTIONS(524), 1,
      sym_currency,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2867] = 2,
    ACTIONS(528), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(526), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2877] = 3,
    ACTIONS(530), 1,
      sym_currency,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2889] = 4,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      aux_sym_posting_token1,
    STATE(135), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(532), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2903] = 2,
    ACTIONS(538), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(536), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2913] = 5,
    ACTIONS(540), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(542), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(544), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(246), 1,
      sym_metadata,
  [2929] = 5,
    ACTIONS(547), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(549), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(551), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(249), 1,
      sym_metadata,
  [2945] = 2,
    ACTIONS(556), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(554), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2955] = 5,
    ACTIONS(558), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(560), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(562), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(252), 1,
      sym_metadata,
  [2971] = 3,
    ACTIONS(565), 1,
      sym_currency,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2983] = 5,
    ACTIONS(567), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(569), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(571), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(258), 1,
      sym_metadata,
  [2999] = 1,
    ACTIONS(574), 5,
      aux_sym_posting_token1,
      sym_tag,
      sym_link,
      sym_string,
      sym_account,
  [3007] = 5,
    ACTIONS(576), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(578), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(580), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(233), 1,
      sym_metadata,
  [3023] = 3,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3035] = 5,
    ACTIONS(583), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(585), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(587), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(236), 1,
      sym_metadata,
  [3051] = 4,
    ACTIONS(590), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(592), 1,
      aux_sym_posting_token1,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(595), 2,
      sym_tag,
      sym_link,
  [3065] = 3,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3077] = 5,
    ACTIONS(600), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(602), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(604), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(226), 1,
      sym_metadata,
  [3093] = 4,
    ACTIONS(607), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(609), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(232), 1,
      sym_metadata,
  [3106] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(262), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3117] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(614), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(332), 1,
      sym_metadata,
  [3130] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(261), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3141] = 4,
    ACTIONS(616), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(618), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(234), 1,
      sym_metadata,
  [3154] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(284), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3165] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(304), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3176] = 4,
    ACTIONS(621), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(623), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(260), 1,
      sym_metadata,
  [3189] = 4,
    ACTIONS(626), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(628), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(238), 1,
      sym_metadata,
  [3202] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(631), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(293), 1,
      sym_metadata,
  [3215] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(306), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3226] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(633), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(296), 1,
      sym_metadata,
  [3239] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(291), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3250] = 2,
    ACTIONS(635), 1,
      aux_sym_posting_token1,
    ACTIONS(590), 3,
      aux_sym__skipped_lines_token3,
      sym_tag,
      sym_link,
  [3259] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(305), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3270] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(317), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3281] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(295), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3292] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(322), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3303] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(264), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3314] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(637), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(263), 1,
      sym_metadata,
  [3327] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(639), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(287), 1,
      sym_metadata,
  [3340] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(641), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(300), 1,
      sym_metadata,
  [3353] = 4,
    ACTIONS(439), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(441), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(447), 1,
      sym_account,
    STATE(270), 1,
      sym_flag,
  [3366] = 4,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    ACTIONS(645), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__cost_comp_list_repeat1,
  [3379] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(649), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(320), 1,
      sym_metadata,
  [3392] = 4,
    ACTIONS(651), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(653), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(237), 1,
      sym_metadata,
  [3405] = 4,
    ACTIONS(656), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(658), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(243), 1,
      sym_metadata,
  [3418] = 4,
    ACTIONS(661), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(663), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(244), 1,
      sym_metadata,
  [3431] = 3,
    ACTIONS(612), 1,
      aux_sym_posting_token1,
    STATE(269), 1,
      sym_postings,
    STATE(191), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3442] = 4,
    ACTIONS(666), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(668), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(247), 1,
      sym_metadata,
  [3455] = 4,
    ACTIONS(671), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(673), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(248), 1,
      sym_metadata,
  [3468] = 2,
    ACTIONS(510), 1,
      aux_sym_posting_token1,
    ACTIONS(505), 3,
      aux_sym__skipped_lines_token3,
      anon_sym_COMMA,
      sym_string,
  [3477] = 4,
    ACTIONS(676), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(678), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(250), 1,
      sym_metadata,
  [3490] = 3,
    ACTIONS(681), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(683), 1,
      aux_sym_posting_token1,
    STATE(190), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3501] = 3,
    ACTIONS(686), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(688), 1,
      aux_sym_posting_token1,
    STATE(190), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3512] = 4,
    ACTIONS(690), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(692), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(253), 1,
      sym_metadata,
  [3525] = 4,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym__cost_comp_list_repeat1,
  [3538] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(702), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(276), 1,
      sym_metadata,
  [3551] = 4,
    ACTIONS(704), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(706), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(254), 1,
      sym_metadata,
  [3564] = 4,
    ACTIONS(709), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(711), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(255), 1,
      sym_metadata,
  [3577] = 4,
    ACTIONS(714), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(716), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(256), 1,
      sym_metadata,
  [3590] = 4,
    ACTIONS(719), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(721), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(221), 1,
      sym_metadata,
  [3603] = 4,
    ACTIONS(724), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(726), 1,
      aux_sym_posting_token1,
    STATE(205), 1,
      aux_sym_metadata_repeat1,
    STATE(259), 1,
      sym_metadata,
  [3616] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(729), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(267), 1,
      sym_metadata,
  [3629] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(731), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(315), 1,
      sym_metadata,
  [3642] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(733), 1,
      aux_sym__skipped_lines_token3,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(328), 1,
      sym_metadata,
  [3655] = 4,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(737), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym__cost_comp_list_repeat1,
  [3668] = 3,
    ACTIONS(443), 1,
      sym_key,
    STATE(222), 1,
      sym_key_value,
    ACTIONS(445), 2,
      sym_tag,
      sym_link,
  [3679] = 3,
    ACTIONS(739), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(741), 1,
      aux_sym_posting_token1,
    STATE(212), 1,
      aux_sym_metadata_repeat1,
  [3689] = 2,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(746), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3697] = 2,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3705] = 2,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3713] = 2,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3721] = 2,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3729] = 3,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(739), 1,
      aux_sym__skipped_lines_token3,
    STATE(212), 1,
      aux_sym_metadata_repeat1,
  [3739] = 3,
    ACTIONS(764), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(766), 1,
      aux_sym_posting_token1,
    STATE(212), 1,
      aux_sym_metadata_repeat1,
  [3749] = 2,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(771), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3757] = 2,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3765] = 2,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3773] = 2,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(783), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3781] = 2,
    ACTIONS(787), 1,
      aux_sym_posting_token1,
    ACTIONS(785), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
  [3789] = 2,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3797] = 2,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3805] = 2,
    ACTIONS(799), 1,
      aux_sym_posting_token1,
    ACTIONS(797), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
  [3813] = 2,
    ACTIONS(801), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(803), 1,
      aux_sym_posting_token1,
  [3820] = 2,
    ACTIONS(764), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(805), 1,
      aux_sym_posting_token1,
  [3827] = 2,
    ACTIONS(807), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(809), 1,
      aux_sym_posting_token1,
  [3834] = 2,
    ACTIONS(469), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(471), 1,
      aux_sym_posting_token1,
  [3841] = 2,
    ACTIONS(811), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(813), 1,
      aux_sym_posting_token1,
  [3848] = 2,
    ACTIONS(815), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(817), 1,
      aux_sym_posting_token1,
  [3855] = 2,
    ACTIONS(681), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(819), 1,
      aux_sym_posting_token1,
  [3862] = 2,
    ACTIONS(821), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(823), 1,
      aux_sym_posting_token1,
  [3869] = 2,
    ACTIONS(825), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(827), 1,
      aux_sym_posting_token1,
  [3876] = 2,
    ACTIONS(829), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(831), 1,
      sym_string,
  [3883] = 2,
    ACTIONS(833), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(835), 1,
      aux_sym_posting_token1,
  [3890] = 2,
    ACTIONS(837), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(839), 1,
      aux_sym_posting_token1,
  [3897] = 2,
    ACTIONS(841), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(843), 1,
      aux_sym_posting_token1,
  [3904] = 2,
    ACTIONS(845), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(847), 1,
      aux_sym_posting_token1,
  [3911] = 2,
    ACTIONS(849), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(851), 1,
      aux_sym_posting_token1,
  [3918] = 2,
    ACTIONS(853), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(855), 1,
      aux_sym_posting_token1,
  [3925] = 2,
    ACTIONS(857), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(859), 1,
      aux_sym_posting_token1,
  [3932] = 2,
    ACTIONS(861), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(863), 1,
      aux_sym_posting_token1,
  [3939] = 2,
    ACTIONS(865), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(867), 1,
      aux_sym_posting_token1,
  [3946] = 2,
    ACTIONS(869), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(871), 1,
      aux_sym_posting_token1,
  [3953] = 2,
    ACTIONS(873), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(875), 1,
      aux_sym_posting_token1,
  [3960] = 2,
    ACTIONS(443), 1,
      sym_key,
    STATE(222), 1,
      sym_key_value,
  [3967] = 2,
    ACTIONS(877), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(879), 1,
      aux_sym_posting_token1,
  [3974] = 2,
    ACTIONS(881), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(883), 1,
      aux_sym_posting_token1,
  [3981] = 1,
    ACTIONS(445), 2,
      sym_tag,
      sym_link,
  [3986] = 2,
    ACTIONS(885), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(887), 1,
      aux_sym_posting_token1,
  [3993] = 2,
    ACTIONS(889), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(891), 1,
      aux_sym_posting_token1,
  [4000] = 2,
    ACTIONS(893), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(895), 1,
      aux_sym_posting_token1,
  [4007] = 2,
    ACTIONS(897), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(899), 1,
      aux_sym_posting_token1,
  [4014] = 2,
    ACTIONS(901), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(903), 1,
      aux_sym_posting_token1,
  [4021] = 2,
    ACTIONS(905), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(907), 1,
      aux_sym_posting_token1,
  [4028] = 2,
    ACTIONS(909), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(911), 1,
      aux_sym_posting_token1,
  [4035] = 2,
    ACTIONS(913), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(915), 1,
      aux_sym_posting_token1,
  [4042] = 2,
    ACTIONS(917), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(919), 1,
      aux_sym_posting_token1,
  [4049] = 2,
    ACTIONS(921), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(923), 1,
      aux_sym_posting_token1,
  [4056] = 2,
    ACTIONS(925), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(927), 1,
      aux_sym_posting_token1,
  [4063] = 2,
    ACTIONS(443), 1,
      sym_key,
    STATE(297), 1,
      sym_key_value,
  [4070] = 2,
    ACTIONS(929), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(931), 1,
      aux_sym_posting_token1,
  [4077] = 2,
    ACTIONS(933), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(935), 1,
      aux_sym_posting_token1,
  [4084] = 2,
    ACTIONS(937), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(939), 1,
      aux_sym_posting_token1,
  [4091] = 1,
    ACTIONS(941), 1,
      aux_sym__skipped_lines_token3,
  [4095] = 1,
    ACTIONS(943), 1,
      aux_sym__skipped_lines_token3,
  [4099] = 1,
    ACTIONS(945), 1,
      aux_sym__skipped_lines_token3,
  [4103] = 1,
    ACTIONS(947), 1,
      aux_sym__skipped_lines_token3,
  [4107] = 1,
    ACTIONS(949), 1,
      sym_string,
  [4111] = 1,
    ACTIONS(951), 1,
      sym_string,
  [4115] = 1,
    ACTIONS(953), 1,
      aux_sym__skipped_lines_token3,
  [4119] = 1,
    ACTIONS(955), 1,
      aux_sym__skipped_lines_token3,
  [4123] = 1,
    ACTIONS(957), 1,
      aux_sym__skipped_lines_token3,
  [4127] = 1,
    ACTIONS(959), 1,
      sym_account,
  [4131] = 1,
    ACTIONS(961), 1,
      sym_account,
  [4135] = 1,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
  [4139] = 1,
    ACTIONS(965), 1,
      sym_string,
  [4143] = 1,
    ACTIONS(967), 1,
      sym_string,
  [4147] = 1,
    ACTIONS(969), 1,
      aux_sym__skipped_lines_token3,
  [4151] = 1,
    ACTIONS(971), 1,
      aux_sym__skipped_lines_token3,
  [4155] = 1,
    ACTIONS(973), 1,
      sym_currency,
  [4159] = 1,
    ACTIONS(975), 1,
      aux_sym__skipped_lines_token3,
  [4163] = 1,
    ACTIONS(977), 1,
      aux_sym__skipped_lines_token3,
  [4167] = 1,
    ACTIONS(979), 1,
      aux_sym__skipped_lines_token2,
  [4171] = 1,
    ACTIONS(981), 1,
      aux_sym__skipped_lines_token3,
  [4175] = 1,
    ACTIONS(983), 1,
      sym_string,
  [4179] = 1,
    ACTIONS(985), 1,
      aux_sym__skipped_lines_token3,
  [4183] = 1,
    ACTIONS(987), 1,
      aux_sym__skipped_lines_token3,
  [4187] = 1,
    ACTIONS(989), 1,
      sym_string,
  [4191] = 1,
    ACTIONS(991), 1,
      sym_account,
  [4195] = 1,
    ACTIONS(993), 1,
      aux_sym__skipped_lines_token3,
  [4199] = 1,
    ACTIONS(995), 1,
      sym_string,
  [4203] = 1,
    ACTIONS(997), 1,
      aux_sym__skipped_lines_token3,
  [4207] = 1,
    ACTIONS(999), 1,
      aux_sym__skipped_lines_token3,
  [4211] = 1,
    ACTIONS(1001), 1,
      aux_sym__skipped_lines_token3,
  [4215] = 1,
    ACTIONS(1003), 1,
      aux_sym__skipped_lines_token3,
  [4219] = 1,
    ACTIONS(1005), 1,
      aux_sym__skipped_lines_token3,
  [4223] = 1,
    ACTIONS(1007), 1,
      sym_string,
  [4227] = 1,
    ACTIONS(1009), 1,
      aux_sym__skipped_lines_token3,
  [4231] = 1,
    ACTIONS(1011), 1,
      aux_sym__skipped_lines_token3,
  [4235] = 1,
    ACTIONS(1013), 1,
      aux_sym__skipped_lines_token3,
  [4239] = 1,
    ACTIONS(1015), 1,
      aux_sym__skipped_lines_token3,
  [4243] = 1,
    ACTIONS(1017), 1,
      aux_sym__skipped_lines_token3,
  [4247] = 1,
    ACTIONS(1019), 1,
      aux_sym__skipped_lines_token3,
  [4251] = 1,
    ACTIONS(1021), 1,
      aux_sym__skipped_lines_token3,
  [4255] = 1,
    ACTIONS(1023), 1,
      aux_sym__skipped_lines_token3,
  [4259] = 1,
    ACTIONS(1025), 1,
      aux_sym__skipped_lines_token3,
  [4263] = 1,
    ACTIONS(1027), 1,
      aux_sym__skipped_lines_token3,
  [4267] = 1,
    ACTIONS(1029), 1,
      aux_sym__skipped_lines_token3,
  [4271] = 1,
    ACTIONS(1031), 1,
      aux_sym__skipped_lines_token3,
  [4275] = 1,
    ACTIONS(1033), 1,
      aux_sym__skipped_lines_token3,
  [4279] = 1,
    ACTIONS(1035), 1,
      aux_sym__skipped_lines_token3,
  [4283] = 1,
    ACTIONS(1037), 1,
      aux_sym__skipped_lines_token3,
  [4287] = 1,
    ACTIONS(1039), 1,
      sym_string,
  [4291] = 1,
    ACTIONS(1041), 1,
      sym_account,
  [4295] = 1,
    ACTIONS(1043), 1,
      aux_sym__skipped_lines_token3,
  [4299] = 1,
    ACTIONS(1045), 1,
      sym_tag,
  [4303] = 1,
    ACTIONS(1047), 1,
      aux_sym__skipped_lines_token3,
  [4307] = 1,
    ACTIONS(1049), 1,
      aux_sym__skipped_lines_token3,
  [4311] = 1,
    ACTIONS(1051), 1,
      sym_string,
  [4315] = 1,
    ACTIONS(1053), 1,
      aux_sym__skipped_lines_token3,
  [4319] = 1,
    ACTIONS(1055), 1,
      aux_sym__skipped_lines_token3,
  [4323] = 1,
    ACTIONS(1057), 1,
      aux_sym__skipped_lines_token3,
  [4327] = 1,
    ACTIONS(1059), 1,
      aux_sym__skipped_lines_token3,
  [4331] = 1,
    ACTIONS(1061), 1,
      aux_sym__skipped_lines_token3,
  [4335] = 1,
    ACTIONS(1063), 1,
      aux_sym__skipped_lines_token3,
  [4339] = 1,
    ACTIONS(1065), 1,
      sym_account,
  [4343] = 1,
    ACTIONS(1067), 1,
      aux_sym__skipped_lines_token3,
  [4347] = 1,
    ACTIONS(1069), 1,
      anon_sym_RBRACE_RBRACE,
  [4351] = 1,
    ACTIONS(1071), 1,
      sym_account,
  [4355] = 1,
    ACTIONS(1073), 1,
      aux_sym__skipped_lines_token3,
  [4359] = 1,
    ACTIONS(1075), 1,
      aux_sym__skipped_lines_token3,
  [4363] = 1,
    ACTIONS(1077), 1,
      sym_string,
  [4367] = 1,
    ACTIONS(1079), 1,
      sym_account,
  [4371] = 1,
    ACTIONS(1081), 1,
      aux_sym__skipped_lines_token3,
  [4375] = 1,
    ACTIONS(1083), 1,
      aux_sym__skipped_lines_token3,
  [4379] = 1,
    ACTIONS(1085), 1,
      sym_currency,
  [4383] = 1,
    ACTIONS(1087), 1,
      sym_account,
  [4387] = 1,
    ACTIONS(1089), 1,
      sym_key,
  [4391] = 1,
    ACTIONS(1091), 1,
      sym_currency,
  [4395] = 1,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
  [4399] = 1,
    ACTIONS(1095), 1,
      sym_tag,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 326,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 544,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 668,
  [SMALL_STATE(20)] = 711,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 758,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 806,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 838,
  [SMALL_STATE(28)] = 854,
  [SMALL_STATE(29)] = 870,
  [SMALL_STATE(30)] = 886,
  [SMALL_STATE(31)] = 902,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 934,
  [SMALL_STATE(34)] = 950,
  [SMALL_STATE(35)] = 966,
  [SMALL_STATE(36)] = 982,
  [SMALL_STATE(37)] = 998,
  [SMALL_STATE(38)] = 1014,
  [SMALL_STATE(39)] = 1030,
  [SMALL_STATE(40)] = 1046,
  [SMALL_STATE(41)] = 1062,
  [SMALL_STATE(42)] = 1078,
  [SMALL_STATE(43)] = 1094,
  [SMALL_STATE(44)] = 1110,
  [SMALL_STATE(45)] = 1126,
  [SMALL_STATE(46)] = 1142,
  [SMALL_STATE(47)] = 1158,
  [SMALL_STATE(48)] = 1174,
  [SMALL_STATE(49)] = 1210,
  [SMALL_STATE(50)] = 1226,
  [SMALL_STATE(51)] = 1242,
  [SMALL_STATE(52)] = 1258,
  [SMALL_STATE(53)] = 1274,
  [SMALL_STATE(54)] = 1290,
  [SMALL_STATE(55)] = 1306,
  [SMALL_STATE(56)] = 1322,
  [SMALL_STATE(57)] = 1338,
  [SMALL_STATE(58)] = 1362,
  [SMALL_STATE(59)] = 1378,
  [SMALL_STATE(60)] = 1394,
  [SMALL_STATE(61)] = 1410,
  [SMALL_STATE(62)] = 1426,
  [SMALL_STATE(63)] = 1442,
  [SMALL_STATE(64)] = 1458,
  [SMALL_STATE(65)] = 1474,
  [SMALL_STATE(66)] = 1490,
  [SMALL_STATE(67)] = 1506,
  [SMALL_STATE(68)] = 1522,
  [SMALL_STATE(69)] = 1558,
  [SMALL_STATE(70)] = 1574,
  [SMALL_STATE(71)] = 1590,
  [SMALL_STATE(72)] = 1606,
  [SMALL_STATE(73)] = 1622,
  [SMALL_STATE(74)] = 1638,
  [SMALL_STATE(75)] = 1654,
  [SMALL_STATE(76)] = 1670,
  [SMALL_STATE(77)] = 1686,
  [SMALL_STATE(78)] = 1702,
  [SMALL_STATE(79)] = 1718,
  [SMALL_STATE(80)] = 1734,
  [SMALL_STATE(81)] = 1750,
  [SMALL_STATE(82)] = 1766,
  [SMALL_STATE(83)] = 1782,
  [SMALL_STATE(84)] = 1798,
  [SMALL_STATE(85)] = 1814,
  [SMALL_STATE(86)] = 1830,
  [SMALL_STATE(87)] = 1846,
  [SMALL_STATE(88)] = 1862,
  [SMALL_STATE(89)] = 1878,
  [SMALL_STATE(90)] = 1896,
  [SMALL_STATE(91)] = 1914,
  [SMALL_STATE(92)] = 1932,
  [SMALL_STATE(93)] = 1952,
  [SMALL_STATE(94)] = 1968,
  [SMALL_STATE(95)] = 1991,
  [SMALL_STATE(96)] = 2021,
  [SMALL_STATE(97)] = 2051,
  [SMALL_STATE(98)] = 2081,
  [SMALL_STATE(99)] = 2111,
  [SMALL_STATE(100)] = 2138,
  [SMALL_STATE(101)] = 2159,
  [SMALL_STATE(102)] = 2186,
  [SMALL_STATE(103)] = 2212,
  [SMALL_STATE(104)] = 2232,
  [SMALL_STATE(105)] = 2254,
  [SMALL_STATE(106)] = 2280,
  [SMALL_STATE(107)] = 2306,
  [SMALL_STATE(108)] = 2326,
  [SMALL_STATE(109)] = 2346,
  [SMALL_STATE(110)] = 2372,
  [SMALL_STATE(111)] = 2389,
  [SMALL_STATE(112)] = 2412,
  [SMALL_STATE(113)] = 2429,
  [SMALL_STATE(114)] = 2446,
  [SMALL_STATE(115)] = 2463,
  [SMALL_STATE(116)] = 2480,
  [SMALL_STATE(117)] = 2497,
  [SMALL_STATE(118)] = 2514,
  [SMALL_STATE(119)] = 2531,
  [SMALL_STATE(120)] = 2554,
  [SMALL_STATE(121)] = 2571,
  [SMALL_STATE(122)] = 2589,
  [SMALL_STATE(123)] = 2611,
  [SMALL_STATE(124)] = 2623,
  [SMALL_STATE(125)] = 2640,
  [SMALL_STATE(126)] = 2657,
  [SMALL_STATE(127)] = 2676,
  [SMALL_STATE(128)] = 2693,
  [SMALL_STATE(129)] = 2710,
  [SMALL_STATE(130)] = 2727,
  [SMALL_STATE(131)] = 2744,
  [SMALL_STATE(132)] = 2759,
  [SMALL_STATE(133)] = 2773,
  [SMALL_STATE(134)] = 2789,
  [SMALL_STATE(135)] = 2805,
  [SMALL_STATE(136)] = 2819,
  [SMALL_STATE(137)] = 2831,
  [SMALL_STATE(138)] = 2845,
  [SMALL_STATE(139)] = 2855,
  [SMALL_STATE(140)] = 2867,
  [SMALL_STATE(141)] = 2877,
  [SMALL_STATE(142)] = 2889,
  [SMALL_STATE(143)] = 2903,
  [SMALL_STATE(144)] = 2913,
  [SMALL_STATE(145)] = 2929,
  [SMALL_STATE(146)] = 2945,
  [SMALL_STATE(147)] = 2955,
  [SMALL_STATE(148)] = 2971,
  [SMALL_STATE(149)] = 2983,
  [SMALL_STATE(150)] = 2999,
  [SMALL_STATE(151)] = 3007,
  [SMALL_STATE(152)] = 3023,
  [SMALL_STATE(153)] = 3035,
  [SMALL_STATE(154)] = 3051,
  [SMALL_STATE(155)] = 3065,
  [SMALL_STATE(156)] = 3077,
  [SMALL_STATE(157)] = 3093,
  [SMALL_STATE(158)] = 3106,
  [SMALL_STATE(159)] = 3117,
  [SMALL_STATE(160)] = 3130,
  [SMALL_STATE(161)] = 3141,
  [SMALL_STATE(162)] = 3154,
  [SMALL_STATE(163)] = 3165,
  [SMALL_STATE(164)] = 3176,
  [SMALL_STATE(165)] = 3189,
  [SMALL_STATE(166)] = 3202,
  [SMALL_STATE(167)] = 3215,
  [SMALL_STATE(168)] = 3226,
  [SMALL_STATE(169)] = 3239,
  [SMALL_STATE(170)] = 3250,
  [SMALL_STATE(171)] = 3259,
  [SMALL_STATE(172)] = 3270,
  [SMALL_STATE(173)] = 3281,
  [SMALL_STATE(174)] = 3292,
  [SMALL_STATE(175)] = 3303,
  [SMALL_STATE(176)] = 3314,
  [SMALL_STATE(177)] = 3327,
  [SMALL_STATE(178)] = 3340,
  [SMALL_STATE(179)] = 3353,
  [SMALL_STATE(180)] = 3366,
  [SMALL_STATE(181)] = 3379,
  [SMALL_STATE(182)] = 3392,
  [SMALL_STATE(183)] = 3405,
  [SMALL_STATE(184)] = 3418,
  [SMALL_STATE(185)] = 3431,
  [SMALL_STATE(186)] = 3442,
  [SMALL_STATE(187)] = 3455,
  [SMALL_STATE(188)] = 3468,
  [SMALL_STATE(189)] = 3477,
  [SMALL_STATE(190)] = 3490,
  [SMALL_STATE(191)] = 3501,
  [SMALL_STATE(192)] = 3512,
  [SMALL_STATE(193)] = 3525,
  [SMALL_STATE(194)] = 3538,
  [SMALL_STATE(195)] = 3551,
  [SMALL_STATE(196)] = 3564,
  [SMALL_STATE(197)] = 3577,
  [SMALL_STATE(198)] = 3590,
  [SMALL_STATE(199)] = 3603,
  [SMALL_STATE(200)] = 3616,
  [SMALL_STATE(201)] = 3629,
  [SMALL_STATE(202)] = 3642,
  [SMALL_STATE(203)] = 3655,
  [SMALL_STATE(204)] = 3668,
  [SMALL_STATE(205)] = 3679,
  [SMALL_STATE(206)] = 3689,
  [SMALL_STATE(207)] = 3697,
  [SMALL_STATE(208)] = 3705,
  [SMALL_STATE(209)] = 3713,
  [SMALL_STATE(210)] = 3721,
  [SMALL_STATE(211)] = 3729,
  [SMALL_STATE(212)] = 3739,
  [SMALL_STATE(213)] = 3749,
  [SMALL_STATE(214)] = 3757,
  [SMALL_STATE(215)] = 3765,
  [SMALL_STATE(216)] = 3773,
  [SMALL_STATE(217)] = 3781,
  [SMALL_STATE(218)] = 3789,
  [SMALL_STATE(219)] = 3797,
  [SMALL_STATE(220)] = 3805,
  [SMALL_STATE(221)] = 3813,
  [SMALL_STATE(222)] = 3820,
  [SMALL_STATE(223)] = 3827,
  [SMALL_STATE(224)] = 3834,
  [SMALL_STATE(225)] = 3841,
  [SMALL_STATE(226)] = 3848,
  [SMALL_STATE(227)] = 3855,
  [SMALL_STATE(228)] = 3862,
  [SMALL_STATE(229)] = 3869,
  [SMALL_STATE(230)] = 3876,
  [SMALL_STATE(231)] = 3883,
  [SMALL_STATE(232)] = 3890,
  [SMALL_STATE(233)] = 3897,
  [SMALL_STATE(234)] = 3904,
  [SMALL_STATE(235)] = 3911,
  [SMALL_STATE(236)] = 3918,
  [SMALL_STATE(237)] = 3925,
  [SMALL_STATE(238)] = 3932,
  [SMALL_STATE(239)] = 3939,
  [SMALL_STATE(240)] = 3946,
  [SMALL_STATE(241)] = 3953,
  [SMALL_STATE(242)] = 3960,
  [SMALL_STATE(243)] = 3967,
  [SMALL_STATE(244)] = 3974,
  [SMALL_STATE(245)] = 3981,
  [SMALL_STATE(246)] = 3986,
  [SMALL_STATE(247)] = 3993,
  [SMALL_STATE(248)] = 4000,
  [SMALL_STATE(249)] = 4007,
  [SMALL_STATE(250)] = 4014,
  [SMALL_STATE(251)] = 4021,
  [SMALL_STATE(252)] = 4028,
  [SMALL_STATE(253)] = 4035,
  [SMALL_STATE(254)] = 4042,
  [SMALL_STATE(255)] = 4049,
  [SMALL_STATE(256)] = 4056,
  [SMALL_STATE(257)] = 4063,
  [SMALL_STATE(258)] = 4070,
  [SMALL_STATE(259)] = 4077,
  [SMALL_STATE(260)] = 4084,
  [SMALL_STATE(261)] = 4091,
  [SMALL_STATE(262)] = 4095,
  [SMALL_STATE(263)] = 4099,
  [SMALL_STATE(264)] = 4103,
  [SMALL_STATE(265)] = 4107,
  [SMALL_STATE(266)] = 4111,
  [SMALL_STATE(267)] = 4115,
  [SMALL_STATE(268)] = 4119,
  [SMALL_STATE(269)] = 4123,
  [SMALL_STATE(270)] = 4127,
  [SMALL_STATE(271)] = 4131,
  [SMALL_STATE(272)] = 4135,
  [SMALL_STATE(273)] = 4139,
  [SMALL_STATE(274)] = 4143,
  [SMALL_STATE(275)] = 4147,
  [SMALL_STATE(276)] = 4151,
  [SMALL_STATE(277)] = 4155,
  [SMALL_STATE(278)] = 4159,
  [SMALL_STATE(279)] = 4163,
  [SMALL_STATE(280)] = 4167,
  [SMALL_STATE(281)] = 4171,
  [SMALL_STATE(282)] = 4175,
  [SMALL_STATE(283)] = 4179,
  [SMALL_STATE(284)] = 4183,
  [SMALL_STATE(285)] = 4187,
  [SMALL_STATE(286)] = 4191,
  [SMALL_STATE(287)] = 4195,
  [SMALL_STATE(288)] = 4199,
  [SMALL_STATE(289)] = 4203,
  [SMALL_STATE(290)] = 4207,
  [SMALL_STATE(291)] = 4211,
  [SMALL_STATE(292)] = 4215,
  [SMALL_STATE(293)] = 4219,
  [SMALL_STATE(294)] = 4223,
  [SMALL_STATE(295)] = 4227,
  [SMALL_STATE(296)] = 4231,
  [SMALL_STATE(297)] = 4235,
  [SMALL_STATE(298)] = 4239,
  [SMALL_STATE(299)] = 4243,
  [SMALL_STATE(300)] = 4247,
  [SMALL_STATE(301)] = 4251,
  [SMALL_STATE(302)] = 4255,
  [SMALL_STATE(303)] = 4259,
  [SMALL_STATE(304)] = 4263,
  [SMALL_STATE(305)] = 4267,
  [SMALL_STATE(306)] = 4271,
  [SMALL_STATE(307)] = 4275,
  [SMALL_STATE(308)] = 4279,
  [SMALL_STATE(309)] = 4283,
  [SMALL_STATE(310)] = 4287,
  [SMALL_STATE(311)] = 4291,
  [SMALL_STATE(312)] = 4295,
  [SMALL_STATE(313)] = 4299,
  [SMALL_STATE(314)] = 4303,
  [SMALL_STATE(315)] = 4307,
  [SMALL_STATE(316)] = 4311,
  [SMALL_STATE(317)] = 4315,
  [SMALL_STATE(318)] = 4319,
  [SMALL_STATE(319)] = 4323,
  [SMALL_STATE(320)] = 4327,
  [SMALL_STATE(321)] = 4331,
  [SMALL_STATE(322)] = 4335,
  [SMALL_STATE(323)] = 4339,
  [SMALL_STATE(324)] = 4343,
  [SMALL_STATE(325)] = 4347,
  [SMALL_STATE(326)] = 4351,
  [SMALL_STATE(327)] = 4355,
  [SMALL_STATE(328)] = 4359,
  [SMALL_STATE(329)] = 4363,
  [SMALL_STATE(330)] = 4367,
  [SMALL_STATE(331)] = 4371,
  [SMALL_STATE(332)] = 4375,
  [SMALL_STATE(333)] = 4379,
  [SMALL_STATE(334)] = 4383,
  [SMALL_STATE(335)] = 4387,
  [SMALL_STATE(336)] = 4391,
  [SMALL_STATE(337)] = 4395,
  [SMALL_STATE(338)] = 4399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beancount_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beancount_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, 0, 13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 2, 0, 13), SHIFT(242),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 33),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 33), SHIFT(242),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_num_expr, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_num_expr, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_num_expr, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_num_expr, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_num_expr, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_num_expr, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 1, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 1, 0, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 9),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_price_annotation, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_price_annotation, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, 0, 41),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, 0, 10),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3, 0, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, 0, 14),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, 0, 15),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3, 0, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3, 0, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3, 0, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, 0, 16),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, 0, 17),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, 0, 18),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, 0, 19),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, 0, 12),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, 0, 20),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, 0, 21),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 22),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, 0, 23),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, 0, 24),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, 0, 17),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, 0, 25),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, 0, 26),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, 0, 7),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4, 0, 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, 0, 12),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 29),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 29), SHIFT(242),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 34),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 35),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 36),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, 0, 37),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 38),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 39),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 40),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, 0, 42),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, 0, 43),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, 0, 11),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, 0, 45),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, 0, 46),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, 0, 47),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, 0, 48),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, 0, 49),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, 0, 50),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, 0, 51),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 66),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 66), SHIFT(242),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 69),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 70),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 71),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 72),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, 0, 73),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 74),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 75),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 76),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 77),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, 0, 79),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, 0, 80),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, 0, 10),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 99),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 100),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 101),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 102),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 103),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 104),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, 0, 119),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, 0, 120),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, 0, 44),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 1, 0, 32),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 1, 0, 32),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 28),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 28), SHIFT(242),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, 0, 58),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, 0, 58),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 61),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 61), SHIFT(242),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 65),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 65), SHIFT(242),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 95),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 95), SHIFT(242),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 1, 0, 27),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 1, 0, 27),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_and_links, 1, 0, 0),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tags_and_links, 1, 0, 0), SHIFT(245),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 67),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 67), SHIFT(242),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2, 0, 0),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_list_repeat1, 2, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 3, 0, 82),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 3, 0, 82),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_cost, 3, 0, 82),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_cost, 3, 0, 82),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 88),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 88), SHIFT(242),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 93),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 93), SHIFT(242),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_cost, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_cost, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 96),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 96), SHIFT(242),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 115),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 115), SHIFT(242),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 59),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 59), SHIFT(242),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 62),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 62), SHIFT(242),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 30),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 30), SHIFT(242),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 28),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 28), SHIFT(242),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 29),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 29), SHIFT(242),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 30),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 30), SHIFT(242),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 33),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 33), SHIFT(242),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2, 0, 83),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2, 0, 83),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 13),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 13), SHIFT(242),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 59),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 59), SHIFT(242),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 61),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 61), SHIFT(242),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 62),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 62), SHIFT(242),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 65),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 65), SHIFT(242),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 66),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 66), SHIFT(242),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postings, 1, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 67),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 67), SHIFT(242),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 83),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 83),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 83), SHIFT_REPEAT(17),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 88),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 88), SHIFT(242),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 93),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 93), SHIFT(242),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 95),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 95), SHIFT(242),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 96),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 96), SHIFT(242),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 115),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 7, 0, 115), SHIFT(242),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1, 0, 56),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1, 0, 56),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1, 0, 0),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_metadata, 1, 0, 0), SHIFT(242),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, 0, 105),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, 0, 105),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 57),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 57),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 106),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 106),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, 0, 121),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, 0, 121),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, 0, 84),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, 0, 84),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 53),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 53),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, 0, 107),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, 0, 107),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 54),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 54),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, 0, 81),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, 0, 81),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 2, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 55),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 55),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, 0, 27),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, 0, 27),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_price_annotation, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_price_annotation, 2, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 126),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 126),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 60),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 60),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 63),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 63),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 64),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 64),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 31),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 31),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 68),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 68),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_with_tolerance, 4, 0, 78),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_with_tolerance, 4, 0, 78),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 85),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 85),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 86),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 86),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 87),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 87),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 89),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 89),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 90),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 90),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 52),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 52),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 92),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 92),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 94),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 94),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 97),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 97),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 98),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 98),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 108),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 108),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 109),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 109),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 110),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 110),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 111),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 111),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 112),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 112),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 113),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 113),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 114),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 114),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 116),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 116),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 117),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 117),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 118),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 118),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 122),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 122),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 123),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 123),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 124),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 124),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 125),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 125),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 127),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 127),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 91),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 91),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [963] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
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

TS_PUBLIC const TSLanguage *tree_sitter_beancount(void) {
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
