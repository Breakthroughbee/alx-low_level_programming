#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer of node
 * @str: string
 *
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int num = 0;

	new_node = malloc(sizeof(list_t));
	last_node = *head;
	if (new_node == NULL)
		return (NULL);
	while (str[num])
		num++;
	new_node->len = num;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
