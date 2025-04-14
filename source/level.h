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
};


enum status_t
{
	ACTIVE,
	INACTIVE,
};


struct object_t
{
	enum status_t status;	// object status
	int y;					// y coordinate byte
	int x;					// x coordinate byte
	int dy;					// delta y byte
	int dx;					// delta x byte
};

// ---------------------------------------------------------------------------

extern struct level_t current_level;

// ---------------------------------------------------------------------------

void level_init(void);
void level_play(void);

// ***************************************************************************
// end of file
// ***************************************************************************
