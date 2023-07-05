#include "main.h"

/**
 * _puts_recursion - function that prints a string with new line
 * using puts()
 * @s: input value
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
