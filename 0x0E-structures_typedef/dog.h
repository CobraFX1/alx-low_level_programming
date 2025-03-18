#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines the structure of the datatyoe struct dog
 * @name: member
 * @age: member
 * @owner: member
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#include <stdlib.h>
#include <stddef.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif
