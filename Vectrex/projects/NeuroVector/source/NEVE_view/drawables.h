// drawables.h
#pragma once

#include <vectrex.h>
#include "NEVE_drawings/cross.h"
#include "NEVE_drawings/gamefield.h"
#include "NEVE_drawings/brain.h"
#include "NEVE_drawings/menu_arrow.h"
#include "NEVE_drawings/drawablesbasic.h" 
#include "../NEVE_model/square.h"

// --------------------------------------------------
// Loadingbar
// --------------------------------------------------
void Loadingbar(unsigned int q);
void Lifeline(unsigned int q);
void Lifeline2(unsigned int n);

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

typedef struct {
    unsigned int first;
    const int rest[69];
} LifelineStruct;

LifelineStruct lifeline3 = {
    .first = 0,
    .rest = {
        0, 30,
        15, 10,
        -15, 10,
        0, 15,
        -15, 10,
        45, 15,
        -55, 15,
        25, 15,
        0, 15,
        0, 30,
        0, 30,
        0, 30,
        15, 10,
        -15, 10,
        0, 15,
        -15, 10,
        45, 15,
        -55, 15,
        25, 15,
        0, 15,
        0, 30,
        0, 30,
        0, 30,
        15, 10,
        -15, 10,
        0, 15,
        -15, 10,
        45, 15,
        -55, 15,
        25, 15,
        0, 15,
        0, 30,
        0, 30
    }
};

