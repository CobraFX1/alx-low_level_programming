#include "dog.h"

/**
 * init_dog - initializes. a variable of data type struct dog
 * @d: pointer to the variable to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owber
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
