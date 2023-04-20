#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
	printf("%s\n", argv[count]);
}
printf("\n");
return (0);
}