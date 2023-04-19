#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x1, x2;
	char *y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x1 = atoi(argv[1]);
	y = argv[2];
	x2 = atoi(argv[3]);

	if (get_op_func(y) == NULL || y[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*y == '/' && x2 == 0) ||
	    (*y == '%' && x2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(y)(x1, x2));

	return (0);
}
