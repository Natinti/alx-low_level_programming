#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that takes three parameters
 * @array: a pointer to the array of integers
 * @size: the number of elements in the array.
 * @cmp: a pointe to a function that takes an integer as parameter
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
