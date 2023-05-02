#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *tmp;

	if (!head)
		return;
	new = *head;
	while (new)
	{
		tmp = new;
		new = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
