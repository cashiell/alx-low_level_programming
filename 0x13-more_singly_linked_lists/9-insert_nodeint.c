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
	listint_t *x, *p; 
	listint_t *c;

	p = NULL;
	c = *head;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
	{
		return (NULL);
	}

	x->n = n;

	for (i = 0; i < idx && c != NULL; i++)
	{
		p = c;
		c  = c->next;
	}

	if (idx > 0 && c == NULL)
	{
		return (NULL);
	}

	x->next = c;
	if (p == NULL)
	{
		*head = x;
	}
	else
	{
		p->next = x;
	}
	return (x);
}
