#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines the structure of the datatyoe struct dog
 * @name: member
 * @age: member
 * @owner: member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stddef.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
