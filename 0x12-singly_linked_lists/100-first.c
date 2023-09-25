#include <stdio.h>

void first_print(void) __attribute__ ((constructor));

/**
 * first_print - prints a sentence before the main
 */

void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

