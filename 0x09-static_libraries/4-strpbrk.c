#include "main.h"

/**
 * _strpbrk - string of any bytes
 * @s: char string
 * @accept: stirng
 * Return: pointer s to match accept
 * NULL for no byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *pointer;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				pointer = &s[x];
				return (pointer);
			}
			y++;
		}
		x++;
	}

	return (0);
}
