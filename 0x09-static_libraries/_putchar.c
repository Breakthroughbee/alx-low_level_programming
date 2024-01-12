#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: Character
 *
 * Return: On success 1
 * else -1 and set errno appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
