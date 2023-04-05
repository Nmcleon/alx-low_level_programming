#include "main.h"
/**
* prime_check - checks if a number is prime
* is_prime_number - check if number is a prime
* @p: Possible prime number
* @f: Factor check
* Return: 1 if n is prime, 0 otherwise
*/
int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
	{
		return (0);
	}
	else if (f > p / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(f + 1, p));
	}
}
/**
* is_prime_number - States if number is prime
* is_prime_number - check if number is prime
* @n: Number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_check(2, n));
}
