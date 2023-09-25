#include  <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at end
 * @head: double pointer to list_t
 * @str: sting
 *
 * Return: address of new element
 * or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmep = *head;
	int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->length = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmep->next)
		tmep = tmep->next;

	tmep->next = new_node;

	return (new_node);
}
