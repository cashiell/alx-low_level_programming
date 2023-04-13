#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: min range
 * @max: max range
 *
 * Return: results
 */
int *array_range(int min, int max)
{
	int *x;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	x = malloc(sizeof(int) * j);
	if (x == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		x[i] = min++;
	return (x);
}
