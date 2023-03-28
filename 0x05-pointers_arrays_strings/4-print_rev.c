#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reverse printed
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
		a++;
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
