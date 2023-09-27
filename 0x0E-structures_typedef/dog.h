#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: On success 0
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - type def
 */

typedef struct dog dog_t;

#endif
