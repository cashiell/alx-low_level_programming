#include "main.h"
/**
 * _memcpy - copies the memory of area
 * @dest: variable to stored
 * @src: variable to copy
 * @n: bytes number
 *
 * Return: changed byted memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x, y;

	x = 0;
	y = n;
	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
