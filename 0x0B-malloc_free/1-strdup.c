#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memeory space location
 * @str: pointer to char
 *
 * Return: 0 (Success)
 */

char *_strdup(char *str)
{
	char *dup;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	str = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}
