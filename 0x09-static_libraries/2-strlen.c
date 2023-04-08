#include "main.h"
/**
 * _strlen - write string length
 * @s: string variable
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
