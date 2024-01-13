#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - takes int args
 * @argc: num of args
 * @argv: Array
 *
 * Return: 1 if non int
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int x, y, len, sum;
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (x = 1; x < argc; x++)
		{
			p = argv[x];
			len = strlen(p);

			for (y = 0; y < len; y++)
			{
				if (isdigit(*(p + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[x]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
