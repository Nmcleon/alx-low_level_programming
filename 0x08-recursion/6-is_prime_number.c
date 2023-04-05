#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    int i;

    /* base case: 0, 1, and negative numbers are not prime */
    if (n <= 1)
        return (0);

    /* check if n is divisible by any number between 2 and sqrt(n) */
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return (0);
    }

    /* if we haven't returned yet, then n is prime */
    return (1);
}
