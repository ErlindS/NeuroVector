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


void Generate_Gamefield(){
	for(int i = 0; i < 9; i++){
		handle_objects(&Gamefield[i]);
	}
}

void Display_Pattern(){
	for(int i = 0; i < 9; i++){
		//draw_cross(&Positions[i]);
	}
}

int counter = 0;
void Display_TimeLeft(){
	print_string(80, -60, "TIME LEFT\x80");

	draw_cross(counter);		
	++counter;
	if(counter > 10){
		counter = 0;
	}
}

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

		Display_TimeLeft();
		//Generate_Gamefield();
		//Display_Pattern();
		// end of frame
	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
