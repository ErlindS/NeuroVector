// ---------------------------------------------------------------------------
// Drawbales
//
// Filename: drawables.c
// Description: Every function starting with draw_ represents one function which may be called from the controller.
//				It basically represents the interface.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "drawables.h"


void draw_square(unsigned int i){
	Reset0Ref();					
	dp_VIA_t1_cnt_lo = 31;		
	Moveto_d(-56, 0);
	dp_VIA_t1_cnt_lo = 80;		
	Moveto_d(displayed_squares[i].x, displayed_squares[i].y);			
	dp_VIA_t1_cnt_lo = displayed_squares[i].scaling_factor;
	Draw_VLp(&square);
}

void draw_square_filled(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 31;		// set scaling factor for positioning
	Moveto_d(-56, 0);
	dp_VIA_t1_cnt_lo = 80;
	Moveto_d(displayed_squares[i].x, displayed_squares[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = displayed_squares[i].scaling_factor;
	Draw_VLp(&square_filled);
}

void draw_round_advancement_cross(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(Level_advancement[i].x, Level_advancement[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x20;
	Draw_VLp(&cross);
}

void draw_round_advancement_cross_plus(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(Level_advancement[i].x, Level_advancement[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x20;
	Draw_VLp(&advancement_plus);
}

//--------------------------------------------------
// Menu Arrow
// -------------------------------------------------
void draw_menu_arrow(unsigned int q) {
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 125;		// set scaling factor for positioning
	Moveto_d(position_arrows[q].x, position_arrows[q].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 10;
	Draw_VLp(&arrow);
}

//Needs to be in c file, when added to header data will be increased about 400 bytes
LifelineStruct lifeline = {
    .first = 0,
    .rest = {
        0, 30,
        15, 10,
        -15, 10,
        0, 5,
        -15, 10,
        45, 15,
        -55, 15,
        25, 15,
        0, 30,
        0, 20,
        15, 10,
        -15, 10,
        0, 5,
        -15, 10,
        45, 15,
        -55, 15,
        25, 15,
        0, 30,
        0, 20,
        15, 10,
        -15, 10,
        0, 5,
        -15, 10,
        45, 15,
        -55, 15,
        25, 15,
        0, 45,
    }
};