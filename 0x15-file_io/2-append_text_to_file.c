#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: char, the name of the file
 * @text_content: char, the NULL terminated string added at end of file
 * Return: 1 (success), -1 (fail)
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
