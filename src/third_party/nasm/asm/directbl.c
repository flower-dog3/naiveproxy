/*
 * This file is generated from ./asm/directiv.dat
 * by perfhash.pl; do not edit.
 */

#include "directiv.h"

const char * const directive_tbl[38] = {
    "absolute",
    "bits",
    "common",
    "cpu",
    "debug",
    "default",
    "extern",
    "float",
    "global",
    "static",
    "list",
    "section",
    "segment",
    "warning",
    "sectalign",
    "pragma",
    "export",
    "group",
    "import",
    "library",
    "map",
    "module",
    "org",
    "osabi",
    "safeseh",
    "uppercase",
    "prefix",
    "suffix",
    "gprefix",
    "gsuffix",
    "lprefix",
    "lsuffix",
    "limit",
    "subsections_via_symbols",
    "no_dead_strip",
    "maxdump",
    "nodepend",
    "noseclabels"
};

#define UNUSED (65536/3)

static const int16_t directive_hashvals[64] = {
    0,
    UNUSED,
    0,
    UNUSED,
    26,
    -4,
    0,
    11,
    0,
    8,
    UNUSED,
    UNUSED,
    0,
    -5,
    28,
    15,
    UNUSED,
    UNUSED,
    UNUSED,
    -16,
    UNUSED,
    2,
    19,
    -3,
    -22,
    16,
    UNUSED,
    6,
    11,
    -20,
    16,
    -13,
    0,
    UNUSED,
    UNUSED,
    UNUSED,
    0,
    0,
    6,
    0,
    22,
    2,
    -28,
    32,
    12,
    23,
    3,
    UNUSED,
    26,
    UNUSED,
    12,
    29,
    10,
    17,
    28,
    34,
    UNUSED,
    UNUSED,
    1,
    9,
    27,
    UNUSED,
    19,
    14
};

const struct perfect_hash directive_hash = {
    UINT64_C(0x076259c3e291c26c),
    UINT32_C(0x1f),
    UINT32_C(38),
    3,
    (D_unknown),
    directive_hashvals,
    directive_tbl
};
