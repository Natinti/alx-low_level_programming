#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints a string followed by a new line
 * @separator: The string that printed between numbers
 * @n: the number of strings passed to the function
 * @...: A variable number to passed through the parameters
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i > (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
