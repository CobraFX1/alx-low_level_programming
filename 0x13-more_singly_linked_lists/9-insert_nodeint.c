#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    listint_t *new, *tmp = *head;
    
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }
    while (tmp && i < idx -1)
    {
        tmp  = tmp->next;
        i++;
    }
    if (tmp == NULL)
    {
        free(new);
        return (NULL);
    }
    new->next = tmp->next;
    tmp->next = new;
    
    return (new);
}
