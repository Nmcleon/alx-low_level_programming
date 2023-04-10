#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Multiplication of two numbers
 * @argc: count or arguments
 * @argv: Arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
