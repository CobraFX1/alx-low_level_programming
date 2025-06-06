#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("%i\n", h->n);
        h = h->next;
        count++;
    }
    return (count);
}
