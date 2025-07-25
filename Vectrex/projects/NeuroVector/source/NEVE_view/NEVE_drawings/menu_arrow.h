// ---------------------------------------------------------------------------
// Menu Arrow
//
// Filename: menu_arrow.h
// Description: Saves the coordinates for the menu arrow.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once
#include "drawablesbasic.h"

const struct vector_t position_arrows[4] = { {0,0}, {60, -85}, {40, -85}, {20, -85}};

const struct packet arrow[] =
{
	{MOVE, 4, 0},
	{DRAW, -10, 10},
	{DRAW, -10, -10},
	{MOVE, 10, 10},
	{DRAW, 0, -20},
	{STOP, 0, 0},
};
