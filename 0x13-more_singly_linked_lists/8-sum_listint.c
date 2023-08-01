#include "lists.h"

/**
 * sum_listint - a function that return all the data(n) of the list
 * @head: first node in the list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
