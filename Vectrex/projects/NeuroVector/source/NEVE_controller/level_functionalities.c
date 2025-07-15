#include "level_functionalities.h"

struct SquareObject Displayed_Squares[9] = {
    {16, -16, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {16, 0, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {16, 16, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {0, -16, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {0, 0, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {0, 16, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {-16, -16, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {-16, 0, &draw_square, &add_square_x, &add_square_y, 16, 0},
    {-16, 16, &draw_square, &add_square_x, &add_square_y, 16, 0}
};

void Calculate_TimeLeft()
{
    ++counter3;
    if(counter3 == 8){
        ++lifeline3.first;
        counter3 = time_left_counter; 
    }

    if(lifeline3.first == 32){
        lifeline3.first = 0;
        time_left_counter -= 1;
    }

    Lifeline2();
    Display_heartbeat();
}

void Display_heartbeat(){
    print_string(100, 70, "BPM\x80");
    print_unsigned_int2(100, 50, time_left_counter*12);
}


void Update_LevelAdvancement(unsigned int n, unsigned int k){
    while(n--){
        draw_round_advancement_cross(n+buttonspressedcounter);
    }
    while(k--){
        draw_round_advancement_cross_plus(k);
    }
}

void Execute_Player_action(){
    Displayed_Squares[0].execute_display_functions(0);
    Displayed_Squares[1].execute_display_functions(1);
    Displayed_Squares[2].execute_display_functions(2);
    Displayed_Squares[3].execute_display_functions(3);
    Displayed_Squares[4].execute_display_functions(4);
    Displayed_Squares[5].execute_display_functions(5);
    Displayed_Squares[6].execute_display_functions(6);
    Displayed_Squares[7].execute_display_functions(7);
    Displayed_Squares[8].execute_display_functions(8);
}

void read_player_input(){
    Read_Btns();
    check_joysticks();
    joy_x = joystick_1_x();
    joy_y = joystick_1_y();

    (joy_x < 0 && joy_y > 0) ? (temppass = 0) : (temppass = temppass);
    (joy_x == 0 && joy_y > 0)? (temppass = 1) : (temppass = temppass);
    (joy_x > 0 && joy_y > 0)?  (temppass = 2) : (temppass = temppass);
    (joy_x < 0 && joy_y == 0)? (temppass = 3): (temppass = temppass);
    (joy_x == 0 && joy_y == 0)?(temppass = 4): (temppass = temppass);
    (joy_x > 0 && joy_y == 0)?(temppass = 5): (temppass = temppass);
    (joy_x < 0 && joy_y < 0)? (temppass = 6): (temppass = temppass);
    (joy_x == 0 && joy_y < 0)?(temppass = 7) : (temppass = temppass);
    (joy_x > 0 && joy_y < 0)?(temppass = 8) : (temppass = temppass);
    
    if(button_1_4_pressed())
    {
        if(a_random[buttonspressedcounter] == temppass)
        {
            buttonspressedcounter++;
        }
        else
        {
            is_the_same = 0;
        }
    } 
}

void move_player(){
    check_joysticks();

    joy_x = joystick_1_x();
    joy_y = joystick_1_y();

    (joy_x < 0 && joy_y > 0) ? (Displayed_Squares[0].execute_display_functions = &draw_square_filled) : (Displayed_Squares[0].execute_display_functions = &draw_square);
    (joy_x == 0 && joy_y > 0)? (Displayed_Squares[1].execute_display_functions = &draw_square_filled) : (Displayed_Squares[1].execute_display_functions = &draw_square);
    (joy_x > 0 && joy_y > 0)? (Displayed_Squares[2].execute_display_functions = &draw_square_filled) : (Displayed_Squares[2].execute_display_functions = &draw_square);
    (joy_x < 0 && joy_y == 0)? (Displayed_Squares[3].execute_display_functions = &draw_square_filled) : (Displayed_Squares[3].execute_display_functions = &draw_square);
    (joy_x == 0 && joy_y == 0)? (Displayed_Squares[4].execute_display_functions = &draw_square_filled) : (Displayed_Squares[4].execute_display_functions = &draw_square);
    (joy_x > 0 && joy_y == 0)? (Displayed_Squares[5].execute_display_functions = &draw_square_filled) : (Displayed_Squares[5].execute_display_functions = &draw_square);
    (joy_x < 0 && joy_y < 0)? (Displayed_Squares[6].execute_display_functions = &draw_square_filled) : (Displayed_Squares[6].execute_display_functions = &draw_square);
    (joy_x == 0 && joy_y < 0)? (Displayed_Squares[7].execute_display_functions = &draw_square_filled) : (Displayed_Squares[7].execute_display_functions = &draw_square);
    (joy_x > 0 && joy_y < 0)? (Displayed_Squares[8].execute_display_functions = &draw_square_filled) : (Displayed_Squares[8].execute_display_functions = &draw_square);
}
