#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a newline.
 * @separator: The string to be printed between numbers.
 * @n: The number of arguments passed to the string.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j = 0;

	if (n == 0)
		return;

	if (separator == NULL)
		separator = "";

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (j < n - 1)
			printf("%s ", separator);
		j++;
	}
	printf("\n");
	va_end(args);
}
