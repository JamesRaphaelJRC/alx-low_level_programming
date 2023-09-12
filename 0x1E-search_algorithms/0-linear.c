#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using linear
 *			serch algorithm.
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to be searched for
 *
 * Return: The first index where the value is located
 *		-1 if array is NULL or the value is not present in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || !value || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
