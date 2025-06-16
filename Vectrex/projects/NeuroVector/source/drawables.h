// drawables.h
#pragma once

#include "drawables/cross.h"
#include "drawables/gamefield.h"
#include "drawables/brain.h"
#include "drawables/menu_arrow.h"
#include <vectrex.h>
#include "drawables/drawablesbasic.h" 

// --------------------------------------------------
// Loadingbar
// --------------------------------------------------
void Loadingbar(unsigned int q);
void Lifeline(unsigned int q);

// --------------------------------------------------
// draw Cross
// --------------------------------------------------
void draw_cross(unsigned int q);
void draw_square(unsigned int q);
void draw_square_filled(unsigned int q);
void draw_round_advancement_cross(unsigned int q);
void draw_round_advancement_cross_plus(unsigned int q);

// --------------------------------------------------
// Gamefield
// --------------------------------------------------
void Display_Gamefield(void);

// --------------------------------------------------
// Menu Arrow
// --------------------------------------------------
void draw_menu_arrow(unsigned int q);

// Declaration of Displayed_Squares
extern struct SquareObject Displayed_Squares[9];
