#include "main.h"
/**
 * _memcpy - write a function that copies memory area
 * @n: number of copies
 * @src: memory area copiied from
 * @dest: memory area copied to
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
