#include "main.h"

/**
  * _puts_recursion - main entry point of print file with puts
  *
  * @s: Character recursion
  *
  * Return: 0
  */

void _puts_recursion(char *s)
{
	putchar(*s);
	_puts_recursion(s + 1);

	if (*s == '\0')
	{
		putchar('\n');
	}
}
