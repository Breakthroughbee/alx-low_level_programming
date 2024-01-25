#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function takes in a num of arg
 * @n: num of arg passed
 *
 * Return: The sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
