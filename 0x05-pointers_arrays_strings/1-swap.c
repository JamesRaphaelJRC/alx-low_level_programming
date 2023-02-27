#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
