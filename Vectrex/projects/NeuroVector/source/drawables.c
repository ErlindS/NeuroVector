#include "drawables.h"
// --------------------------------------------------
// cross
// --------------------------------------------------
void draw_cross(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-21, -6);
	Moveto_d(Positions_Cursor[i].x, Positions_Cursor[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x60;
	Draw_VLp(&cross);
}


void draw_square(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-18, 0);
	Moveto_d(Positions_Cursor[i].x, Positions_Cursor[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x10;
	Draw_VLp(&square);
};
/*
void draw_square_wp(){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-18, 0);
	Moveto_d(Positions_Cursor[].x, Positions_Cursor[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x10;
	Draw_VLp(&square);
}*/


void draw_square_filled(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-18, 0);
	Moveto_d(Positions_Cursor[i].x, Positions_Cursor[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x10;
	Draw_VLp(&square_filled);
}
/*
void draw_square_filled_wp(){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-18, 0);
	Moveto_d(Positions_Cursor[i].x, Positions_Cursor[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x10;
	Draw_VLp(&square);
}*/


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
		Moveto_d(25, -60);
		Draw_VLp(&Gamefield);
		Reset0Ref();
		dp_VIA_t1_cnt_lo = 0x18;
		Moveto_d(0, 0);
		Draw_VLp(&Brainright);
		Reset0Ref();
		Moveto_d(0, 0);
		Draw_VLp(&Brainleft);
}

//--------------------------------------------------
// Loadingbar
// -------------------------------------------------
void Loadingbar(unsigned int q) {	
	
		Reset0Ref();					// reset beam to center of screen
		dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
		Moveto_d(70, -60);			// move beam to object coordinates
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);
	
		Reset0Ref();					// reset beam to center of screen
		dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
		Moveto_d(66, -60);			// move beam to object coordinates
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);
			
		Reset0Ref();					// reset beam to center of screen
		dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
		Moveto_d(62, -60);			// move beam to object coordinates
		dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
		Draw_Line_d(0,80);
						
		dp_VIA_t1_cnt_lo = 0xFF;
}


//--------------------------------------------------
// Lifeline
// -------------------------------------------------



void Lifeline(unsigned int q) {	
	
		Reset0Ref();					// reset beam to center of screen
		unsigned int c = q;
		q = c;
		/*
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
		*/
}

//--------------------------------------------------
// Menu Arrow
// -------------------------------------------------
void draw_menu_arrow(int q) {
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
	Moveto_d(Positions_Arrow[q].x, Positions_Arrow[q].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x60;
	Draw_VLp(&arrow);
}

