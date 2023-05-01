#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head node of the linked list
 *
 * Return: the sum of all the data (n)
 * of the linked list or 0 if list is empty.
 */
int sum_listint(listint_t *kay)
{
int sum = 0;

while (kay != NULL)
}
sum += kay->n;
kay = kay->next;
}

return (sum);
}
