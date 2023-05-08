#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in file
 * @letters: number of letters
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t file, frd, fwte;
    char *tSize;

    tSize = malloc(sizeof(char) * letters);
    if (tSize == NULL)
        return (0);
    if (filename == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);
    frd = read(file, tSize, letters);
    if (frd == -1)
        return (0);
    fwte = write(STDOUT_FILENO, tSize, frd);
    if (fwte == -1)
        return (0);
    close(file);
    free(totalSize);
    return (fwte);
}
