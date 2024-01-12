#include "main.h"

/**
 * _atoi - string to int
 * @s: string
 * Return: Integer value
 */
int _atoi(char *s)
{
	int c = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			c *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * c);
}
