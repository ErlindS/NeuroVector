// ***************************************************************************
// level
// ***************************************************************************

#include <vectrex.h>
#include "utils/utils.h"
#include "game.h"
#include "level.h"
#include "objects.h"

// ---------------------------------------------------------------------------

struct level_t current_level =
{
	.status = LEVEL_LOST,
};

short Display_pattern[20] = {0};

// ---------------------------------------------------------------------------
void level_init()
{
	for(int i = 0; i < 20; ++i){
			Display_pattern[i] =  (short) (Random() % 9) + 1;
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
	int a;
	a=3;
}

void Repeat_Pattern(){
	int b;
	b=4;
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

		Generate_Gamefield();
		Display_Pattern();
		Repeat_Pattern();

		// end of frame
	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
