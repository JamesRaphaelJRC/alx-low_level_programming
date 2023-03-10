#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as commandline arguments.
 * @argc: Number of command line argument.
 * @argv: Argument vector (an array) in the command line.
 *
 * Return: 0 if sucessful 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
