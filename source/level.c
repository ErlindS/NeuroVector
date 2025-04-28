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
	current_level.status = LEVEL_PLAY;
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
	//draw_cross(2);
	//draw_cross(4);
	//draw_cross(6);
	//draw_cross(8);
	check_joysticks();
	
	print_signed_int(-90, -90, joystick_1_x());
	print_signed_int(-90, -50, joystick_1_y());
	print_signed_int(-70, -90, joy_x);
	print_signed_int(-70, -50, joy_y);
	
	/*
	
	if(joystick_1_x() > 0){
		++joy_x;
	}
	if(joystick_1_x() < 0){
		--joy_x;
	}
	
	if(joystick_1_y() > 0){
		++joy_y;
	}
	if(joystick_1_y() < 0){
		--joy_y;
	}
	*/
	joy_x = joystick_1_x();
	joy_y = joystick_1_y();
	
	if(joy_x < 0 && joy_y > 0){draw_cross(1);}
	if(joy_x == 0 && joy_y > 0){draw_cross(2);}
	if( joystick_1_x() > 0 && joystick_1_y() > 0){draw_cross(3);}
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
		
		Display_TimeLeft();
		Generate_Gamefield();
		move_cursor();

	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
