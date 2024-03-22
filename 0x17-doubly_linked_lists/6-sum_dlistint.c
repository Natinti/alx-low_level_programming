#include "lists.h"

/**
 * sum_dlistint - a function that sums all the data of a list
 * @head: the head of the dlistint_t list
 *
 * Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
