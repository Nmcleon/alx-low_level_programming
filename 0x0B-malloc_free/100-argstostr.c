#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates all the arguments of a program
* @ac: the argument count
* @av: an array of strings containing the arguments
*
* Return: a pointer to thr new string, or NULL
*/
char *argstostr(int ac, char **av)
{
	int i, j, l;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; i < ac; i++)
		l += strlen(av[i]) + 1;
	str = malloc(sizeof(char) * l);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(str + j, av[i]);
		j += strlen(av[i]);
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
