#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer
* @width: width of the array
* @height: height of the array
*
* Return: pointer to the array, NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int i, j, l, **alloc_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int *) * height);

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem[i] = malloc(sizeof(int) * width);

		if (alloc_mem[i] == NULL)
		{
			for (l = i; l >= 0; l--)
				free(alloc_mem[l]);

			free(alloc_mem);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			alloc_mem[i][j] = 0;
	}

	return (alloc_mem);
}
