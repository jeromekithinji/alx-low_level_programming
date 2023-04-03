#include "main.h"
/**
 * _strchr  - searches for character in string
 * @s: pointer to a the string to be searched
 * @c: characterr to be searched in the string
 * Return: firt occurence of character in string or NULL
 */

char *_strchr(char *s, char c)
{
int x = 0;
int len = 0;

while (s[len] != '\0')
{	
	len++;
}
for (; x < len; x++)
{
	if (s[x] == c)
	{
		return (&s[x]);
	}
} 
return (0);
}
