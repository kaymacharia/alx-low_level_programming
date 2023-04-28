#include <stdio.h>
#include <lists.h>

/**
* List all contents of list
* @param h: pointer to the beginning of list
* @ return number of linked list nodes
*/
size_t print_list(const list_t *h)
{
   int count = 0;


   while (h)
   {
       if (h->str == NULL)
       {
           printf("[0] (nil)\n");
       }
       else
       {
       printf("[%d] %s\n", h->len, h->str);
       }
       count++;
       h = h->next;
   }
   return (count);
}
