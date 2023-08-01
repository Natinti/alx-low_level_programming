#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of list
 * @head: pointer of the first element of the list
 * @index: index of node to be deleted
 *
 * Return: 1 if Success, -1 when fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
