#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node in a linked list
 * @head: first node in list
 * @index: index of deleted node
 *
 * Return: -1 on failure or 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *initial = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}

	initial = tmp->next;
	tmp->next = initial->next;
	free(initial);

	return (1);
}
