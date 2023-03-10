#include <stdio.h>

/**
 * main - Prints it's program name followed by a newline.
 * @argc: Number of command line argument.
 * @argv: Argument vector (an array) in the command line.
 *
 * Return: 0 if sucessful 1 if otherwise.
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (i < argc)
		printf("%s\n", argv[i]);

	return (0);
}
