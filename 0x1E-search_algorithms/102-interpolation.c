#include "search_algos.h"

/**
* interpolation_search - the function name
* @array: parameter of type int *.
* @size: parameter of type size_t .
* @value: parameter of type int .
* Return: int .
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size - 1, m = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (array[a] != array[b])
	{
		m = a + (value - array[a]) * (b - a) / (array[b] - array[a]);
		if (m >= size)
		{
			printf("Value checked array[%u] is out of range\n", m);
			return (-1);
		}
		printf("Value checked array[%u] = [%d]\n", m, array[m]);
		if (array[m] < value)
		{
			a = m + 1;
		}
		else if (array[m] > value)
		{
			b = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
