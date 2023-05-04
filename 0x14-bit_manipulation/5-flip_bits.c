#include "main.h"

/**
 * flip_bits - Calculates the number of bits required to convert
 *	one number top another
 *
 * @n: First number
 * @m: Second number
 * Return: Number of bits you that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res = 1;
	unsigned int a, b = 0;

	diff = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (res == (diff & res))
			b++;
		res <<= 1;
	}

	return (b);
}
