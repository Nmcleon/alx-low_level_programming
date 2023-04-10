#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: The number of arguments
* @argv: Argument
*
* Return: 0 (SUccess), 1 (error)
*/

int main(int argc, char *argv[])
{

int position, total, change, x;
int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

position = total = change = x = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

total = atoi(argv[1]);

if (total <= 0)
{
printf("0\n");
return (0);
}

/*Declaring While*/

while (coins[position] != '\0')

{
if (total >= coins[position])
{
x = (total / coins[position]);
change += x;
total -= coins[position] * x;
}

position++;

}

printf("%d\n", change);
return (0);
}
