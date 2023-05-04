#include "main.h"
/**
 * get_endianness - checks the endianness (big or little)
 *			of the machine
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	int a = 1;
	char *p = (char *)&a;

	return (*p == 1);
}
