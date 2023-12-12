#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers using Exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value) {
    size_t bound = 1;
    int idx;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value) {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
           (bound < size - 1) ? bound : size - 1);

    idx = binary_search(array, bound / 2, (bound < size - 1) ? bound : size, value);
    return (idx);
}

/**
 * binary_search - Searches for a value in a sorted array of integers using Binary search
 * @array: Pointer to the first element of the array to search in
 * @left: Leftmost index
 * @right: Rightmost index
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int binary_search(int *array, size_t left, size_t right, int value) {
    size_t mid, i;

    while (left <= right) {
        printf("Searching in array: ");
        for (i = left; i <= right; i++) {
            if (i < right)
                printf("%d, ", array[i]);
            else
                printf("%d\n", array[i]);
        }

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
