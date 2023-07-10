#include "main.h"

/**
* clear_bit - the function name
* @n: parameter of type unsigned long int *.
* @index: parameter of type unsigned int .
* Return: int .
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
