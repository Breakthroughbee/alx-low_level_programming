#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @s: new string to add int the node
 *
 * Return: the address of the neew element
 * NULL on failure
 */

list_t *add_node(list_t **head, const char *s)
{
	list_t *new;
	unsigned int length = 0;

	while (s[length])
		length++;

	new = maloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->s = strdup(s);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
