#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
* Return: Index where value is located or -1(FAILURE)
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, m = 0, l = 0, r = size - 1;

	if (!array || size <= 0)
	{
		return (-1);
	}
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
