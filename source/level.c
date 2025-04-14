// ***************************************************************************
// level
// ***************************************************************************

#include <vectrex.h>
#include "utils/utils.h"
#include "game.h"
#include "level.h"
#include "objects.h"
#include "print/print.h"

// ---------------------------------------------------------------------------

struct level_t current_level =
{
	.status = LEVEL_LOST,
};

short Display_pattern[20] = {0};
struct vector_t Positions[20];
struct vector_t Time_Positions[11] = {{-50, 60},{-40, 60},{-30, 60},{-20, 60},{-10, 60},{0, 60},{10, 60},{20, 60},{30, 60},{40, 60},{50,60}};

/*
const int a1[] = {3, 6, 3, 4, 4, 1, 8, 7, 5, 9, 4, 2, 5, 1, 8, 5, 9, 6, 8, 8, 2, 5, 4, 6, 4};
const int a1[] = {4, 1, 6, 8, 2, 9, 1, 8, 9, 8, 9, 6, 2, 6, 3, 3, 3, 5, 9, 7, 7, 3, 8, 8, 6};
const int a1[] = {6, 4, 4, 3, 4, 9, 8, 5, 6, 1, 8, 7, 5, 9, 1, 6, 7, 9, 7, 8, 2, 2, 3, 2, 5};
const int a1[] = {2, 4, 3, 5, 3, 1, 9, 1, 9, 1, 1, 6, 6, 7, 9, 4, 9, 2, 4, 4, 4, 7, 3, 3, 8};
const int a1[] = {9, 4, 1, 2, 1, 2, 3, 5, 6, 9, 5, 4, 7, 1, 4, 9, 4 1 9 6 4 9 7 5 8};
const int a1[] = {3, 6, 3, 4, 4, 1, 8, 7, 5, 9, 4, 2, 5, 1, 8, 5, 9, 6, 8, 8, 2, 5, 4, 6, 4};
const int a1[] = {3, 6, 3, 4, 4, 1, 8, 7, 5, 9, 4, 2, 5, 1, 8, 5, 9, 6, 8, 8, 2, 5, 4, 6, 4};
const int a1[] = {3, 6, 3, 4, 4, 1, 8, 7, 5, 9, 4, 2, 5, 1, 8, 5, 9, 6, 8, 8, 2, 5, 4, 6, 4};
const int a1[] = {3, 6, 3, 4, 4, 1, 8, 7, 5, 9, 4, 2, 5, 1, 8, 5, 9, 6, 8, 8, 2, 5, 4, 6, 4};
*/
// ---------------------------------------------------------------------------
void level_init()
{
	for(int i = 0; i < 20; ++i){
			Display_pattern[i] =  (short) (Random() % 9) + 1;
	}
	for(int i = 0; i < 20; ++i){
	switch(Display_pattern[i]){
	case 1:
		Positions[i] = (struct vector_t){-30, 30};
		break;
	case 2:
		Positions[i] = (struct vector_t){0, 30};
		break;
	case 3:
		Positions[i] = (struct vector_t){30, 30};
		break;
	case 4:
		Positions[i] = (struct vector_t){-30, 0};
		break;
	case 5:
		Positions[i] = (struct vector_t){0, 0};
		break;
	case 6:
		Positions[i] = (struct vector_t){30, 0};
		break;
	case 7:
		Positions[i] = (struct vector_t){-30, -30};
		break;
	case 8:
		Positions[i] = (struct vector_t){0, -30};
		break;
	case 9:
		Positions[i] = (struct vector_t){30, -30};
		break;		
	default:
		Positions[i] = (struct vector_t){0, 0};
		break;
		}
	}
	current_level.status = LEVEL_PLAY;
}	
// ---------------------------------------------------------------------------
//Gamefield
struct object_t Gamefield[] = 
{
	{ .status = INACTIVE, .y = 0, .x = 0, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 30, .x = 0, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 0, .x = 30, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 30, .x = 30, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = -30, .x = 0, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 0, .x = -30, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = -30, .x = -30, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 30, .x = -30, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = -30, .x = 30, .dy = 0, .dx = 0},
};


// ---------------------------------------------------------------------------
// Loadingbar
unsigned int counter = 0;
void Display_TimeLeft(){
	print_string(80, -60, "TIME LEFT\x80");

	Loadingbar(counter);		
	counter -=4;
	if(counter == 0){
		counter = 200;
	}
}
// ---------------------------------------------------------------------------
const unsigned int nibby_vl_style_1[] =
{
	// nibby_packet 1: "N"
	3,	// control byte: 4 nibby_vectors follow, move last vector
	0x60, 0xa3, 0x60, 0xa3,
	// nibby_packet 2: "I"
	1,	// control byte: 2 nibby_vectors follow, move last vector
	0x60, 0xa3,
	// nibby_packet 3: "B"
	5,	// control byte: 6 nibby_vectors follow, move last vector
	0x60, 0xf3, 0xed, 0xf3, 0xed, 0x06,
	// nibby_packet 4: "B"
	5,	// control byte: 6 nibby_vectors follow, move last vector
	0x60, 0xf3, 0xed, 0xf3, 0xed, 0x66,
	// nibby_packet 5: "Y"
	2,	// control byte: 3 nibby_vectors follow, move last vector
	0xd2, 0x32, 0xde,
	// nibby_packet 6: "Y"
	128 + 0,	// control byte: 1 nibby_vector follows, draw last vector
	0xd0,
	// nibby_packet 7: "1"
	128 + 32 + 16 + 1,	// control byte: 2 position bytes and then 2 nibby_vectors follow, draw last vector, last packet
	0xb0, 0xe0, 0x60, 0xee,
};
//-----------------------------------------------------------------------------------------



void level_play(void)
{
	while(current_level.status == LEVEL_PLAY)
	{
		// game loop header start - do not change
		DP_to_C8();
		Explosion_Snd(current_explosion);
		Init_Music_chk(current_music);
		Wait_Recal();
		Do_Sound();
		Intensity_5F();
		// game loop header end

		//Display_TimeLeft();
		Draw_Grid_VL((void*) 0L, (void*) nibby_vl_style_1);
		
		//Generate_Gamefield();
		//Display_Pattern();
		// end of frame
	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
