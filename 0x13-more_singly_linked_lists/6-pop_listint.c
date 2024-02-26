#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - to delete head node in a linked list
 * @head: pointer to head node
 *
 * Return: value in head node
 */
int pop_listint(listint_t **head)
{
	int head_value = 0;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	head_value = temp->n;
	*head = temp->next;
	if (temp != NULL)
	{
		free(temp);
		return (head_value);
	}
	return (head_value);
}
