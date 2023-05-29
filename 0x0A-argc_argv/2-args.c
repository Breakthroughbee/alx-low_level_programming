#include "main.h"
#include <stdio.h>

/**
  * main - argc that prints all  arguments entered
  *
  * @argc: integer received
  *
  * @argv: argument array
  *
  * Return: 0;
  */

int main(int argc,char *argv[])
{
	int string;

	for(string = 0; string < argc; string++)
	{
		printf("%s\n", argv[string]);
	}
	return 0;
}
