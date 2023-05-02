#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of
 *	coins to make change for an amount of money
 *
 * @argc: the argument count
 * @argv: arguments being passed into function
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, coinCount;
	int cents[] = {25, 10, 5, 2};
	unsigned int x;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	coinCount = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (total >= cents[x])
				{
					coinCount += total / cents[x];
					total = total % cents[x];
				}
			}
		}
		if (total == 1)
			coinCount++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", coinCount);
	return (0);
}
