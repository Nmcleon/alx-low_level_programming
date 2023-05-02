#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function adds a new node at the end
 * of a listint_t list
 * @head: pointer to the listint_t list
 * @n: integer element inside the listint_t list
 * Return: address of the new element, or NULL for failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;

	/* create temp node, allocate memory for it */
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;
	else
	{
		last = *head;
		
		while (last->next != NULL)
			last = last->next;
		
		last->next = tmp;
	}

	return (tmp);
}
