#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - this function counts the number of unique nodes
 * @head: Pointer to the head of the linked list
 *
 * Return: 0 if the list is not looped
 * Or else number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise;
	const listint_t *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a linked list
 * @head: A pointer to the head of the linked list.
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			printf("->[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p]%d\n", (void *)head, head->n);
	}
		return (node);
	}
