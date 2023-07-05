#include "main.h"
/**
 * _strlen_recursion - function that returns the length of string
 * @s: an input value
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_putchar(*s);
	return (1 + _strlen_recursion(s + 1));
}
