#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t mid, i;
    int idx = -1;

    if (!array || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d, ", array[i]);
        else
            printf("%d\n", array[i]);
    }

    mid = (size - 1) / 2;

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return (mid);
    }

    if (array[mid] < value)
    {
        idx = advanced_binary(array + mid + 1, size - mid - 1, value);
        if (idx != -1)
            idx += mid + 1;
    }
    else
        idx = advanced_binary(array, mid + 1, value);

    return (idx);
}
