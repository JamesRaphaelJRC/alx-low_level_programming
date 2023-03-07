#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers.
 * @: The pointer to the 2-D array/matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, j, main_diag = 0, sec_diag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				main_diag += *(a + i * size + j);
			if (i == size - j - 1)
				sec_diag += *(a + i * size + j);
		}
	}
	printf("%d, ", main_diag);
	printf("%d, \n", sec_diag);
}
