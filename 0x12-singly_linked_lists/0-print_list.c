#include <stdio.h>
#include <lists.h>

/**
* List all contents of list
* @param h: pointer to the beginning of list
* @ return number of linked list nodes
*/
size_t print_list( const list_t *h)
{
size_t s = 0;

// Cross every element of the linked list
while (h)
{
// Print valid length node The contents of string
if (!h ->str)
{
printf("[ 0] (None) \N ");
}
else
{
printf("[%u] %s\n", h->len, h->str );
}

// Go to next node
h = h->next;
seconds ++;
}

// Returns the number of nodes in the linked list
Returns s;
