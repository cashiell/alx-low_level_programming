#include "lists.h"
/**
 * add_nodeint - adds node at linked list beginning
 * @head: pointer
 * @n: variable to insert
 * Return: results
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
