#include <stdio.h>
#include <stdlib.h>

/**
 * main - write a program that prints the minimum number
 * of coin to make change for an amount of money
 * @argc: argument count
 * @argv: vector argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		j++;
		if ((i - 25) >= 0)
		{
			i = i - 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i = i - 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i = i - 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i = i - 2;
			continue;
		}
		i--;
	}
	printf("%d\n", j);
	return (0);
}
