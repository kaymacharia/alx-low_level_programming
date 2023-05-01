#include "lists.h"
/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to pointer to the head node.
 *
 * Return: Pointer to the new head node.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = *head, *next = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}
