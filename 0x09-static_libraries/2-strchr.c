#include "main.h"
/**
 * _strchr -Entry point
 * @s: input value
 * @c: input variable
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
