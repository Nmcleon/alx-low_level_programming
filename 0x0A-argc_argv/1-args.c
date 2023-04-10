#include <stdio.h>
#include "main.h"
/**
* main - prints the number of arguments
* @argc: Counts the arguments
* @argv: Arguments
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
