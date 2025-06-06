#include "function_pointers.h"

/**
 * array_iterator - executes a function given on each element of an array
 * @array: paraneter
 * @size: parameter
 * @action: parameter
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
