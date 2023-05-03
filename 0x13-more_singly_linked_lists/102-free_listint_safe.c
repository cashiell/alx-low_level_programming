#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: number of element
 */
size_t free_listint_safe(listint_t **h)
{
	size_t j = 0;
	int i;
	listint_t *k;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			k = (*h)->next;
			free(*h);
			*h = k;
			j++;
		}
		else
		{
			free(*h);
			*h = NULL;
			j++;
			break;
		}
	}

	*h = NULL;

	return (j);
}
