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

typedef struct Square{
	int x; 
	int y;
	void (*execute_display_functions)(unsigned int i);
	
	unsigned int scaling_factor;
	unsigned int scaling_factor_toggle;
} Square;

// Declaration of displayed_squares
extern struct Square displayed_squares[9];

void reset_displayed_squares_coordinates();
void change_square_coordinates(int id);
