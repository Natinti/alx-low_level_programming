#include "lists.h"

/**
 * pop_listint - a functions that deletes the head nodeof a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements deleted,
 * or 0 when empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int count;

	if (head || *head == NULL)
	{
		return (0);
	}

	count = (*head)->n;
	temp  = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
