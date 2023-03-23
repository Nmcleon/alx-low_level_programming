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
		printf(", %d", next);
		first = second;
		second = next;
		count++;
	}

	next = first + second;
	printf("%d\n", next);

	return (0);
}
