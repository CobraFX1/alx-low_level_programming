#include "dog.h"

/**
 * free_dog - frees the previously declared new_dog
 * @d: parameter
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
