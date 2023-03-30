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
int j = 0;
int i = 0;

while (j < n && src[i] != '\0')
{
	j++;
}
while (j < n)
{
	dest[i] = '\0';
	j++;
}
return (dest);
}
