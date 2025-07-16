// Filename: globalvariables.c
// Description: Implements global variables used throughout the game.
// Author: Erlind Sejdiu
// Date: 2025-07-16


// ---------------------------------------------------------------------------
// Global Variables
// ---------------------------------------------------------------------------
#pragma once
#include "utils/controller.h"
#include "print/print.h"
#include "sound.h"

extern unsigned int button_pressed_counter;
extern unsigned int display_duration_for_cross;
extern unsigned int number_of_crosses_to_be_displayed;

extern unsigned int counter;
extern unsigned int temp_pass;
extern int joy_x;
extern int joy_y;

extern unsigned int highscore_extrem;
extern unsigned int highscore_hard;
extern unsigned int highscore_normal;
extern unsigned int* current_highscore;

extern unsigned is_the_same;
extern unsigned int time_left_counter;
extern unsigned int time_left_counter2;
extern unsigned int time_left_counter3;

extern unsigned int scaling_factor;
extern unsigned int level_selection;