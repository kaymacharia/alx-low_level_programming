#include <stdlib.h>
#include "lists.h"

/**
 *returns the number of linked list 
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
