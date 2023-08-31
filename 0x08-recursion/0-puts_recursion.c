#include "main.h"

/**
 * _puts_recursion - recursion entry point
 *
 * @s: string
 *
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}


	putchar(*s);
	_puts_recursion(s + 1);
}
