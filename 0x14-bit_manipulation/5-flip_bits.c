#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bit you want to flip
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		result &= (result - 1);
		count++;
	}
	return (count);
}
