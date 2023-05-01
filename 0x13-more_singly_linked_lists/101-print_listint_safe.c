#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *kay, *fast;

if (head == NULL)
exit(98);

kay = head;
fast = head->next;

while (fast != NULL && fast < fast->next)
{
printf("[%p] %d\n", (void *)kay, kay->n);
kay = kay->next;
fast = fast->next->next;
count++;
}

printf("[%p] %d\n", (void *)kay, kay->n);
count++;

if (fast != NULL)
{
printf("-> [%p] %d\n", (void *)fast, fast->n);
count++;
}

return (count);
}
