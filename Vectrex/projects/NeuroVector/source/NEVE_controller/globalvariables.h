// ---------------------------------------------------------------------------
// Global variables
//
// Filename: globalvariables.c
// Description: Implements global variables used throughout the game.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
// Global Variables
// ---------------------------------------------------------------------------
#pragma once
#include "utils/controller.h"
#include "print/print.h"
#include "sound.h"

typedef struct scores {
    unsigned int still;
    unsigned int pulse;
    unsigned int mirror;
    unsigned int orbit;
    unsigned int echo;
    unsigned int* current_score; 
} Scores;

extern Scores highscores;

extern unsigned int button_pressed_counter;
extern unsigned int display_duration_for_cross;
extern unsigned int number_of_crosses_to_be_displayed;

extern unsigned int counter;
extern unsigned int temp_pass;
extern int joy_x;
extern int joy_y;
extern int joy_x_old;
extern int joy_y_old;
extern const int joy_to_index[9];


extern unsigned is_the_same;
extern unsigned int time_left_counter;
extern unsigned int time_left_counter2;
extern unsigned int time_left_counter3;

extern unsigned int scaling_factor;
extern unsigned int level_selection;