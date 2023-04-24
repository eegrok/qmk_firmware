// Copyright 2022 Shem Sedrick (@ssedrick)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


// Wiring pins
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 12
