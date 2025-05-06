#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int n;
    
    if (*head == NULL || head == NULL)
        return (0);
    tmp = *head;
    *head = (*head)->next;
    n = tmp->n;
    free(tmp);
    
    return (n);
}
