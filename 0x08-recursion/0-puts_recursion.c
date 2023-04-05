#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: the string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* base case: end of string */
    {
        _putchar('\n');  /* add newline at the end */
        return;
    }
    _putchar(*s);  /* print the current character */
    _puts_recursion(s + 1);  /* make a recursive call with the next character */
}
