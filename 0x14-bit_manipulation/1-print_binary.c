#include "main.h"

/**
 * printts binary number
 * @n: number to convert
 * RETURN: binary number
 */

void print_binary(unsigned long int n)
{
	int  sec, min = 0;
	unsigned long int hour;

	for(sec = 63; sec >= 0; sec--)

	{
		hour = n >> sec;
		
		if(hour & 1)
		{

		   	_putchar('1');
			min++;
		}
		else if(min)
			_putchar('0');
	}
	if(!min)
		_putchar('0');
}

