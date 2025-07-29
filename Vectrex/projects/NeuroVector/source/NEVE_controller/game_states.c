// ---------------------------------------------------------------------------
// Game States
//
// Filename: game_states.c
// Description: Manages the various states and transitions of the game.
// Author: Erlind Sejdiu
// Date: 2025-07-28
// ---------------------------------------------------------------------------

#include "game_states.h"

void execute_repeat_sequence_state(void){
    /*************************************/
    Display_Gamefield();
    /*************************************/

    //This is a function ptr and therefore to dynamic to be exchange(for now)
    level_specific_action();

    /*************************************/
    move_player();
    /*************************************/

    /*************************************/
    //execute_player_action();
    //execute_player_action just shall draw the fields, but multiple functioncalls seem overkill
    displayed_squares[0].execute_display_functions(0);
    displayed_squares[1].execute_display_functions(1);
    displayed_squares[2].execute_display_functions(2);
    displayed_squares[3].execute_display_functions(3);
    displayed_squares[4].execute_display_functions(4);
    displayed_squares[5].execute_display_functions(5);
    displayed_squares[6].execute_display_functions(6);
    displayed_squares[7].execute_display_functions(7);
    displayed_squares[8].execute_display_functions(8);
    /*************************************/

    /*************************************/
    check_successfully_repeated();
    /*************************************/

    //update_level_advancement(number_of_crosses_to_be_displayed -button_pressed_counter, button_pressed_counter);
    int n = number_of_crosses_to_be_displayed -button_pressed_counter;
    int k = button_pressed_counter;
    while(n--){
        draw_round_advancement_cross(n+button_pressed_counter);
    }
    while(k--){
        draw_round_advancement_cross_plus(k);
    }

    /*************************************/
    //calculate_time_left();

    ++time_left_counter3;
    if(time_left_counter3 == 8){
        ++lifeline.first;
        time_left_counter3 = time_left_counter; 
    }

    if(lifeline.first == 32){
        lifeline.first = 0;
        time_left_counter -= 1;
    }

    /*************************************/
    draw_lifeline();
    /*************************************/
}

void execute_display_sequence_state(void){

    for(unsigned int i = 0; i < number_of_crosses_to_be_displayed; ++i)
    {
        while(--display_duration_for_cross)
        {
            Wait_Recal();
            Display_Gamefield();
            update_level_advancement(number_of_crosses_to_be_displayed, 0);
            execute_player_action();
            draw_square_filled(a_random[i]);
            play_tune(2, 15*a_random[i]+120, 200);
            print_string(110, -75, "REMEMBER THE\x80");
            print_string(90, -50, "SEQUENCE\x80");
            
        }
        display_duration_for_cross = 30;
    }
    update_level_advancement(number_of_crosses_to_be_displayed, 0);

    time_left_counter3 = 0;
    lifeline.first = 32;
    time_left_counter = 8;

    execute_game_playing_state = &execute_repeat_sequence_state;
}

//Done
void execute_menu_state()
{
    //Enable controller
    enable_controller_1_x();
    enable_controller_1_y();
    disable_controller_2_x();
    disable_controller_2_y();

    //In the menu random_number_to_create_random_sequence will be increased to be 
    //used as a parameter when creating a random_sequence to repeat.
    unsigned int random_number_to_create_random_sequence = 0;

    //After moving the menu arrow once, you need to let go of the Joystick to move it again
    unsigned int arrow_movement_allowed = 1;


    //This is sadly necessary the menu takes up 31500 cycles. This is little above 30 000.
    //I tried to optimize it, but the only optimization left, is not drawing the menu arrow,
    //but out of my view, I think it is necessary to add some nice menu feeling, which can be achieved with the arrow. 
    while(level_selection>0){

        Wait_Recal();
        Intensity_5F();
        random_number_to_create_random_sequence++;

        //Print the menu
        print_string(100, -120, "SELECT THE GAMEMODE\x80");
        print_highscore_still(60,-80);
        print_highscore_pulse(40,-80);
        print_highscore_mirror(20,-80);
        print_highscore_orbit(0,-80);
        print_highscore_echo(-20,-80);
        

        //Joystick logic
        check_joysticks();
        joy_y = joystick_1_y();
        if (joy_y == 0) {
            arrow_movement_allowed = 1;
        } else if (arrow_movement_allowed == 1) {
            if (joy_y > 0 && level_selection > 1) {
                --level_selection;
                arrow_movement_allowed = 0;
            } else if (joy_y < 0 && level_selection < 5) {
                ++level_selection;
                arrow_movement_allowed = 0;
            }
        }

        //Draw arrow
        draw_menu_arrow(level_selection);

        //Mode/Level selection
        Read_Btns();
        if(button_1_4_pressed()){
            is_the_same = 1;
            reset_displayed_squares_coordinates();
            switch (level_selection)
            {
            case 1:
                level_specific_action = &nothing;
                highscores.current_score = &highscores.still;
                break;
            
            case 2:
                level_specific_action = &change_cross_size;
                highscores.current_score = &highscores.pulse;
                break;

            case 3:
                level_specific_action = &Add_Movement;
                highscores.current_score = &highscores.mirror;
                break;

            case 4:
                level_specific_action = &circle_movement;
                highscores.current_score = &highscores.orbit;
                break;

            case 5:
                level_specific_action = &circle_movement2;
                highscores.current_score = &highscores.echo;
                break;

            default:
                level_specific_action = &nothing;
                highscores.current_score = &highscores.still;
                break;
            }
            level_selection = 0;
        }
    }

    create_random_sequence(random_number_to_create_random_sequence);
    execute_game_playing_state = &execute_display_sequence_state;
}

void execute_game_over_state(){

    //Display Game over
    if(number_of_crosses_to_be_displayed  > *highscores.current_score)
        *highscores.current_score  = number_of_crosses_to_be_displayed;
    
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

void execute_game_won_state(){

    //Display Game over
    if(number_of_crosses_to_be_displayed  > *highscores.current_score)
        *highscores.current_score  = number_of_crosses_to_be_displayed;
    
    print_string(100, -60, "YOU WON\x80");
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

void level_play(void)
{
    while(1){
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
