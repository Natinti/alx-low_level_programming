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
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		convert = (convert << 1)  + (b[i] - '0');
		i++;
	}

	return (convert);
}
