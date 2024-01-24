#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects input operation
 * @s: operator
 *
 * Return: success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (x < 5)
	{
		if (!(strcmp(ops[x].op, s)))
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
