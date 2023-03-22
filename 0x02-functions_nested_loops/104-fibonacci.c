#include <stdio.h>
/**
 *main - print first 98 fibonacci
 *
 *Return: 0 always.
 */

int main(void)
{
	int first = 1, second = 2, next;
	int count = 2;

	printf("%d, %d", first, second);

	while (count < 98)
	{
		next = first + second;
		first = second;
		second = next;

		printf(", %d", next);

		count++;
	}

	printf("\n");

	return (0);
}
