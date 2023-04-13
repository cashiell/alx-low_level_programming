#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory
 * @ptr: old size
 * @old_size: allocated size
 * @new_size: new allocations
 *
 * Return: results
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x1;
	char *old_x;
	unsigned int y;

	if (new_size == old_size)
		return (x);
	if (new_size == 0 && x)
	{
		free(x);
		return (NULL);
	}
	if (!x)
		return (malloc(new_size));
	x1 = malloc(new_size);
	if (!x1)
		return (NULL);
	old_x = x;
	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			x1[y] = old_x[y];
	}
	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			x[y] = old_x[y];
	}
	free(x);
		return (x1);
}
