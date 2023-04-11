#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: variable to print
 *
 * Return: 1(success)
 * on error, return -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
