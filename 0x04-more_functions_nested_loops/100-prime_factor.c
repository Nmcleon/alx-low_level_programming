#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: the number to factorize
 *
 * Return: the largest prime factor of n
 */
int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / i;
	}

	printf("%lu\n", n);

	return (0);
}
