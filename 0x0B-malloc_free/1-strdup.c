#include "main.h"

/**
 * _strdup - creates a copy of a string and return a pointer to it
 * @str: the string to duplicate
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *new;
	int count = 0;
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}
	new = malloc(sizeof(char) * (count + 1));
	if (new == NULL)
		return (NULL);
	for (j = 0; j < count; j++)
	{
		new[j] = str[j];
	}
	return (new);
}
