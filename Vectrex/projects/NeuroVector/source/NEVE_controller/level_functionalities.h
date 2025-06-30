#pragma once
#include "../NEVE_model/square.h"
#include "../NEVE_model/numbergenerator.h"
#include "../NEVE_view/drawables.h"
#include "globalvariables.h"
#include <vectrex.h>
#include "utils/controller.h"
#include "print/print.h"

void Calculate_TimeLeft();

void Update_LevelAdvancement(unsigned int n, unsigned int k);

void Execute_Player_action();

void read_player_input();

void compare_arrays();

void SaveHighscore();

void display_game_over();

void (*display_game_over_state)(void);





