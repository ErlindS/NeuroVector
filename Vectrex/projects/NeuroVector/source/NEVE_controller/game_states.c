// ***************************************************************************
// Game States
// ***************************************************************************
#include "game_states.h"

// ---------------------------------------------------------------------------
// Game Loop States
// ---------------------------------------------------------------------------
void execute_repeat_sequence_state(void){
    Display_Gamefield();
    Calculate_TimeLeft();
    Execute_Player_action();

    //Level specific action (fkt pointer)
    Level_specific_action();

    Add_Movement();
    move_player();
    read_player_input();
    check_successfully_repeated();
}

void execute_display_sequence_state(void){
    Display_Gamefield();

    for(unsigned int i = 0; i < RandomSequenceCounterDisplay; ++i)
    {
        while(--RandomSequenceCounter)
        {
            counter = 200;
            Wait_Recal();
            Display_Gamefield();
            Update_LevelAdvancement(RandomSequenceCounterDisplay, 0);
            Execute_Player_action();
            draw_square_filled(a_random[i]);
            
            print_string(100, -75, "REMEMBER THE\x80");
            print_string(80, -50, "SEQUENCE\x80");         

            // Music
            //play_tune(1, 100*i+100, 200);
            //play_tune(2, 100*i+100, 200);
            //play_tune(3, 100*i+100, 200);
            
        }
        RandomSequenceCounter = 30;
    }

    SequenceTime = 0;
    Update_LevelAdvancement(RandomSequenceCounterDisplay, 0);

    execute_game_playing_state = execute_repeat_sequence_state;
}

// ---------------------------------------------------------------------------
// Game Initialization and Main Loop
// ---------------------------------------------------------------------------

void level_init()
{
    enable_controller_1_x();
    enable_controller_1_y();
    disable_controller_2_x();
    disable_controller_2_y();
    unsigned int a = 0;
    unsigned int i = 1;
    unsigned int state = 1;
    while(GameplaySettingsmode<2){
        a++;

        Wait_Recal();
        Read_Btns();
        Reset0Ref();
        print_string(100, -120, "SELECT THE GAMEMODE\x80");
        print_string(60, -50, "NORMAL 16/\x80");
        print_string(40, -50, "HARD   16/\x80");
        print_string(20, -50, "EXTREM 16/\x80");
        Reset0Ref();
        print_unsigned_int2(60, 60, HighscoreNormal);
        print_unsigned_int2(40, 60, HighscoreHard);
        print_unsigned_int2(20, 60, HighscoreExtrem);

        check_joysticks();

        if(joystick_1_y() == 0){
            state = 1;
        }

        if(joystick_1_y() > 0 && i > 0 && state == 1){
            --state;
            --i;
        }

        if(joystick_1_y() < 0 && i < 2 && state == 1){
            --state;
            ++i;
        }

        draw_menu_arrow(i);

        if(button_1_1_pressed()){
            if(i == 0){
                //Normal
                GameplaySettingsmode = 2;
                Level_specific_action = &nothing;
                move_player = &move_player_normal;
            } else if(i == 1){
                //Hard
                GameplaySettingsmode = 3;
                Level_specific_action = &Set_traps;
                move_player = &move_player_hard;

            } else if(i == 2){
                //Extrem
                GameplaySettingsmode = 4;
                Level_specific_action = &Add_Movement;
                move_player = &move_player_normal;
            } else {
                GameplaySettingsmode = 2;
            }
        }
    }
    rand(a);
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
        for(int i = 0; i < 20; i++){
            a_random_compare[i] = 0;
        }
        rand(RandomSequenceCounterDisplay);
        buttonspressedcounter = 0;
        RandomSequenceCounterDisplay = 1;
    }

    if(button_1_3_pressed())
    {
        execute_game_playing_state = &level_init;
        GameplaySettingsmode = 0;
        for(int i = 0; i < 20; i++){
            a_random_compare[i] = 0;
        }
        rand(RandomSequenceCounterDisplay);
        buttonspressedcounter = 0;
        RandomSequenceCounterDisplay = 1;
    }
}

void game_over(){

    display_game_over();    
    getback();
}


void check_successfully_repeated(){

    compare_arrays();
    if(is_the_same == 0)
        execute_game_playing_state = &game_over;

    if(RandomSequenceCounterDisplay == buttonspressedcounter)
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

        RandomSequenceCounterDisplay++;
        buttonspressedcounter = 0;
        counter = 200;
        execute_game_playing_state = &execute_display_sequence_state;
    }
}

// ***************************************************************************
// end of file
// ***************************************************************************
