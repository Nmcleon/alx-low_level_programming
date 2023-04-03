#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the string of characters to match
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;

	for (i = 0; accept[j] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (n);
}
