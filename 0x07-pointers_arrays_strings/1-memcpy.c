#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: The destination memory where n bytes of memory will be copied.
 * @src: The source memory where n bytes will be copied from.
 * @n: The number of memory byte(s) to be copied.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
