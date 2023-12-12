#include <stdio.h>
#include "search_algos.h"

/**
  * exponential_search - the function name
  * @array: parameter of type int *.
  * @size: parameter of type size_t .
  * @value: parameter of type int .
  * Return: int .
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int idx;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
printf("Value found between indexes[%lu] and [%lu]\n", bound / 2,
	(bound < size - 1) ? bound : size - 1);
	idx = binary_search(array, bound / 2,
			(bound < size - 1) ? bound : size, value);
	return (idx);
}

/**
  * binary_search - the function name
  * @array: parameter of type int *.
  * @left: parameter of type size_t .
  * @right: parameter of type size_t .
  * @value: parameter of type int .
  * Return: int .
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
	}
	return (-1);
}
