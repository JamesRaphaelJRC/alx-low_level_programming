#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with a specific
 *			char.
 * @size: Number of elements in the array.
 * @c: The char to be used for initialization.
 *
 * Return: A pointer to the array, NULL if it fails/ size is zero.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
