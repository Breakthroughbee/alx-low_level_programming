#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: elipsis
 *
 * Return: On success 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list Args;
	int number;
	unsigned int m;

	va_start(Args, n);

	for (m = 0; m < n; m++)
	{
		number = va_arg(Args, int);
		printf("%d", number);

		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(Args);

	printf("\n");

}
