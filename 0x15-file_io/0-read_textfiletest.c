#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in file
 * @letters: number of letters
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rd, wrte;
	char *buff;

	if (filename == NULL)
		return (0);
	bufd = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	wrte = write(STDOUT_FILENO, buf, rd);
	if (wrte == -1)
	{
		free(buff);
		return (0);
	}
	if (wrte != rd)
		return (0);
	return (rd);
}
