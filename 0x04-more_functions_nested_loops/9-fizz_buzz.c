#include "main.h"

/**
 * main - Prints numbers 1 to 100, prints Fizz for the multiples of 3
 * Buzz for the multiple of 5 and FizzBuzz for multiples of 5 and 3.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);
			_putchar(' ');
		}
		else if (i % 3 == 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
			_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);
			_putchar(' ');
		}
		else
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
