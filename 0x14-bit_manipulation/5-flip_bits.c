#include "main.h"

/**
* flip_bits - counts number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int new;
	unsigned long int bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = bits >> i;
		if (new & 1)
		{
			num++;
		}
	}
	return (num);
}
