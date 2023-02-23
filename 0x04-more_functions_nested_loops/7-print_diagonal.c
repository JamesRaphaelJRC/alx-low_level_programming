#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal.
 * @n: Number of times character \ should be printed.
 *
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i, j, k = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(' ');
				if (k == j)
					_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
