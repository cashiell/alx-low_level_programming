#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - converts string to integer
 * @argc: varibale that count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;

	x = 0;
	y = 0;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
