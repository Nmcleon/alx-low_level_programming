#include "main.h"
/**
* _sqrt_helper - Calculates the natural square root of a number
* @n: The number to calculate the square root of.
* @i: The current integer to check for the square root.
*
* Return: The natural square root of the number, else -1
*/
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
/**
* _sqrt_recursion - Calculates the natural square root of a number.
* @n:
*
* Return:
* is no natural square root.
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
