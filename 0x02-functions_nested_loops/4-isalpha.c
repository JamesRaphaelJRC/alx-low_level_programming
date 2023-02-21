#include "main.h"

/**
 * _isalpha - Identifies an alphabet
 * @c: The letter to be identified
 *
 * Return: 1 if argument is an alphabet and 0 otherwise.
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
