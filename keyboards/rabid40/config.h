/* Copyright 2022 Cujo26
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* key matrix size */

#define MATRIX_ROWS 4
#define MATRIX_COLS 14

/* key matrix pins */

#define MATRIX_ROW_PINS { 41, 30, 39, 38}
#define MATRIX_COL_PINS { 27, 28, 29, 36, 35, 2, 3, 4, 5, 6, 7, 8, 9, 11 }

/* COL2ROW,  ROW2COL */
#define DIODE_DIRECTION COL2ROW
