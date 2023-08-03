#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - a function that converts binary to unsigned int
 * @b: this is the string containing the binary number
 *
 * Return: the number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	char c = *b;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (c != '0' && c != '1')
			return (0);

		convert = convert * 2 + (c - '0');
		b++;
	}

	return (convert);
}
