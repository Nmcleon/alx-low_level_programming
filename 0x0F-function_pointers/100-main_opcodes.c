#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *addr, int n);

/**
* main - prints the opcodes of its own main function
* @argc: argument cout
* @argv: array of arguments
*
* Return: always 0
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)

	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)

	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, n);

	return (0);
}

/**
* print_opcodes - prints the opcodes of a function
* @addr: the address of the function
* @n: number of bytes to print
*
*/
void print_opcodes(char *addr, int n)
{
	int i;

	for (i = 0; i < n; i++)

	{
		printf("%.2hhx", addr[i]);
		if (i != n - 1)
		printf(" ");
	}

	printf("\n");
}

