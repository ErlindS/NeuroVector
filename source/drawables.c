#include "drawables.h"
// --------------------------------------------------
// cross
// ---------------------------------------------------------------------------
enum mode_t
{
	MOVE = 0,
	STOP = 1,
	DRAW = 255
};

struct packet
{
	enum mode_t mode;			// drawing mode
	int y;		// relative vector;
	int x;		// relative vector;
};

struct vector_t
{
	int x; 
	int y;
};

struct vector_t Positions_Cursor[10] = {{0,0},  {16, -16}, {16, 0},{16, 16},
												{0, -16},  {0,  0},{0, 16},
												{-16, -16},{-16,0},{-16, 16}};

const struct packet cross[] =
{
	{MOVE, 32, 32},
	{DRAW, -32, -32},
	{MOVE, 32, 0},
	{DRAW, -32, 32},
	{STOP, 0, 0},
};

void draw_cross(unsigned int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0xff;		// set scaling factor for positioning
	Moveto_d(-21, -6);
	Moveto_d(Positions_Cursor[i].y, Positions_Cursor[i].x);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x60;
	//dp_VIA_t1_cnt_lo = 0x22;		// set scalinf factor for drawing
	Draw_VLp(&cross);
}


//--------------------------------------------------
// Gamefield + Brain
const struct packet Gamefield[] = 
{
	{MOVE, 24, -8},
	{DRAW, -48, 0},
	{MOVE, 0, 16},
	{DRAW, 48, 0},
	{MOVE, -16, 16},
	{DRAW, 0, -48},
	{MOVE, -16, 0},
	{DRAW, 0, 48},
	{STOP, 0, 0},
};
const struct packet Brainright[] = 
{
	{MOVE, -45, 0},
	{DRAW, -5, 5},
	{DRAW, 1, 15},
	{DRAW, 10, 7},
	{DRAW, 10, 5},
	{DRAW, 45, -1},
	{DRAW, 5, -10},
	{DRAW, 0, -10},
	{DRAW, -5, -10},
	{STOP, 0, 0},
};

const struct packet Brainleft[] = 
{
	{MOVE, -45, 0},
	{DRAW, -5, -5},
	{DRAW, 1, -15},
	{DRAW, 10, -7},
	{DRAW, 10, -5},
	{DRAW, 45, 1},
	{DRAW, 5, 10},
	{DRAW, 0, 10},
	{DRAW, -5, 10},
	{STOP, 0, 0},
};


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
		for(int i = 0; i < 3; ++i){
			Reset0Ref();					// reset beam to center of screen
			dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
			Moveto_d(70 - i*4, -60);			// move beam to object coordinates
			dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
			Draw_Line_d(0,80);
		}
		dp_VIA_t1_cnt_lo = 0xFF;
}



