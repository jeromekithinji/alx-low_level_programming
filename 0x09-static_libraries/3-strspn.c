#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: strring we need to find the intial segment
 * @accept: set of characters to be searched for
 * Return: Number of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
int x, y;
unsigned int same = 0;

for (x = 0; s[x]; x++)
{
	for (y = 0; accept[y]; y++)
	{
		if (s[x] == accept[y])
		{
			same++;
			break;
		}
	}
	if (!accept[y])
	{
		break;
	}
}
return (same);
}
