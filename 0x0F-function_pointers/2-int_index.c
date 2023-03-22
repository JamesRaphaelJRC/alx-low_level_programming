#include "function_pointers.h"

/**
 * int_index - Searchess for an integer.
 * @array: An array of numbers.
 * @size: The number of the elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: The index of the first element of which cmp function does no
 *		not return 0, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
