#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the string to be searched.
 * @c: The character to search for/locate.
 *
 * Return: a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	for (i == 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		ptr = '\0';

	return (ptr);
}
