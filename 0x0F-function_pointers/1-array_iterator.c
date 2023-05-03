#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function to act on array elements
 *
 * @array: the array in which the function acts on
 * @size: size of the array
 * @action: function acts on the array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
