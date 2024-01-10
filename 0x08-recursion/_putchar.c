#include <unistd.h>

/**
 * _putchar - writes character C to stdout
 * @c: The character tprinted
 *
 * Return: 1
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
