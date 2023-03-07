#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to the array containing letters to display on the chesboard.
 *
 * Return: Void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
