#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of commandline arguments.
 * @argv: Commandline arguments.
 *
 * Return: 0 on success, other exit values otherwise.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, r, w, c1, c2;
	char *buffer, *f_from, *f_to;

	if (argc != 3 || argv == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = argv[1];
	f_to = argv[2];

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		exit(98);

	fd1 = open(f_from, O_RDONLY);
	r = read(fd1, buffer, 1024);
	if (fd1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", f_from);
		exit(98);
	}
	c1 = close(fd1);
	fd2 = open(f_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	w = write(fd2, buffer, 1024);
	if (fd2 == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}
	c2 = close(fd2);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
