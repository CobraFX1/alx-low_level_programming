#include "main.h"

/**
 * factorial - returns the factorial of the input n
 * @n: parameter
 *
 * Return: returns the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
