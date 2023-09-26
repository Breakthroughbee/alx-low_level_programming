#include "lists.h"

/**
 * add_nodeint_end - adds a note at end of a linked list
 * @head: pointer to linked lit
 * @n: linked list
 *
 * Return: address of the new element
 * or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_head = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_head->next)
	{
		temp_head = temp_head->next;
	}

	temp_head->next = new_node;

	return (new_node);
}
