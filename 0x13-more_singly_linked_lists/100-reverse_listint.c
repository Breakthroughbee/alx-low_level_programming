#include "lists.h"

/**
 * reverse_listint - revers a string
 * @head: pointer to node
 *
 * Return: pointer for firs node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}

	*head = prev_node;

	return (*head);
}
