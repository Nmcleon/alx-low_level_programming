#include "lists.h"

/**
 * pop_listint - delete head node of a listint_t linked list,
 * returns the head node’s data (n)
 * @head: double pointer to head of list;
 * Return: value at head
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int num;

	if (!(*head) || !head)
		return (0);
	new = *head;
	num = new->n;
	*head = (*head)->next;
	free(new);
	return (num);
}
