#include "main.h"
/**
 * _strpbrk - write a function that searches a string for any set of bytes
 * @s: first occurance located in the string s
 * @accept: wher the first occurance is located
 *
 * Return: success
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
