#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL || h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
