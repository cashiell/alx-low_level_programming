#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer
 *
 * Return: results
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t j = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				j++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
			while (x != y)
			{
				j++;
				x = x->next;
			}

			return (j);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer
 *
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, i = 0;

	j = looped_listint_len(head);

	if (j == 0)
	{
		for (; head != NULL; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < j; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (j);
}
