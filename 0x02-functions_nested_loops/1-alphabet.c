#include "main.h"

/**
 * print_alphabet - Prints all alphabet in lower case.
 *
 * Return: Always 0 (Successful).
 */
void print_alphabet(void)
{
	char i = 'a', j = 'z';

	while (i <= j)
	{
		_putchar(i);
		i++;
	}
		_putchar('\n');
}
