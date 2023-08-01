#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of the list
 * @head: pointer of the list
 * @index: index of the node to be returned
 * Return: pointer to the node sorted for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
