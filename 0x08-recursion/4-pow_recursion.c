#include "main.h"

/**
 * _pow_recursion - returns the power of a given number
 * @x: base number
 * @y: exponent number
 *
 * Return: result of base raised to exponent number
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
return (x * _pow_recursion(x, y-1));
}
