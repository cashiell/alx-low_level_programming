#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: pointer to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
