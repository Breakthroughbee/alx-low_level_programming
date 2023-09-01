#include "main.h"

/**
 * _islower - check if lower case
 * @c: character to be checked
 * Return: 1 on success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
