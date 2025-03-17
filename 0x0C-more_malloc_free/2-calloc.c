#include "main.h"

/**
 * _calloc - assigns memory dynamically
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the new memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(size * nmemb + 1);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		new[i] = 0;
	new[i] = '\0';
	return (new);
}
