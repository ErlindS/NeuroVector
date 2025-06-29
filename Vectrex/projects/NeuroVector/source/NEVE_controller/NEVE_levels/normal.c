
#include "normal.h"

void nothing(){


}

void move_player_normal(){
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
