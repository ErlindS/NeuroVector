// ---------------------------------------------------------------------------
// Level Functionalities
//
// Filename: level_functionalities.h
// Description: Declares functions related to level progression and player actions.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once
#include "../NEVE_model/square.h"
#include "../NEVE_model/numbergenerator.h"
#include "../NEVE_view/drawables.h"
#include "globalvariables.h"
#include <vectrex.h>
#include "utils/controller.h"
#include "print/print.h"

void calculate_time_left();

void update_level_advancement(unsigned int n, unsigned int k);

void execute_player_action();

void read_player_input();

void (*display_execute_game_over_state_state)(void);

void move_player();




