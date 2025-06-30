// ***************************************************************************
// Game States
// ***************************************************************************
#include "game_states.h"

void execute_repeat_sequence_state(void){
    Display_Gamefield();
    Calculate_TimeLeft();
    Execute_Player_action();
    Level_specific_action();
    move_player();
    read_player_input();
    check_successfully_repeated();
    Update_LevelAdvancement(NumberOfCrossesToBeDisplayed-buttonspressedcounter, buttonspressedcounter);
}

void execute_display_sequence_state(void){
    Display_Gamefield();

    for(unsigned int i = 0; i < NumberOfCrossesToBeDisplayed; ++i)
    {
        while(--DisplayDurationForCross)
        {
            counter = 200;
            Wait_Recal();
            Display_Gamefield();
            Update_LevelAdvancement(NumberOfCrossesToBeDisplayed, 0);
            Execute_Player_action();
            draw_square_filled(a_random[i]);
            
            print_string(100, -75, "REMEMBER THE\x80");
            print_string(80, -50, "SEQUENCE\x80");
            
        }
        DisplayDurationForCross = 30;
    }
    Update_LevelAdvancement(NumberOfCrossesToBeDisplayed, 0);

    execute_game_playing_state = execute_repeat_sequence_state;
}

void level_init()
{
    //Enable controller
    enable_controller_1_x();
    enable_controller_1_y();
    disable_controller_2_x();
    disable_controller_2_y();

    //In the menu Random_Number_for_create_random_sequence will be increased to be used as a parameter when creating a random_sequence to repeat.
    unsigned int Random_Number_for_create_random_sequence = 0;

    //After moving the menu arrow once, you need to let go of the Joystick to move it again
    unsigned int arrow_movement_allowed = 1;

    while(levelselection>0){
        Wait_Recal();
        //Reset0Ref();
        Random_Number_for_create_random_sequence++;

        Read_Btns();
        
        //Menu display
        print_string(100, -120, "SELECT THE GAMEMODE\x80");
        print_string(60, -80, "NORMAL 16/\x80");
        print_string(40, -80, "HARD   16/\x80");
        print_string(20, -80, "EXTREM 16/\x80");
        print_unsigned_int2(60, 30, HighscoreNormal);
        print_unsigned_int2(40, 30, HighscoreHard);
        print_unsigned_int2(20, 30, HighscoreExtrem);
        
        check_joysticks();
        
        //Joystick arrow movement allowed
        if(joystick_1_y() == 0){
            arrow_movement_allowed = 1;
        }

        if(joystick_1_y() > 0 && levelselection > 1 && arrow_movement_allowed == 1){
            --arrow_movement_allowed;
            --levelselection;
        }

        if(joystick_1_y() < 0 && levelselection < 3 && arrow_movement_allowed == 1){
            --arrow_movement_allowed;
            ++levelselection;
        }

        draw_menu_arrow(levelselection);

        if(button_1_1_pressed()){
            is_the_same = 1;
            reset_Displayed_Squares_coordinates();
            (Displayed_Squares[0].execute_display_functions = &draw_square);
            (Displayed_Squares[1].execute_display_functions = &draw_square);
            (Displayed_Squares[2].execute_display_functions = &draw_square);
            (Displayed_Squares[3].execute_display_functions = &draw_square);
            (Displayed_Squares[4].execute_display_functions = &draw_square);
            (Displayed_Squares[5].execute_display_functions = &draw_square);
            (Displayed_Squares[6].execute_display_functions = &draw_square);
            (Displayed_Squares[7].execute_display_functions = &draw_square);
            (Displayed_Squares[8].execute_display_functions = &draw_square);

            if(levelselection == 1){
                //Normal
                Level_specific_action = &nothing;
                move_player = &move_player_normal;
                CurrentHighscore = &HighscoreNormal;
                break;

            } else if(levelselection == 2) {
                //Hard
                Level_specific_action = &Set_traps;
                move_player = &move_player_hard;
                CurrentHighscore = &HighscoreHard;
                break;

            } else if(levelselection == 3) {
                //Extrem
                Level_specific_action = &Add_Movement;
                move_player = &move_player_normal;
                CurrentHighscore = &HighscoreExtrem;
                break;

            } else {
                //defensive code
                Level_specific_action = &nothing;
                move_player = &move_player_normal;
                CurrentHighscore = &HighscoreNormal;
                break;

            }
        }
    }
    create_random_sequence(Random_Number_for_create_random_sequence);

    execute_game_playing_state = &execute_display_sequence_state;
}

void level_play(void)
{
    int a = 1;
    while(a){
        DP_to_C8();
        Explosion_Snd(current_explosion);
        Init_Music_chk(current_music);
        Wait_Recal();
        Do_Sound();
        Intensity_5F();
        execute_game_playing_state();
    }
}

void getback(){
    Read_Btns();
    if(button_1_2_pressed())
    {
        execute_game_playing_state = &execute_display_sequence_state;
        create_random_sequence(NumberOfCrossesToBeDisplayed);
        buttonspressedcounter = 0;
        NumberOfCrossesToBeDisplayed = 1;
    }

    if(button_1_3_pressed())
    {
        execute_game_playing_state = &level_init;
        levelselection = 1;
        create_random_sequence(NumberOfCrossesToBeDisplayed);
        buttonspressedcounter = 0;
        NumberOfCrossesToBeDisplayed = 1;
    }
}

void game_over(){

    display_game_over();    
    getback();
}


void check_successfully_repeated(){

    //Game Over
    if(is_the_same == 0){
        execute_game_playing_state = &game_over;
        SaveHighscore();
    }

    if(NumberOfCrossesToBeDisplayed == buttonspressedcounter)
    {
        (Displayed_Squares[0].execute_display_functions = &draw_square);
        (Displayed_Squares[1].execute_display_functions = &draw_square);
        (Displayed_Squares[2].execute_display_functions = &draw_square);
        (Displayed_Squares[3].execute_display_functions = &draw_square);
        (Displayed_Squares[4].execute_display_functions = &draw_square);
        (Displayed_Squares[5].execute_display_functions = &draw_square);
        (Displayed_Squares[6].execute_display_functions = &draw_square);
        (Displayed_Squares[7].execute_display_functions = &draw_square);
        (Displayed_Squares[8].execute_display_functions = &draw_square);

        NumberOfCrossesToBeDisplayed++;
        buttonspressedcounter = 0;
        counter = 200;
        execute_game_playing_state = &execute_display_sequence_state;
    }
}

// ***************************************************************************
// end of file
// ***************************************************************************
