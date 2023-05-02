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
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (i = 0; y && i < idx; i++)
	{
		if (i == idx - 1)
		{
			x->next = y->next;
			y->next = x;
			return (x);
		}
		else
			y = y->next;
	}

	return (NULL);
}
