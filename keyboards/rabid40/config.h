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

#define MATRIX_ROW_PINS { GP41, GP30, GP39, GP38}
#define MATRIX_COL_PINS { GP27, GP28, GP29, GP36, GP35, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP11 }

/* COL2ROW,  ROW2COL */
#define DIODE_DIRECTION COL2ROW
