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
	j = malloc(sizeof(char) * (l_1 + n + 1));
	else
	j = malloc(sizeof(char) * (l_1 + l_2 + 1));

	if (!j)
	return (NULL);
	while (x < l_1)
	{
	j[x] = s1[x];
	x++;
	}
	while (n < l_2 && x < (l_1 + n))
		j[x++] = s2[y++];
	while (n >= l_2 && x < (l_1 + l_2))
		j[x++] = s2[y++];
	j[x] = '\0';
	return (j);
}

