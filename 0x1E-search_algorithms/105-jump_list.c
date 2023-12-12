#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted list of ints
* @list: Pointer to the head of the list to search in
* @size: Number of nodes in list
* @value: Value to search for
* Return: Pointer to the first node where value is located, otherwise NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step = sqrt(size), prev = 0, idx = 0;
listint_t *curr = list, *prev_node = NULL;
if (list == NULL || size == 0)
	return (NULL);
while (curr && curr->n < value)
{
prev_node = curr;
prev = idx;
for (idx = 0; curr->next && idx < step; idx++)
curr = curr->next;
printf("Value checked at index [%lu] = [%d]\n", idx, curr->n);
}
printf("Value found between indexes [%lu] and [%lu]\n", prev, idx);
while (prev_node && prev <= idx)
{
printf("Value checked at index [%lu] = [%d]\n", prev, prev_node->n);
if (prev_node->n == value)
	return (prev_node);
prev_node = prev_node->next;
prev++;
}
return (NULL);
}
