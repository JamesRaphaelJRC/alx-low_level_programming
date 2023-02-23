#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: Is the size of the triangle.
 *
 * Return: Void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				while (j > size)
				{
					_putchar('#');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
