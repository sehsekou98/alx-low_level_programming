#include "main.h"
#include <unistd.h>

/**
 * _putchat - write the charter c
 * @c: the character to print
 * RETURN: on success 1
 * on error of, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
