#include "main.h"
/**
 * _strstr - checks for a string of characters and only returns if it matches
 * @haystack: character
 * @needle: character
 *
 * Return: pointer to the begining of the searched string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}
