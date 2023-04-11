#include <stdio.h>
#include <stdlib.h>
/**
* *create_array - create an arrey
* char @c
*
* @size: size of the array
* @c: Char value initialize array
*
* Return: Null
*/
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
		array[size] = c;
	return (array);
}
