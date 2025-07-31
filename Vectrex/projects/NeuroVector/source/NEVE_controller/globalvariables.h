// ---------------------------------------------------------------------------
// Global variables
//
// Filename: globalvariables.c
// Description: Implements global variables used throughout the game.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// Defines
// ---------------------------------------------------------------------------
#define UNIFIED_VALUE_1 94
#define UNIFIED_VALUE_2 -96
#define SCALING_FACTOR 20

#define DISTANCEBETWEENSQUARES 40

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
    unsigned int portal;
    unsigned int orbit;
    unsigned int echo;
    unsigned int* current_score; 
} Scores;

typedef struct timing_values{
    int draw_tick;
    int remaining_cycles;
} Timing;

extern Scores highscores;
extern Timing lifeline_timing;

extern unsigned int button_pressed_counter;
extern unsigned int display_duration_for_cross;
extern unsigned int number_of_crosses_to_be_displayed;

extern unsigned int temp_pass;
extern int joy_x;
extern int joy_y;
extern int joy_x_old;
extern int joy_y_old;
extern const int joy_to_index[9];

extern unsigned is_the_same;
extern unsigned int level_selection;