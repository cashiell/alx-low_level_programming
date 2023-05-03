#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer
 *
 * Return: results
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = next;
	}

	*head = x;

	return (*head);
}
