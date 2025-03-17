#include "main.h"

/**
 * array_range - creates an array of ordered integers
 * @min: the minimum value to be created
 * @max: the maximum value ti be created
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int diff, i;
	int *new;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	new = malloc(sizeof(int) * (diff));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < diff; i++)
	{
		new[i] = min;
		min++;
	}
	return (new);
}
