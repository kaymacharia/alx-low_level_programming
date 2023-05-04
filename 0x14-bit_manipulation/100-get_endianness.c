#include "main.h"

/**
 * get_endianness - checks if the machine is of little or big endian
 * Return: zero for big, one for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
