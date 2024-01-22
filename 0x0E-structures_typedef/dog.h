#ifndef DOG_H
#define DOG_H

/**
 * struct dog - sample struct with cariables
 * @name: name of god in array
 * @age: age and decimal
 * @owner: nae of owner in array
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - Typedef
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
