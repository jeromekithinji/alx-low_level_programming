#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array of @nmemb elements of
 *		@size bytes each and returns pointer to the allocated memory
 *
 * @nmemb: allocated memory for array
 * @size: size bytes
 *
 * Return: Null or pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrInt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrInt = malloc(nmemb * size);
	if (arrInt == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arrInt[i] = 0;

	return (arrInt);
}
