#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers passed as commandline arguments.
 * @argc: Number of command line argument.
 * @argv: Argument vector (an array) in the command line.
 *
 * Return: 0 if sucessful 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
