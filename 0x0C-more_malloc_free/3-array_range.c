#include <stdlib.h>
#include "main.h"

/**
* array_range - creates array of integers
* @min: first and minimum value of array
* @max: last and maximum value of array
* Return: pointer to new array (SUCCESS)
* NULL if @min > @max (FAILURE)
* NULL if insufficient memory available (FAILURE)
**/
int *array_range(int min, int max)
{
	int *ptr;
	int i, sze;

	if (min > max)
	{
		return ('\0');
	}
	sze = (max - min) + 1;
	ptr = malloc(sizeof(int) * sze);
	if (ptr == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < sze; i++)
		ptr[i] = min + i;
	return (ptr);
}
