#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to set change
 * @index: the index of the number to clear
 *
 * Return: 1 (Success) or -1 if an error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int bit_value;

	if (index >= bits)
		return (-1);

	bit_value = 1UL << index;
	*n &= ~(bit_value);
	return (1);
}
