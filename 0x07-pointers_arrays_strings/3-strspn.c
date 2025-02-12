#include "main.h"
/**
 * _strspn: function that gets the length of a prefix substring
 * @s:character
 * @accept:character
 *
 * Return: char with result
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int a = 0;

	while(s[i] != ' ' && s[i] != '\0')
	{
		while(accept[j] != '\0')
		{
			if(s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return a;
}
