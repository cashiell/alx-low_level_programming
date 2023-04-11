#include <stdlib.h>
#include "main.h"

/**
 * argstostr - write a function that concatenates all the
 * arguments of the program
 * @ac: input integer
 * @av: array variable
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, x = 0, y = 0;
	char *j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			y++;
	}
	y = y + ac;
	j = malloc(sizeof(char) * y + 1);
	if (j == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			j[x] = av[a][b];
			x++;
		}
		if (j[x] == '\0')
		{
			j[x++] = '\n';
		}
	}
	return (j);
}
