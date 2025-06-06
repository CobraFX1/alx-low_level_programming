#include "lists.h"

/**
 * sum_listint - sums up all the data
 * @head: pointer to the head node
 * 
 * Return: returns the sum
 */
 
int sum_listint(listint_t *head)
{
    int sum = 0;
    
    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
