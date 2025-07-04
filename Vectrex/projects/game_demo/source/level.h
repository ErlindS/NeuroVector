// ***************************************************************************
// level
// ***************************************************************************

#pragma once

// ---------------------------------------------------------------------------

enum level_status_t
{
	LEVEL_PLAY,
	LEVEL_LOST,
	LEVEL_WON,
};

// ---------------------------------------------------------------------------

struct level_t
{
	enum level_status_t status;
	unsigned int count;
	unsigned int frame;
};

// ---------------------------------------------------------------------------

extern struct level_t current_level;

// ---------------------------------------------------------------------------

void level_init(void);
void level_play(void);

// ***************************************************************************
// end of file
// ***************************************************************************
