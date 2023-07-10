#include "main.h"

/**
* flip_bits - the function name
* @n: parameter of type unsigned long int .
* @m: parameter of type unsigned long int .
* Return: unsigned int .
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
