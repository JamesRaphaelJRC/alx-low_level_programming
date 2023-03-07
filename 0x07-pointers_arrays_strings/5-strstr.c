#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the
 * string haystack.
 * @needle: A pointer substring containing the search word.
 * @haystack: A pointer string where the search word will be searched.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] == needle[i])
				return (needle);
	}
	return ('\0');
}
