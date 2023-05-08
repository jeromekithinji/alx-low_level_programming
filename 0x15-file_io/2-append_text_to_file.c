#include "main.h"

/**
 * _strlen - Finds the length of a string
 *
 * @str: Pointer to the string
 * Return: Length of the string pointed to
 */

size_t _strlen(char *str)
{
	size_t a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t length = 0;
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
		length = write(file, text_content, _strlen(text_content));
	close(file);
	if (length == -1)
		return (-1);
	return (1);
}
