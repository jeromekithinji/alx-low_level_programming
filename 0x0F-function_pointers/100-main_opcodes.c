#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of its own function
 * @a: address to the main function
 * @n: the number of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%.2hhx", a[a]);
		if (a < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed into the function
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	X = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
	return (0);
}

