#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to the head of the listint_t list
 * @n: The integer data for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *kay;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
kay = *head;
while (kay->next != NULL)
kay = kay->next;
kay->next = new_node;
}

return (new_node);
}
