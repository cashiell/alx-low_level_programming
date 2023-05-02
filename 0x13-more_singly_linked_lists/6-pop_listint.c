#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer
 * Return: results
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;
	return (i);
}
