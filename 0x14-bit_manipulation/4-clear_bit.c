#include "main.h"

/**
 * - set a bit at an index 0
 *   @n: pointer to value
 *   @index: index of the bit
 *   RETURN: 1 for correct and -1 for fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if(index > 63)
		return(-1);

	*n = (~(1 << index) & *n);
	return(1);
}
