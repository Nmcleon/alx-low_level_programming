#include <stdio.h>

/**
* main - entry point of the program
*
* Return: 0 on success
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
