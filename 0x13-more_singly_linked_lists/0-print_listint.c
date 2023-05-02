#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - This function prints all the elements of a listint_t list
 * @h: The pointer to the struct listint_t
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nds++;
		h = h->next;		
	}

	return (nds);
}
