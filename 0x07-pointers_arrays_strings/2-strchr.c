#include "main.h"
/**
 * _strchr - write a function that locates a character in a string
 * @s: input string
 * @c: input of the first occurrence
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
