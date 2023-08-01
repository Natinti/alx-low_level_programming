#include "lists.h"

/**
 * free_listint - a function that frees the linked list
 * @head: a pointer of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
