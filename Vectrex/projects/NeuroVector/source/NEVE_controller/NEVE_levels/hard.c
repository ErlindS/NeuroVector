#include "hard.h"

void Set_traps(){
    sneakyoffset = 0;
    if(RandomSequenceCounterDisplay > 3 && RandomSequenceCounterDisplay < 8){
        play_tune(3, 400, 200);
        print_string(115, -90, "!SNEAKY OFFSET!\x80");
        sneakyoffset = 3;
    }

    if(RandomSequenceCounterDisplay > 10 && RandomSequenceCounterDisplay < 14){
        play_tune(3, 400, 200);
        print_string(115, -90, "!SNEAKY OFFSET!\x80");
        sneakyoffset = 2;
    }
}


void move_player_hard(){
    check_joysticks();

    joy_x = joystick_1_x();
    joy_y = joystick_1_y();

    (joy_x < 0 && joy_y > 0) ? (Displayed_Squares[0+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[0+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x == 0 && joy_y > 0)? (Displayed_Squares[1+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[1+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x > 0 && joy_y > 0)? (Displayed_Squares[2+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[2+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x < 0 && joy_y == 0)? (Displayed_Squares[3+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[3+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x == 0 && joy_y == 0)? (Displayed_Squares[4+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[4+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x > 0 && joy_y == 0)? (Displayed_Squares[5+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[5+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x < 0 && joy_y < 0)? (Displayed_Squares[6+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[6+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x == 0 && joy_y < 0)? (Displayed_Squares[7+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[7+sneakyoffset].execute_display_functions = &draw_square);
    (joy_x > 0 && joy_y < 0)? (Displayed_Squares[8+sneakyoffset].execute_display_functions = &draw_square_filled) : (Displayed_Squares[8+sneakyoffset].execute_display_functions = &draw_square);
}
