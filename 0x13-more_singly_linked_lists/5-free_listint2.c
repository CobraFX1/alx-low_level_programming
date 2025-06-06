#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *tmp;
    
    if (*head == NULL || head == NULL)
	    return;
    while (*head)
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
    *head = NULL;
}
