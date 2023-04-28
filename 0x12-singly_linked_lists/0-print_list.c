#include <stdio.h>
#include <lists.h>
#include <string.h>

/**
 *print_list-List all contents of list
 *@param h: pointer to the beginning of list
 *@ return number of linked list nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
