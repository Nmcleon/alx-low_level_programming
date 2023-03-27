#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed in reverse
 *
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}
	
	for (int i = ln - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
