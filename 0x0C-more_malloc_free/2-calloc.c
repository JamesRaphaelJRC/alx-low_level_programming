#include <stdlib.h>
#include "main.h"

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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
