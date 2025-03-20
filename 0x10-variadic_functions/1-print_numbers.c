#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_numbers - prints out a set of numbers with a seperator
 * @separator: parameter
 * @n: parameter
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%s", separator);
			printf("%d", va_arg(args, int));
		}
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
