// ---------------------------------------------------------------------------
// Level Functionalities
//
// Filename: level_functionalities.c
// Description: Declares functions related to level progression and player actions.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "level_functionalities.h"

struct Square displayed_squares[9] = {
    {UNIFIED_VALUE_1, UNIFIED_VALUE_2, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_1, 0, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_1, UNIFIED_VALUE_1, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {0, UNIFIED_VALUE_2, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {0, 0, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {0, UNIFIED_VALUE_1, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_2, UNIFIED_VALUE_2, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_2, 0, &draw_square, 1, 1, SCALING_FACTOR, 0},
    {UNIFIED_VALUE_2, UNIFIED_VALUE_1, &draw_square, 1, 1, SCALING_FACTOR, 0}
};

void calculate_time_left()
{
    ++time_left_counter3;
    if(time_left_counter3 == 8){
        ++lifeline.first;
        time_left_counter3 = time_left_counter; 
    }

    if(lifeline.first == 32){
        lifeline.first = 0;
        time_left_counter -= 1;
    }

    draw_lifeline();

    //Display hearbeat
    print_string(100, 70, "BPM\x80");
    print_unsigned_int2(100, 50, time_left_counter*12);
}

void update_level_advancement(unsigned int n, unsigned int k){
    while(n--){
        draw_round_advancement_cross(n+button_pressed_counter);
    }
    while(k--){
        draw_round_advancement_cross_plus(k);
    }
}

void execute_player_action(){
    displayed_squares[0].execute_display_functions(0);
    displayed_squares[1].execute_display_functions(1);
    displayed_squares[2].execute_display_functions(2);
    displayed_squares[3].execute_display_functions(3);
    displayed_squares[4].execute_display_functions(4);
    displayed_squares[5].execute_display_functions(5);
    displayed_squares[6].execute_display_functions(6);
    displayed_squares[7].execute_display_functions(7);
    displayed_squares[8].execute_display_functions(8);
}

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
        if(a_random[button_pressed_counter] == temp_pass)
        {
            button_pressed_counter++;
        }
        else
        {
            is_the_same = 0;
        }
    } 
}

