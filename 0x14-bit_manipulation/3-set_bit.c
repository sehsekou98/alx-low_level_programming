#include "main.h"

/**
 * -set a bit at a index of 1
 *  @n: pointer of value to change
 *  @index: index for the bit to be set to 1
 *  @RETURN: 1 for correct and -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	*n |=(1 << index);
	return(1);
}
