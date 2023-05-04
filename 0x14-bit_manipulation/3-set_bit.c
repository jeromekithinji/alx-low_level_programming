#include "main.h"

/**
 * set_bit - set the bit at the given index to 1
 *
 * @index: Represents the index if the bit to be set to 1
 * @n: pointer to a number that signifies the bit array
  *	to be modified
 * Return: 1 if it worked or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;

	return (1);
}
