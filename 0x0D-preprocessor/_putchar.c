#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The putchar to print
 *
 * Return: On success 1
 * On error -1, and errno is set appropritely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
