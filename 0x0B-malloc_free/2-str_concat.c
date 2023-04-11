#include <stdio.h>
#include <stdlib.h>

/**
 * *strr_concat - concatenates two strings
 *
 * @s1: string being needed to add to
 * @s2: string to add to s1
 *
 * Return: Null or pointer to concatination result
 */

char *str_concat(char *s1, char *s2)
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

	for (i = 0; i < lenS1; i++)
		concat[i] = s1[i];
	
	for (i = lenS1; i < totalLen; i++)
	{
		concat[i] = s2[a];
		a++;
	}

	return (concat);
	free(concat);
}
