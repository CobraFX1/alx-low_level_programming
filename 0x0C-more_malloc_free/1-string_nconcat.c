#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat- concatenates two strings together
 * @s1: first string to add
 * @s2: second string to add
 * @n: first n bytes of s2
 *
 * Return: pointer to the new strinf
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j;
	unsigned int cnts1 = 0, cnts2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[cnts1] != '\0')
		cnts1++;
	while (s2[cnts2] != '\0')
		cnts2++;
	if (n < cnts2)
		cnts2 = n;
	new = malloc(sizeof(char) * (cnts1 + cnts2 + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < cnts1; i++)
		new[i] = s1[i];
	for (j = 0; j < cnts2; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
