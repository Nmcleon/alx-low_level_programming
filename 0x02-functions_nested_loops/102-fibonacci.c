#include <stdio.h>
/**
 * main - prints first 50 fibonacci
 *
 * Return: 0 always
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, next_fib, count;

	printf("%d, %d", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %d", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n");

	return (0);
}
