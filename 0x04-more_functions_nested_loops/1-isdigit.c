#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c:Argument whose value is to be checked
 *
 * Return: 1 if 'c' is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
