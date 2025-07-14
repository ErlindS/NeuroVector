#include "hard.h"

void Set_traps(){

   //0 decrement
   //1 increment
    for(int i = 0; i < 9; i++){
        if(Displayed_Squares[i].scalingfactor_toggle == 1){
            ++Displayed_Squares[i].scalingfactor;
            if(Displayed_Squares[i].scalingfactor > 32) Displayed_Squares[i].scalingfactor_toggle = 0;
        } else {
            --Displayed_Squares[i].scalingfactor;
            if(Displayed_Squares[i].scalingfactor < 9) Displayed_Squares[i].scalingfactor_toggle = 1;
        }
    }
}


void move_player_hard(){
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
