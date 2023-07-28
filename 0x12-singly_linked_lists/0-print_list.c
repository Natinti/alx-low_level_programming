#include <stdio.h>
#include "lists.h"

/**
 * print_list - this will print all the elements of a linked list
 * @h: pointer to the list_t list which will be printed
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
