#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an
 *		amount of money.
 * @argc: Number of command line arguments.
 * @argv: An array of pointers to the argument(s).
 *
 * Return: 1 when more than one argument is passed to the function, 0 success.
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
		coins = 0;
	else
	{
		coins = 0;

		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;
	}
	printf("%d\n", coins);
	return (0);
}
