#include "main.h"

/**
 * _pow_recursion - Evaluates x raised to the power of y.
 * @x: The base number.
 * @y: The exponent/power.
 *
 * Return: -1 if y is less than 0;
 * 1 if y is equal to 0;
 * and if y is greater
 * than 0 a positive integer equivalentto x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
