#include "main.h"

/**
 *_islower - a program that shows 1 if input is a
 * lowercase character. Other cases shows 0
 *
 *@c: The character is ASCII code
 *
 *Return: 1 for lowercase character. 0 for rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
