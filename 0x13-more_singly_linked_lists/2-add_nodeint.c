#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the first node of the list
 * @n: value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{listint_t *kay;

if (head == NULL)
return (NULL);

kay = malloc(sizeof(listint_t));
if (kay == NULL)
return (NULL);

kay->n = n;
kay->next = *head;
*head = kay;

return (kay);
}
