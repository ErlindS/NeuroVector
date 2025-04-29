// ***************************************************************************
// level
// ***************************************************************************

#include <vectrex.h>
#include "utils/utils.h"
#include "game.h"
#include "level.h"
#include "objects.h"
#include "print/print.h"
#include "utils/controller.h"

// ---------------------------------------------------------------------------

struct level_t current_level =
{
	.status = LEVEL_LOST,
};


// ----------------------------------------------------------------------------
//Random Number Generator
unsigned int a_random[20] = {3, 9, 7, 5, 5, 8, 4, 5, 9, 8, 1, 5, 9, 2, 9, 6, 3, 1, 6, 3 };
void RandomNumberGenerator(){
	for(int i = 0; i < 20; ++i){
		a_random[i] = (a_random[i] + Random()) % 10;
	}
}

unsigned int RandomSequenceCounter = 50;
unsigned int RandomSequenceCounterDisplay = 0;
void Display_RandomSequence(){
	draw_cross((int)a_random[RandomSequenceCounterDisplay]);
	--RandomSequenceCounter;
	if(RandomSequenceCounter == 0){
		RandomSequenceCounterDisplay++;
		RandomSequenceCounter = 50;
	}
}

// ---------------------------------------------------------------------------
//Init 
void level_init()
{
	current_level.status = LEVEL_PLAY;
	RandomNumberGenerator();
}	


// ---------------------------------------------------------------------------
// Loadingbar
unsigned int counter = 0;
void Display_TimeLeft(){
	print_string(100, -60, "TIME LEFT\x80");

	Loadingbar(counter);		
	counter -=4;
	if(counter == 0){
		counter = 200;
	}
}


// ---------------------------------------------------------------------------
// Gamefield
const unsigned int nibby_vl_style_0[] =
{
	// draw up
	128 + 2,	
	0xc3, 0x60, 
	128 + 2,
	0x02, 0xa0,
	128 + 2,
	0x22, 0x0A,
	128 + 2 + 32,
	0x20, 0x06,
};

void Generate_Gamefield(){
		Reset0Ref();
		Moveto_d(10, -30);
		if (*((unsigned int*) 0xFFA1) == 0x20) // dirty bios check
		{
			dp_VIA_t1_cnt_lo = 0xFF;		// set scalinf factor for drawing
			Draw_Grid_VL((void*) 0L, (void*) nibby_vl_style_0); // ignore x reg
		}
		else
		{
			dp_VIA_t1_cnt_lo = 0xFF;
			Draw_Grid_VL((void*) 0L, (void*) nibby_vl_style_0); // ignore x reg			
		}
}

//-----------------------------------------------------------------------------------------
// Player
static int joy_x = 0;
static int joy_y = 0;
void move_cursor(){
	check_joysticks();
	
	print_signed_int(-90, -90, joystick_1_x());
	print_signed_int(-90, -50, joystick_1_y());
	print_signed_int(-70, -90, joy_x);
	print_signed_int(-70, -50, joy_y);
	
	joy_x = joystick_1_x();
	joy_y = joystick_1_y();
	
	if(joy_x < 0 && joy_y > 0){draw_cross(1);}
	if(joy_x == 0 && joy_y > 0){draw_cross(2);}
	if(joy_x > 0 && joy_y > 0){draw_cross(3);}
	if(joy_x < 0 && joy_y == 0){draw_cross(4);}
	if(joy_x == 0 && joy_y == 0){draw_cross(5);}
	if(joy_x > 0 && joy_y == 0){draw_cross(6);}
	if(joy_x < 0 && joy_y < 0){draw_cross(7);}
	if(joy_x == 0 && joy_y < 0){draw_cross(8);}
	if(joy_x > 0 && joy_y < 0){draw_cross(9);}
}

//-----------------------------------------------------------------------------------------
// Gameloop
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
		
	
		//Display_RandomSequence();
		Generate_Gamefield();
		Display_RandomSequence();
		Display_TimeLeft();
		move_cursor();

	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
