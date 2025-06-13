#pragma once


enum mode_t
{
	MOVE = 0,
	STOP = 1,
	DRAW = 255
};

struct packet
{
	enum mode_t mode;			// drawing mode
	int y;		// relative vector;
	int x;		// relative vector;
};

struct vector_t
{
	int x; 
	int y;
};

struct SquareObject{
	int x; 
	int y;
	void (*execute_display_functions)(unsigned int i);
    int x_direction;
    int y_direction;
};
