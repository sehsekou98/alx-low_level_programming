#include "main.h"

/**
 * Appends text at the end of a file
 * @filname: A pointer to name the file
 * @text_content: the string to add to the end
 * Return: the function -1 if the function or filename is NULL
 */

int append_text_to_file(const char*filename, char*text_content)
{
	int b, j, lan = 0;

	if(filename == NULL)
		return (-1);
	if(text_content != NULL)
	{
		for (lan = 0; text_content[lan];)
			lan++;
	}

	b = open(filename, O_WRONLY|O_APPEND);
	j = write(b, text_content, lan);

	if (b == -1 || j == -1)
		return(-1);

	close(b);

         return(1);
}
