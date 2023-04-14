#include <stdlib.h>

/**
 * _calloc - allocates memory for array,uses malloc,initializes to 0
 * @nmemb: number of elements in the array
 * @size: size of elements of the array
 * Return: pointer to allocated memory (SUCCESS)
 * NULL if @nmemb or @size is 0 (FAILURE)
 * NULL if insufficient memory (FAILURE)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');

	r = malloc(nmemb * size);

	if (r == NULL)
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
		r[i] = 0;

	return ((void *)r);
}
