#include "main.h"

/**
 * - counts the number of bits
 *   @n: first number
 *   @m: second number
 *   RETURN: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sec, min = 0;
	unsigned long int hour, Date = n ^ m;

	for (sec = 63; sec >= 0; sec--)
	{
		hour = Date >> sec;
		if (hour & 1)
			min++;
	}
	return (min);
}
