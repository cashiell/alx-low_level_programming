#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: copy variable
 * @n: copy times
 *
 * Return: results
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * *_calloc - allocate memory for an array
 * @nmemb: array element
 * @size: element size
 *
 * Return: results
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(size * nmemb);
	if (y == NULL)
		return (NULL);
	_memset(y, 0, nmemb * size);
	return (y);
}
