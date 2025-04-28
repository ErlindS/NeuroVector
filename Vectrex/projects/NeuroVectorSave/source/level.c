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
		draw_cross(&Positions[i]);
	}
}

void Display_TimeLeft(){
	print_string(80, -60, "TIME LEFT\x80");
	for(int i = 0; i < 11; i++){
		draw_cross(&Time_Positions[i]);
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
		Generate_Gamefield();
		Display_Pattern();
		// end of frame
	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
