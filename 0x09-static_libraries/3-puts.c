#include "main.h"

/**
 * _puts - print to stdout
 * @str: char array
 * Description: use _putchar
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
