#include "main.h"

int is_palindrome_helper(char *s, int start, int end);
int strleng(char *s, int sum);
/**
 * is_palindrome - returns whether a set of characters is a palindrome or not
 * @s: parameter
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_helper(s, 0, strleng(s, 0) - 1));
}
/**
 * strleng - counts the number of characters
 * @s: parameter
 * @sum: parameter
 *
 * Return: returns the sum
 */

int strleng(char *s, int sum)
{
	if (*s == '\0')
		return (sum);
	return (strleng(s + 1, sum + 1));
}
/**
 * is_palindrome_helper - checks if the string is a palindrome
 * @s: parameter
 * @start: parameter
 * @end: parameter
 *
 * Return: 1 or 0
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

