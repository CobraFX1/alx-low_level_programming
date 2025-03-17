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
	void *new;
	unsigned int i;
	char *byte_new;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(size * nmemb);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	byte_new = (char *)new;
	for (i = 0; i < (size * nmemb); i++)
		byte_new[i] = 0;
	return (new);
}
