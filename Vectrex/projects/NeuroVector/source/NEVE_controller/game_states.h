// ---------------------------------------------------------------------------
// Game States
//
// Filename: game_states.c
// Description: Manages the various states and transitions of the game.
// Author: Erlind Sejdiou
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once
#include "../../NEVE_view/drawables.h"
#include "../../NEVE_model/square.h"
#include "../../NEVE_model/numbergenerator.h"
#include "print/print.h"
#include "utils/controller.h"
#include <vectrex.h>
#include "utils/utils.h"

#include "NEVE_levels/extrem.h"
#include "NEVE_levels/hard.h"
#include "NEVE_levels/normal.h"
#include "NEVE_levels/circle_pattern.h"
#include "NEVE_levels/anti_movement.h"

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
void check_successfully_repeated();

// ***************************************************************************
// end of file
// ***************************************************************************
