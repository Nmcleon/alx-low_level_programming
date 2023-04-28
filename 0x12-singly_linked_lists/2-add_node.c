#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - Returns the lenght of a string.
* @s: Type char pointer
* Return: 0 (Success)
*/
int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}
/**
* *add_node - Return the number of elements in a linked list
* @head: beginning of the linked list
* @str: string to duplicate into the new node
* Return: new_nide
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
