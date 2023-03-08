#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number whose factorial is to be calculated.
 *
 * Return: An int - The factorial of n, -1 if n is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
