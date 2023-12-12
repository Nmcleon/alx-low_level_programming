#include "search_algos.h"

/**
* linear_search - Searches for a value in an array of int
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
* Return: first index (SUCCESS) or -1 (FAIL)
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
