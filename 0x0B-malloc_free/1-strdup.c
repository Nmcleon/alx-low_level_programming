#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Copie a string to anew location
*
* @str: Copied string
*
* Return: Pointer to memory(success)
*/
char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	while (*(str + length_of_string) != '\0')
		length_of_string++;
	length_of_string++;
	alloc_mem = malloc(sizeof(*str) * length_of_string);
	if (alloc_mem == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < length_of_string; i++)
		alloc_mem[i] = *(str + i);
	alloc_mem[i] = '\0';
	return (alloc_mem);
}
