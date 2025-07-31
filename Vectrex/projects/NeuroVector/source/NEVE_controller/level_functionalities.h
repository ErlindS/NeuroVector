// ***************************************************************************
// Level Functionalities
//
// Filename: level_functionalities.h
// Description: Declares functions related to level progression and player actions.
// Author: Erlind Sejdiu
// Date: 2025-07-31
// ***************************************************************************

#pragma once
#include "../NEVE_model/square.h"
#include "../NEVE_model/numbergenerator.h"
#include "../NEVE_view/drawables.h"
#include "globalvariables.h"
#include <vectrex.h>
#include "utils/controller.h"
#include "print/print.h"

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

        int joy_index = (joy_y + 1) * 3 + (joy_x + 1);
        temp_pass = joy_to_index[joy_index];

        for (int i = 0; i < 9; ++i)
            displayed_squares[i].execute_display_functions = &draw_square;
    }
	displayed_squares[temp_pass].execute_display_functions = &draw_square_filled;

    Read_Btns();
    
    //this checks if the button was rightfully pushed
    if(button_1_4_pressed())
    {
        //is the same will be 0(and the game will end) if the sequence does not fit the fieldnummer
        is_the_same = (random_sequence[button_pressed_counter] == temp_pass)?++button_pressed_counter:0;
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
void print_highscore_portal(int y, int x)
{
    char str[] = "PORTAL  00/16\x80";
	while (highscores.portal >= 10)
	{
		++str[8];
		highscores.portal -= 10;
	}
	str[9] = '0' + highscores.portal;

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


static inline __attribute__((always_inline))
void calculate_time_left(){
    //In each iteration time_left_counter3 will be increased.
    //After 8 rounds lifeline.progress will be increased.
    //lifeline.progress determines how much of the lifeline will be drawn. 
    //because of time_left_counter3 the lifeline is not drawn as fast
    //and time_left_counter will be assigend to time_left_counter.
    //time_left_counter will be decreased meaning, in later iterations, when the player has not much time left,
    //time_left_counter3 will need more cycles. 
    ++lifeline_timing.draw_tick;
    if(lifeline_timing.draw_tick == 8){
        ++lifeline.progress;
        lifeline_timing.draw_tick = lifeline_timing.remaining_cycles; 
    }

    if(lifeline.progress == 32){
        lifeline.progress = 0;
        lifeline_timing.remaining_cycles -= 1;
    }
}

static inline __attribute__((always_inline))
execute_player_action(){
    //execute_player_action just shall draw the fields, but multiple functioncalls seem overkill
    displayed_squares[0].execute_display_functions(0);
    displayed_squares[1].execute_display_functions(1);
    displayed_squares[2].execute_display_functions(2);
    displayed_squares[3].execute_display_functions(3);
    displayed_squares[4].execute_display_functions(4);
    displayed_squares[5].execute_display_functions(5);
    displayed_squares[6].execute_display_functions(6);
    displayed_squares[7].execute_display_functions(7);
    displayed_squares[8].execute_display_functions(8);
};


static inline __attribute__((always_inline))
update_level_advancement(){
    //update_level_advancement(number_of_crosses_to_be_displayed -button_pressed_counter, button_pressed_counter);
	/*
    int n = number_of_crosses_to_be_displayed -button_pressed_counter;
    int k = button_pressed_counter;
    while(n--){
        draw_round_advancement_cross(n+button_pressed_counter);
    }
    while(k--){
        draw_round_advancement_cross_plus(k);
    }*/

	advancement_bar_total.progress = number_of_crosses_to_be_displayed;
	advancement_bar_current.progress = button_pressed_counter;
	draw_advancementbar_total();
	draw_advancementbar_current();
};
