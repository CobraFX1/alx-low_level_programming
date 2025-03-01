#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer ti the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0;
	int j = 0;
	int counts1 = 0;
	int counts2 = 0;
	int count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		counts1 += 1;
		i++;
	}
	while (s2[j] != '\0')
	{
		counts2 += 1;
		j++;
	}
	count = counts1 + counts2 + 1;
	new = malloc(sizeof(char) * (count));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < counts1; i++)
		new[i] = s1[i];
	for (j = 0; j < counts2; j++)
		new[i + j] = s2[j];
	new[count - 1] = '\0';
	return (new);
}
