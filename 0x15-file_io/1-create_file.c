#include "main.h"

/**
 * create_file -Creates a file with rw--- permission if file does not exist.
 *		if file exists, the original permission does not change.
 * @filename: The name of the file to created.
 * @text_content: The content to be in the created file.
 *
 * Return: 1 on success, -1 on all possible failures.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	w = write(fd, text_content, count);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
