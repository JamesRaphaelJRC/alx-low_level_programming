#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a newline.
 * @separator: String to be printed between the strings.
 * @n: The number of parameters.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
