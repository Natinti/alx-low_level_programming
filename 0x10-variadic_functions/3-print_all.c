#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char ch, current_format;
	int num, format_index = 0;
	float fnum;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	while ((current_format = format[format_index]))
	{
		if (current_format == 'c')
		{
			ch = va_arg(list, int);
			printf("%s%c", sep,  ch);
		}
		else if (current_format == 'i')
		{
			num = va_arg(list, int);
			printf("%s%d", sep,  num);
		}
		else if (current_format == 'f')
		{
			fnum = va_arg(list, double);
			printf("%s%f", sep,  fnum);
		}
		else if (current_format == 's')
		{
			str = va_arg(list, char*);
			if (str != NULL)
			{
				printf("%s%s", sep,  str);
			}
			else
			{
				printf("(nil)");
			}
		}
		sep = ", ";
		format_index++; }
	va_end(list);
	printf("\n"); }
