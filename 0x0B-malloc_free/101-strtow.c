#include "main.h"
#include <stdlib.h>

/**
 * count_word - write a function that splits a string into words
 * @s: string variable
 *
 * Return: words
 */
int count_word(char *s)
{
	int x, y, z;

	x = 0;
	z = 0;
	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}
	return (z);
}
/**
 * **strtow - separate into words
 * @str: string separate
 *
 * Return: results
 */
char **strtow(char *str)
{
	char **i, *j;
	int a, b = 0, l = 0, w, c = 0, s, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	i = (char **) malloc(sizeof(char *) * (w + 1));
	if (i == NULL)
		return (NULL);
	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				e = a;
				j = (char *) malloc(sizeof(char *) * (c + 1));
				if (j == NULL)
					return (NULL);
				while (s < e)
					*j++ = str[s++];
				*j = '\0';
				i[b] = j - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = a;
	}
	i[b] = NULL;
	return (i);
}
