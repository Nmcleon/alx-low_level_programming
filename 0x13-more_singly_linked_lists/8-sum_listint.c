#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of data (n) of a
 * listint_t linked list
 * @head: the pointer to head of list
 * Return: sum list
 */
int sum_listint(listint_t *head)
{
	listint_t *new;

	register int sum = 0;

	if (!head)
  {
		return (0);
  }
	new = head;
	while (new)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
