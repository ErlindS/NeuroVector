// ---------------------------------------------------------------------------
// Game States
//
// Filename: game_states.c
// Description: Manages the various states and transitions of the game.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "game_states.h"

void execute_repeat_sequence_state(void){
    //Display Gamefield
    Display_Gamefield();
    execute_player_action();
    level_specific_action();
    move_player();
    read_player_input();
    check_successfully_repeated();
    update_level_advancement(number_of_crosses_to_be_displayed -button_pressed_counter, button_pressed_counter);
    calculate_time_left();
}

void execute_display_sequence_state(void){

    for(unsigned int i = 0; i < number_of_crosses_to_be_displayed; ++i)
    {
        while(--display_duration_for_cross)
        {
            Display_Gamefield();
            update_level_advancement(number_of_crosses_to_be_displayed, 0);
            execute_player_action();
            draw_square_filled(a_random[i]);
            play_tune(2, 15*a_random[i]+120, 200);
            print_string(110, -75, "REMEMBER THE\x80");
            print_string(90, -50, "SEQUENCE\x80");
            
        }
        display_duration_for_cross  = 30;
    }
    update_level_advancement(number_of_crosses_to_be_displayed, 0);

    time_left_counter3 = 0;
    lifeline.first = 32;
    time_left_counter = 8;

    execute_game_playing_state = &execute_repeat_sequence_state;
}

void execute_menu_state()
{
    //Enable controller
    enable_controller_1_x();
    enable_controller_1_y();
    disable_controller_2_x();
    disable_controller_2_y();

    //In the menu random_number_for_create_random_sequence will be increased to be used as a parameter when creating a random_sequence to repeat.
    unsigned int random_number_for_create_random_sequence = 0;

    //After moving the menu arrow once, you need to let go of the Joystick to move it again
    unsigned int arrow_movement_allowed = 1;

    while(level_selection>0){
        Wait_Recal();
        //Reset0Ref();
        random_number_for_create_random_sequence++;

        Read_Btns();
        
        //Menu display
        print_string(100, -120, "SELECT THE GAMEMODE\x80");
        print_string(60, -80, "NORMAL 16/\x80");
        print_string(40, -80, "HARD   16/\x80");
        print_string(20, -80, "EXTREM 16/\x80");
        print_unsigned_int2(60, 30, highscore_normal);
        print_unsigned_int2(40, 30, highscore_hard);
        print_unsigned_int2(20, 30, highscore_extrem);
        
        check_joysticks();
        
        //Joystick arrow movement allowed
        if(joystick_1_y() == 0){
            arrow_movement_allowed = 1;
        }

        if(joystick_1_y() > 0 && level_selection  > 1 && arrow_movement_allowed == 1){
            --arrow_movement_allowed;
            --level_selection ;
        }

        if(joystick_1_y() < 0 && level_selection  < 3 && arrow_movement_allowed == 1){
            --arrow_movement_allowed;
            ++level_selection ;
        }

        draw_menu_arrow(level_selection);

        if(button_1_4_pressed()){
            is_the_same = 1;
            reset_displayed_squares_coordinates();

            if(level_selection  == 1){
                //Normal
                level_specific_action = &nothing;
                current_highscore  = &highscore_normal;
                break;

            } else if(level_selection  == 2) {
                //Hard
                level_specific_action = &change_cross_size;
                current_highscore  = &highscore_hard;
                break;

            } else if(level_selection  == 3) {
                //Extrem
                level_specific_action = &Add_Movement;
                current_highscore  = &highscore_extrem;
                break;

            } else {
                //defensive code
                level_specific_action = &nothing;
                current_highscore  = &highscore_normal;
                break;
            }
        }
    }

    create_random_sequence(random_number_for_create_random_sequence);
    execute_game_playing_state = &execute_display_sequence_state;
}

void execute_game_over_state(){

    //Display Game over
    if(number_of_crosses_to_be_displayed  > *current_highscore)
        *current_highscore  = number_of_crosses_to_be_displayed;
    
    print_string(100, -60, "GAME OVER\x80");
    print_string(70, -80, "PRESS BUTTON 2\x80");
    print_string(50, -60, "TO RESTART\x80");
    print_string(20, -80, "PRESS BUTTON 3\x80");
    print_string(0, -100, "TO GO TO THE MENU\x80");

    //Posibility to get back
    Read_Btns();
    if(button_1_3_pressed())
    {
        execute_game_playing_state = &execute_display_sequence_state;
        create_random_sequence(number_of_crosses_to_be_displayed);
        button_pressed_counter  = 0;
        number_of_crosses_to_be_displayed  = 1;

        is_the_same = 1;
        reset_displayed_squares_coordinates();
        (displayed_squares[0].execute_display_functions = &draw_square);
        (displayed_squares[1].execute_display_functions = &draw_square);
        (displayed_squares[2].execute_display_functions = &draw_square);
        (displayed_squares[3].execute_display_functions = &draw_square);
        (displayed_squares[4].execute_display_functions = &draw_square);
        (displayed_squares[5].execute_display_functions = &draw_square);
        (displayed_squares[6].execute_display_functions = &draw_square);
        (displayed_squares[7].execute_display_functions = &draw_square);
        (displayed_squares[8].execute_display_functions = &draw_square);
    }

    if(button_1_2_pressed())
    {
        execute_game_playing_state = &execute_menu_state;
        level_selection  = 1;
        create_random_sequence(number_of_crosses_to_be_displayed);
        button_pressed_counter  = 0;
        number_of_crosses_to_be_displayed  = 1;
    }
}

void check_successfully_repeated(){

    //Game over, no time left
    if(time_left_counter == 0){
        execute_game_playing_state = &execute_game_over_state;
    }

    //Game over, repeated wrongly
    if(is_the_same == 0){
        execute_game_playing_state = &execute_game_over_state;
    }

    if(number_of_crosses_to_be_displayed  == button_pressed_counter)
    {
        (displayed_squares[0].execute_display_functions = &draw_square);
        (displayed_squares[1].execute_display_functions = &draw_square);
        (displayed_squares[2].execute_display_functions = &draw_square);
        (displayed_squares[3].execute_display_functions = &draw_square);
        (displayed_squares[4].execute_display_functions = &draw_square);
        (displayed_squares[5].execute_display_functions = &draw_square);
        (displayed_squares[6].execute_display_functions = &draw_square);
        (displayed_squares[7].execute_display_functions = &draw_square);
        (displayed_squares[8].execute_display_functions = &draw_square);

        number_of_crosses_to_be_displayed++;
        button_pressed_counter = 0;
        execute_game_playing_state = &execute_display_sequence_state;
    }
}


void level_play(void)
{
    while(1){
        //DP_to_C8();
        //Explosion_Snd(current_explosion);
        //Init_Music_chk(current_music);
        //Wait_Recal();
        //Do_Sound();
        //Intensity_5F();

        DP_to_C8();
        Explosion_Snd(current_explosion);
        Init_Music_chk(current_music);
        Wait_Recal();
        Do_Sound();
        Intensity_5F();
        execute_game_playing_state();
    }
}

// ***************************************************************************
// end of file
// ***************************************************************************
