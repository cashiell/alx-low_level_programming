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
	char *ptr1;
	char *old_ptr;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			ptr1[y] = old_ptr[y];
	}
	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			ptr1[y] = old_ptr[y];
	}
	free(ptr);
		return (ptr1);
}
