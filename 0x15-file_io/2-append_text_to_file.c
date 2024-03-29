#include "main.h"

/**
 * append_text_to_file - Appends a text at the end of a file.
 * @filename: The name of the file.
 * @text_content: A string to be appended to the end of the file.
 *
 * Return: 1 on success and if file exists, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	if (text_content == NULL)
		return (1);

	w = write(fd, text_content, count);
	if (w == -1 || w != count)
	return (-1);

	close(fd);

	return (1);
}
