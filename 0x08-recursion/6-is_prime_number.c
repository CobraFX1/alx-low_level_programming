#include "main.h"
int prime_helper(int n, int divisor);
/**
 * is_prime_number - checks if a number is a prime number
 * @n: parameter
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
/**
 * prime_helper - checks if a number is a prime number
 * @n: parameter
 * @divisor: parameter
 *
 * Return: returns 1 or 0
 */

int prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime_helper(n, divisor + 1));
}
