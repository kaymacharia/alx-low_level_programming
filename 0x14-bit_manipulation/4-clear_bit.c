#include "main.h"
/**
 * clear_bit - sets the values of a bit to zero at a given index
 * @n: pointers to an unsigned long integer
 * @index: indexed of the bit to set on
 *
 * Return: one if it worked, or negative one if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
