#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input value 
 * @s2: input value
 *
 * Return: s1 - s2
 */

int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (int)(s1[i] - s2[i];
