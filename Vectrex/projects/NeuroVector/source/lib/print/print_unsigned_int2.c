// ***************************************************************************
// print
// ***************************************************************************

#include <vectrex.h>
#include "print.h"

// ---------------------------------------------------------------------------
// print decimal unsigned int value at absolute coordinates (y, x)

void print_unsigned_int2(int y, int x, unsigned int z)
{
	volatile char message[3];
	message[2] = '\x80';
	message[1] = '0';
	message[0] = '0';
	while (z >= 10)
	{
		++message[0];
		z -= 10;
	}
	message[1] = '0' + z;
	reset_print_position();
	Print_Str_d(y, x, (void*) &message[0]);
}

// ***************************************************************************
// end of file
// ***************************************************************************
