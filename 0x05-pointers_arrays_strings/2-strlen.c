#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int progi = 0;

	while (*s != '\0')
	{
		progi++;
		s++;
	}

	return (progi);
}

