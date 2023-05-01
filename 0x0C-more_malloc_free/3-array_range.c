#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum values
 * @max: character to initialize
 *
 * Return: Null or pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, a;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	a = 0;
	for (i = min; i <= max; i++)
	{
		arr[a] = i;
		a++;
	}
	return (arr);
}

