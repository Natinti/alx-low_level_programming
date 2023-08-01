#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * insert a new node at a given position
 * @head: a pointer to the first node in the list
 * @idx: the index of the list where new node is added
 * @n: data to insert at new node
 *
 * Return: the address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i = 0;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
