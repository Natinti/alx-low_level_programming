#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that check little or big endian
 *
 * Return: 0 for big endian, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
