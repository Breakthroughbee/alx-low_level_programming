#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	dog_t my_dog;

	my_dog.name = "Poppy";
	my_dog.owner = "Bob";
	my_dog.age = 3.5;
	printf("My name is %s, %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
