#include "lists.h"

/**
 * dlistint_len - this functions counts the number of element in the
 * linked dlistint_t list
 * @h: the head of dlistint_t list
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
