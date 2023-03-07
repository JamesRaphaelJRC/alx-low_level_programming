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
	char *p1 = haystack;

	while (*p1 != '\0')
	{
		char *p2 = needle;
		char *p3 = p1;

		while (*p2 != '\0' && *p3 == *p2)
		{
			p3++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (p1);
		}
		p1++;
	}
	return ('\0');
}
