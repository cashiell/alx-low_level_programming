#include "lists.h"
/**
 * sum_listint - calculates sum of data in listint_t list
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
