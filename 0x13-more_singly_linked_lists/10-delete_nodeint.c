#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node in a linked list
 * @head: pointer
 * @index: index of the node
 * Return: resulsts
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *c = NULL;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	while (i < index - 1)
	{
		if (!x || !(x->next))
				return (-1);
		x = x->next;
		i++;
	}
	c = x->next;
	x->next = c->next;
	free(c);
	return (1);
}
