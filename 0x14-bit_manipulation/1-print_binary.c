#include "main.h"

/**
 * _power - calculate the base and power
 *
 * @base: base number used in the exponential calculation
 * @pow: integer representing the power to which the base
 *	number is raised
 * Return: result of the exponential calculation
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int result;
	unsigned int a;

	result = 1;
	for (a = 1; a <= pow; a++)
		result *= base;

	return (result);
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: decimal number being converted to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bits, result;
	char flag;

	bits = _power(2, sizeof(unsigned long int) * 8 - 1);
	flag = 0;
	while (bits != 0)
	{
		result = n & bits;
		if (result == bits)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || bits == 1)
		{
			_putchar('0');
		}
		bits >>= 1;
	}
}
