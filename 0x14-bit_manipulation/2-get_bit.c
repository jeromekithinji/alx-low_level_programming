#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index
 *
 * @n: The number to get the bit from
 * @index: The index of the but to get
 *
 * Return: the value of the bit at index or -1 if bit index
 *	is greater than the maximum bit index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	result = n & divisor;
	if (result == divisor)
		return (1);

	return (0);
}
