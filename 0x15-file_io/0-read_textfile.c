#include "main.h"
/**
 * read_textfile - reads a ext file and prints it
 * @filename: parameter
 * @letters: parameter
 *
 * Return: number of characters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readf, writef;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	readf = read(fd, buffer, letters);
	if (readf == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	writef = write(STDOUT_FILENO, buffer, readf);
	if (writef == -1 || writef != readf)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	return (writef);
}

