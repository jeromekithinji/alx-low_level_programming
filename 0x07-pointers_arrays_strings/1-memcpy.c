#include "main.h"

/**
 * _memcpy - copy a block of memory from a source address
 * 	     to destination address
 * @dest: pointer to destination array where content is copied
 * @src: pointer to the sourse of data to be copied
 * @n: number of bytes to be copied
 * Return: pointer to destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int x = 0;

for (; n > 0; x++)
{
	dest[x] = src[x];
	n--;
}
return (dest);
}
