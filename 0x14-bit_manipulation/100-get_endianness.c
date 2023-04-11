#include "main.h"

/**
 * - checks if a machine is little endian or big endian
 *   RETURN: 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int sum = 1;

	char*c = (char*) &sum;

	return(*c);
}

