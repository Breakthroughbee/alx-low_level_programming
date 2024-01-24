#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @argc: arg passed
 * @argv: arg stored
 *
 * Return: on succes 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, res = 0;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = p(num1, num2);
	printf("%d\n", res);
	return (0);
}
