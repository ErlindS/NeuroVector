#pragma once

const struct packet Gamefield[] = 
{
	{DRAW, -120, 0},
	{DRAW, 0, 120},
	{DRAW, 120, 0},
	{DRAW, 0, -120},
	{STOP, 0, 0},
};

const struct packet Lifelinestruct[] = {
	{DRAW, 0, 30},
	{DRAW, 15, 10},
	{DRAW, -15, 10},
	{DRAW, 0, 15},
	{DRAW, -15, 10},
	{DRAW, 45, 15},
	{DRAW, -55, 15},
	{DRAW, 25, 15},
	{DRAW, 0, 15},
	{STOP, 0, 0},
};
