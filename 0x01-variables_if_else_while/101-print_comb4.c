#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 48;
	int n2;
	int n3;
	int com1 = 44;
	int com2 = 32;

	while (n1 <= 55)
	{
		n2 = n1 + 1;
		while (n2 <= 56)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);

				if (!(n1 == 55 && n2 == 56 && n3 == 57))
				{
					putchar(com1);
					putchar(com2);
				}
				n3++;

			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
