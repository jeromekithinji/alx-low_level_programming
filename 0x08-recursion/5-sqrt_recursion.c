#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to get square root of
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
int i = 1;

if (n == 0)
	return 0;
if (n < 0)
        return -1;
while (i * i <= n)
{
        /* if we have found the square root, return it */
        if (i * i == n)
        {
            return i;
        }

        /* otherwise, try the next value */
        i++;
}
    /* if we get here, n does not have a natural square root */
return -1;
}
