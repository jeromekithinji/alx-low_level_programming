#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 *  and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arrChar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arrChar = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		arrChar[i] = c;

	return (arrChar);
	free(arrChar);
}
