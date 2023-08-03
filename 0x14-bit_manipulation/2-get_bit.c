#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number you want to search
 * @index: this is the index of the bit
 *
 * Return: Value of bit at index or -1 when error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int bit_value;

	if (index >= bits)
		return (-1);

	bit_value = 1UL << index;
	return ((n & bit_value) ? 1 : 0);
}
