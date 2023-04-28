#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds node to linked list
 * @head: double pointer
 * @str: string
 * Return: results
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int j = 0;

	while (str[j])
		j++;
	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = len;
	x->next = (*head);
	(*head) = x;
	return (*head);
}
