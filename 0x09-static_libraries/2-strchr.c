#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @c: character located  in string
 * @s: string considered
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');

}
