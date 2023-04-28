#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns linked list
 * @h: pointer
 * Return: element number
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
