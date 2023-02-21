#include "main.h"

/**
 * _abs - Calculates the absolute value of a number
 * @n: The number whose absolute value is to be calculated.
 *
 * Return: The absolute valur of the number .
 */
int _abs(int n)
{
	if (n < 0)
	{
		int eval;

		eval = n + (n * -2);
		return (eval);
	}
	else
		return (n);
}
