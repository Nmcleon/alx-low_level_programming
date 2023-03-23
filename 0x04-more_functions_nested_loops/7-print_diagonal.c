#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				putchar('\\');
				putchar('\n');
			}
			else
			{
				putchar(' ');
			}
		}
	}
}
