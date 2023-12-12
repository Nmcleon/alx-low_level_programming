#include <stdio.h>
#include "search_algos.h"

/**
  * advanced_binary - the function name
  * @array: parameter of type int *.
  * @size: parameter of type size_t .
  * @value: parameter of type int .
  * Return: int .
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, i;
	int idx = -1;

	if (!array || size == 0)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d\n", array[i]);
		}
	}
	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
		{
			return (mid);
		}
	}
	if (array[mid] < value)
	{
		idx = advanced_binary(array + mid + 1, size - mid - 1, value);
	}
	return (idx);
}
