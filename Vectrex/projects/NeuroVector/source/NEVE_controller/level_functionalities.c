#include "level_functionalities.h"

struct SquareObject Displayed_Squares[9] = {
    {16, -16, &draw_square, &add_square_x, &add_square_y},
    {16, 0, &draw_square, &add_square_x, &add_square_y},
    {16, 16, &draw_square, &add_square_x, &add_square_y},
    {0, -16, &draw_square, &add_square_x, &add_square_y},
    {0, 0, &draw_square, &add_square_x, &add_square_y},
    {0, 16, &draw_square, &add_square_x, &add_square_y},
    {-16, -16, &draw_square, &add_square_x, &add_square_y},
    {-16, 0, &draw_square, &add_square_x, &add_square_y},
    {-16, 16, &draw_square, &add_square_x, &add_square_y}
};

void Calculate_TimeLeft(unsigned int counter)
{
    Lifeline(counter);
    if(counter == 0){
        counter = 200;
    }
    counter--;
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

    if(button_1_1_pressed()){
        a_random_compare[buttonspressedcounter] = temppass;
        buttonspressedcounter++;
    }
}

void compare_arrays(){
    unsigned int len = buttonspressedcounter;
    while (len--) 
    {
        if ((a_random[len]) != (a_random_compare[len])){
            is_the_same = 0;
        };
    }
}


void SaveHighscore(){

    CurrentHighscore = &RandomSequenceCounterDisplay;

    print_string(100, -120, "YOU COMPLETED THIS LEVEL\x80");
    print_string(70, -80, "PRESS BUTTON 2\x80");
    print_string(50, -60, "TO RESTART\x80");
    print_string(20, -80, "PRESS BUTTON 3\x80");
    print_string(0, -100, "TO GO TO THE MENU\x80");
}


void display_game_over(){

    CurrentHighscore = &RandomSequenceCounterDisplay;
    
    print_string(100, -60, "GAME OVER\x80");
    print_string(70, -80, "PRESS BUTTON 2\x80");
    print_string(50, -60, "TO RESTART\x80");
    print_string(20, -80, "PRESS BUTTON 3\x80");
    print_string(0, -100, "TO GO TO THE MENU\x80");

}

