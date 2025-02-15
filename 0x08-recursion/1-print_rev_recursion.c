#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: character
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
