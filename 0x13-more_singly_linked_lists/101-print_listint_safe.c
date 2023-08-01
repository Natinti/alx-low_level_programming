#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: A pointer to the head of the linked list.
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head;
	const listint_t *hare = head;
	size_t count = 0;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			printf("-> Loop begins at [%p]\n", (void *)tortoise);
			exit(98);
		}
	}
	while (tortoise != NULL)
	{
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		count++;
	}
	return (count);
}
