#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
/*
 * alphabet: using int i to work for the alphabet
 * for (i = 97; i <= 122; i++(using the ascii code of the letters)
 * {
 *      _putchar(i);
 *      }
 *      _putchar('\n');
 */
