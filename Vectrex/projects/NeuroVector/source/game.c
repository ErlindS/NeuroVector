// ***************************************************************************
// game
// ***************************************************************************

#include <vectrex.h>
#include "utils/controller.h"
#include "print/print.h"
#include "utils/utils.h"
#include "game.h"
#include "level.h"

int game(void)
{
		level_init();
		level_play();
		return 0;		
}

