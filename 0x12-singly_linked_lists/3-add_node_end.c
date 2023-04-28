#include <stdlib.h>
#include <string.h>
#include "list.h"
/*
 *add_node-adds nodes at the end of the linked list
 *
 *Return-return the address of new element or NULL if failed
 *@str- for input of new code
 * 	*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
