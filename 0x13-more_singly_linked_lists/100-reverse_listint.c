#include "lists.h"

/**
 * reverse_listint - a function that reverses the linked list
 * @head: pointer of the first node in the list
 *
 * Return: pointer to the first node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
