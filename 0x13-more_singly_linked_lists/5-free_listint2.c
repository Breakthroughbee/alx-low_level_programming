#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 -  frees a list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	head = NULL;
}
