#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to convert to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int convert;
	int bits = sizeof(unsigned long int) * 8;
	int i;
	int lead_zero = 1;

	for (i = bits - 1; i >= 0; i--)
	{
		convert = 1UL << i;

		if (n & convert)
		{
			putchar('1');
			lead_zero = 0;
		}
		else if (!lead_zero)
		{
			putchar('0');
		}
	}

	if (lead_zero)
	{
		putchar('0');
	}
}
