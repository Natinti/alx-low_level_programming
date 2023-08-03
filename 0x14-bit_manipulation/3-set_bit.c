#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at an index
 * @n: a pointer to the number to change
 * @index: index of the bit to set to 0
 *
 * Return: 1 (Success) or -1 when error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int bit_val;

	if (index >= bits)
		return (-1);

	bit_val = 1UL << index;
	*n |= bit_val;
	return (1);
}
