#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked lisr
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *tmep;

	while (head)
	{
		tmep = head->next;
		free(head->str);
		free(head);
		head = tmep;
	}
}
