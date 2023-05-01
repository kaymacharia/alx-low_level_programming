#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *kay, *tortoise;

if (head == NULL)
return (NULL);

kay = head->next;
tortoise = head;

while (kay != NULL && kay->next != NULL && tortoise != NULL)
{
kay = kay->next->next;
tortoise = tortoise->next;

if (kay == tortoise)
{
tortoise = head;

while (tortoise != kay)
{
kay = kay->next;
tortoise = tortoise->next;
}

return (kay);
}
}

return (NULL);
}
