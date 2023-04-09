#include <stdio.h>
#include "main.h"
/**
 * main - wrie a program that priint its name,
 * followed by a new line
 * @argc: arguments numbers
 * @argv: arguments of array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
