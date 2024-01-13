#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - min coins to change
 * @argc: num of args
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int y = 0, coin = 0;
	char x[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", x);
		return (1);
	}
	y = atoi(argv[1]);
	while (y >= 25)
	{
		y -= 25;
		coin++;
	}
	while (y >= 10)
	{
		y -= 10;
		coin++;
	}
	while (y >= 5)
	{
		y -= 5;
		coin++;
	}
	while (y >= 2)
	{
		y -= 2;
		coin++;
	}
	if (y == 1)
		coin++;
	printf("%d\n", coin++);
	return (0);
}
