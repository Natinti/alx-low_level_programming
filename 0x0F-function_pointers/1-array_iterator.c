#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that takes three parameters
 * @array: a pointer to the array of integers
 * @size: the number of elements in the array
 * @action: a pointer to a function that takes an integer as parameter
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
