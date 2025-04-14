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

const struct packet_t vectors_player[] =
{
	{MOVE, {  1 * SFN, -1 * SFN}},
	{DRAW, {  0 * SFN,  2 * SFN}},
	{DRAW, { -2 * SFN,  0 * SFN}},
	{DRAW, {  0 * SFN, -2 * SFN}},
	{DRAW, {  2 * SFN,  0 * SFN}},
	{STOP, { 0, 0}},
};

void draw_player(void)
{
	Reset0Ref();					// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
	Moveto_d(5, 5);					// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x22;		// set scalinf factor for drawing
	Draw_VLp(&vectors_player);		// draw vector list
}

void handle_objects(struct object_t* p)
{		
		Reset0Ref();					// reset beam to center of screen
		dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
		Moveto_d(p->x, p->y);			// move beam to object coordinates
		dp_VIA_t1_cnt_lo = 0x22;		// set scalinf factor for drawing
		Draw_VLp(&vectors_player);		// draw vector list
		
		p->y += p->dy;
		p->x += p->dx;
}


const struct packet_t cross[] =
{
	{MOVE, {  1 * SF, 1 * SF}},
	{DRAW, {  -1 * SF,  -1 * SF}},
	{MOVE, {  1 * SF, 0 * SF}},
	{DRAW, {  -1 * SF,  1 * SF}},
	{STOP, { 0, 0}},
};

const struct vector_t Time_Positions3[11] = {{-50, 60},{-40, 60},{-30, 60},{-20, 60},{-10, 60},{0, 60},{10, 60},{20, 60},{30, 60},{40, 60},{50,60}};

int cross_y = -50;
int cross_x = 60;

void draw_cross(int q){
		while(--q){
			Reset0Ref();					// reset beam to center of screen
			dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
			Moveto_d(Time_Positions3[q].x, Time_Positions3[q].y);			// move beam to object coordinates
			//Moveto_d(cross_x, cross_y);			// move beam to object coordinates
			dp_VIA_t1_cnt_lo = 0x22;		// set scalinf factor for drawing
			Draw_VLp(&cross);		// draw vector list
			if(q == 2){
					q = 10;
			}
			cross_y += 10;
		}
		cross_y = -50;
		cross_x = 60;
}



// ***************************************************************************
// end of file
// ***************************************************************************

