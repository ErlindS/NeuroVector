// ***************************************************************************
// object
// ***************************************************************************

#include <vectrex.h>
#include "level.h"
#include "objects.h"
#include "level.h"

// ---------------------------------------------------------------------------

void init_object(struct object_t* p)
{
	p->status = ACTIVE;

	p->y = 64 + (int) (Random() & 0b01111111);
	p->x = 64 + (int) (Random() & 0b01111111);

	p->dy = (int) (Random() & 0b00000011) - 2; 
	p->dx = (int) (Random() & 0b00000011) - 1;
}
// ---------------------------------------------------------------------------
#undef SF
#define SF 32
#define SFN 48

struct vector_t Positions_Cursor[10] = {{0,0},{32, -32},{32, 0},{32, 32},
								{0, -32}, {0,  0},{0, 32},
								{-32, -32}, {-32,0},{-32, 32}};

const struct packet_t cross[] =
{
	{MOVE, {  1 * SF, 1 * SF}},
	{DRAW, {  -1 * SF,  -1 * SF}},
	{MOVE, {  1 * SF, 0 * SF}},
	{DRAW, {  -1 * SF,  1 * SF}},
	{STOP, { 0, 0}},
};

int cross_y = 70;
int cross_x = -60;
void Loadingbar(unsigned int q) {	
		for(int i = 0; i < 3; ++i){
			Reset0Ref();					// reset beam to center of screen
			dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
			Moveto_d(cross_y - i*4, cross_x);			// move beam to object coordinates
			dp_VIA_t1_cnt_lo = q;		// set scalinf factor for drawing
			Draw_Line_d(0,100);
		}
		dp_VIA_t1_cnt_lo = 0xFF;
}

void draw_cross(int i){
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
	Moveto_d(Positions_Cursor[i].y, Positions_Cursor[i].x);			// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x22;		// set scalinf factor for drawing
	Draw_VLp(&cross);
}

// ***************************************************************************
// end of file
// ***************************************************************************

