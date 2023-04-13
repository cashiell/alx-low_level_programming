#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of string to another
 * @s1: appending variable
 * @s2: variable to put together
 * @n: bytes number
 *
 * Return: results
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *j;
	unsigned int x = 0, y = 0, l_1 = 0, l_2 = 0;

	while (s1 && s1[l_1])
	l_1++;
	while (s2 && s2[l_2])
	l_2++;

	if (n < l_2)
	s = malloc(sizeof(char) * (l_1 + n + 1));
	else
	s = malloc(sizeof(char) * (l_1 + l_2 + 1));

	if (!s)
	return (NULL);
	while (x < l_1)
	{
	s[x] = s1[x];
	x++;
	}
	while (n < l_2 && x < (l_1 + n))
		s[x++] = s2[y++];
	while (n >= l_2 && x < (l_1 + l_2))
		s[x++] = s2[y++];
	s[x] = '\0';
	return (s);
}

