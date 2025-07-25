// ---------------------------------------------------------------------------
// Square
//
// Filename: square.c
// Description: Implements functions for managing and manipulating square objects.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "square.h"

void add_square_x(int id){
    displayed_squares[id].x += 1;
    if(displayed_squares[id].x > 25){
        displayed_squares[id].addrandom_x = &sub_square_x;
    }
}

void add_square_y(int id){
    displayed_squares[id].y += 1;
    if(displayed_squares[id].y > 25){
        displayed_squares[id].addrandom_y = &sub_square_y;
    }
}

void sub_square_x(int id){
    displayed_squares[id].x -= 1;
    if(displayed_squares[id].x < -25){
        displayed_squares[id].addrandom_x = &add_square_x;
    }
}

void sub_square_y(int id){
    displayed_squares[id].y -= 1;
    if(displayed_squares[id].y < -25){
        displayed_squares[id].addrandom_y = &add_square_y;
    }
}


void reset_displayed_squares_coordinates(){
    displayed_squares[0].x = 16; displayed_squares[0].y = -16;
    displayed_squares[1].x = 16; displayed_squares[1].y = 0;
    displayed_squares[2].x = 16; displayed_squares[2].y = 16;
    displayed_squares[3].x = 0; displayed_squares[3].y = -16;
    displayed_squares[4].x = 0; displayed_squares[4].y = 0;
    displayed_squares[5].x = 0; displayed_squares[5].y = 16;
    displayed_squares[6].x = -16; displayed_squares[6].y = -16;
    displayed_squares[7].x = -16; displayed_squares[7].y = 0;
    displayed_squares[8].x = -16; displayed_squares[8].y = 16;

    displayed_squares[0].scaling_factor = 16;
    displayed_squares[1].scaling_factor = 16;
    displayed_squares[2].scaling_factor = 16;
    displayed_squares[3].scaling_factor = 16;
    displayed_squares[4].scaling_factor = 16;
    displayed_squares[5].scaling_factor = 16;
    displayed_squares[6].scaling_factor = 16;
    displayed_squares[7].scaling_factor = 16;
    displayed_squares[8].scaling_factor = 16;

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