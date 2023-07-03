#include "main.h"

/**
 * _memset - fill a set ofblock of memeory with a specific value
 * @s: this is the starting address of memory to be filled
 * @b: the desired value
 * @n: this involves the number of bytes to be changed in program
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
