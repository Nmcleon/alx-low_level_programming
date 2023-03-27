#include "main.h"

/**
 * swap_int- swaps the values of two integers.
 * @a: A pointer to an int that will be updated
 * @b: B pointer to an int that will be updated
 *Return: void (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

