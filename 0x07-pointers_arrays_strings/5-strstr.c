#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *curr_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		curr_needle = needle;

		while (*curr_needle && *haystack == *curr_needle)
		{
			haystack++;
			curr_needle++;
		}

		if (*curr_needle == '\0')
			return (start_haystack);

		haystack = start_haystack + 1;
	}

	return (NULL);
}
