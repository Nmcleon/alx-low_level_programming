#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: 0 (SUccess)
 */
int _strlen(const char *s)
{
	unsigned int l;

	for (l = 0; s[l] != '\0'; l++)
	{
    continue;
	}
	return (l);

}

/**
 * add_node_end - Returns the lenght of a string.
 * @str: Type char pointer
 * @head: type pointer of struct
 * Return: new_node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp_n_d;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = NULL;

	if (!*head)
	{
		*head = n;
	}
	else
	{
		tmp_n_d = *head;
		while (tmp_n_d->next)
			tmp_n_d = tmp_n_d->next;
		{
			tmp_n_d->next = n;
		}
	}
	return (n);
}
