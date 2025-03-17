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
	new = (char *)malloc(size * nmemb);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		new[i * size] = 0;
	return (new);
}
