#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function to free the memory of a linked list
 * @head: the node of the list_t
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
