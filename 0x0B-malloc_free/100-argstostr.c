#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates args
 * @ac: pointer
 * @av: altura
 *
 * Return: 1
 */
char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, z = 0;
	char *s, *n;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (x < ac)
	{
		n = av[x];
		while (*n)
		{
			z++;
			n++;
		}
		z++;
		x++;
	}
	s = malloc(z + 1);
	x = 0;
	while (x < ac)
	{
		n = av[x];
		while (*n)
		{
			s[y] = *n;
			n++;
			y++;
		}
		s[y] = '\n';
		y++;
		x++;
	}
	s[z + 1] = '\0';
	return (s);
}
