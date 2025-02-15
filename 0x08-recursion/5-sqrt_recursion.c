#include "main.h"
/**
 * _sqrt_recursion - gets the natural square root number
 * @a: parameter
 * @b: parameter
 *
 * Return: returns square root or -1
 */

int sqrt2(int a, int b);
int _sqrt_recursion(int n)
{
	return (sqrt2(n, -1));
}
/**
 * sqrt2 - gets the natural square root number
 * @a: parameter
 * @b: parameter
 *
 * Return: returns square root or -1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
