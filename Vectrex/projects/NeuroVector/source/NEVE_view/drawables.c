#include "drawables.h"
// --------------------------------------------------
// cross
// --------------------------------------------------

void draw_square(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xFF;		// set scaling factor for positioning
	Moveto_d(-7, 0);
	Moveto_d(Displayed_Squares[i].x, Displayed_Squares[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = Displayed_Squares[i].scalingfactor;
	Draw_VLp(&square);
}

void draw_square_filled(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xFF;		// set scaling factor for positioning
	Moveto_d(-7, 0);
	Moveto_d(Displayed_Squares[i].x, Displayed_Squares[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = Displayed_Squares[i].scalingfactor;
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
void Lifeline(unsigned int q) {	
	
		Reset0Ref();					// reset beam to center of screen
		unsigned int c = q;
		q = c;
		
		dp_VIA_t1_cnt_lo = 0x26;
		Moveto_d(120, -120);			// move beam to object coordinates
		Moveto_d(120, -120);			// move beam to object coordinates
		Moveto_d(120, -120);			// move beam to object coordinates
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);	
		dp_VIA_t1_cnt_lo = 0x30;		// set scalinf factor for drawing
		Draw_VLp(&Lifelinestruct);
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);	
		dp_VIA_t1_cnt_lo = 0x30;		// set scalinf factor for drawing
		Draw_VLp(&Lifelinestruct);
		
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);	
		dp_VIA_t1_cnt_lo = 0x30;		// set scalinf factor for drawing
		Draw_VLp(&Lifelinestruct);
		
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);	
		dp_VIA_t1_cnt_lo = 0x30;		// set scalinf factor for drawing
		Draw_VLp(&Lifelinestruct);
		
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);	
		dp_VIA_t1_cnt_lo = 0x30;		// set scalinf factor for drawing
		Draw_VLp(&Lifelinestruct);
}

unsigned int Lifeline2_Counter = 0;

void Lifeline2() {
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x30;	
	Moveto_d(120, -120);
	Moveto_d(120, -120);
	Moveto_d(0, -50);
	Draw_VLc(&lifeline3);
	Reset0Ref();					// reset beam to center of screen
		
}

//--------------------------------------------------
// Menu Arrow
// -------------------------------------------------
void draw_menu_arrow(unsigned int q) {
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
	Moveto_d(Positions_Arrow[q].x, Positions_Arrow[q].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x60;
	Draw_VLp(&arrow);
}


//--------------------------------------------------
// Life line
// -------------------------------------------------
LifelineStruct lifeline3 = {
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