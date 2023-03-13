#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 *		contains a copy of the string given as a parameter.
 * @str: A pointer to the string to be copied.
 *
 * Return: NULL if str = NULL or if insufficient memory is available.
 *		and a pointer to the duplicated string on sucess.
 */
char *_strdup(char *str)
{
	char *new_str;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	new_str = malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
