#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints sting from args
 * @separator: separates the arg passed
 * @n: num of args
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str = NULL;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((x != n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
