#include <stdlib.h>

/**
 * free_grid - Frees the 2 dimensional array previously created by alloc_grid
 *		function.
 * @grid: The address of the 2 dimensional array.
 * @height: The height of the grid.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
