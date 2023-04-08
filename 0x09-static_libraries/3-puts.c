#include "main.h"
/**
 * _puts - print a string to standard out followed new line
 * @str: print string
 *
 * Return: voif
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
