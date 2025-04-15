#include "variadic_functions.h"

/**
 * print_all - prints various types of data types
 * @format: parameter
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char *sep = "";

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
        case 'c':
            printf("%s%c", sep, va_arg(args, int));
            sep = ", ";
            break;
        case 'i':
            printf("%s%d", sep, va_arg(args, int));
            sep = ", ";
            break;
        case 'f':
            printf("%s%f", sep, va_arg(args, double));
            sep = ", ";
            break;
        case 's':
            str = va_arg(args, char *);
            /* Only one if here to check if the string is NULL */
            if (str == NULL)
                str = "(nil)";
            printf("%s%s", sep, str);
            sep = ", ";
            break;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
