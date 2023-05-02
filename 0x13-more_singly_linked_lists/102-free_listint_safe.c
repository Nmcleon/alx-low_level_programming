#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: pointer to first node in the linked list
 *
 * Return: number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int difference;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
