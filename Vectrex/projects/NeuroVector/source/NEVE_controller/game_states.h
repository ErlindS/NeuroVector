// ***************************************************************************
// level
// ***************************************************************************

#pragma once
#include "../../NEVE_view/drawables.h"
#include "../../NEVE_model/square.h"
#include "../../NEVE_model/numbergenerator.h"
#include "../../NEVE_model/lifeline.h"
#include "print/print.h"
#include "utils/controller.h"
#include <vectrex.h>
#include "utils/utils.h"

#include "NEVE_levels/extrem.h"
#include "NEVE_levels/hard.h"
#include "NEVE_levels/normal.h"

#include "globalvariables.h"
#include "level_functionalities.h"

//Indicates which level will be selected
unsigned int levelselection = 1;

void (*Level_specific_action)();
void (*execute_game_playing_state)();
void (*move_player)();

void level_play();
void level_init();

void execute_repeat_sequence_state(void);
void execute_display_sequence_state(void);
void getback();
void check_successfully_repeated();
void is_gameover();
void game_over();

// ***************************************************************************
// end of file
// ***************************************************************************
