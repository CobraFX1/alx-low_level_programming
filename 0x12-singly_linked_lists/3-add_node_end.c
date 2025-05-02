#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    
    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    new->str = strdup(str);
    if (new->str == NULL)
    {
        free (new);
        return (NULL);
    }
    new->len = _strlen(new->str);
    new->next = NULL;
    
    while (*head)
    {
        head = &(*head)->next;
    }
    *head = new;
    return (new);
}
