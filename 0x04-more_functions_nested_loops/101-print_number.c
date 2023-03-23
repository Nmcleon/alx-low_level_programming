#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 */
void print_number(int n)
{
	int num, digit, divisor;

	divisor = 1;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	
	num = n;
	
	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = num / divisor;
		putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}
