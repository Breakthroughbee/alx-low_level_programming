#include "main.h"
#include <stdio.h>

/**
 * main - print num of args passsed
 * @argc: num of args
 * @argv: Array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (x = 0; *argv; x++, argv++)
			;
		printf("%d\n", x - 1);
	}

	return (0);
}
