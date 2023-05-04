#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 *
 * @n: pointer to the number whose bit is to be cleared
 * @index: index of the bit to be cleared, starting from 0
 *	for the least significant bit
 * Return: 1 if it worked or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitM;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bitM = ~(1 << index);
	*n = *n & bitM;

	return (1);
}
