#include "main.h"

/**
 * - checks if a machine is little endian or big endian
 *   RETURN: 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;

	char*s = (char*) &i;

	return(*s);
}

