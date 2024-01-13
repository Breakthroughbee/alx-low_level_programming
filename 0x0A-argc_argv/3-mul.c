#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes 2 integer args
 * @argc: num of args
 * @argv: array
 *
 * Return: 1 for less arg
 * else 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;
	char x[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", x);
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
