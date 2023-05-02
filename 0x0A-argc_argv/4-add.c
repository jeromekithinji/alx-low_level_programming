#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int a, b = 0;

	if ((argc - 1) == 0)
	{
		printf("0\n");
	}
	for (a = 1; a < argc; a++)
	{
		if (isdigit(*argv[a]))
		{
			b += atoi(argv[a]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", b);
	return (0);
}
