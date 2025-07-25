// ---------------------------------------------------------------------------
// Gamefield
//
// Filename: gamefield.h
// Description: Saves the coordinates for the gamefield.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once

const struct packet Gamefield[] = 
{
	{DRAW, -120, 0},
	{DRAW, 0, 120},
	{DRAW, 120, 0},
	{DRAW, 0, -120},
	{STOP, 0, 0},
};


