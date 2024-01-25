#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints args char, int, float or string
 * @format: data type passed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	va_list args;
	char *str = "(nil)";
	char *arr = NULL;
	char *separator = ", ";

	va_start(args, format);

	while (format[x] != '\0' && format != NULL)
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				arr = va_arg(args, char *);
				if (arr == NULL)
					arr = str;
				printf("%s", arr);
				break;
			default:
				x++;
				continue;
		}
		if ((format[x + 1] != '\0') && (format[x] == 'c' || format[x] == 'i' ||
					format[x] == 'f' || format[x] == 's'))
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(args);
}
