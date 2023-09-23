#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @s: string to put in thte new node
 *
 * Return: address of the new element,
 * Null if failure
 */
list_ *add_node_end(list_t **head, const char *s)
{
	list_t *new;
	list *temp = *head;
	unsigned int length = 0;

	while (s[length])
		length++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->s = strdup(s);
	new->length = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}


