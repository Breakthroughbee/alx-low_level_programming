#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: integer
 * @...: elipsis
 *
 * Return: On success 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int m;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	sum = 0;

	for (m = 0; m < n; m++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);

}
