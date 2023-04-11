#include "main.h"

/**
 * printts binary number
 * @n: number to convert
 * RETURN: binary number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 1));
}

