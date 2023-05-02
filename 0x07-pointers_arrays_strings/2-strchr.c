#include "main.h"
/**
 * _strchr  - searches for character in string
 * @s: pointer to a the string to be searched
 * @c: characterr to be searched in the string
 * Return: firt occurence of character in string or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
