#include "main.h"
/**
 * _strspn - entry point
 * @s: input value
 * @accept: input value
 *
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int x, z;

	z = x + 1;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[z] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
