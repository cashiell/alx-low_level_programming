#include "lists.h"
/**
 * free_listint - free linked list
 * @head: variable to be freed
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
