#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - finds the index of an array
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 1; i <= size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
