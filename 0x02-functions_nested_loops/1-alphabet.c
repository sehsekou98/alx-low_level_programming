#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alpabets
 * Return: void
 */

void print_alphabet(void)
{
	char sa;

	sa = 'a';

	while (sa <= 'z')
	{
		_putchar(sa);
		sa++;
	}

	_putchar('\n');
}

