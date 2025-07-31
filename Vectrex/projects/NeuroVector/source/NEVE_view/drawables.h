// ***************************************************************************
// Drawbales
//
// Filename: drawables.h
// Description: Every function starting with draw_ represents one function which may be called from the controller.
//				It basically represents the interface.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ***************************************************************************

#pragma once

#include "NEVE_drawings/cross.h"
#include "NEVE_drawings/gamefield.h"
#include "NEVE_drawings/brain.h"
#include "NEVE_drawings/menu_arrow.h"
#include "NEVE_drawings/drawablesbasic.h" 
#include "NEVE_drawings/lifeline.h" 
#include "NEVE_drawings/menu.h" 
#include "NEVE_drawings/advancement.h" 
#include "../NEVE_model/square.h"
#include "../NEVE_controller/globalvariables.h"

static inline __attribute__((always_inline))
void print_BPM()
{
    char str[] = "  BPM\x80";
    int value = lifeline_timing.remaining_cycles*12;
    str[0] = '0';
	while (value >= 10)
	{
		++str[0];
		value -= 10;
	}
	str[1] = '0' + value;

	reset_print_position();
	Print_Str_d(100, 70, (void*) &str[0]);
}


// --------------------------------------------------
// Lifeline
// --------------------------------------------------
static inline __attribute__((always_inline))
void draw_lifeline(){
    Reset0Ref();
    dp_VIA_t1_cnt_lo = 24;
    Moveto_d(120, -120);
    Moveto_d(120, -120);
    Moveto_d(120, -120);
    Moveto_d(120, -120);
    Moveto_d(0, -100);
    Draw_VLc(&lifeline);
    Reset0Ref();
    print_BPM();
};

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
static inline __attribute__((always_inline))
void Display_Gamefield(void){
	Reset0Ref();
    dp_VIA_t1_cnt_lo = 0x40;
    Moveto_d(90, -120);
    dp_VIA_t1_cnt_lo = 0x80;
    Draw_VLp(&Gamefield);
    Reset0Ref();
    dp_VIA_t1_cnt_lo = 0x16;
    Moveto_d(80, 0);
    Draw_VLp(&fullbrain);
};

// --------------------------------------------------
// Menu Arrow
// --------------------------------------------------
void draw_menu_arrow(unsigned int q);

static inline __attribute__((always_inline))
void draw_menu_sign() {
	Reset0Ref();
    dp_VIA_t1_cnt_lo = 40;
	Moveto_d(120, -60);
    Moveto_d(120, -120);
	Draw_VLp(&menu);
}

static inline __attribute__((always_inline))
void draw_advancementbar_total(){
    Reset0Ref();
    dp_VIA_t1_cnt_lo = 24;
    Moveto_d(-120, -100);
    Moveto_d(-120, -100);
    Moveto_d(-120, -100);
    Moveto_d(-120, -100);
    dp_VIA_t1_cnt_lo = 8;
    Draw_VLc(&advancement_bar_total);
};

static inline __attribute__((always_inline))
void draw_advancementbar_current(){
    Reset0Ref();
    dp_VIA_t1_cnt_lo = 24;
    Moveto_d(-128, -100);
    Moveto_d(-128, -100);
    Moveto_d(-128, -100);
    Moveto_d(-128, -100);
    dp_VIA_t1_cnt_lo = 8;
    Draw_VLc(&advancement_bar_current);
};


