#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints an arg being passed in
 * @separator: separate functions
 * @n: num of args
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int num;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if ((x != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
