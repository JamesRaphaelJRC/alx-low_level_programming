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
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar(32);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
