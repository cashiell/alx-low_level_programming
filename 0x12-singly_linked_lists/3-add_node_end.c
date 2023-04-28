#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds node to linked list
 * @head: double pointer
 * @str: string
 * Return: adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x;
	list_t *y = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = len;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
