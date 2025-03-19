#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: member
 * @b: member
 *
 * Return: sum;
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts one number from another
 * @a: member
 * @b: member
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: member
 * @b: member
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: member
 * @b: member
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of a divided by b
 * @a: member
 * @b: member
 *
 * Return: the result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
