// ***************************************************************************
// Game States
//
// Filename: game_states.c
// Description: Manages the various states and transitions of the game.
// Author: Erlind Sejdiu
// Date: 2025-07-31
// ***************************************************************************

#pragma once
#include "../../NEVE_view/drawables.h"
#include "../../NEVE_model/numbergenerator.h"
#include "print/print.h"
#include "utils/controller.h"
#include <vectrex.h>
#include "utils/utils.h"

#include "NEVE_levels/still.h"
#include "NEVE_levels/pulse.h"
#include "NEVE_levels/portal.h"
#include "NEVE_levels/orbit.h"
#include "NEVE_levels/echo.h"

#include "globalvariables.h"
#include "level_functionalities.h"

//Indicates which level will be selected

void (*level_specific_action)();
void (*execute_game_playing_state)();

void level_play();
void execute_menu_state();

void execute_repeat_sequence_state(void);
void execute_display_sequence_state(void);
void execute_game_over_state();
void execute_game_won_state();

//check successfully_repeated is part of game_states, since successfully_repeated contatins state transistions
static inline __attribute__((always_inline))
void check_successfully_repeated(){
    //Game over, no time left
    //Game over, repeated wrongly
    if(lifeline_timing.remaining_cycles == 0 || is_the_same == 0){
        execute_game_playing_state = &execute_game_over_state;
    }

    if(button_pressed_counter == 16){
        (displayed_squares[0].execute_display_functions = &draw_square);
        (displayed_squares[1].execute_display_functions = &draw_square);
        (displayed_squares[2].execute_display_functions = &draw_square);
        (displayed_squares[3].execute_display_functions = &draw_square);
        (displayed_squares[4].execute_display_functions = &draw_square);
        (displayed_squares[5].execute_display_functions = &draw_square);
        (displayed_squares[6].execute_display_functions = &draw_square);
        (displayed_squares[7].execute_display_functions = &draw_square);
        (displayed_squares[8].execute_display_functions = &draw_square);

        button_pressed_counter = 0;
        execute_game_playing_state = &execute_game_won_state;
    }

    if(number_of_crosses_to_be_displayed == button_pressed_counter)
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
};

// ***************************************************************************
// end of file
// ***************************************************************************
