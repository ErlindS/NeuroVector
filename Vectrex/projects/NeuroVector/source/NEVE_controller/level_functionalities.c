// ***************************************************************************
// Level Functionalities
//
// Filename: level_functionalities.c
// Description: Declares functions related to level progression and player actions.
// Author: Erlind Sejdiu
// Date: 2025-07-31
// ***************************************************************************

#include "level_functionalities.h"

struct Square displayed_squares[9] = {
    {UNIFIED_VALUE_1, UNIFIED_VALUE_2, &draw_square, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_1, 0, &draw_square, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_1, UNIFIED_VALUE_1, &draw_square, SCALING_FACTOR, 0},
    {0, UNIFIED_VALUE_2, &draw_square, SCALING_FACTOR, 0},
    {0, 0, &draw_square, SCALING_FACTOR, 0},
    {0, UNIFIED_VALUE_1, &draw_square, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_2, UNIFIED_VALUE_2, &draw_square, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_2, 0, &draw_square, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_2, UNIFIED_VALUE_1, &draw_square, SCALING_FACTOR, 0}
};

void read_player_input(){
    Read_Btns();
    check_joysticks();
    joy_x = joystick_1_x();
    joy_y = joystick_1_y();

    (joy_x < 0 && joy_y > 0) ? (temp_pass = 0) : (temp_pass = temp_pass);
    (joy_x == 0 && joy_y > 0)? (temp_pass = 1) : (temp_pass = temp_pass);
    (joy_x > 0 && joy_y > 0)?  (temp_pass = 2) : (temp_pass = temp_pass);
    (joy_x < 0 && joy_y == 0)? (temp_pass = 3): (temp_pass = temp_pass);
    (joy_x == 0 && joy_y == 0)?(temp_pass = 4): (temp_pass = temp_pass);
    (joy_x > 0 && joy_y == 0)?(temp_pass = 5): (temp_pass = temp_pass);
    (joy_x < 0 && joy_y < 0)? (temp_pass = 6): (temp_pass = temp_pass);
    (joy_x == 0 && joy_y < 0)?(temp_pass = 7) : (temp_pass = temp_pass);
    (joy_x > 0 && joy_y < 0)?(temp_pass = 8) : (temp_pass = temp_pass);
    
    if(button_1_4_pressed())
    {
        if(random_sequence[button_pressed_counter] == temp_pass)
        {
            button_pressed_counter++;
        }
        else
        {
            is_the_same = 0;
        }
    } 
}

