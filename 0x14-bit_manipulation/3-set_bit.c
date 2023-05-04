#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the values of a bit to one at a given index in time
 * @n: pointer to the number to modify the index values
 * @index: index of the bit to be done and set
 *
 * Return: one if it worked, or negative one if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);

	return (1);
}
