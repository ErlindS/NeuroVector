#pragma once
#include "../NEVE_view/drawables.h"

struct SquareObject{
	int x; 
	int y;
	void (*execute_display_functions)(unsigned int i);

	//insane trade off to safe cycles instead of ram
	void (*addrandom_x)(int id);
	void (*addrandom_y)(int id);
	
	unsigned int scalingfactor;
	unsigned int scalingfactor_toggle;
};

void sub_square_x(int id);
void sub_square_y(int id);
void add_square_x(int id);
void add_square_y(int id);

// Declaration of Displayed_Squares
extern struct SquareObject Displayed_Squares[9];

void reset_Displayed_Squares_coordinates();