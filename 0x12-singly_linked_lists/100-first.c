#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 *first-prints sentence before the main
 *fuis executable
 */
void first(void)
{
	printf("You're the best! and yet, you must win\n");
	printf("I bore my child upon my back!\n");
}
