// ***************************************************************************
// game
// ***************************************************************************

#include <vectrex.h>
#include "utils/controller.h"
#include "print/print.h"
#include "utils/utils.h"
#include "game.h"
#include "level.h"

// ---------------------------------------------------------------------------

struct game_t current_game =
{
	.option_players = 0,
	.option_mode = 0,
	.lives = { 0, 0},
	.level = { 0, 0},
	.score = { 0, 0},
	.player = 0,
};

// ---------------------------------------------------------------------------
/*
void game_over(void)
{
	// update system high score
	int score[7];
	Clear_Score(&score);
	Add_Score_a(current_game.score[current_game.player], &score);
	New_High_Score(&score, (void*) &Vec_High_Score);

	unsigned int delay = 150;

	do
	{
		sync();
		Intensity_5F();
		print_string(0, -64, "GAME OVER\x80");
		print_string(20, -100, "PLAYER\x80");
		print_unsigned_int(20, 40, current_game.player + 1);
		Print_Ships(0x69, current_game.lives[current_game.player], 0xC0E2);
		check_buttons();
	}
	while((--delay) && !button_1_4_pressed());
}*/

// ---------------------------------------------------------------------------



int game(void)
{
		level_init();
		level_play();
		return 0;		
}

// ***************************************************************************
// end of file
// ***************************************************************************
