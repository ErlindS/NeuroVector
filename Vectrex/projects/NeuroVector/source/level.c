// ***************************************************************************
// level
// ***************************************************************************

#include <vectrex.h>
#include "utils/utils.h"
#include "game.h"
#include "level.h"
#include "print/print.h"
#include "utils/controller.h"

// ---------------------------------------------------------------------------
// Global Variables
// ---------------------------------------------------------------------------
unsigned int buttonspressedcounter = 0;
unsigned int sneakyoffset = 0;
int b = 1;
unsigned int RandomSequenceCounter = 50;
unsigned int RandomSequenceCounterDisplay = 1;
unsigned int HighscoreNormal = 0;
unsigned int HighscoreHard = 0;
unsigned int HighscoreExtrem = 0;
int Random_Number_for_random_things = 0;
int SequenceTime = 1;
unsigned int counter = 3;
int joy_x = 0;
int joy_y = 0;
unsigned int temppass = 0;

// ---------------------------------------------------------------------------
// Function Declarations
// ---------------------------------------------------------------------------
void execute_repeat_sequence_state();
void execute_display_sequence_state();
void Display_Player();
void sub_square_x(int id);
void sub_square_y(int id);
void add_square_x(int id);
void add_square_y(int id);
void check_successfully_repeated(void);
void (*execute_game_playing_state)(void);

// ---------------------------------------------------------------------------
// Struct Definitions
// ---------------------------------------------------------------------------
struct level_t current_level =
{
    .status = LEVEL_PLAY,
};

