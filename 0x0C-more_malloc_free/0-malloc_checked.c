#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memeory using malloc function
 * @b: number of bytes that is to be allocated
 *
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
