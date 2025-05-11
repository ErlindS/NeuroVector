#include "drawables.h"
// --------------------------------------------------
// cross
// ---------------------------------------------------------------------------
void draw_cross(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-21, -6);
	Moveto_d(Positions_Cursor[i].x, Positions_Cursor[i].y);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x60;
	Draw_VLp(&cross);
}

//--------------------------------------------------
// Gamefield + Brain
void Display_Gamefield(){
		Reset0Ref();
		dp_VIA_t1_cnt_lo = 0xFF;
		Moveto_d(-15, 0);
		Draw_VLp(&Gamefield);
		Reset0Ref();
		Moveto_d(0, 0);
		Draw_VLp(&Brainright);
		Reset0Ref();
		Moveto_d(0, 0);
		Draw_VLp(&Brainleft);
}

//--------------------------------------------------
// Loadingbar
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



