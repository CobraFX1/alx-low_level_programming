#include "lists.h"

/**
 * print_list - print a linked list
 * @h: parameter
 * 
 * Return: the amount of nodes printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;

    while (h)
    {
        if (!(h->str))
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%i] %s\n", h->len, h->str);
        }
	h = h->next;
	count++;
    }
    return (count);
}
