#include "main.h"

/*
 * - return the value decimal
 *   @n: number to search
 *   @index: index of the bit ochoise
 *   RETURE: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int number_of_bit;

	if(index > 63)
		return(-1);
	number_of_bit = (n >> index) & 1;

	return(number_of_bit);
}
