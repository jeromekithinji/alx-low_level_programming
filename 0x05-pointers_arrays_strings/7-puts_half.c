#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: int
 */
void puts_half(char *str)
{
int i, j;

i = 0;

	while (str[i])
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
