#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    int i = 0;
    unsigned int sum = 0;
    
    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        
        sum = sum * 2 + (b[i] - '0');
        i++;
    }

    return (sum);
}