struct SquareObject Displayed_Squares[9] = {
    {16, -16, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {16, 0, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {16, 16, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {0, -16, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {0, 0, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {0, 16, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {-16, -16, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {-16, 0, &draw_square, &add_square_x, &add_square_y, 0, 0},
    {-16, 16, &draw_square, &add_square_x, &add_square_y, 0, 0}
};

// ---------------------------------------------------------------------------
// Random Number Generator
// ---------------------------------------------------------------------------
unsigned int a_random[20] = {3, 9, 7, 5, 5, 8, 4, 5, 9, 8, 1, 5, 9, 2, 9, 6, 3, 1, 6, 3};
unsigned int a_random_compare[20] = {0};

void RandomNumberGenerator(){
    for(int i = 0; i < 20; ++i){
        a_random[i] = (a_random[i]) % 10;
    }
}

// TODO: Improve this
void rand(unsigned int n) {
    for(int i = 0; i < 20; i++){
        n ^= n >> 4;
        n += n << 3;
        n ^= n >> 6;
        n += n << 2;
        n ^= n >> 5;
        a_random[i] = (a_random[i] + n) % 10;
    }
}

int rand2(int n) {
    for(int i = 0; i < 20; i++){
        n ^= n >> 4;
        n += n << 3;
        n ^= n >> 6;
        n += n << 2;
        n ^= n >> 5;
    }
    return (int)n;
}

// ----------------------------------------------------------------------------
// Display Functions
// ----------------------------------------------------------------------------

void Display_TimeLeft(){
    Lifeline(counter);
    if(counter == 0){
        counter = 200;
    }
    counter--;
}

void Display_LevelAdvancement(unsigned int n, unsigned int k){
    while(n--){
        draw_round_advancement_cross(n+buttonspressedcounter);
    }
    while(k--){
        draw_round_advancement_cross_plus(k);
    }
}

void Display_RandomSequence(){
    for(unsigned int i = 0; i < RandomSequenceCounterDisplay; i++){
        while(--RandomSequenceCounter){
            counter = 200;
            Wait_Recal();
            Display_Gamefield();
            print_string(100, -75, "REMEMBER THE\x80");
            print_string(80, -50, "SEQUENCE\x80");
            Display_Player();
            draw_square_filled(a_random[i]);
            play_tune(1, 100*i+100, 200);
            play_tune(2, 100*i+100, 200);
            play_tune(3, 100*i+100, 200);

            Display_LevelAdvancement(i, 0);
        }
        RandomSequenceCounter = 30;
    }
    SequenceTime = 0;
};

void Display_Player(){
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

// ----------------------------------------------------------------------------
// Game Logic
// ----------------------------------------------------------------------------
void display_game_over(){
    print_string(100, -60, "GAME OVER\x80");
    print_string(70, -80, "PRESS BUTTON 2\x80");
    print_string(50, -60, "TO RESTART\x80");
    print_string(20, -80, "PRESS BUTTON 3\x80");
    print_string(0, -100, "TO GO TO THE MENU\x80");

	if(b == 2){
	HighscoreNormal = buttonspressedcounter;
	}
	if(b == 3){
		HighscoreHard = buttonspressedcounter;
	}
	if(b == 4){
		HighscoreExtrem = buttonspressedcounter;
	}

    Read_Btns();

    if(button_1_2_pressed()){
        execute_game_playing_state = &execute_display_sequence_state;
        for(int i = 0; i < 20; i++){
            a_random_compare[i] = 0;
        }
        rand(RandomSequenceCounterDisplay);
        buttonspressedcounter = 0;
        RandomSequenceCounterDisplay = 1;
    }

    if(button_1_3_pressed()){
        execute_game_playing_state = &level_init;
        b = 0;
        for(int i = 0; i < 20; i++){
            a_random_compare[i] = 0;
        }
        rand(RandomSequenceCounterDisplay);
        buttonspressedcounter = 0;
        RandomSequenceCounterDisplay = 1;
    }
}

void move_player(){
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

void add_square_x(int id){
    Displayed_Squares[id].x += 1;
    if(Displayed_Squares[id].x > 25){
        Displayed_Squares[id].addrandom_x = &sub_square_x;
    }
}

void add_square_y(int id){
    Displayed_Squares[id].y += 1;
    if(Displayed_Squares[id].y > 25){
        Displayed_Squares[id].addrandom_y = &sub_square_y;
    }
}

void sub_square_x(int id){
    Displayed_Squares[id].x -= 1;
    if(Displayed_Squares[id].x < -25){
        Displayed_Squares[id].addrandom_x = &add_square_x;
    }
}

void sub_square_y(int id){
    Displayed_Squares[id].y -= 1;
    if(Displayed_Squares[id].y < -25){
        Displayed_Squares[id].addrandom_y = &add_square_y;
    }
}

void Add_Movement(){
    Displayed_Squares[0].addrandom_x(0);
    Displayed_Squares[1].addrandom_x(1);
    Displayed_Squares[2].addrandom_x(2);
    Displayed_Squares[3].addrandom_x(3);
    Displayed_Squares[4].addrandom_x(4);
    Displayed_Squares[5].addrandom_x(5);
    Displayed_Squares[6].addrandom_x(6);
    Displayed_Squares[7].addrandom_x(7);
    Displayed_Squares[8].addrandom_x(8);
    Displayed_Squares[0].addrandom_y(0);
    Displayed_Squares[1].addrandom_y(1);
    Displayed_Squares[2].addrandom_y(2);
    Displayed_Squares[3].addrandom_y(3);
    Displayed_Squares[4].addrandom_y(4);
    Displayed_Squares[5].addrandom_y(5);
    Displayed_Squares[6].addrandom_y(6);
    Displayed_Squares[7].addrandom_y(7);
    Displayed_Squares[8].addrandom_y(8);
}

void SaveHighscore(){
    if(b == 2){
        HighscoreNormal = RandomSequenceCounterDisplay;
    }
    if(b == 3){
        HighscoreHard = RandomSequenceCounterDisplay;
    }
    if(b == 4){
        HighscoreExtrem = RandomSequenceCounterDisplay;
    }
    if(buttonspressedcounter == 16){
        print_string(100, -120, "YOU COMPLETED THIS LEVEL\x80");
        print_string(70, -80, "PRESS BUTTON 2\x80");
        print_string(50, -60, "TO RESTART\x80");
        print_string(20, -80, "PRESS BUTTON 3\x80");
        print_string(0, -100, "TO GO TO THE MENU\x80");

        Read_Btns();

        if(button_1_2_pressed()){
            execute_game_playing_state = &execute_display_sequence_state;
            for(int i = 0; i < 20; i++){
                a_random_compare[i] = 0;
            }
            rand(RandomSequenceCounterDisplay);
            RandomSequenceCounterDisplay = 1;
            buttonspressedcounter = 0;
        }

        if(button_1_3_pressed()){
            execute_game_playing_state = &level_init;
            b = 0;
            for(int i = 0; i < 20; i++){
                a_random_compare[i] = 0;
            }
            rand(RandomSequenceCounterDisplay);
            RandomSequenceCounterDisplay = 1;
            buttonspressedcounter = 0;
        }
    }
}

void check_successfully_repeated(){
    unsigned int len = buttonspressedcounter;
    while (len--) {
        if ((a_random[len]) != (a_random_compare[len])){
            execute_game_playing_state = &display_game_over;
        };
    }

	
    if(RandomSequenceCounterDisplay == buttonspressedcounter){
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

// ---------------------------------------------------------------------------
// Game Loop States
// ---------------------------------------------------------------------------

void execute_repeat_sequence_state(void){
    Display_Gamefield();
    Display_TimeLeft();
    Display_Player();
    //TODO fix this addition logic
    Display_LevelAdvancement(RandomSequenceCounterDisplay-buttonspressedcounter, buttonspressedcounter);
    if(b == 3){
        Set_traps();
    }
    if(b == 4){
        Add_Movement();
    }
    Random_Number_for_random_things++;
    move_player();
    read_player_input();
    check_successfully_repeated();
}

void execute_display_sequence_state(void){
    Display_Gamefield();
    Display_RandomSequence();
    execute_game_playing_state = &execute_repeat_sequence_state;
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
    while(b<2){
        Read_Btns();
        a++;
        Reset0Ref();
        print_string(100, -120, "SELECT THE GAMEMODE\x80");
        print_string(60, -50, "NORMAL 16/\x80");
        print_string(40, -50, "HARD   16/\x80");
        print_string(20, -50, "EXTREM 16/\x80");
        Reset0Ref();
        print_unsigned_int2(60, 60, HighscoreNormal);
        print_unsigned_int2(40, 60, HighscoreHard);
        print_unsigned_int2(20, 60, HighscoreExtrem);

        Read_Btns();
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
                b = 2;
            } else if(i == 1){
                //Hard
                b = 3;
            } else if(i == 2){
                //Extrem
                b = 4;
            } else {
                b = 2;
            }
        }
    }
    rand(a);
    current_level.status  = LEVEL_PLAY;
    execute_game_playing_state = &execute_display_sequence_state;
}

void level_play(void)
{
    while(current_level.status == LEVEL_PLAY)
    {
        // game loop header start - do not change
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
