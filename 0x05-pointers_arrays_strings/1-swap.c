#include "main.h"

/**
  * swap_int - function that swaps the values of two integers
  *
  * @a: first integer
  *
  * @b: 2nd integer
  *
  * Return: 0
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
