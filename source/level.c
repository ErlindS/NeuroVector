// ***************************************************************************
// level
// ***************************************************************************

#include <vectrex.h>
#include "utils/utils.h"
#include "game.h"
#include "level.h"
#include "print/print.h"
#include "utils/controller.h"

void execute_repeat_sequence_state();
void execute_display_sequence_state();

// ---------------------------------------------------------------------------
// Random Number generator
unsigned int a_random[20] = {3, 9, 7, 5, 5, 8, 4, 5, 9, 8, 1, 5, 9, 2, 9, 6, 3, 1, 6, 3};
unsigned int a_random_compare[20] = {0};
unsigned int RandomSequenceCounter = 200;
unsigned int RandomSequenceCounterDisplay = 0;

void RandomNumberGenerator(){
	for(int i = 0; i < 20; ++i){
		a_random[i] = (a_random[i]) % 10;
	}
}

//  TODO: Improve this
void rand(unsigned int n) {	
    for(int i = 0; i < 20; i++){
		n ^= n >> 4;
		n += n << 3;
		n ^= n >> 6;
		n += n << 2;
		n ^= n >> 5;
		a_random[i] = (a_random[i] + n) % 10;
	}
}

// ---------------------------------------------------------------------------
//Init 
struct level_t current_level =
{
	.status = LEVEL_PLAY,
};

int SequenceTime = 1;

// ----------------------------------------------------------------------------
//	Display Time left
unsigned int counter = 0;
void Display_TimeLeft(){
	print_string(100, -60, "TIME LEFT\x80");
	Loadingbar(counter);
	if(counter == 0){
		while(1){
			print_string(100, -60, "GAME OVER\x80");	
		}
		counter = 200;
	}
}

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

void (*execute_game_playing_state)(void);
unsigned int buttonspressedcounter = 0;

// ----------------------------------------------------------------------------
//	Game Over

void display_game_over(){
	print_string(100, -60, "GAME OVER\x80");	
	print_string(80, -80, "PRESS 2 BUTTON\x80"); 
	print_string(60, -60, "TO RESTART\x80");	

	Read_Btns();

	if(button_1_2_pressed()){
		execute_game_playing_state = &execute_display_sequence_state;
		for(int i = 0; i < 20; i++){
			a_random_compare[i] = 0;
		}
		rand(RandomSequenceCounterDisplay);
		RandomSequenceCounterDisplay = 0;
		buttonspressedcounter = 0;
	}
}

//-----------------------------------------------------------------------------------------
// Player
int joy_x = 0;
int joy_y = 0;
unsigned int temppass = 0;
void move_player(){
	check_joysticks();
	
	joy_x = joystick_1_x();
	joy_y = joystick_1_y();
	
	//print_signed_int(-90, -90, joystick_1_x());
	//print_signed_int(-90, -50, joystick_1_y());
	//print_signed_int(-70, -90, Vec_Joy_1_X);
	//print_signed_int(-70, -50, Vec_Joy_1_Y);
	print_signed_int(-70, -90, joy_x);
	print_signed_int(-70, -50, joy_y);
	
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
}

void read_player_input(){
	
	Read_Btns();
	
	if(button_1_1_pressed()){
		a_random_compare[buttonspressedcounter] = temppass;
		buttonspressedcounter++;
	}
	
}

//-----------------------------------------------------------------------------------------
// Gameloop

void check_successfully_repeated(void);

void execute_repeat_sequence_state(void){
		Display_Gamefield();
		Display_TimeLeft();
		move_player();
		read_player_input();
		check_successfully_repeated();
};

//------------------------------------------------
void execute_display_sequence_state(void){
		Display_Gamefield();
		Display_RandomSequence();
		execute_game_playing_state = &execute_repeat_sequence_state;
};

void check_successfully_repeated(){
	unsigned int len = buttonspressedcounter;
	while (len--) {
        if ((a_random[len]) != (a_random_compare[len])){
			execute_game_playing_state = &display_game_over;
		};
    }
    if(RandomSequenceCounterDisplay+1 == buttonspressedcounter){
		RandomSequenceCounterDisplay++;
		buttonspressedcounter = 0;
		counter = 200;
		execute_game_playing_state = &execute_display_sequence_state;
	}
}

void level_init()
{
	enable_controller_1_x();
	enable_controller_1_y();
	disable_controller_2_x();
	disable_controller_2_y();
	unsigned int a = 0;
	int b = 1;
	while(b){
		Read_Btns();
		a++;
		print_string(100, -120, "SELECT THE GAMEMODE\x80");	
		print_string(60, -50, "NORMAL\x80");
		print_string(40, -50, "HARD\x80");
		//draw_menu_arrow(1);
		
		Read_Btns();
		check_joysticks();
	
		if(joystick_1_y() != 0){
			joy_y = joystick_1_y();
		}
		
		if(joy_y > 0){
			draw_menu_arrow(0);
		}
		
		if(joy_y < 0){
			draw_menu_arrow(1);
		}
		if(button_1_1_pressed()){
			b = 0;
		}
	}
	
	//RandomNumberGenerator is for testing purpose
	//RandomNumberGenerator();
	rand(a);
	current_level.status  = LEVEL_PLAY;
	execute_game_playing_state = &execute_display_sequence_state;
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
		execute_game_playing_state();
	}
}	

// ***************************************************************************
// end of file
// ***************************************************************************
