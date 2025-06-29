#pragma once

struct SquareObject{
	int x; 
	int y;
	void (*execute_display_functions)(unsigned int i);
	void (*addrandom_x)(int id);
	void (*addrandom_y)(int id);
};

void sub_square_x(int id);
void sub_square_y(int id);
void add_square_x(int id);
void add_square_y(int id);

// Declaration of Displayed_Squares
extern struct SquareObject Displayed_Squares[9];