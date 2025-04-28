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

const struct packet_t cross[] =
{
	{MOVE, {  1 * SF, 1 * SF}},
	{DRAW, {  -1 * SF,  -1 * SF}},
	{MOVE, {  1 * SF, 0 * SF}},
	{DRAW, {  -1 * SF,  1 * SF}},
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


void draw_cross(struct vector_t* p){
		Reset0Ref();					// reset beam to center of screen
		dp_VIA_t1_cnt_lo = 0x7f;		// set scaling factor for positioning
		Moveto_d(p->x -4 , p->y -4);			// move beam to object coordinates
		dp_VIA_t1_cnt_lo = 0x22;		// set scalinf factor for drawing
		Draw_VLp(&cross);		// draw vector list
}



// ***************************************************************************
// end of file
// ***************************************************************************

