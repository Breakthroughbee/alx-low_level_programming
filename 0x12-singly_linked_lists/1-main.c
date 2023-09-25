#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t i;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->string = strdup("Hello");
	new->length = 5;
	new->next = head;
	head = new;
	i = list_len(head);
	printf("-> %lu elements\n", i);
	free(new->string);
	free(new);
	return (0);
}
