#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - adds positive integers
  *
  * @argc: integer
  *
  * @argv: array pointer
  *
  * Return: zero if null, 1 if not digit
  */

int main(int argc, char *argv[])
{
	int b = 0, a = 0;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (b = 1; b < argc; b++)
	{
		while (argv[b][a] != '\0')
		{
			if (!isdigit(argv[b][a]))
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}

		add = add + atoi(argv[b]);
	}

	printf("%d\n", add);
	return (0);
}
