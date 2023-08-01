#include "lists.h"

/**
 * listint_len - a function that return a number of elements in linked list
 * @h: a pointer of the linked list
 *
 * Return: number of elements of linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

