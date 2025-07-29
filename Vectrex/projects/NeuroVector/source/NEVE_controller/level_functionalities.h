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

void move_player();

static inline __attribute__((always_inline))
void print_highscore_still(int y, int x){
    char str1[] = "STILL   00/16\x80";
	while (highscores.still >= 10)
	{
		++str1[8];
		highscores.still -= 10;
	}
	str1[9] = '0' + highscores.still;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str1[0]);
};

static inline __attribute__((always_inline))
void print_highscore_pulse(int y, int x)
{
    char str1[] = "PULSE   00/16\x80";
	while (highscores.pulse >= 10)
	{
		++str1[8];
		highscores.pulse -= 10;
	}
	str1[9] = '0' + highscores.pulse;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str1[0]);
}

static inline __attribute__((always_inline))
void print_highscore_mirror(int y, int x)
{
    char str1[] = "MIRROR  00/16\x80";
	while (highscores.mirror >= 10)
	{
		++str1[8];
		highscores.mirror -= 10;
	}
	str1[9] = '0' + highscores.mirror;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str1[0]);
}

static inline __attribute__((always_inline))
void print_highscore_orbit(int y, int x)
{
    char str1[] = "ORBIT   00/16\x80";
	while (highscores.orbit >= 10)
	{
		++str1[8];
		highscores.orbit -= 10;
	}
	str1[9] = '0' + highscores.orbit;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str1[0]);
}

static inline __attribute__((always_inline))
void print_highscore_echo(int y, int x)
{
    char str1[] = "ECHO    00/16\x80";
	while (highscores.echo >= 10)
	{
		++str1[8];
		highscores.echo -= 10;
	}
	str1[9] = '0' + highscores.echo;

	reset_print_position();
	Print_Str_d(y, x, (void*) &str1[0]);
}




