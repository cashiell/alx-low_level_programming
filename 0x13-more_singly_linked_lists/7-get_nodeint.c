#include "lists.h"
/**
 * get_nodeint_at_index - return index in linked list
 * @head: first node
 * @index: index to return
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x = head;
	unsigned int y = 0;

	while (x && y < index)
	{
		x = x->next;
		y++;
	}
	return (x ? x : NULL);
}
