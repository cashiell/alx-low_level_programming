#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to standard out
 * @c: the printing character
 *
 * Return: 1 on success, -1 on error
 * set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
