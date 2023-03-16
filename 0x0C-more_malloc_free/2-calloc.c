#include <stdlib.h>

/**
 * _calloc - Allocates memory to an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: The size of the array in bytes.
 *
 * Return: returns a pointer to the allocated memory on success;
 *		If nmemb or size is 0, then _calloc returns NULL
 *		If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
