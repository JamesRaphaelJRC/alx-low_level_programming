#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in  sorted array of integers using the
 *			jump search algorithm.
 * @array: A pointer to the first element of te array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is found and -1 if otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), ub, lb;

	ub = lb = 0;

	while (array[ub] < value && ub < size)
	{
		printf("Value checked array[%ld] = [%d]\n", ub, array[ub]);
		lb = ub;
		ub += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", lb, ub);

	for (; lb <= ub && ub <= size; lb++)
	{
		printf("Value checked array[%ld] = [%d]\n", lb, array[lb]);

		if (array[lb] == value)
			return (lb);
	}
	printf("Value checked array[%ld] = [%d]\n", lb, array[lb]);
	return (-1);
}
