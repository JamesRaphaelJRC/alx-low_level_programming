#include "main.h"

/**
 * _islower(int c) - Prints identifies lower and upper case characters.
 *
 * Return: 1 if letter is lower and 0 otherwise.
 */
int _islower(int c)
{
	char _char1 = 'Z';

	if (c <= _char1)
		return (0);
	else
		return (1);
}
