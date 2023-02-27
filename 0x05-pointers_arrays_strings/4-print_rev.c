#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: A pointer to the string to be printed in reverse.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	for (*s = '\0'; ; s--)
		_putchar(*s);
}
