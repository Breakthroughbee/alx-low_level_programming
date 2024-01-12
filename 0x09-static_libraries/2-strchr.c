#include "main.h"

/**
 * *_strchr - find char
 * @s: char string
 * @c: char
 * Return: NULL if char not found
 * pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
