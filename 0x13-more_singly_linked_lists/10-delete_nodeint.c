#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index kay of a linked list
 * @head: double pointer to the head node of the list
 * @kay: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int kay)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (kay == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	current = *head;

	for (i = 0; i < kay - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
