#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string being needed to add to
 * @s2: string to add to s1
 * @n: number of bytes from s2 to add to s1
 *
 * Return: Null or pointer to concatination result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, a = 0, lenS1 = 0, lenS2 = 0, totalLen = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenS1] != '\0')
		lenS1++;
	while(s2[lenS2] != '\0')
		lenS2++;
	totalLen = lenS1 + lenS2;
	
	concat = malloc((sizeof(char) * (totalLen)) + 1);
	if (concat == NULL)
		return (NULL);

	if (n >= (unsigned int)lenS2)
	{
		for (i = 0; i < lenS1; i++)
			concat[i] = s1[i];
	
		for (i = lenS1; i < totalLen; i++)
		{
			concat[i] = s2[a];
			a++;
		}
	}
	
	else
	{
		totalLen = lenS1 + n;
		for (i = 0; i < lenS1; i++)
			concat[i] = s1[i];
	
		for (i = lenS1; i < totalLen; i++)
		{
			concat[i] = s2[a];
			a++;
		}
	}
	
	return (concat);
	free(concat);
}
