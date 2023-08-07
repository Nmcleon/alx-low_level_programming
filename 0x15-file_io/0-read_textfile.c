#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in file
 * @letters: number of letters
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t file, file_read, file_write;
    char *total_S;

    total_S = malloc(sizeof(char) * letters);
    if (total_S == NULL)
    {
        return (0);
    }
    if (filename == NULL)
    {
        return (0);
    }

    file = open(filename, O_RDONLY);
    if (file == -1)
    {
        return (0);
    }
    file_read = read(file, total_S, letters);
    if (file_read == -1)
    {
        return (0);
    }
    file_write = write(STDOUT_FILENO, total_S, file_read);
    if (file_write == -1)
    {
        return (0);
    }
    close(file);
    free(total_S);
    return (file_write);
}
