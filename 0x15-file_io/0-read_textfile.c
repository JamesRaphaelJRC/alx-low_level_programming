#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a test file and prints it to the POSIX standard output
 * @filename: File to be read and printed.
 * @letters: Number of letters(bytes) to read and print.
 *
 * Return: 0 if filename is NULL or if file cannot be opened or read
 *		The actual number of letters it could read or print on success.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num, fd, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	num = read(fd, buffer, letters);
	w = write(1, buffer, num);

	if (fd == -1 || num == -1 || w != num || w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (w);
}
