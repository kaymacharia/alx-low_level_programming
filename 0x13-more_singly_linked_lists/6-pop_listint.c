#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @macharia: double pointer to the head of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **macharia)
{
int n;
listint_t *temp;

if (*macharia == NULL)
return (0);

n = (*macharia)->n;
temp = (*macharia)->next;
free(*macharia);
(*macharia) = temp;

return (n);
}
