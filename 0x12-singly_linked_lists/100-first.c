#include <stdio.h>

/**
 * print_first - Prints a string before main function is executed.
 * Return: void
 */
void __attribute__((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
