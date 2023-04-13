#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: allocated memory
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memPtr;
	
	memPtr = malloc(b);
	if (memPtr == NULL)
		exit(98);

	return memPtr;
}
