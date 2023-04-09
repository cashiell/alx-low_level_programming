#include <stdio.h>
#include "main.h"

/**
 * main - all arguments received to print
 * @argc: arguments of number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
