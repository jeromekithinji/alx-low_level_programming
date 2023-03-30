#include "main.h"

/**
 * *_strcpy - copies a string
 *
 * @dest: holds copy
 * @src: input to copy
 * @n: number of memory spaces
 *
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	*(dest + i) = *(src + i);
for ( ; i < n; i++)
	*(dest + i) = '\0';
return (dest);
}
