#include "main.h"

/**
 * _strlen -Evaluates the length of a string.
 * @s: A character pointer to the string to be evaluated.
 *
 * Return: The length  pf the string.
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;
	return (i);
}
