// ---------------------------------------------------------------------------
// Drawbales
//
// Filename: drawables.h
// Description: Every function starting with draw_ represents one function which may be called from the controller.
//				It basically represents the interface.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once

#include <vectrex.h>
#include "NEVE_drawings/cross.h"
#include "NEVE_drawings/gamefield.h"
#include "NEVE_drawings/brain.h"
#include "NEVE_drawings/menu_arrow.h"
#include "NEVE_drawings/drawablesbasic.h" 
#include "NEVE_drawings/lifeline.h" 
#include "../NEVE_model/square.h"

#include "../NEVE_controller/globalvariables.h"

// --------------------------------------------------
// Lifeline
// --------------------------------------------------
void draw_lifeline();

// --------------------------------------------------
// Draw Cross
// --------------------------------------------------
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


