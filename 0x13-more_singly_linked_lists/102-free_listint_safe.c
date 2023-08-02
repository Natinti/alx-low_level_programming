#include "lists.h"

/**
 * free_listint_safe - a function to free linked list
 * @h: pointer to the first node in the list
 *
 * Return: number of elements in the free list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int loop;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		loop = *h - (*h)->next;
		if (loop > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
