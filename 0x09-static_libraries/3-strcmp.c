#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1: string to be compared
 *  @s2: destination string
 *  Return: compared string dest
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;

	while (s1[a] == s2[a] && s2[a] != '\0')
	{
		a++;
	}

	b = s1[a] - s2[a];
	return (b);
}
