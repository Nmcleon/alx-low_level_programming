#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning
 * of a listint_t list
 * @head: The listint_t list
 * @n: integer element inside the listint_t list
 * Return: address of the new element, or NULL for failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create new node & allocate memory for it */
	listint_t *new = malloc(sizeof(listint_t));

	/* check ifor malloc failed */
	if (new == NULL)
		return (NULL);

	/* assign new data */
	new->n = n;
	new->next = *head;

	/* assigning new as the head/beginning */
	*head = new;

	return (new);
}
