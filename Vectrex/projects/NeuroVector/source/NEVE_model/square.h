// Filename: square.h
// Description: Defines the structure for a square object and declares related functions.
// Author: Erlind Sejdiu
// Date: 2025-07-16

#pragma once
#include "../NEVE_view/drawables.h"

struct SquareObject{
	int x; 
	int y;
	void (*execute_display_functions)(unsigned int i);

	//insane trade off to safe cycles instead of ram
	void (*addrandom_x)(int id);
	void (*addrandom_y)(int id);
	
	unsigned int scaling_factor;
	unsigned int scaling_factor_toggle;
};

void sub_square_x(int id);
void sub_square_y(int id);
void add_square_x(int id);
void add_square_y(int id);

// Declaration of displayed_squares
extern struct SquareObject displayed_squares[9];

void reset_displayed_squares_coordinates();