#include "main.h"
#include <stdio.h>

/**
  *main - arg main entry point
  *
  *@argc: integer
  *
  *@argv: character
  *
  *Return: 0 success
  */

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);

	printf("Program name is %s\n", argv[0]);

	return (0);
}
