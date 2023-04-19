#include "function_pointers.h"
#include <stdio.h>


/**
* int_index - earches for an integer
* @array: array to search
* @size: number of elements in the array
* @cmp: pointer of thr comparing function
*
* Return: index of the first element for which
* cmp function does not return 0
* -1 if no element matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
