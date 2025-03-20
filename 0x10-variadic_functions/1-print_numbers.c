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

	va_start(args, n);
	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(args, int));
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
