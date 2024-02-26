#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees linked list
 * @head: head address
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_listint(head->next);
		}
		free(head);
	}
}
