#include <stdio.h>

int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t lb, size_t ub);


/**
 * binary_search - Searches for a value in a sorted array of integers using
 *			the binary search algorithm.
 * @array: A pointer to the first element of the array to be searched.
 * @size: The number of elements in the array to be searched.
 * @value: The value to search for.
 *
 * Return: The index where the value is located. -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lb, ub, mid;

	if (array == NULL || size <= 0)
		return (-1);

	lb = 0;
	ub = size - 1;

	while (lb <= ub)
	{
		print_array(array, lb, ub);
		mid = (lb + ub) / 2;

		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			ub = mid - 1;
		else
			lb = mid + 1;
	}
	return (-1);
}


/**
 * print_array - Prints the array in the given format.
 * @array: A pointer to the first element of the array to be printed.
 * @lb: The lower-boundary of the array.
 * @ub: The upper-boundary of the array.
 */
void print_array(int *array, size_t lb, size_t ub)
{
	if (lb <= ub)
	{
		printf("Searching in array:");
		while (lb < ub)
		{
			printf(" %d,", array[lb]);
			lb++;
		}
		printf(" %d\n", array[lb]);
	}
}
