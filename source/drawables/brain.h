#pragma once

const struct packet Brainright[] = 
{
	{MOVE, -45, 0},
	{DRAW, -5, 5},
	{DRAW, 1, 15},
	{DRAW, 10, 7},
	{DRAW, 10, 5},
	{DRAW, 45, -1},
	{DRAW, 5, -10},
	{DRAW, 0, -10},
	{DRAW, -5, -10},
	{STOP, 0, 0},
};

const struct packet Brainleft[] = 
{
	{MOVE, -45, 0},
	{DRAW, -5, -5},
	{DRAW, 1, -15},
	{DRAW, 10, -7},
	{DRAW, 10, -5},
	{DRAW, 45, 1},
	{DRAW, 5, 10},
	{DRAW, 0, 10},
	{DRAW, -5, 10},
	{STOP, 0, 0},
};
