#include "variadic_functions.h"

/**
 * print_strings - prints a set of strings
 * @separator: parameter
 * @n: parameter
 *
 * Return: nothing or NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
