// ***************************************************************************
// level
// ***************************************************************************

#include <vectrex.h>
#include "utils/utils.h"
#include "game.h"
#include "level.h"
#include "print/print.h"
#include "utils/controller.h"


// ---------------------------------------------------------------------------
// Random Number generator
unsigned int a_random[20] = {3, 9, 7, 5, 5, 8, 4, 5, 9, 8, 1, 5, 9, 2, 9, 6, 3, 1, 6, 3 };
unsigned int a_random_compare[20] = {0};
unsigned int RandomSequenceCounter = 200;
unsigned int RandomSequenceCounterDisplay = 0;

void RandomNumberGenerator(){
	for(int i = 0; i < 20; ++i){
		a_random[i] = (a_random[i]) % 10;
		//a_random[i] = a_random[i];
	}
}

// ---------------------------------------------------------------------------
//Init 
struct level_t current_level =
{
	.status = LEVEL_PLAY,
};


void level_init()
{
	RandomNumberGenerator();
	current_level.status  = LEVEL_PLAY;
}	

int SequenceTime = 1;



// ----------------------------------------------------------------------------
//	Display Time left
unsigned int counter = 0;
int counterw = 3;
void Display_TimeLeft(){
	print_string(100, -60, "TIME LEFT\x80");

	Loadingbar(counter);
	--counterw;
	if(counterw == 0){
		counter -=1;
		counterw = 3;
	}
	if(counter == 0){
		while(1){
			print_string(100, -60, "GAME OVER\x80");	
		}
		counter = 200;
	}
}

// ----------------------------------------------------------------------------
//	Pattern to be repeated
void Display_RandomSequence(){
	for(unsigned int i = 0; i < RandomSequenceCounterDisplay+1; i++){
		while(--RandomSequenceCounter){
			counter = 200;
			Wait_Recal();
			Display_Gamefield();
			print_string(100, -75, "REMEMBER THE\x80");	
			print_string(80, -50, "SEQUENCE\x80");
			draw_cross(a_random[i]);
			play_tune(1, 100*i+100, 200);
			play_tune(2, 100*i+100, 200);
			play_tune(3, 100*i+100, 200);
		}
		RandomSequenceCounter = 30;
	}
	SequenceTime = 0;
}

// ----------------------------------------------------------------------------
//Game Logic

unsigned int buttonspressedcounter = 0;
void is_pattern_succesfull(){
		for(unsigned int i = 0; i < RandomSequenceCounterDisplay+1; i++){
				if(a_random[i] != a_random_compare[i]){
					while(1){
					print_string(100, -60, "GAME OVER\x80");	
					print_unsigned_int(-70, -50, a_random[i]);
					print_unsigned_int(-50, -50, a_random_compare[i]);
					}
				} 
				a_random_compare[i] = 0;
		}
		SequenceTime = 1;
		RandomSequenceCounterDisplay++;
		buttonspressedcounter = 0;
		counter = 200;
}

//-----------------------------------------------------------------------------------------
// Player
static int joy_x = 0;
static int joy_y = 0;
unsigned int temppass = 0;
void move_player(){
	check_joysticks();
	
	joy_x = joystick_1_x();
	joy_y = joystick_1_y();
	
	if(joy_x < 0 && joy_y > 0){temppass = (1);}
	if(joy_x == 0 && joy_y > 0){temppass = (2);}
	if(joy_x > 0 && joy_y > 0){temppass = (3);}
	if(joy_x < 0 && joy_y == 0){temppass = (4);}
	if(joy_x == 0 && joy_y == 0){temppass = (5);}
	if(joy_x > 0 && joy_y == 0){temppass = (6);}
	if(joy_x < 0 && joy_y < 0){temppass = (7);}
	if(joy_x == 0 && joy_y < 0){temppass = (8);}
	if(joy_x > 0 && joy_y < 0){temppass = (9);}
	
	draw_cross(temppass);
	
	Read_Btns();
	
	if(button_1_1_pressed()){
		a_random_compare[buttonspressedcounter] = temppass;
		buttonspressedcounter++;
		if(buttonspressedcounter == RandomSequenceCounterDisplay+1){
			is_pattern_succesfull();
		}
	}
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
	
		Display_Gamefield();
		if(SequenceTime) {
			Display_RandomSequence();
		} else {
			Display_TimeLeft();
			move_player();
		}
	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
