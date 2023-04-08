#include "main.h"
/**
 * _strcpy - copies string to pointer
 * @dest:variable to copy to
 * @src: variable to copy too
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
