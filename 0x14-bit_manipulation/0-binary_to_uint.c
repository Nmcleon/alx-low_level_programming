#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary string to convert
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);

	for (bit = 0; b[bit] != '\0'; bit++)
	{
		if (b[bit] == '0' || b[bit] == '1')
			result = (result << 1) + (b[bit] - '0');
		else
			return (0);
	}

	return (result);
}
