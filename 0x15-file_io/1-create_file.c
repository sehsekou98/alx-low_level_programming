include "main.h"

/**
 * Creates a file
 * @filename: A pointer to the name of the file created
 * @text_content: A pointer to a string
 * Return: -1 if the function fails
 */

int create_file(const char*filename, char*text_content)
{
	int td, j, lan = 0;
	if (filename == NULL)
		return(-1);

	if (text_content != NULL)
	{
		for (lan = 0; text_content[lan];)
			lan++;
	}

	td = open(filename, O_CREATE| O_RDWR| O_TRUNC, 0600);
	j = write(td, text_content, lan);

	if (td == -1 || j == -1)
		return(-1);

	close(td);

	return(1);
}
