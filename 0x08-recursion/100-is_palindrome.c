#include "main.h"

/**
* _strlen_recursion - Returns the length of a string
* @s: The string to get the length of
*
* Return: The length of the string
*/

int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, pair));
	}
}
/**
* last_index - Returns the last index of a string (counts the null char)
*
* @s:
*
* Return:
*/

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last_index(s + 1) + 1;
	}
	return (n);
}
/**
* is_palindrome - Check if a string is a palindrome
*
* @s:
*
* Return:
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
