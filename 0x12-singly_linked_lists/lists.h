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
	char *string;
	unsigned int length;
	struct nodes *next;
} list_t;


int _putchar(char c);

size_t print_list(const list_t *h);

#endif
