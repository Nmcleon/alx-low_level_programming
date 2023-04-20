#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its parameters
* @n: Number of arguments passed
*
* Return: Sum of all arguments
*/

int sum_then_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int n;
	int sum = 0;

	va_start(args, n);
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
