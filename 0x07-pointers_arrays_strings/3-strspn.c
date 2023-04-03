#include "main.h"
/**
 * _strspn - write a function that gets the length of a prefix substring
 * @s:input value
 * @accept: input value
 * Return: success
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int y = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
