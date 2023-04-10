#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed into it.
 *
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0
 */


int main (int argc, char *argv[])
{
/*Ignore argv*/
(void) argv;

printf("%d\n", argc - 1);
return (0);
}
