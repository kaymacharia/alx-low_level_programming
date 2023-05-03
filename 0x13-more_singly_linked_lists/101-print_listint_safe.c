#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers safely
 * @kay: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *kay)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;

if (kay == NULL || kay->next == NULL)
	return (0);

tortoise = kay->next;
hare = (kay->next)->next;

while (hare)
{
	if (tortoise == hare)
	{
		tortoise = kay;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}

		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
		}

		return (nodes);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @kay: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *kay)
{
size_t nodes, index = 0;

nodes = looped_listint_len(kay);

if (nodes == 0)
{
	for (; kay != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)kay, kay->n);
		kay = kay->next;
	}
}

else
{
	for (index = 0; index < nodes; index++)
	{
		printf("[%p] %d\n", (void *)kay, kay->n);
		kay = kay->next;
	}

	printf("-> [%p] %d\n", (void *)kay, kay->n);
}

return (nodes);
}
