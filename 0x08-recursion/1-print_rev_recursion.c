#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: the string to print
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0')  /* if string is not empty */
    {
        _print_rev_recursion(s + 1);  /* recursive call with next character */
        _putchar(*s);  /* print the current character */
    }
}
