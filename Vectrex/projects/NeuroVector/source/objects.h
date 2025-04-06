// ***************************************************************************
// object
// ***************************************************************************

#pragma once
#include <vectrex.h>

// ---------------------------------------------------------------------------



// ---------------------------------------------------------------------------

struct vector_t
{
	int y; 		// relative y coordinate
	int x; 		// relative x coordinate
};

// ---------------------------------------------------------------------------
// vector drawing modes for packet style vector lists

enum mode_t
{
	MOVE = 0,
	STOP = 1,
	DRAW = 255
};


struct packet_t
{
	enum mode_t mode;			// drawing mode
	struct vector_t vector;		// relative vector;
};

enum player_status_t
{
	DEAD,
	ALIVE,
};

// ---------------------------------------------------------------------------

struct player_t
{
	enum player_status_t status;	// player status
	int y;							// y coordinate byte
	int x;							// x coordinate byte
};

// ---------------------------------------------------------------------------

extern struct player_t player;



// ---------------------------------------------------------------------------

void init_object(struct object_t* p);
void handle_objects(struct object_t* p);
void draw_player(void);

// ***************************************************************************
// end of file
// ***************************************************************************
