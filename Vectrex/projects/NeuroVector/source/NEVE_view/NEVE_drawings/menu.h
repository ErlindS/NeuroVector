// ***************************************************************************
// Menu Arrow
//
// Filename: menu_arrow.h
// Description: Saves the coordinates for the menu arrow.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ***************************************************************************

#pragma once
#include "drawablesbasic.h"

const struct packet menu[] =
{
    //M
	{DRAW, 100, 0},
    {DRAW, -100, 50},
    {DRAW, 100, 50},
    {DRAW, -100, 0},
    {MOVE, 0, 30},
    //E
	{DRAW, 0, 50},
    {MOVE, 0, -50},
    {DRAW, 100, 0},
    {MOVE, -50, 0},
    {DRAW, 0, 50},
    {MOVE, 50, -50},
    {DRAW, 0, 50},
    //N
    {MOVE, -100, 30},
    {DRAW, 100, 0},
    {DRAW, -100, 50},
    {DRAW, 110, 0},
    {MOVE, -110, 30},
    //U
    {DRAW, 110, 0},
    {MOVE, -110, 0},
    {DRAW, 0, 50},
    {DRAW, 110, 0},
	{STOP, 0, 0}
};

