#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiply argc and argv
  *
  * @argc: integer
  *
  * @argv: array
  *
  * Return: 0
  */


int main(int argc, char *argv[])
{
	int num_one = atoi(argv[1]);
	int num_two = atoi(argv[2]);
	int multiply;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	multiply = num_one * num_two;

	printf("%d\n", multiply);

	return (0);

}
