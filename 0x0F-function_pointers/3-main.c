#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - print the results of operations
 * @argc: number of arguments
 * @argv: vector
 * Return: 0
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
	if (get_op_func(op) == NULL op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && x2 == 0) || (*op == '%' && x2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(x1, x2));
	return (0);
}
