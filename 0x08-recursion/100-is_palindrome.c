#include "main.h"

int checker(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check
 * @s: string
 *
 * Return: 1 on success
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - lenght of string
 * @s: string
 *
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - check recursively
 * @s: string
 * @x: loop
 * @len: lenght
 *
 * Return: 1
 */
int checker(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (checker(s, x + 1, len - 1));
}
