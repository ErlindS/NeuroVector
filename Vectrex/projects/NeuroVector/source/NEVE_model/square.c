// ***************************************************************************
// Square
//
// Filename: square.c
// Description: Implements functions for managing and manipulating square objects.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ***************************************************************************

#include "square.h"

void reset_displayed_squares_coordinates(){

    displayed_squares[0].x = UNIFIED_VALUE_1; displayed_squares[0].y = UNIFIED_VALUE_2;
    displayed_squares[1].x = UNIFIED_VALUE_1; displayed_squares[1].y = 0;
    displayed_squares[2].x = UNIFIED_VALUE_1; displayed_squares[2].y = UNIFIED_VALUE_1;
    displayed_squares[3].x = 0; displayed_squares[3].y = UNIFIED_VALUE_2;
    displayed_squares[4].x = 0; displayed_squares[4].y = 0;
    displayed_squares[5].x = 0; displayed_squares[5].y = UNIFIED_VALUE_1;
    displayed_squares[6].x = UNIFIED_VALUE_2; displayed_squares[6].y = UNIFIED_VALUE_2;
    displayed_squares[7].x = UNIFIED_VALUE_2; displayed_squares[7].y = 0;
    displayed_squares[8].x = UNIFIED_VALUE_2; displayed_squares[8].y = UNIFIED_VALUE_1;

    displayed_squares[0].scaling_factor = SCALING_FACTOR;
    displayed_squares[1].scaling_factor = SCALING_FACTOR;
    displayed_squares[2].scaling_factor = SCALING_FACTOR;
    displayed_squares[3].scaling_factor = SCALING_FACTOR;
    displayed_squares[4].scaling_factor = SCALING_FACTOR;
    displayed_squares[5].scaling_factor = SCALING_FACTOR;
    displayed_squares[6].scaling_factor = SCALING_FACTOR;
    displayed_squares[7].scaling_factor = SCALING_FACTOR;
    displayed_squares[8].scaling_factor = SCALING_FACTOR;

    (displayed_squares[0].execute_display_functions = &draw_square);
    (displayed_squares[1].execute_display_functions = &draw_square);
    (displayed_squares[2].execute_display_functions = &draw_square);
    (displayed_squares[3].execute_display_functions = &draw_square);
    (displayed_squares[4].execute_display_functions = &draw_square);
    (displayed_squares[5].execute_display_functions = &draw_square);
    (displayed_squares[6].execute_display_functions = &draw_square);
    (displayed_squares[7].execute_display_functions = &draw_square);
    (displayed_squares[8].execute_display_functions = &draw_square);
}