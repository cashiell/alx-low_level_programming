#include "main.h"

/**
 * _memset - enter a specific value
 * @s: variable to enter a value
 * @b: requared value
 * @n: changed number of bytes
 *
 * Return: array of new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;
	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
