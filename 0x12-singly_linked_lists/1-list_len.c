#include <stdlib.h>
#include "lists.h"

/**
 *list_len-returns the number of linked list
 *@h-pointer to the linked list
 *Return- return thr number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
