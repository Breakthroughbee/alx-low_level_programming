#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character
 *
 * Return: 1
 * On error -1, set erno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
