#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - add node to end of linked list
 * @head: last node
 * @n: int to add
 *
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *end;

	n_node = malloc(sizeof(listint_t));
	end = *head;
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = n_node;
	return (n_node);
}
