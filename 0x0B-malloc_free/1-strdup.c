#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - write a function that create a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: variable
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int a, b = 0;

	a = 0;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	x = malloc(sizeof(char) * (a + 1));
	if (x == NULL)
		return (NULL);
	for (; str[b]; b++)
		x[b] = str[b];
	return (x);
}
