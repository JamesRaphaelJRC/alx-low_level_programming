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
	int i, num;
	int *new_ar;

	if (min > max)
		return (NULL);
	if (min ==  max)
		num = min;
	else
		num = max - min;

	new_ar = malloc((num) * sizeof(int));

	if (new_ar == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
	{
		new_ar[i] = min;
		min++;
	}
	return (new_ar);
}
