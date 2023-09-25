#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked lisr
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *temp_head = head;
	list_t *next;

	while (temp_head != NULL)
	{
		next = temp_head->next;
		free(temp_head->str);
		free(temp_head);
		temp_head = next;
	}
}
