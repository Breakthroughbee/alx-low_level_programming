#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node
 * @head: head
 * @n: linked list
 *
 * Return: address of the new element
 * or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
