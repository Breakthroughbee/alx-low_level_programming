#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct nodes - linked list
 * @string: string
 * @length: lenght
 * @next: next node
 *
 * Description: singly linked list
 */

typedef struct nodes
{
	char *str;
	unsigned int length;
	struct nodes *next;
} list_t;


int _putchar(char c);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

#endif
