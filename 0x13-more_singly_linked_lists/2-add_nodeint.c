#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - add a node at the beggining of list
 * @head: head
 * @n: value of node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = 0;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
