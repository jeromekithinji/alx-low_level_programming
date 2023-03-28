#include "main.h"

/**
 *  _puts - prints a string, followed by a new line
 *
 * @str: parameter to check
 * Return: 0 on success
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n'); 
}
