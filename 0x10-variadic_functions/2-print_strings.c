#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: ellipsis
 *
 * Return: On success 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *string;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(args, char *);

		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("Null");
		}

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");

}
