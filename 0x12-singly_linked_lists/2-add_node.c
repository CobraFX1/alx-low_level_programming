#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

unsigned int _strlen(char *str);
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    
    new = malloc(sizeof(list_t ));
    if (new == NULL)
    {
        return(NULL);
    }

    new->str = strdup(str);
    if (new->str == NULL)
    {
	    free (new);
	    return (NULL);
    }
    new->len = _strlen(new->str);
    new->next = *head;
    *head = new;
    return (new);
}
unsigned int _strlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
