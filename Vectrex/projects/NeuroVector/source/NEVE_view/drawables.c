#include "drawables.h"
// --------------------------------------------------
// cross
// --------------------------------------------------
void draw_square(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xFF;		// set scaling factor for positioning
	Moveto_d(-7, 0);
	Moveto_d(displayed_squares[i].x, displayed_squares[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = displayed_squares[i].scaling_factor;
	Draw_VLp(&square);
}

void draw_square_filled(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xFF;		// set scaling factor for positioning
	Moveto_d(-7, 0);
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
// Gamefield + Brain
// -------------------------------------------------
void Display_Gamefield(){
		Reset0Ref();
		dp_VIA_t1_cnt_lo = 0x80;
		Moveto_d(45, -60);
		Draw_VLp(&Gamefield);
		Reset0Ref();
		dp_VIA_t1_cnt_lo = 0x18;
		Moveto_d(80, 0);
		Draw_VLp(&Brainright);
		Reset0Ref();
		Moveto_d(80, 0);
		Draw_VLp(&Brainleft);
}

//--------------------------------------------------
// Lifeline
// -------------------------------------------------
void draw_lifeline() {
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x30;	
	Moveto_d(120, -120);
	Moveto_d(120, -120);
	Moveto_d(0, -50);
	Draw_VLc(&lifeline);
	Reset0Ref();					// reset beam to center of screen
}

//--------------------------------------------------
// Menu Arrow
// -------------------------------------------------
void draw_menu_arrow(unsigned int q) {
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
	Moveto_d(position_arrows[q].x, position_arrows[q].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x60;
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