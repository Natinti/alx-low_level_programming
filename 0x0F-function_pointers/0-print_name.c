#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that print the name using pointer to function
 * @name: string to add
 * @f: this is the pointer to function
 * Return: nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
