#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: An integer specifying the with of the grid.
 * @height: An integer specifying the height of the grid.
 *
 * Return: NULL if width or height is 0,
 *		NULL is not enough memory.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr_2D;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr_2D = malloc(height * sizeof(int *));
	if (ptr_2D == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr_2D[i] = malloc(width * sizeof(int));
		if (ptr_2D[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(ptr_2D[j]);
				free(ptr_2D);
			}
		}
		for (j = 0; j < width; j++)
			ptr_2D[i][j] = 0;
	}
	return (ptr_2D);
}
