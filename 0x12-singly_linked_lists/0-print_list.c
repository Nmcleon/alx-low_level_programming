#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the head of the list
* Return: the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *tp;

	i = 0;
	tp = h;

	while (tp != NULL)
	{
		if (tp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			i++;
		}
		h = h->next;
		i++;
	}
	return (i);
}
