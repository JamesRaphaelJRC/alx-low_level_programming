#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The first element of the array.
 * @max: The ast element of the array.
 *
 * Return: The pointer to the newly created array.
 *		If min > max, return NULL.
 *		If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *new_ar;

	if (min > max)
		return (NULL);
	new_ar = malloc((max - min) * sizeof(int));

	if (new_ar == NULL)
		return (NULL);
	for (i = 0, j = min; i < max - min && j <= max; i++, j++)
	{
		new_ar[i] = j;
	}
	return (new_ar);
}
