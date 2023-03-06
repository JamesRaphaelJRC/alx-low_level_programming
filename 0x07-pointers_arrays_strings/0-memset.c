#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b Returns a pointer to the memory area s
 * @s: First operand, a pointer pointing to a memory loction.
 * @b: Second operand.
 * @n: Number of bytes.
 *
 * Return: A pointer the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
