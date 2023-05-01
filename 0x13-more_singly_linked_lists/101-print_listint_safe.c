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
	const listint_t *current = kay;
	const listint_t *next = NULL;
	size_t count = 0;

	while (current != NULL)
	{
	count++;
	printf("[%p] %d\n", (void *) current, current->n);

/* Move to the next node */
	next = current->next;

/* Check if we have a loop */
	if (next != NULL && next <= current)
	{
	printf("-> [%p] %d\n", (void *) next, next->n);
	exit(98);
	}

	current = next;
	}

	return (count);
}
