#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - lenght of input
 * @str: stirng
 *
 * Return: Num od string
 */
int _strlen(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}
/**
 * _strcpy - cpoies string
 * @dest: destination
 * @src: source'
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}
/**
 * new_dog - create a new dog with name and age
 * @name: name in array
 * @age: age in float
 * @owner: owner in array
 *
 * Return: Pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogN = NULL;
	char *newName, *newOwner;
	int name_l, owner_l;

	if (name == NULL || owner == NULL)
		return (NULL);
	dogN = malloc(sizeof(dog_t));

	if (dogN == NULL)
		return (NULL);

	name_l = _strlen(name);
	newName = malloc(sizeof(char *) * (name_l + 1));

	if (newName == NULL)
	{
		free(dogN);
		return (NULL);
	}

	owner_l = _strlen(owner);
	newOwner = malloc(sizeof(char *) * (owner_l + 1));

	if (newOwner == NULL)
	{
		free(newName);
		free(dogN);
		return (NULL);
	}

	dogN->name = _strcpy(newName, name);
	dogN->age = age;
	dogN->owner = _strcpy(newOwner, owner);

	return (dogN);
}
