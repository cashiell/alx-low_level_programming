#include "main.h"
/**
 * _memset - writes a function that fills memory with a constant byte.
 * @n: The function fills the first n bytes of the memory area
 * @s: pointed to by s
 * @b: with the constant byte b
 *
 * Return: Apointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
