// ***************************************************************************
// friend
// ***************************************************************************

#include <vectrex.h>
#include "sound/sound.h"
#include "utils/utils.h"
#include "utils/vector.h"
#include "collision.h"
#include "friend.h"
#include "game.h"
#include "level.h"
#include "player.h"
#include "tunes.h"

// ---------------------------------------------------------------------------

struct object_t friends[] =
{
	{ .status = INACTIVE, .y = 0, .x = 0, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 0, .x = 0, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 0, .x = 0, .dy = 0, .dx = 0},
	{ .status = INACTIVE, .y = 0, .x = 0, .dy = 0, .dx = 0},
};

// ---------------------------------------------------------------------------

#undef SF
#define SF 24

const struct packet_t vectors_friend[] =
{
	{MOVE, { -1 * SF,  0 * SF}},
	{DRAW, {  1 * SF, -1 * SF}},
	{DRAW, {  1 * SF,  1 * SF}},
	{DRAW, { -1 * SF,  1 * SF}},
	{DRAW, { -1 * SF, -1 * SF}},
	{STOP, { 0, 0}},
};

// ---------------------------------------------------------------------------

void draw_friend(struct object_t* p)
{
	Reset0Ref();				// reset beam to center of screen
	dp_VIA_t1_cnt_lo = 0x7f;	// set scaling factor for positioning
	Moveto_d(p->y, p->x);		// move beam to object coordinates
	dp_VIA_t1_cnt_lo = 0x22;	// set scalinf factor for drawing
	Draw_VLp(&vectors_friend);	// draw vector list
}

// ---------------------------------------------------------------------------

void check_friend(struct object_t* p)
{
	if (check_collision(player.y, player.x, p->y, p->x, 4, 4))
	{
		play_music(&bing);
		p->status = INACTIVE;
		++current_game.score[current_game.player];
		--current_level.count;
		if (current_level.count == 0)
		{
			current_level.status = LEVEL_WON;
		}
	}
}

// ---------------------------------------------------------------------------

void init_friends(void)
{
	for (unsigned int i = 0; i < MAX_FRIENDS; ++i)
	{
		init_object(&friends[i]);
	}
}
// ---------------------------------------------------------------------------

void handle_friends(void)
{
	for (unsigned int i = 0; i < MAX_FRIENDS; ++i)
	{
		if (friends[i].status == ACTIVE)
		{
			move_object(&friends[i]);
			draw_friend(&friends[i]);
			check_friend(&friends[i]);
		}
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************

