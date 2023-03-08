#include "main.h"

/**
 * _strlen_recursion - Evaluates and returns the length of a string.
 * @s: A pointer to the string to be evauated.
 *
 * Return: An integer equivalent to the length of the supplied string.
 */
int i = 0;

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		i += 1;
		return (i);
	}
	return (i);
}
