#include <unistd.h>

/**
 * _putchar - write character c to standard out
 * @c: the variable to print
 *
 * Return: 1 (success)
 * -1 on error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
