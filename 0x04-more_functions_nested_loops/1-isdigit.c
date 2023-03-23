#include "main.h"

/**
 * _isdigit - check the c
 *
 * @c: int to check
 * Return: Always 0.
 */

int _isdigit(int c)
{
char a;
for (a = '0'; a <= '9'; a++)
if (c == a)
return (1);
return (0);
}
