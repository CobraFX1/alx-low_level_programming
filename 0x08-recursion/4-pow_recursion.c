#include "main.h"

/**
 * _pow_recursion - prints the power of y to x
 * @x: parameter
 * @y: parameter
 *
 * Return: returns the poer of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
