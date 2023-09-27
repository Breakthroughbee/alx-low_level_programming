#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - counts number
 * @head: a pointer
 *
 * Return: On success 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *rabbit;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	tortoise = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (tortoise == rabbit)
		{
			tortoise = head;
			while (tortoise != rabbit)
			{
				node++;
				tortoise = tortoise->next;
				rabbit = rabbit->next;
			}

			tortoise = tortoise->next;

			while (tortoise != rabbit)
			{
				node++;
				tortoise = tortoise->next;
			}

			return (node);
		}
		tortoise = tortoise->next;
		rabbit = (rabbit->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linst safely
 * @head: pointer
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

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
		for (index = 0; index < node; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p]%d\n", (void *)head, head->n);
	}
	return (node);
}
