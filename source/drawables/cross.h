#pragma once
#include "drawablesbasic.h"

const struct vector_t Positions_Cursor[10] = {	{0,0},  {16, -16}, {16, 0},{16, 16},
												{0, -16},  {0,  0},{0, 16},
												{-16, -16},{-16,0},{-16, 16}};

const struct packet cross[] =
{
	{MOVE, 32, 32},
	{DRAW, -32, -32},
	{MOVE, 32, 0},
	{DRAW, -32, 32},
	{STOP, 0, 0},
};
