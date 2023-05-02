#include "lists.h"
/**
 * listint_len - return elements in a linked list
 * @h: pointer to type into traverse
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
