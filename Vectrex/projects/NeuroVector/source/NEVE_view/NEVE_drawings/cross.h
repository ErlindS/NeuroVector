// ***************************************************************************
// Cross
//
// Filename: cross.h
// Description: Saves the coordinates for the cross.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ***************************************************************************

#pragma once
#include "drawablesbasic.h"
												
const struct packet square[] =
{
	{MOVE, 60, -60},
	{DRAW, 0, 120},
	{DRAW, -120, 0},
	{DRAW, 0, -120},
	{DRAW, 120, 0},
	{STOP, 0, 0},
};

const struct packet square_filled[] =
{
	{MOVE, 60, -60},
	{DRAW, 0, 120},
	{DRAW, -120, 0},
	{DRAW, 0, -120},
	{DRAW, 120, 0},
	{DRAW, -120, 120},
	{MOVE, 120, 0},
	{DRAW, -120, -120},
	{STOP, 0, 0},
};
