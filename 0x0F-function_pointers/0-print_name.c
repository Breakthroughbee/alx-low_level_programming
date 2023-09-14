#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  prints a name
 * @name: name
 * @f: function pointer
 *
 * Return: On success 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

