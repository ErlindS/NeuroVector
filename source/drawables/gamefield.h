#pragma once

const struct packet Gamefield[] = 
{
	{MOVE, 24, -8},
	{DRAW, -48, 0},
	{MOVE, 0, 16},
	{DRAW, 48, 0},
	{MOVE, -16, 16},
	{DRAW, 0, -48},
	{MOVE, -16, 0},
	{DRAW, 0, 48},
	{STOP, 0, 0},
};
