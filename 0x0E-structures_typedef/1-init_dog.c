#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - intialise var
 * @d: struct
 * @name: name in array
 * @age: age in float
 * @owner: onwers name in array
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
