#include "main.h"
/**
 * _strpbrk - seacrches a string for the first occurrence of
 *	any character from a set of target characters
 * @s: string to search in
 * @accept: set of target characters
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
int x, y;

for (x = 0; s[x]; x++)
{
	for (y = 0; accept[y]; y++)
	{
		if (s[x] == accept[y])
		{
			return (s + x);
		}
	}
}
return (0);
}
