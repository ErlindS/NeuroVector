#pragma once
#include "drawablesbasic.h"

const struct vector_t Positions_Arrow[2] = { {60, -55}, {40, -55}};

const struct packet arrow[] =
{
	{MOVE, 4, 0},
	{DRAW, -10, 10},
	{DRAW, -10, -10},
	{MOVE, 10, 10},
	{DRAW, 0, -20},
	{STOP, 0, 0},
};
