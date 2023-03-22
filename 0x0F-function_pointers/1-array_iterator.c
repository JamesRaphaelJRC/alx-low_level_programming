#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 *			of an array.
 * @array: An array.
 * @size: The size of the array.
 * @action: A function pointer specifying the action to be executed.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
