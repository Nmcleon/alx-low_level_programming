#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	int first = 1, second = 2, next;
	long int sum = 2;

	while (second <= 4000000)
	{
		next = first + second;
		first = second;
		second = next;

		if (second % 2 == 0)
		{
			sum += second;
		}
	}

	printf("%ld\n", sum);
	return (0);
}
