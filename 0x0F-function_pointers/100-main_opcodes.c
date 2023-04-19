#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, x;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", a[x]);
			break;
		}
		printf("%02hhx", a[x]);
	}
	return (0);
}

