#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: returned string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s)
	{
		x++;
		x = x + _strlen_recursion(s + 1);
	}
	return (x);
}
