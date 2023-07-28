#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the linked list_t
 * @str: a new string to add to in the node
 *
 * Return: the address of a new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
			if (new_node->str == NULL)
			{
				free(new_node);
				return (NULL);
			}
			new_node->len = len;
			new_node->next = *head;
				*head = new_node;

			return (new_node);
}

/**
 * free_list - to free memeory to avoid leak
 * @head: head connect to the node
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}

