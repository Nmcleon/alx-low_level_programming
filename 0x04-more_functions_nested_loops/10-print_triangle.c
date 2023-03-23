#include "main.h"
/**
 * print_triangle - prints a triangle of a given size using # characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size - row; col++)
			putchar(' ');
		for (col = 1; col <= row; col++)
			putchar('#');
		putchar('\n');
	}
}
