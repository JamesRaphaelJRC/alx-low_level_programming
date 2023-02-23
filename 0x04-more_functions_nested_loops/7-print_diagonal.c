#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal.
 * @n: Number of times character \ should be printed.
 *
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
