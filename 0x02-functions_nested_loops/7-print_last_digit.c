#include "main.h"

/**
 * print_last_digit - Evaluates the last digit of a number
 * @n: The number whose last digit is to be returned
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = (n * -1);
	else
		n = n;

	_putchar(n + '0');
	return (n);
}
