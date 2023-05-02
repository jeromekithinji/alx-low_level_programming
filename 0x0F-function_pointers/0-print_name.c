#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function thats prints a name passed to it
 *
 * @name: char to display to the stdout
 * @f: pointer function
 * Return: no return cause we've declared VOID as R_TYPE
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name !== NULL)
		f(name);
}
