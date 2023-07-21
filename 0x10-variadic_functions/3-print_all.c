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
	char *str;
	va_list list;

	va_start(list, format);

	while ((current_format = format[format_index++]) != '\0')
	{
		if (current_format == 'c')
		{
			ch = va_arg(list, int);
			printf("%c", ch);
		}
		else if (current_format == 'i')
		{
			num = va_arg(list, int);
			printf("%d", num);
		}
		else if (current_format == 'f')
		{
			fnum = va_arg(list, double);
			printf("%f", fnum);
		}
		else if (current_format == 's')
		{
			str = va_arg(list, char*);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	va_end(list);
	printf("\n"); }
