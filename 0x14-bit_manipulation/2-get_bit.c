#include "main.h"

/**
  * get_bit - the function name
  * @n: parameter of type unsigned long int .
  * @index: parameter of type unsigned int .
  * Return: int .
 */
int get_bit(unsigned long int n, unsigned int index)
{
int val;
if (index > 63)
	{
return (-1);
	}
val = (n >> index) & 1;
return (val);
}
