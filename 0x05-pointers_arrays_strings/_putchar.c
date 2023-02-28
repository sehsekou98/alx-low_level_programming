#include <unistd.h>

/**
 * _putchar - write charter c to stdout
 * @c: char to be printed
 * Return: On success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
