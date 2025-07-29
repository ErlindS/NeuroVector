// ---------------------------------------------------------------------------
// Level Functionalities
//
// Filename: level_functionalities.h
// Description: Declares functions related to level progression and player actions.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once
#include "../NEVE_model/square.h"
#include "../NEVE_model/numbergenerator.h"
#include "../NEVE_view/drawables.h"
#include "globalvariables.h"
#include <vectrex.h>
#include "utils/controller.h"
#include "print/print.h"

void calculate_time_left();

void update_level_advancement(unsigned int n, unsigned int k);

void execute_player_action();

void read_player_input();

void (*display_execute_game_over_state_state)(void);

static inline __attribute__((always_inline))
void move_player(){
    check_joysticks();

    joy_x = joystick_1_x();
    joy_y = joystick_1_y();

    //only change values if change is necessary
    if(joy_x != joy_x_old || joy_y != joy_y_old){
        joy_x_old = joy_x;
        joy_y_old = joy_y;

        joy_x = (joy_x < 0) ? -1 : (joy_x > 0) ? 1 : 0;
        joy_y = (joy_y < 0) ? -1 : (joy_y > 0) ? 1 : 0;
        //check if old value changed

        int joy_index = (joy_y + 1) * 3 + (joy_x + 1);
        temp_pass = joy_to_index[joy_index];

        for (int i = 0; i < 9; ++i)
            displayed_squares[i].execute_display_functions = &draw_square;

        displayed_squares[temp_pass].execute_display_functions = &draw_square_filled;
    }

    Read_Btns();
    
    //this checks if the button was rightfully pushed
    if(button_1_4_pressed())
    {
        //is the same will be 0(and the game will end) if the sequence does not fit the fieldnummer
        is_the_same = (a_random[button_pressed_counter] == temp_pass)?++button_pressed_counter:0;
    } 
};

static inline __attribute__((always_inline))
void print_highscore_still(int y, int x){
    char str[] = "STILL   00/16\x80";
	while (highscores.still >= 10)
	{
		++str[8];
		highscores.still -= 10;
	}
	str[9] = '0' + highscores.still;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str[0]);
};

static inline __attribute__((always_inline))
void print_highscore_pulse(int y, int x)
{
    char str[] = "PULSE   00/16\x80";
	while (highscores.pulse >= 10)
	{
		++str[8];
		highscores.pulse -= 10;
	}
	str[9] = '0' + highscores.pulse;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str[0]);
}

static inline __attribute__((always_inline))
void print_highscore_mirror(int y, int x)
{
    char str[] = "MIRROR  00/16\x80";
	while (highscores.mirror >= 10)
	{
		++str[8];
		highscores.mirror -= 10;
	}
	str[9] = '0' + highscores.mirror;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str[0]);
}

static inline __attribute__((always_inline))
void print_highscore_orbit(int y, int x)
{
    char str[] = "ORBIT   00/16\x80";
	while (highscores.orbit >= 10)
	{
		++str[8];
		highscores.orbit -= 10;
	}
	str[9] = '0' + highscores.orbit;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str[0]);
}

static inline __attribute__((always_inline))
void print_highscore_echo(int y, int x)
{
    char str[] = "ECHO    00/16\x80";
	while (highscores.echo >= 10)
	{
		++str[8];
		highscores.echo -= 10;
	}
	str[9] = '0' + highscores.echo;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str[0]);
}
/*
static inline __attribute__((always_inline))
void draw_lifeline(){
    Reset0Ref();
    dp_VIA_t1_cnt_lo = 0x30;
    Moveto_d(120, -120);
    Moveto_d(120, -120);
    Moveto_d(0, -50);
    Draw_VLc(&lifeline);
    Reset0Ref();
    print_string(100, 70, "BPM\x80");
    print_unsigned_int2(100, 50, time_left_counter*12);
};
*/


