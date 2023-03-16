#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: An unsigned int indicating the number of elements.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
