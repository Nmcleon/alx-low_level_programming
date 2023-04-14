#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory allocated
 * Return: pointer to the allocated memory (SUCCESS)
 * 98 if insufficient memory available (FAILURE)
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);

	return (n);
}
