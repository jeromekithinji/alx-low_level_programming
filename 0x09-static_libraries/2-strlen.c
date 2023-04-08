#include "main.h"

/**
 * _strlen - gets the length of a string.
 *
 * @s: parameter to check
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

