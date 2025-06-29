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


