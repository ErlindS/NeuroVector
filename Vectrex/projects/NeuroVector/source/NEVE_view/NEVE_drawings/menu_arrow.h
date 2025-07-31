// ***************************************************************************
// Menu Arrow
//
// Filename: menu_arrow.h
// Description: Saves the coordinates for the menu arrow.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ***************************************************************************

#pragma once

const struct vector_t position_arrows[6] = { {0,0}, {60, -100}, {40, -100}, {20, -100}, {0, -100}, {-20, -100}};

const struct packet arrow[] =
{
	{MOVE, 40, 0},
	{DRAW, -100, 100},
	{DRAW, -100, -100},
	{MOVE, 100, 100},
	{DRAW, 0, -100},
	{DRAW, 0, -100},
	{STOP, 0, 0},
};
