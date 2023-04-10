#include "main.h"
/**
 * _puts - print a string to standard out followed new line
 * @str: print string
 *
 * Return: voif
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
