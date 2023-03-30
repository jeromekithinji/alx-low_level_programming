#include "main.h"
/**
 * leet - encode into a string to 1337
 * @n: input value
 * Return: string with all vowels changed
 */

char *leet(char *n)
{
int i = 0; 
int j;
char a[] = "aAeEoOtTlL";
char n[] = "4433007711";

while (*(n + i) != '\0')
{
	for (j = 0; j <= 9; j++)
	{
		if (*(n + i) == a[j])
		{
			*(n + i) = n[j];
		}
	}
	i++;
}
return (n);
}
