#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Always 0
 */

void print_numbers(void)
{
char n = 0;
while (n <= 9)
{
_putchar("%c", n);
n++;
}
_putchar('\n');
}
