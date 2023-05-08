#include "main.h"

/**
 * create_file - Creates an array of characters and initializes
 *
 * @text_content: string with a null termination being
 *		written into the file.
 * @filename: Name of the file to create
 * Return: -1 on failure or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int openF, writeF, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	openF = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeF = write(openF, text_content, length);

	if (openF == -1 || writeF == -1)
		return (-1);

	close(openF);

	return (1);
}
