#include <stdlib.h>
#include "main.h"

/**
 * str_concat - write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: results
 */
char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *j;

	x = 0;
	y = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	j = malloc(sizeof(char) * (x + y + 1));
	if (j == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		j[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		j[x] = s2[y];
		x++;
		y++;
	}
	j[x] = '\0';
	return (j);
}

