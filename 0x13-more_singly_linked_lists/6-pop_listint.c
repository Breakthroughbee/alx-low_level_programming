#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to linked list
 *
 * Return: head node’s data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int count;

	if (!head || !*head)
	{
		return (0);
	}

	count = (*head)->n;
	temp_head = (*head)->next;
	free(*head);
	*head = temp_head;

	return (count);
}
