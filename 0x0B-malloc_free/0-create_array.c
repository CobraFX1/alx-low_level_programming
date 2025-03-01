#include "main.h"

/**
 * create_array - creates an array with size and initializes a char
 * @size: holds the size of the array
 * @c: the character it initializes with
 *
 * Return: 0(Success)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
		return (str);
}
