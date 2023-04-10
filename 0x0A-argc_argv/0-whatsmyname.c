#include <stdio.h>
#include "main.h"

/**
* main - print its name
* @argc: number of arguments
* @argv: array of arguments
*
* return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
