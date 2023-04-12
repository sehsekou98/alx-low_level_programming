#include "main.h"
#include <stdlib.h>

/**
 * Read text file print to stdout
 * @filename: text file being read
 * @letters: numbers of lettter
 * Return: acture number of bytes read and printed
 * print 0 when function fail or filename is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char*bff;
	ssize_t td;
	ssize_t d;
	ssize_t j;

	td = open(filename, O_RDONLY);
	if (td == -1)
		return (0);
	bff = malloc(sizeof(char) *letters);
	j = read(td, bff, letters);
	d = write(STDOUT_FILENO, bff, j);

	free(bff);
	close(td);
	return(w);
}
