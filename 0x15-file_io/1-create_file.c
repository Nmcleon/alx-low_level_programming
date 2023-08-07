#include "main.h"

/**
* create_file - Function that creates files
* @filename: type char filename pointer
* @text_content: type char pointer of char
* Return: -1 (NULL) in FN, 1 on (SUCCESS)
*/
int create_file(const char *filename, char *text_content)
{
int f_output = 0;
int file = 0;
int i = 0;
if (filename == NULL)
	{
return (-1);
	}
file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (file == -1)
	{
return (-1);
	}
if (text_content != NULL)
	{
while (*(text_content + i) != '\0')
		{
i++;
		}
f_output = write(file, text_content, i);
	}
if (f_output == -1 && f_output != i)
	{
return (-1);
	}
return (1);
}
