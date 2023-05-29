#include "main.h"
#include <stdio.h>

/**
  * main - argc main entry point, printing the number of arg
  *
  * @argc: number of argument passed
  *
  * @argv: array
  *
  * Return: 0 succeess
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv[0];
	return (0);

}
