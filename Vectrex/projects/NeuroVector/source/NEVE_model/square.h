// ---------------------------------------------------------------------------
// Square
//
// Filename: square.h
// Description: Defines the structure for a square object and declares related functions.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once
#include "../NEVE_view/drawables.h"

struct SquareObject{
	int x; 
	int y;
	void (*execute_display_functions)(unsigned int i);

	int change_of_x;
	int change_of_y;
	
	unsigned int scaling_factor;
	unsigned int scaling_factor_toggle;
};

// Declaration of displayed_squares
extern struct SquareObject displayed_squares[9];

void reset_displayed_squares_coordinates();
void change_square_coordinates(int id);
