#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to the first node
 * @index: index of node to be deleted
 * 
 * Return: 1 (Success) or -1 (Failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *deletion;
    unsigned int i;
    
    current = *head;
    if (head == NULL || *head == NULL)
        return (-1);
    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }
    for (i = 0; i < index - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL || current->next == NULL)
        return(-1);
    deletion = current->next;
    current->next = deletion->next;
    free (deletion);
    return (1);
}
