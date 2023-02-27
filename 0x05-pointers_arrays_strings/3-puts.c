#include "main.h"

/**
 * _puts - Prints a string.
 * @str: A string pointer pointing the the string to be printed.
 *
 * Return: Void.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}
