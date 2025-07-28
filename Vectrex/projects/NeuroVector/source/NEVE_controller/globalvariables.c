// ---------------------------------------------------------------------------
// Global variables
//
// Filename: globalvariables.c
// Description: Implements global variables used throughout the game.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "globalvariables.h"

// ---------------------------------------------------------------------------
// Global Variables
// ---------------------------------------------------------------------------
unsigned int button_pressed_counter = 0;
unsigned int display_duration_for_cross = 50;
unsigned int number_of_crosses_to_be_displayed = 0;

unsigned int temp_pass = 0;

//Controller
int joy_x = 0;
int joy_y = 0;
int joy_x_old = 5;
int joy_y_old = 5;

//Highscores
unsigned int highscore_normal = 0;
unsigned int highscore_hard = 0;
unsigned int highscore_extrem = 0;
unsigned int* current_highscore = 0;

unsigned int is_the_same = 1;

unsigned int time_left_counter = 7;
unsigned int time_left_counter2 = 0;
unsigned int time_left_counter3 = 0;

unsigned int scaling_factor = 16;
unsigned int level_selection  = 1;