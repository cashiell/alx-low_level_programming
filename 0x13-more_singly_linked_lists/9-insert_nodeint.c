#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer
 * @idx: index to add
 * @n: data to insert in the new node
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;

	if (idx == 0)
	{
		x->next = y;
		*head = x;
		return (x);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (i == NULL || i->next == NULL)
			return (NULL);
		i = i->next;
	}
			x->next = i->next;
			i->next = x;
			return (x);
}
