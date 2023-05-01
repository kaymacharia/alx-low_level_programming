#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @kay: pointer to head of list
 *
 * Return: void
 */
void free_listint(listint_t *kay)
{
listint_t *current;

while (kay != NULL)
{
current = kay;
kay = kay->next;
free(current);
}
}
