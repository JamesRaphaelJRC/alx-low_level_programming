#include "main.h"

/**
 * _print_rev_recursion - Prints the reverse of a string.
 * @s: A pointer to the string to be reversed.
 *
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

