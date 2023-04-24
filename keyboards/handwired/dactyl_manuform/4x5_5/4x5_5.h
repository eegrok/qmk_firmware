// Copyright 2022 Shem Sedrick (@ssedrick)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO
#define LAYOUT( \
    L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, \
         L30, L31,                                         R32, R33, \
                   L32,                               R31, \
                        L33, L34,           R40, R30, \
                        L43, L44,           R41, R42  \
) { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { L30, L31, L32, L33, L34 }, \
    { XXX, XXX, XXX, L43, L44 }, \
\
    { R00, R01, R02, R03, R04 }, \
    { R10, R11, R12, R13, R14 }, \
    { R20, R21, R22, R23, R24 }, \
    { R30, R31, R32, R33, XXX }, \
    { R40, R41, R42, XXX, XXX }, \
}
