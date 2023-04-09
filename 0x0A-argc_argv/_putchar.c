#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes c character to stdout
 * @c: variable to print
 *
 * Return: 1 (success)
 * on error,-1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
