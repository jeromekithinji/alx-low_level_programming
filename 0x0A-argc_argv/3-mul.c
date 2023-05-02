#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int a, b;

	if ((argc - 1) == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
