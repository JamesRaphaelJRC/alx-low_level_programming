#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: An unsigned int indicating the number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
