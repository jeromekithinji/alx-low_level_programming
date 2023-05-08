/*
 * File: 0-read_textfile.c
 * Auth: Jerome
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to
 *		the POSIX standard output.
 *
 * @filename: Pointer to the name of the file
 * @letters: The number of letters the function should read and print
 * Return: If the function fails or filename is NULL return 0
 *	otherwise  return the actual number of bytes
 *	the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openF, readF, writeF;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	openF = open(filename, O_RDONLY);
	readF = read(openF, buffer, letters);
	writeF = write(STDOUT_FILENO, buffer, readF);

	if (openF == -1 || readF == -1 || writeF == -1 || writeF != readF)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openF);

	return (writeF);
}
