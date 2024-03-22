#include "lists.h"

/**
 * get_dnodeint_at_index - a function that locates a node in a list
 * @head: the head of the dlistint_t list.
 * @index: The node to locate
 *
 * Return: If the node does not exist - NULL
 *  Otherwise - the address of the located node.
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
