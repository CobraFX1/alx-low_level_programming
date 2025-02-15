#include "main.h"
/**
 * _strlen_recursion - prints the length of the string
 * @s: character
 * @sum: character
 * Return: the number of characters
 */

int strleng(char *s, int sum);
int _strlen_recursion(char *s)
{
	return (strleng(s, 0));
}
/**
 * strleng - prints the number of characters
 * @s: character
 * @sum: character
 *
 * Return: the number of characters
 */

int strleng(char *s, int sum)
{
	if (*s == '\0')
		return (sum);
	return (strleng(s + 1, sum + 1));
}
