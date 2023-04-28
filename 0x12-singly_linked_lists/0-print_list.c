#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%lu] %s\n", h->len, h->str ? h->str : "(nil)");
        count++;
        h = h->next;
    }

    return (count);
}
