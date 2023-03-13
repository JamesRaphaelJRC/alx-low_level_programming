#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1:First string.
 * @s2: Second string.
 *
 * Return: NULL if string is NULL.
 *		NULL if insufficient memory.
 *		A pointer to the concatenated string if successful.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	new_str = malloc((len1 + len2) * sizeof(char) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
