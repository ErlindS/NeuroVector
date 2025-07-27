// ---------------------------------------------------------------------------
// Extrem
//
// Filename: extrem.c
// Description: Manages the functions needed for the extrem mode.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------


#include "extrem.h"

int flip_sign;
#define UPDATE_COORDINATES(coordinates, change) \
	do { \
	(coordinates) += (change); \
	flip_sign = (((coordinates) > 25) | ((coordinates) < -25)); \
	change = flip_sign?change*-1:change; \
	} while(0); 



void Add_Movement()
{
    UPDATE_COORDINATES(displayed_squares[0].x, displayed_squares[0].change_of_x);
    UPDATE_COORDINATES(displayed_squares[1].x, displayed_squares[1].change_of_x);
    UPDATE_COORDINATES(displayed_squares[2].x, displayed_squares[2].change_of_x);
    UPDATE_COORDINATES(displayed_squares[3].x, displayed_squares[3].change_of_x);
    UPDATE_COORDINATES(displayed_squares[4].x, displayed_squares[4].change_of_x);
    UPDATE_COORDINATES(displayed_squares[5].x, displayed_squares[5].change_of_x);
    UPDATE_COORDINATES(displayed_squares[6].x, displayed_squares[6].change_of_x);
    UPDATE_COORDINATES(displayed_squares[7].x, displayed_squares[7].change_of_x);
    UPDATE_COORDINATES(displayed_squares[8].x, displayed_squares[8].change_of_x);
    
    UPDATE_COORDINATES(displayed_squares[0].y, displayed_squares[0].change_of_y);
    UPDATE_COORDINATES(displayed_squares[1].y, displayed_squares[1].change_of_y);
    UPDATE_COORDINATES(displayed_squares[2].y, displayed_squares[2].change_of_y);
    UPDATE_COORDINATES(displayed_squares[3].y, displayed_squares[3].change_of_y);
    UPDATE_COORDINATES(displayed_squares[4].y, displayed_squares[4].change_of_y);
    UPDATE_COORDINATES(displayed_squares[5].y, displayed_squares[5].change_of_y);
    UPDATE_COORDINATES(displayed_squares[6].y, displayed_squares[6].change_of_y);
    UPDATE_COORDINATES(displayed_squares[7].y, displayed_squares[7].change_of_y);
    UPDATE_COORDINATES(displayed_squares[8].y, displayed_squares[8].change_of_y);
}

