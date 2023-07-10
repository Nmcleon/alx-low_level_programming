#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - the function name
  * @filename: parameter of type const char *.
  * @text_content: parameter of type char *.
  * Return: int .
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
int f_output;
int i;
file = open(filename, O_RDWR | O_APPEND);
if (filename == NULL)
	{
return (-1);
	}
if (file == -1)
	{
return (-1);
	}
if (text_content == NULL)
	{
return (1);
	}
while (*(text_content + i) != '\0')
	{
i++;
	}
f_output = write(file, text_content, i);
if (f_output == -1)
	{
return (-1);
	}
return (1);
}
