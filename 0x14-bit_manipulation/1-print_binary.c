#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
    /* get the size of an unsigned long int in bits */
    unsigned long int size = sizeof(unsigned long int) * 8;
    /* initialize a mask with the highest bit set */
    unsigned long int mask = 1UL << (size - 1);

    while (mask > 0)
    {
        if (n & mask)
            _putchar('1');
        else
            _putchar('0');

        mask >>= 1;
    }
}
