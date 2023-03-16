#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings and return a pointer containing
 *			contents of s1 and the n number of characters in s2.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 * @n: The number of characters in s2 to be copied.
 *
 * Return: A pointer to a newly allocated space in memory containing s1 and n
 *		number of s2 on success. If n >= length of s2, it copies all s2
 *		NULL if not enough memory/on failure to allocate memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, s1_len = 0, s2_len = 0, tot_len;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		tot_len = s1_len + s2_len;
	else
		tot_len = s1_len + n;

	new_str = malloc(tot_len * sizeof(char) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];

	while (i < tot_len)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';

	return (new_str);
}
