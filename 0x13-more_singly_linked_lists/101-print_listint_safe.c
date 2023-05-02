#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t n = 0;
    long int difference;

    while (head)
    {
        difference = head - head->next;
        n++;
        printf("[%p] %d\n", (void *)head, head->n);
        if (difference > 0)
            head = head->next;
        else
        {
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            break;
        }
    }

    return (n);
}
