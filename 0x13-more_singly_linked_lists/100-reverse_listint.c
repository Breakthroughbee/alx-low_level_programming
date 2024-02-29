#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverse a linked list
 * @head: first node in a linked list
 *
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial = NULL;
	listint_t *final = NULL;

	while (*head)
	{
		final = (*head)->next;
		(*head)->next = initial;
		initial = *head;
		*head = final;
	}

	*head = initial;

	return (*head);
}
