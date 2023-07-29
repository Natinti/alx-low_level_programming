#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of the linked list
 * @head: double pointer of the list_t list
 * @str: this is a string to put in the new node
 *
 * Return: the address of new element or NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
