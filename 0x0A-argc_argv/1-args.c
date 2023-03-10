#include <stdio.h>

/**
 * main - Prints the total number of command line arguments passed to it.
 * @argc: Number of command line argument.
 * @argv: Argument vector (an array) in the command line.
 *
 * Return: 0 if sucessful 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
		printf("%d\n", argc - 1);

	return (0);
}
