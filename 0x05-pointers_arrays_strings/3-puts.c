#include "main.h"

/**
 * _puts - Prints a string .
 * @str: string.
 */
void puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
