#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer of node
 * @str: string
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int num = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	while (str[num])
		num++;
	new_node->len = num;
	return (new_node);
}
