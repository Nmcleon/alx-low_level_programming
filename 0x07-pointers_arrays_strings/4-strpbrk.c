#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to search
* @accept: the bytes to search for
*
*  Return: string s that matches any character specified in accept
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
