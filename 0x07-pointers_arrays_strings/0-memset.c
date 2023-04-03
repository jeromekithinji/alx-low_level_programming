#include "main.h"

/**
 * _memset - a function that sets a block of memory
 *	     to a specific value
 * @s: a pointer to the block of memory to be set
 * @b: the value to set each byte to
 * @n: the number of bytes to be set
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
int y = 0;

for (; n > 0; y++)
{
	s[y] = b;
	n--;
}
return (s);
}
