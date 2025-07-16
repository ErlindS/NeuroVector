#pragma once
#include "drawablesbasic.h"
												
												
const struct vector_t Level_advancement[16] = {	{-60,-35}, {-60,-25}, {-60,-15}, {-60,-5}, {-60, 5}, {-60, 15}, {-60, 25}, {-60, 35},
												{-70,-35}, {-70,-25}, {-70,-15}, {-70,-5}, {-70, 5}, {-70, 15}, {-70, 25}, {-70, 35}};	

const struct packet cross[] =
{
	{MOVE, 32, 32},
	{DRAW, -32, -32},
	{MOVE, 32, 0},
	{DRAW, -32, 32},
	{STOP, 0, 0},
};

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

const struct packet advancement_cross[] =
{
	{MOVE, 16, 32},
	{DRAW, -32, -32},
	{MOVE, 32, 0},
	{DRAW, -32, 32},
	{STOP, 0, 0},
};

const struct packet advancement_plus[] =
{
	{MOVE, 32, 16},
	{DRAW, -32, 0},
	{MOVE, 16, 16},
	{DRAW, 0, -32},
	{STOP, 0, 0},
};