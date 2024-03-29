#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character to the stdout
 * @c: The character to print
 *
 * Return: On success 1
 * on error -1, is returned and errno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
