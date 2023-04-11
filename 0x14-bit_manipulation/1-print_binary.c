#include "main.h"

/**
 * printts binary number
 * @n: number to convert
 * RETURN: binary number
 */

void print_binary(unsigned long int n)
{
	int  j, start = 0;
	unsigned long int current;

	for(j = 100; j>= 0; j--)

	{
		current = n >> j;
		
		if(current & 1)
		{

			_putchar('1');
			start++;
		}
		else if(start)
			_putchar('0');
	}
	if(!start)
		_putchar('0');
}

