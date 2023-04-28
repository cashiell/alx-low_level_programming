#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free linked list
 * @head: pointer to freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
